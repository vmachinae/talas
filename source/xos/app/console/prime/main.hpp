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
///   Date: 1/9/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PRIME_MAIN_HPP
#define XOS_APP_CONSOLE_PRIME_MAIN_HPP

#include "xos/app/console/prime/main_opt.hpp"

#include "talas/crypto/random/prime/mp/generator.hpp"
#include "talas/crypto/random/prime/mp/miller_rabin.hpp"
#include "talas/crypto/random/prime/mp/reader.hpp"
#include "talas/crypto/random/prime/mp/number.hpp"

#include "talas/crypto/random/prime/bn/generator.hpp"
#include "talas/crypto/random/prime/bn/miller_rabin.hpp"
#include "talas/crypto/random/prime/bn/reader.hpp"
#include "talas/crypto/random/prime/bn/number.hpp"

#include "talas/crypto/random/pseudo.hpp"
#include "talas/crypto/byte_array.hpp"

#include "thirdparty/gnu/glibc/stdlib/rand_r.h"

namespace xos {
namespace app {
namespace console {
namespace prime {

typedef ::talas::crypto::random::prime::mp::reader_observer mp_reader_observer;
typedef ::talas::crypto::random::prime::bn::reader_observer bn_reader_observer;

/// class maint
template 
<class TMPReaderObserver = mp_reader_observer, 
 class TBNReaderObserver = bn_reader_observer, 
 class TExtends = xos::app::console::prime::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint
: virtual public TMPReaderObserver, virtual public TBNReaderObserver,
  virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef TMPReaderObserver mp_reader_observer_t;
    typedef TBNReaderObserver bn_reader_observer_t;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : run_(0), run_generate_prime_(0), run_miller_rabin_prime_(0), 
      prime_bits_(XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS),
      randoms_read_(0),
      pseudo_random_seed_(0),
      pseudo_random_(pseudo_random_seed_) {
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

    enum number_t {
        number_none,
        number_bn,
        number_mp,
        next_number,
        first_number = (number_none + 1),
        last_number = (next_number - 1)
    }; /// enum number_t

    typedef ::talas::byte_array_t byte_array_t;
    typedef unsigned pseudo_random_seed_t;
    typedef ::talas::crypto::random::pseudo pseudo_random_t;
    typedef ::talas::crypto::random::generator random_generator_t;

    typedef ::talas::crypto::random::prime::bn::BIGPRIME BN_BIGPRIME;
    typedef ::talas::crypto::random::prime::bn::number prime_bn_number_t;
    typedef ::talas::crypto::random::prime::bn::reader prime_bn_reader_t;
    typedef ::talas::crypto::random::prime::bn::generator prime_bn_generator_t;
    typedef ::talas::crypto::random::prime::bn::miller_rabin prime_bn_miller_rabin_t;
    
    typedef ::talas::crypto::random::prime::mp::BIGPRIME MP_BIGPRIME;
    typedef ::talas::crypto::random::prime::mp::number prime_mp_number_t;
    typedef ::talas::crypto::random::prime::mp::reader prime_mp_reader_t;
    typedef ::talas::crypto::random::prime::mp::generator prime_mp_generator_t;
    typedef ::talas::crypto::random::prime::mp::miller_rabin prime_mp_miller_rabin_t;

    typedef random_generator_t& (derives::*get_random_generator_t)();

    typedef int (derives::*run_generate_prime_t)
    (byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env);

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

    /// ...generate_prime_run
    virtual int generate_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned seed = pseudo_random_seed_;
        unsigned bits = prime_bits_;
        unsigned bytes = ((bits + 7) >> 3);
        byte_array_t b(bytes);
        pseudo_random_t ps(seed);
        err = run_generate_prime(b, ps, bytes, argc, argv, env);
        return err;
    }

    /// ...miller_rabin_prime_run
    virtual int miller_rabin_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned seed = pseudo_random_seed_;
        unsigned bits = prime_bits_;
        unsigned bytes = ((bits + 7) >> 3);
        byte_array_t b(bytes);
        pseudo_random_t ps(seed);
        err = run_miller_rabin_prime(b, ps, bytes, argc, argv, env);
        return err;
    }

    /// ...run_generate_prime
    int (derives::*run_generate_prime_)(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env);
    virtual int run_generate_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (run_generate_prime_) {
            err = (this->*run_generate_prime_)(b, ps, bytes, argc, argv, env);
        } else {
            err = all_run_generate_bn_prime(b, ps, bytes, argc, argv, env);
        }
        return err;
    }
    virtual int before_run_generate_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        randoms_read_ = 0;
        return err;
    }
    virtual int after_run_generate_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_run_generate_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_run_generate_prime(b, ps, bytes, argc, argv, env))) {
            int err2 = 0;
            err = run_generate_prime(b, ps, bytes, argc, argv, env);
            if ((err2 = after_run_generate_prime(b, ps, bytes, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...run_miller_rabin_prime
    int (derives::*run_miller_rabin_prime_)(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env);
    virtual int run_miller_rabin_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (run_miller_rabin_prime_) {
            err = (this->*run_miller_rabin_prime_)(b, ps, bytes, argc, argv, env);
        } else {
            err = all_run_miller_rabin_bn_prime(b, ps, bytes, argc, argv, env);
        }
        return err;
    }
    virtual int before_run_miller_rabin_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        randoms_read_ = 0;
        return err;
    }
    virtual int after_run_miller_rabin_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_run_miller_rabin_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_run_miller_rabin_prime(b, ps, bytes, argc, argv, env))) {
            int err2 = 0;
            err = run_miller_rabin_prime(b, ps, bytes, argc, argv, env);
            if ((err2 = after_run_miller_rabin_prime(b, ps, bytes, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...run_generate_bn_prime
    virtual int run_generate_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        byte_t* p_bytes = b.elements();
        prime_bn_number_t prime(0);
        prime_bn_generator_t generator(this);

        if ((generator.create())) {

            if ((generator.generate(prime, bytes, ps))) {

                if (bytes == (prime.to_msb(p_bytes, bytes))) {
                    this->outxln(p_bytes, bytes);
                } else {
                }
            } else {
            }
            generator.destroy();
        } else {
        }
        return err;
    }
    virtual int before_run_generate_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_run_generate_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_run_generate_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_run_generate_bn_prime(b, ps, bytes, argc, argv, env))) {
            int err2 = 0;
            err = run_generate_bn_prime(b, ps, bytes, argc, argv, env);
            if ((err2 = after_run_generate_bn_prime(b, ps, bytes, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_run_generate_bn_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_generate_prime_ = &derives::all_run_generate_bn_prime;
        return err;
    }

    /// ...run_generate_mp_prime
    virtual int run_generate_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        byte_t* p_bytes = b.elements();
        prime_bn_number_t prime(0);
        prime_bn_generator_t generator(this);

        if ((generator.create())) {

            if ((generator.generate(prime, bytes, ps))) {

                if (bytes == (prime.to_msb(p_bytes, bytes))) {
                    this->outxln(p_bytes, bytes);
                } else {
                }
            } else {
            }
            generator.destroy();
        } else {
        }
        return err;
    }
    virtual int before_run_generate_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_run_generate_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_run_generate_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_run_generate_mp_prime(b, ps, bytes, argc, argv, env))) {
            int err2 = 0;
            err = run_generate_mp_prime(b, ps, bytes, argc, argv, env);
            if ((err2 = after_run_generate_mp_prime(b, ps, bytes, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_run_generate_mp_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_generate_prime_ = &derives::all_run_generate_mp_prime;
        return err;
    }

    /// ...run_miller_rabin_bn_prime
    virtual int run_miller_rabin_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        byte_t* p_bytes = b.elements();
        prime_bn_number_t prime(0);
        prime_bn_reader_t reader(this);
        prime_bn_miller_rabin_t miller_rabin(this);

        if ((miller_rabin.create())) {
            do {
                if (bytes != (reader.read_msb(prime, bytes, ps))) {
                    break;
                }
            } while (!(miller_rabin.probably_prime(prime, bytes, ps)));
            miller_rabin.destroy();
            if (bytes == (prime.to_msb(p_bytes, bytes))) {
                this->outxln(p_bytes, bytes);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_run_miller_rabin_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_run_miller_rabin_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_run_miller_rabin_bn_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_run_miller_rabin_bn_prime(b, ps, bytes, argc, argv, env))) {
            int err2 = 0;
            err = run_miller_rabin_bn_prime(b, ps, bytes, argc, argv, env);
            if ((err2 = after_run_miller_rabin_bn_prime(b, ps, bytes, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_run_miller_rabin_bn_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_miller_rabin_prime_ = &derives::all_run_miller_rabin_bn_prime;
        return err;
    }

    /// ...run_miller_rabin_mp_prime
    virtual int run_miller_rabin_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        byte_t* p_bytes = b.elements();
        prime_mp_number_t prime(0);
        prime_mp_reader_t reader(this);
        prime_mp_miller_rabin_t miller_rabin(this);

        if ((miller_rabin.create())) {
            do {
                if (bytes != (reader.read_msb(prime, bytes, ps))) {
                    break;
                }
            } while (!(miller_rabin.probably_prime(prime, bytes, ps)));
            miller_rabin.destroy();
            if (bytes == (prime.to_msb(p_bytes, bytes))) {
                this->outxln(p_bytes, bytes);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_run_miller_rabin_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_run_miller_rabin_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_run_miller_rabin_mp_prime(byte_array_t& b, pseudo_random_t& ps, unsigned bytes, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_run_miller_rabin_mp_prime(b, ps, bytes, argc, argv, env))) {
            int err2 = 0;
            err = run_miller_rabin_mp_prime(b, ps, bytes, argc, argv, env);
            if ((err2 = after_run_miller_rabin_mp_prime(b, ps, bytes, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_run_miller_rabin_mp_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_miller_rabin_prime_ = &derives::all_run_miller_rabin_mp_prime;
        return err;
    }

    /// on_read...
    virtual ssize_t on_read(BN_BIGPRIME* n, size_t bytes) {
        this->err(".", 1);
        ++randoms_read_;
        return bytes;
    }
    virtual ssize_t on_read(MP_BIGPRIME* n, size_t bytes) {
        this->err(".", 1);
        ++randoms_read_;
        return bytes;
    }

protected:
    unsigned prime_bits_;
    size_t randoms_read_;
    pseudo_random_seed_t pseudo_random_seed_;
    pseudo_random_t pseudo_random_;
}; /// class maint
typedef maint<> main;

} /// namespace prime
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PRIME_MAIN_HPP
