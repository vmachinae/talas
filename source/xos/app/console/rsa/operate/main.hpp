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
///   Date: 1/17/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_OPERATE_MAIN_HPP
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_HPP

#include "xos/app/console/rsa/operate/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace operate {

/// class maint
template 
<class TExtends = xos::app::console::rsa::operate::main_opt, 
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

    /// ...bn_public_key_operate_run
    virtual int bn_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t modulus_length = 0, exponent_length = 0;
        const byte_t *modulus = 0, *exponent = 0;

        if ((modulus = this->get_modulus(modulus_length)) && (modulus_length) 
            && (exponent = this->get_exponent(exponent_length)) && (exponent_length)) {
            ::talas::crypto::rsa::bn::public_key public_key(modulus, modulus_length, exponent, exponent_length);

            this->errlln("bn ", unsigned_to_string(modulus_length << 3).chars(), " bit public key operate...", null);
            if (!(err = run_key_operate(public_key, original, argc, argv, env))) {
                this->errlln("...bn ", unsigned_to_string(modulus_length << 3).chars(), " bit public key operate", null);
            } else {
            }
        } else {
        }
        return err;
    }
    
    /// ...bn_private_key_operate_run
    virtual int bn_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t p_length = 0;
        const byte_t *p = 0, *q = 0, *dmp1 = 0, *dmq1 = 0, *iqmp = 0;

        if ((p = this->get_p(q, dmp1, dmq1, iqmp, p_length)) && (p_length)) {
            ::talas::crypto::rsa::mp::private_key private_key(p, q, dmp1, dmq1, iqmp, p_length);

            this->errlln("bn ", unsigned_to_string(p_length << 4).chars(), " bit private key operate...", null);
            if (!(err = run_key_operate(private_key, original, argc, argv, env))) {
                this->errlln("...bn ", unsigned_to_string(p_length << 4).chars(), " bit private key operate", null);
            } else {
            }
        } else {
        }
        return err;
    }

    /// run_key_operate
    template <typename rsa_key_t>
    int run_key_operate(rsa_key_t& key, bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ssize_t modbytes = key.modbytes();
        size_t modsize = ((size_t)modbytes);

        if ((modbytes >= modbytes_min) && (modbytes <= modbytes_max)) {
            size_t length = 0;
            const byte_t *bytes = 0;
            
            if ((bytes = operate_plain(length, modsize)) && (length)) {
                ssize_t size = 0;
                
                if ((original)) { 
                    plain_[0] &= 0x7F; 
                }
                if (modbytes == (size = key(cipher_, sizeof(cipher_), plain_, modbytes))) {
                    this->output_x(cipher_, size, argc, argv, env);
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// operate_plain
    virtual const byte_t* operate_plain(size_t &length, size_t modsize) {
        const byte_t* bytes = 0;
        if ((bytes = get_plain(length)) && (length)) {
            if ((modsize < length)) {
                length = modsize;
            }
            ::memcpy(plain_, bytes, length);
            if ((modsize > length)) {
                byte_t *plain = plain_ + length;
                length = modsize - length;
                ::memset(plain, 0, length);
            }
        } else {
        }
        return bytes;
    }

    /// default_output_..._plain_run
    virtual int default_output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(plain_array_, argc, argv, env);
        return err;
    }
    virtual int default_output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const byte_t* bytes = 0;
        if ((bytes = get_test_plain(length)) && (length)) {
            this->output_x(bytes, length, argc, argv, env);
        }
        return err;
    }

    /// ...option...
    virtual int on_set_plain_option(const char_t* plain, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        plain_string_.assign(plain);
        err = this->on_set_hex_literal(plain_array_, plain_string_, argc, argv, env);
        err = this->set_get_literal_plain(argc, argv, env);
        return err;
    }

    /// ...get_plain
    const byte_t* (derives::*get_plain_)(size_t &length);
    virtual const byte_t* get_plain(size_t &length) {
        const byte_t* bytes = 0;
        if (get_plain_) {
            bytes = (this->*get_plain_)(length);
        } else {
            bytes = get_test_plain(length);
        }
        return bytes;
    }
    virtual const byte_t* get_test_plain(size_t &length) {
        const byte_t* bytes = 0;
        length = sizeof(::talas::app::console::rsa::rsa_public_modulus);
        bytes = ::talas::app::console::rsa::rsa_public_modulus;
        return bytes;
    }
    virtual const byte_t* get_literal_plain(size_t &length) {
        const byte_t* bytes = 0;
        length = plain_array_.length();
        bytes = plain_array_.elements();
        return bytes;;
    }
    virtual int set_get_test_plain(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_plain_ = &derives::get_test_plain;
        return err;
    }
    virtual int set_get_literal_plain(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_plain_ = &derives::get_literal_plain;
        return err;
    }

protected:
    enum { modbytes_min = 512/8, modbytes_max = 4096/8 };
    byte_t plain_[modbytes_max], cipher_[modbytes_max];
    ::talas::byte_array_t plain_array_;
    ::talas::string_t  plain_string_;
}; /// class maint
typedef maint<> main;

} /// namespace operate
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_OPERATE_MAIN_HPP
