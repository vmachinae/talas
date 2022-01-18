///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 1/15/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_HPP
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_HPP

#include "xos/app/console/rsa/generate/main_opt.hpp"

#include "talas/crypto/byte_array.hpp"
#include "talas/crypto/random/pseudo.hpp"

#include "talas/crypto/random/prime/mp/reader.hpp"
#include "talas/crypto/random/prime/bn/reader.hpp"

#include "talas/crypto/rsa/mp/key_generator.hpp"
#include "talas/crypto/rsa/bn/key_generator.hpp"

#define XOS_APP_CONSOLE_RSA_MODULUS_BITS 2048
#define XOS_APP_CONSOLE_RSA_EXPONENT_BITS 24
#define XOS_APP_CONSOLE_RSA_EXPONENT 0x010001

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace generate {

typedef ::talas::crypto::random::prime::mp::reader_observer mp_reader_observer;
typedef ::talas::crypto::random::prime::bn::reader_observer bn_reader_observer;

/// class maint
template 
<class TMPReaderObserver = mp_reader_observer, class TBNReaderObserver = bn_reader_observer, 
 class TExtends = xos::app::console::rsa::generate::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint
: virtual public TMPReaderObserver, virtual public TBNReaderObserver,
  virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : run_(0),
      read_primes_(0),
      rsa_exponent_(XOS_APP_CONSOLE_RSA_EXPONENT),
      rsa_modulus_bits_(XOS_APP_CONSOLE_RSA_MODULUS_BITS),
      rsa_exponent_bits_(XOS_APP_CONSOLE_RSA_EXPONENT_BITS),
      pseudo_random_seed_(0),
      pseudo_random_(pseudo_random_seed_),
      no_miller_rabin_test_(false) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef ::talas::string_t literal_string_t;
    typedef ::talas::byte_array_t literal_byte_array_t;
    typedef ::talas::crypto::byte_array crypto_byte_array_t;
    
    typedef unsigned pseudo_random_seed_t;
    typedef ::talas::crypto::random::pseudo pseudo_random_t;
    typedef ::talas::crypto::random::reader random_reader_t;
    typedef ::talas::crypto::random::generator random_generator_t;

    typedef ::talas::crypto::random::prime::bn::BIGPRIME BN_BIGPRIME;
    typedef ::talas::crypto::random::prime::mp::BIGPRIME MP_BIGPRIME;

    typedef ::talas::crypto::rsa::private_key_implements rsa_private_key_t;
    typedef ::talas::crypto::rsa::public_key_implements rsa_public_key_t;

    typedef ::talas::crypto::rsa::bn::key_generator bn_rsa_key_generator_t;
    typedef ::talas::crypto::rsa::bn::private_key bn_rsa_private_key_t;
    typedef ::talas::crypto::rsa::bn::public_key bn_rsa_public_key_t;

    typedef ::talas::crypto::rsa::mp::key_generator mp_rsa_key_generator_t;
    typedef ::talas::crypto::rsa::mp::private_key mp_rsa_private_key_t;
    typedef ::talas::crypto::rsa::mp::public_key mp_rsa_public_key_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...generate_keys_run
    using extends::generate_keys_run;
    virtual int generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t expbytes = ((rsa_exponent_bits_ + 7) >> 3);
        size_t modbytes = ((rsa_modulus_bits_ + 7) >> 3);
        size_t pbytes = (modbytes >> 1);
        unsigned seed = pseudo_random_seed_;
        pseudo_random_t random(seed);
        crypto_byte_array_t exponent_array(rsa_exponent_, expbytes);
        byte_t* exponent = exponent_array.elements();
        if (!(expbytes != exponent_array.length()) && (exponent)) {
            err = this->generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
        }
        return err;
    }

    /// ...bn_generate_keys_run
    virtual int bn_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const bool no_miller_rabin_test = no_miller_rabin_test_;
        size_t modbits = (modbytes << 3);
        bn_rsa_public_key_t pub(modbytes, expbytes);
        bn_rsa_private_key_t prv(pbytes);
        bn_rsa_key_generator_t generator(this);
        
        read_primes_ = 0;
        this->errlln
        ("bn library generate ", 
         unsigned_to_string(modbits).chars(), " bit key pair", 
         (no_miller_rabin_test_)?(""):(" with miller rabin"), null);
        if ((generator.generate(prv, pub, modbytes, exponent, expbytes, random, no_miller_rabin_test))) {
            if ((read_primes_)) {
                this->errln();
            }
            this->errlln
            ("bn library generated ", 
             unsigned_to_string(modbits).chars(), " bit key pair", 
             (no_miller_rabin_test_)?(""):(" with miller rabin"), null);
            if (!(err = generated_keys_run(pub, prv, argc, argv, env))) {
            } else {
            }
        } else {
        }
        read_primes_ = 0;
        return err;
    }

    /// ...gmp_generate_keys_run
    virtual int gmp_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const bool no_miller_rabin_test = no_miller_rabin_test_;
        size_t modbits = (modbytes << 3);
        mp_rsa_public_key_t pub(modbytes, expbytes);
        mp_rsa_private_key_t prv(pbytes);
        mp_rsa_key_generator_t generator(this);

        read_primes_ = 0;
        this->errlln
        ("gmp library generate ", 
         unsigned_to_string(modbits).chars(), " bit key pair", 
         (no_miller_rabin_test_)?(""):(" with miller rabin"), null);
        if ((generator.generate(prv, pub, modbytes, exponent, expbytes, random, no_miller_rabin_test))) {
            if ((read_primes_)) {
                this->errln();
            }
            this->errlln
            ("gmp library generated ", 
             unsigned_to_string(modbits).chars(), " bit key pair", 
             (no_miller_rabin_test_)?(""):(" with miller rabin"), null);
            if (!(err = generated_keys_run(pub, prv, argc, argv, env))) {
            } else {
            }
        } else {
        }
        read_primes_ = 0;
        return err;
    }

    /// ...generated_keys_run
    int (derives::*generated_keys_run_)(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env);
    virtual int generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (generated_keys_run_) {
            err = (this->*generated_keys_run_)(pub, prv, argc, argv, env);
        } else {
            err = default_generated_keys_run(pub, prv, argc, argv, env);
        }
        return err;
    }
    virtual int default_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_generated_keys_run(pub, prv, argc, argv, env);
        return err;
    }
    virtual int before_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generated_keys_run(pub, prv, argc, argv, env))) {
            int err2 = 0;
            err = generated_keys_run(pub, prv, argc, argv, env);
            if ((err2 = after_generated_keys_run(pub, prv, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_generated_keys_run
    int (derives::*output_generated_keys_run_)(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env);
    virtual int output_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_generated_keys_run_) {
            err = (this->*output_generated_keys_run_)(pub, prv, argc, argv, env);
        } else {
            err = default_output_generated_keys_run(pub, prv, argc, argv, env);
        }
        return err;
    }
    virtual int default_output_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_x_generated_keys_run(pub, prv, argc, argv, env);
        return err;
    }
    virtual int before_output_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_generated_keys_run(pub, prv, argc, argv, env))) {
            int err2 = 0;
            err = output_generated_keys_run(pub, prv, argc, argv, env);
            if ((err2 = after_output_generated_keys_run(pub, prv, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_x_generated_keys_run
    int (derives::*output_x_generated_keys_run_)(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env);
    virtual int output_x_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_x_generated_keys_run_) {
            err = (this->*output_x_generated_keys_run_)(pub, prv, argc, argv, env);
        } else {
            err = default_output_x_generated_keys_run(pub, prv, argc, argv, env);
        }
        return err;
    }
    virtual int default_output_x_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t modbytes = pub.modbytes();
        size_t expbytes = pub.expbytes();
        size_t pbytes = prv.pbytes();
        literal_byte_array_t array(modbytes);
        byte_t* b = array.elements();
        
        if ((b) &&(modbytes <= array.size())) {
            if (expbytes == (pub.get_exponent_msb(b, modbytes))) {
                this->output_x(b, expbytes, argc, argv, env);
            }
            if (modbytes == (pub.get_modulus_msb(b, modbytes))) {
                this->output_x(b, modbytes, argc, argv, env);
            }
            if (pbytes == (prv.get_p_msb(b, pbytes))) {
                this->output_x(b, pbytes, argc, argv, env);
            }
            if (pbytes == (prv.get_q_msb(b, pbytes))) {
                this->output_x(b, pbytes, argc, argv, env);
            }
            if (pbytes == (prv.get_dmp1_msb(b, pbytes))) {
                this->output_x(b, pbytes, argc, argv, env);
            }
            if (pbytes == (prv.get_dmq1_msb(b, pbytes))) {
                this->output_x(b, pbytes, argc, argv, env);
            }
            if (pbytes == (prv.get_iqmp_msb(b, pbytes))) {
                this->output_x(b, pbytes, argc, argv, env);
            }
        }
        return err;
    }
    virtual int before_output_x_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_x_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_x_generated_keys_run(rsa_public_key_t& pub, rsa_private_key_t& prv, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_x_generated_keys_run(pub, prv, argc, argv, env))) {
            int err2 = 0;
            err = output_x_generated_keys_run(pub, prv, argc, argv, env);
            if ((err2 = after_output_x_generated_keys_run(pub, prv, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_modulus_bits_run
    virtual int output_modulus_bits_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         this->outln(unsigned_to_string(rsa_modulus_bits_).chars());
         return err;
    }
    virtual int output_modulus_bytes_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         this->outln(unsigned_to_string(rsa_modulus_bits_ >> 3).chars());
         return err;
    }

    /// on_read
    virtual ssize_t on_read(BN_BIGPRIME* n, size_t bytes) {
        return on_read_prime(n, bytes);
    }
    virtual ssize_t on_read(MP_BIGPRIME* n, size_t bytes) {
        return on_read_prime(n, bytes);
    }
    virtual ssize_t on_read_prime(void* n, size_t bytes) {
        this->err(".", 1);
        ++read_primes_;
        return bytes;
    }

    /// ...option...
    virtual int on_set_fermat_witness_option
    (int argc, char_t**argv, char_t**env) {
        int err = 0;
        no_miller_rabin_test_ = true;
        return err;
    }
    virtual int on_set_miller_rabin_option
    (int argc, char_t**argv, char_t**env) {
        int err = 0;
        no_miller_rabin_test_ = false;
        return err;
    }
    virtual int on_set_modulus_bits
    (unsigned bits, int argc, char_t**argv, char_t**env) {
        int err = 0;
        rsa_modulus_bits_ = bits;
        return err;
    }
    virtual int on_set_modulus_bytes
    (unsigned bytes, int argc, char_t**argv, char_t**env) {
        int err = 0;
        unsigned bits = (bytes << 3);
        rsa_modulus_bits_ = bits;
        return err;
    }
    virtual int on_set_bn_integer_option
    (int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = this->set_bn_generate_keys_run(argc, argv, env);
        return err;
    }
    virtual int on_set_gmp_integer_option
    (int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = this->set_gmp_generate_keys_run(argc, argv, env);
        return err;
    }

protected:
    size_t read_primes_;
    uint32_t rsa_exponent_;
    unsigned rsa_exponent_bits_, rsa_modulus_bits_;
    pseudo_random_seed_t pseudo_random_seed_;
    pseudo_random_t pseudo_random_;
    bool no_miller_rabin_test_;
}; /// class maint
typedef maint<> main;

} /// namespace generate
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_HPP
