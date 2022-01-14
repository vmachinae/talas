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
///   Date: 1/12/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_PAIR_MAIN_HPP
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_HPP

#include "xos/app/console/rsa/pair/main_opt.hpp"

#include "talas/app/console/rsa/public_key.hpp"
#include "talas/app/console/rsa/private_key.hpp"

#include "talas/crypto/rsa/public_key.hpp"
#include "talas/crypto/rsa/private_key.hpp"

#include "talas/crypto/rsa/bn/public_key.hpp"
#include "talas/crypto/rsa/bn/private_key.hpp"

#include "talas/crypto/rsa/mp/public_key.hpp"
#include "talas/crypto/rsa/mp/private_key.hpp"

#include "talas/io/hex/read_to_arrays.hpp"
#include "talas/io/hex/read_to_array.hpp"
#include "talas/io/hex/reader.hpp"

#include "talas/io/string/reader.hpp"
#include "talas/io/read/file.hpp"

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace pair {

/// class maint
template 
<class TExtends = xos::app::console::rsa::pair::main_opt, 
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

    /// output_get_..._run
    virtual int default_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const byte_t *bytes = 0;
        if ((bytes = get_exponent(length)) && (length)) {
            this->output_x(bytes, length, argc, argv, env);
            if ((bytes = get_modulus(length)) && (length)) {
                const byte_t *q = 0, *dmp1 = 0, *dmq1 = 0, *iqmp = 0;
                this->output_x(bytes, length, argc, argv, env);
                if ((bytes = get_p(q, dmp1, dmq1, iqmp, length)) && (length)) {
                    this->output_x(bytes, length, argc, argv, env);
                    this->output_x(q, length, argc, argv, env);
                    this->output_x(dmp1, length, argc, argv, env);
                    this->output_x(dmq1, length, argc, argv, env);
                    this->output_x(iqmp, length, argc, argv, env);
                }
            }
        }
        return err;
    }
    virtual int default_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const byte_t *bytes = 0;
        const byte_t *q = 0, *dmp1 = 0, *dmq1 = 0, *iqmp = 0;
        if ((bytes = get_p(q, dmp1, dmq1, iqmp, length)) && (length)) {
            this->output_x(bytes, length, argc, argv, env);
            this->output_x(q, length, argc, argv, env);
            this->output_x(dmp1, length, argc, argv, env);
            this->output_x(dmq1, length, argc, argv, env);
            this->output_x(iqmp, length, argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const byte_t *bytes = 0;
        if ((bytes = get_exponent(length)) && (length)) {
            this->output_x(bytes, length, argc, argv, env);
            if ((bytes = get_modulus(length)) && (length)) {
                this->output_x(bytes, length, argc, argv, env);
            }
        }
        return err;
    }
    virtual int default_output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const byte_t *bytes = 0;
        if ((bytes = get_modulus(length)) && (length)) {
            this->output_x(bytes, length, argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const byte_t *bytes = 0;
        if ((bytes = get_exponent(length)) && (length)) {
            this->output_x(bytes, length, argc, argv, env);
        }
        return err;
    }

    /// ...output_literal_..._run
    virtual int default_output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(exponent_, modulus_, p_, q_, dmp1_, dmq1_, iqmp_, argc, argv, env);
        return err;
    }
    virtual int default_output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(p_, q_, dmp1_, dmq1_, iqmp_, argc, argv, env);
        return err;
    }
    virtual int default_output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(exponent_, modulus_, argc, argv, env);
        return err;
    }
    virtual int default_output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(modulus_, argc, argv, env);
        return err;
    }
    virtual int default_output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->output_hex_run(exponent_, argc, argv, env);
        return err;
    }

    /// ...output_test_..._run
    virtual int default_output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->output_x
        (::talas::app::console::rsa::rsa_public_exponent, 
         sizeof(::talas::app::console::rsa::rsa_public_exponent), argc, argv, env);
        return err;
    }
    virtual int default_output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->output_x
        (::talas::app::console::rsa::rsa_public_modulus, 
         sizeof(::talas::app::console::rsa::rsa_public_modulus), argc, argv, env);
        return err;
    }
    virtual int default_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = default_output_test_public_exponent_run(argc, argv, env))) {
            if (!(err = default_output_test_public_modulus_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int default_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->output_x
        (::talas::app::console::rsa::rsa_private_p, 
         sizeof(::talas::app::console::rsa::rsa_private_p), argc, argv, env);
        this->output_x
        (::talas::app::console::rsa::rsa_private_q, 
         sizeof(::talas::app::console::rsa::rsa_private_q), argc, argv, env);
        this->output_x
        (::talas::app::console::rsa::rsa_private_dmp1, 
         sizeof(::talas::app::console::rsa::rsa_private_dmp1), argc, argv, env);
        this->output_x
        (::talas::app::console::rsa::rsa_private_dmq1, 
         sizeof(::talas::app::console::rsa::rsa_private_dmq1), argc, argv, env);
        this->output_x
        (::talas::app::console::rsa::rsa_private_iqmp, 
         sizeof(::talas::app::console::rsa::rsa_private_iqmp), argc, argv, env);
        return err;
    }
    virtual int default_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = default_output_test_public_key_run(argc, argv, env))) {
            if (!(err = default_output_test_private_key_run(argc, argv, env))) {
            }
        }
        return err;
    }

    /// on_set...option...
    virtual int on_set_exponent_option(const char_t* exponent, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        exponent_string_.assign(exponent);
        err = this->on_set_hex_literal(exponent_, exponent_string_, argc, argv, env);
        err = this->set_get_literal_exponent(argc, argv, env);
        return err;
    }
    virtual int on_set_modulus_option(const char_t* modulus, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        modulus_string_.assign(modulus);
        err = this->on_set_hex_literal(modulus_, modulus_string_, argc, argv, env);
        err = this->set_get_literal_modulus(argc, argv, env);
        return err;
    }
    virtual int on_set_public_key_option(const char_t* public_key, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        public_string_.assign(public_key);
        err = this->on_set_hex_literals(exponent_, modulus_, public_string_, argc, argv, env);
        err = this->set_get_literal_exponent(argc, argv, env);
        err = this->set_get_literal_modulus(argc, argv, env);
        return err;
    }
    virtual int on_set_private_key_option(const char_t* private_key, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        private_string_.assign(private_key);
        err = this->on_set_hex_literals(p_, q_, dmp1_, dmq1_, iqmp_, private_string_, argc, argv, env);
        err = this->set_get_literal_p(argc, argv, env);
        return err;
    }
    virtual int on_set_key_pair_option(const char_t* key_pair, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        pair_string_.assign(key_pair);
        err = this->on_set_hex_literals(exponent_, modulus_, p_, q_, dmp1_, dmq1_, iqmp_, pair_string_, argc, argv, env);
        err = this->set_get_literal_exponent(argc, argv, env);
        err = this->set_get_literal_modulus(argc, argv, env);
        err = this->set_get_literal_p(argc, argv, env);
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
        length = sizeof(::talas::app::console::rsa::rsa_public_exponent);
        bytes = ::talas::app::console::rsa::rsa_public_exponent;
        return bytes;
    }
    virtual const byte_t* get_literal_exponent(size_t &length) {
        const byte_t* bytes = 0;
        length = exponent_.length();
        bytes = exponent_.elements();
        return bytes;
    }
    virtual int set_get_test_exponent(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_exponent_ = &derives::get_literal_exponent;
        return err;
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
        length = sizeof(::talas::app::console::rsa::rsa_public_modulus);
        bytes = ::talas::app::console::rsa::rsa_public_modulus;
        return bytes;
    }
    virtual const byte_t* get_literal_modulus(size_t &length) {
        const byte_t* bytes = 0;
        length = modulus_.length();
        bytes = modulus_.elements();
        return bytes;;
    }
    virtual int set_get_test_modulus(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_modulus_ = &derives::get_test_modulus;
        return err;
    }
    virtual int set_get_literal_modulus(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_modulus_ = &derives::get_literal_modulus;
        return err;
    }

    /// ...get_p
    const byte_t* (derives::*get_p_)
    (const byte_t *&q, const byte_t *&dmp1, 
     const byte_t *&dmq1, const byte_t *&iqmp, size_t &length);
    virtual const byte_t* get_p
    (const byte_t *&q, const byte_t *&dmp1, 
     const byte_t *&dmq1, const byte_t *&iqmp, size_t &length) {
        const byte_t* bytes = 0;
        if (get_p_) {
            bytes = (this->*get_p_)(q, dmp1, dmq1, iqmp, length);
        } else {
            bytes = get_test_p(q, dmp1, dmq1, iqmp, length);
        }
        return bytes;
    }
    virtual const byte_t* get_test_p
    (const byte_t *&q, const byte_t *&dmp1, 
     const byte_t *&dmq1, const byte_t *&iqmp, size_t &length) {
        const byte_t* bytes = 0;
        length = sizeof(::talas::app::console::rsa::rsa_private_p);
        bytes = ::talas::app::console::rsa::rsa_private_p;
        q = ::talas::app::console::rsa::rsa_private_q;
        dmp1 = ::talas::app::console::rsa::rsa_private_dmp1;
        dmq1 = ::talas::app::console::rsa::rsa_private_dmq1;
        iqmp = ::talas::app::console::rsa::rsa_private_iqmp;
        return bytes;
    }
    virtual const byte_t* get_literal_p
    (const byte_t *&q, const byte_t *&dmp1, 
     const byte_t *&dmq1, const byte_t *&iqmp, size_t &length) {
        const byte_t* bytes = 0;
        length = p_.length();
        bytes = p_.elements();
        q = q_.elements();
        dmp1 = dmp1_.elements();
        dmq1 = dmq1_.elements();
        iqmp = iqmp_.elements();
        return bytes;;
    }
    virtual int set_get_test_p(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_p_ = &derives::get_test_p;
        return err;
    }
    virtual int set_get_literal_p(int argc, char_t** argv, char_t** env) {
        int err = 0;
        get_p_ = &derives::get_literal_p;
        return err;
    }

protected:
    ::talas::byte_array_t exponent_, modulus_, 
                          p_, q_, dmp1_, dmq1_, iqmp_;

    ::talas::string_t exponent_string_, modulus_string_, 
                      public_string_, private_string_, pair_string_ ;
}; /// class maint
typedef maint<> main;

} /// namespace pair
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_PAIR_MAIN_HPP
