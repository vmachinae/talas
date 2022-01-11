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
///   Date: 1/10/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_HPP
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_HPP

#include "xos/app/console/rsa/generate/main_opt.hpp"
#include "xos/app/console/rsa/main.hpp"

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace generate {

/// class maint
template 
<class TExtends = xos::app::console::rsa::generate::main_opt, 
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
        this->output_x
        (::talas::app::console::rsa::rsa_public_exponent, 
         sizeof(::talas::app::console::rsa::rsa_public_exponent), argc, argv, env);
        return err;
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

            if (0 >= (count = hex.read())) {
                array.set_length(0);
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

protected:
    ::talas::byte_array_t exponent_, modulus_, p_, q_, dmp1_, dmq1_, iqmp_;
    ::talas::string_t exponent_string_, modulus_string_, public_string_, private_string_;
}; /// class maint
typedef maint<> main;

} /// namespace generate
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_HPP
