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
///   Date: 1/5/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_MAIN_HPP
#define XOS_APP_CONSOLE_RSA_MAIN_HPP

#include "xos/app/console/rsa/main_opt.hpp"

#include "talas/app/console/rsa/public_key.hpp"
#include "talas/app/console/rsa/private_key.hpp"

#include "talas/crypto/rsa/public_key.hpp"
#include "talas/crypto/rsa/private_key.hpp"

#include "talas/crypto/rsa/bn/public_key.hpp"
#include "talas/crypto/rsa/bn/private_key.hpp"

#include "talas/crypto/rsa/mp/public_key.hpp"
#include "talas/crypto/rsa/mp/private_key.hpp"

#include "talas/io/hex/read_to_array.hpp"
#include "talas/io/hex/reader.hpp"
#include "talas/io/string/reader.hpp"

namespace xos {
namespace app {
namespace console {
namespace rsa {

/// class maint
template 
<class TExtends = xos::app::console::rsa::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
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
    maint(): run_(0) {
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
    
    /// ...output_..._exponent_run
    virtual int output_literal_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(exponent_, argc, argv, env);
        return err;
    }
    virtual int output_test_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->outxln
        (::talas::app::console::rsa::rsa_public_exponent, 
         sizeof(::talas::app::console::rsa::rsa_public_exponent));
        return err;
    }
    /// ...output_..._modulus_run
    virtual int output_literal_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(modulus_, argc, argv, env);
        return err;
    }
    virtual int output_test_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->outxln
        (::talas::app::console::rsa::rsa_public_modulus, 
         sizeof(::talas::app::console::rsa::rsa_public_modulus));
        return err;
    }

    /// ...bn_test_run
    virtual int bn_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;

        ::talas::crypto::rsa::bn::public_key pub
        (::talas::app::console::rsa::rsa_public_modulus, sizeof(::talas::app::console::rsa::rsa_public_modulus),
         ::talas::app::console::rsa::rsa_public_exponent, sizeof(::talas::app::console::rsa::rsa_public_exponent));

        ::talas::crypto::rsa::bn::private_key prv
        (::talas::app::console::rsa::rsa_private_p, ::talas::app::console::rsa::rsa_private_q, 
         ::talas::app::console::rsa::rsa_private_dmp1, ::talas::app::console::rsa::rsa_private_dmq1, 
         ::talas::app::console::rsa::rsa_private_iqmp, sizeof(::talas::app::console::rsa::rsa_private_p));
        
        err = test(pub, prv);
        return err;
    }
    /// ...gmp_test_run
    virtual int gmp_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;

        ::talas::crypto::rsa::mp::public_key pub
        (::talas::app::console::rsa::rsa_public_modulus, sizeof(::talas::app::console::rsa::rsa_public_modulus),
         ::talas::app::console::rsa::rsa_public_exponent, sizeof(::talas::app::console::rsa::rsa_public_exponent));

        ::talas::crypto::rsa::mp::private_key prv
        (::talas::app::console::rsa::rsa_private_p, ::talas::app::console::rsa::rsa_private_q, 
         ::talas::app::console::rsa::rsa_private_dmp1, ::talas::app::console::rsa::rsa_private_dmq1, 
         ::talas::app::console::rsa::rsa_private_iqmp, sizeof(::talas::app::console::rsa::rsa_private_p));
        
        err = test(pub, prv);
        return err;
    }

    /// test
    template <typename rsa_public_key_t, typename rsa_private_key_t>
    int test(rsa_public_key_t& pub, rsa_private_key_t& prv) {
        int err = 0;
        ssize_t size = 0, modbytes = pub.modbytes();

        if ((modbytes >= modbytes_min) && (modbytes <= modbytes_max)) {
            
            if ((size = this->random(plain, modbytes))) {
                plain[0] &= 0x7F;
                this->out("plain = ");
                this->outx(plain, modbytes);
                this->outln();
                this->outln();

                if (modbytes == (size = pub(cipher, sizeof(cipher), plain, modbytes))) {
                    this->out("cipher = ");
                    this->outx(cipher, size);
                    this->outln();
                    this->outln();

                    if (modbytes == (size = prv(decipher, sizeof(decipher), cipher, size))) {
                        this->out("decipher = ");
                        this->outx(decipher, size);
                        this->outln();
                        this->outln();

                        this->out("public <--> private ");
                        if (!(::memcmp(plain, decipher, size))) {
                            this->outln("success");
                        } else {
                            this->outln("failure");
                        }
                        this->outln();
                    } else {
                    }
                } else {
                }
                if (modbytes == (size = prv(cipher, sizeof(cipher), plain, modbytes))) {
                    this->out("cipher = ");
                    this->outx(cipher, size);
                    this->outln();
                    this->outln();

                    if (modbytes == (size = pub(decipher, sizeof(decipher), cipher, size))) {
                        this->out("decipher = ");
                        this->outx(decipher, size);
                        this->outln();
                        this->outln();

                        this->out("private <--> public ");
                        if (!(::memcmp(plain, decipher, size))) {
                            this->outln("success");
                        } else {
                            this->outln("failure");
                        }
                        this->outln();
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// random
    virtual size_t random(unsigned char *buff, size_t len) const {
        static unsigned randnum = 0;
        static unsigned avail = 0;
        size_t i=0;
        
        for (i=0; i<len;) {
            if (avail<1) {
                randnum=(unsigned)rand();
                avail=sizeof(randnum);
            }
            if ((buff[i]=(char)(randnum&255))!=0) {
                i++;
            }
            if ((randnum>>=8)<1) {
                avail=0;
            } else {
                avail--;
            }
        }
        return i;
    }

    /// size_of
    virtual size_t size_of(const unsigned char *buff, size_t len) const {
        for (size_t i=0; len>0; i++, --len) {
            if (buff[i]) {
                return len;
            }
        }
        return 0;
    }

    /// ...option...
    virtual int on_set_exponent_option(const char_t* exponent, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        exponent_string_.assign(exponent);
        err = this->on_set_literal(exponent_, exponent_string_, argc, argv, env);
        err = this->set_get_literal_exponent(argc, argv, env);
        err = this->set_literal_run(argc, argv, env);
        return err;
    }
    virtual int on_set_modulus_option(const char_t* modulus, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        modulus_string_.assign(modulus);
        err = this->on_set_literal(modulus_, modulus_string_, argc, argv, env);
        err = this->set_get_literal_modulus(argc, argv, env);
        err = this->set_literal_run(argc, argv, env);
        return err;
    }
    virtual int on_set_hex_string_literal
    (::talas::byte_array_t &array, ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;

        if ((chars = literal.has_chars(length))) {
            ssize_t count = 0;
            ::talas::io::string::reader reader(literal);
            ::talas::io::hex::read_to_byte_array to_array(array);
            ::talas::io::hex::reader hex(to_array, reader);

            if (0 < (count = hex.read())) {
            } else {
            }
        }
        return err;
    }

    /// ...get_exponent
    const byte_t* (derives::*get_exponent_)(size_t &length);
    virtual const byte_t* get_exponent(size_t &length) {
        const byte_t* bytes = 0;
        if (get_exponent_) {
            bytes = (this->*get_exponent_)(length);
        } else {
            bytes = get_test_exponent(length);
        }
        return bytes;
    }
    virtual const byte_t* get_test_exponent(size_t &length) {
        const byte_t* bytes = 0;
        return bytes;
    }
    virtual const byte_t* get_literal_exponent(size_t &length) {
        const byte_t* bytes = 0;
        return bytes;
    }
    virtual int set_get_literal_exponent(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_exponent_ = &derives::get_literal_exponent;
        return err;
    }

    /// ...get_modulus
    const byte_t* (derives::*get_modulus_)(size_t &length);
    virtual const byte_t* get_modulus(size_t &length) {
        const byte_t* bytes = 0;
        if (get_modulus_) {
            bytes = (this->*get_modulus_)(length);
        } else {
            bytes = get_test_modulus(length);
        }
        return bytes;
    }
    virtual const byte_t* get_test_modulus(size_t &length) {
        const byte_t* bytes = 0;
        return bytes;
    }
    virtual const byte_t* get_literal_modulus(size_t &length) {
        const byte_t* bytes = 0;
        return bytes;
    }
    virtual int set_get_literal_modulus(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_modulus_ = &derives::get_literal_modulus;
        return err;
    }

protected:
    enum {
        modbytes_min = 512/8,
        modbytes_max = 4096/8
    };

    byte_t plain[modbytes_max], 
           cipher[modbytes_max], 
           decipher[modbytes_max];

    ::talas::byte_array_t exponent_, modulus_;
    ::talas::string_t exponent_string_, modulus_string_;
}; /// class maint
typedef maint<> main;

} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_MAIN_HPP
