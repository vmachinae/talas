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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 1/12/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPT_HPP

#include "xos/app/console/rsa/base/main.hpp"

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPT "key-pair"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTUSE "RSA key pair"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_S "k::"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_C 'k'
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTION \
   {XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPT "private-key"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTUSE "RSA private key"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_S "r::"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTION \
   {XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPT "public-key"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTUSE "RSA public key"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTION \
   {XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPT "modulus"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTUSE "RSA public modulus"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTVAL_S "m::"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTION \
   {XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPT "exponent"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTUSE "RSA public exponent"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_S "e::"
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTION \
   {XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_S \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTION \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTION \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTION \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTION \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTION \

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_ARGS 0
#define XOS_APP_CONSOLE_RSA_PAIR_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace pair {

/// class main_optt
template 
<class TExtends = xos::app::console::rsa::base::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
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

    /// ...output_key_pair_run
    int (derives::*output_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_key_pair_run_) {
            err = (this->*output_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_key_pair_run(argc, argv, env);
        return err;
    }
    virtual int before_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_key_pair_run(argc, argv, env);
            if ((err2 = after_output_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_key_pair_run;
        return err;
    }

    /// ...output_private_key_run
    int (derives::*output_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_private_key_run_) {
            err = (this->*output_private_key_run_)(argc, argv, env);
        } else {
            err = default_output_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_private_key_run(argc, argv, env);
        return err;
    }
    virtual int before_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_private_key_run(argc, argv, env);
            if ((err2 = after_output_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_private_key_run;
        return err;
    }

    /// ...output_public_key_run
    int (derives::*output_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_public_key_run_) {
            err = (this->*output_public_key_run_)(argc, argv, env);
        } else {
            err = default_output_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_public_key_run(argc, argv, env);
        return err;
    }
    virtual int before_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_public_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_public_key_run(argc, argv, env);
            if ((err2 = after_output_public_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_public_key_run;
        return err;
    }

    /// ...output_public_modulus_run
    int (derives::*output_public_modulus_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_public_modulus_run_) {
            err = (this->*output_public_modulus_run_)(argc, argv, env);
        } else {
            err = default_output_public_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_public_modulus_run(argc, argv, env);
        return err;
    }
    virtual int before_output_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_public_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_public_modulus_run(argc, argv, env);
            if ((err2 = after_output_public_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_public_modulus_run;
        return err;
    }

    /// ...output_public_exponent_run
    int (derives::*output_public_exponent_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_public_exponent_run_) {
            err = (this->*output_public_exponent_run_)(argc, argv, env);
        } else {
            err = default_output_public_exponent_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_public_exponent_run(argc, argv, env);
        return err;
    }
    virtual int before_output_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_public_exponent_run(argc, argv, env))) {
            int err2 = 0;
            err = output_public_exponent_run(argc, argv, env);
            if ((err2 = after_output_public_exponent_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_public_exponent_run;
        return err;
    }

    /// ...output_get_key_pair_run
    int (derives::*output_get_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_key_pair_run_) {
            err = (this->*output_get_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_get_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_get_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_get_key_pair_run(argc, argv, env);
            if ((err2 = after_output_get_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_key_pair_run_ = &derives::all_output_get_key_pair_run;
        return err;
    }

    /// ...output_get_private_key_run
    int (derives::*output_get_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_private_key_run_) {
            err = (this->*output_get_private_key_run_)(argc, argv, env);
        } else {
            err = default_output_get_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_get_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_get_private_key_run(argc, argv, env);
            if ((err2 = after_output_get_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_private_key_run_ = &derives::all_output_get_private_key_run;
        return err;
    }

    /// ...output_get_public_key_run
    int (derives::*output_get_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_public_key_run_) {
            err = (this->*output_get_public_key_run_)(argc, argv, env);
        } else {
            err = default_output_get_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_get_public_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_get_public_key_run(argc, argv, env);
            if ((err2 = after_output_get_public_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_key_run_ = &derives::all_output_get_public_key_run;
        return err;
    }

    /// ...output_get_public_modulus_run
    int (derives::*output_get_public_modulus_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_public_modulus_run_) {
            err = (this->*output_get_public_modulus_run_)(argc, argv, env);
        } else {
            err = default_output_get_public_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_get_public_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_get_public_modulus_run(argc, argv, env);
            if ((err2 = after_output_get_public_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_get_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_modulus_run_ = &derives::all_output_get_public_modulus_run;
        return err;
    }

    /// ...output_get_public_exponent_run
     int (derives::*output_get_public_exponent_run_)(int argc, char_t** argv, char_t** env);
     virtual int output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (output_get_public_exponent_run_) {
             err = (this->*output_get_public_exponent_run_)(argc, argv, env);
         } else {
             err = default_output_get_public_exponent_run(argc, argv, env);
         }
         return err;
     }
     virtual int default_output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         /// err = extends::run(argc, argv, env);
         return err;
     }
     virtual int before_output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int after_output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int all_output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (!(err = before_output_get_public_exponent_run(argc, argv, env))) {
             int err2 = 0;
             err = output_get_public_exponent_run(argc, argv, env);
             if ((err2 = after_output_get_public_exponent_run(argc, argv, env))) {
                 if (!(err)) err = err2;
             }
         }
         return err;
     }
     virtual int set_output_get_public_exponent_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         output_public_exponent_run_ = &derives::all_output_get_public_exponent_run;
         return err;
     }

     /// ...output_literal_key_pair_run
    int (derives::*output_literal_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_literal_key_pair_run_) {
            err = (this->*output_literal_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_literal_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_key_pair_run(argc, argv, env);
            if ((err2 = after_output_literal_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_output_get_key_pair_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_private_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_modulus_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_exponent_run(argc, argv, env))) {
        }
        output_key_pair_run_ = &derives::all_output_literal_key_pair_run;
        return err;
    }

    /// ...output_literal_private_key_run
    int (derives::*output_literal_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_literal_private_key_run_) {
            err = (this->*output_literal_private_key_run_)(argc, argv, env);
        } else {
            err = default_output_literal_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_private_key_run(argc, argv, env);
            if ((err2 = after_output_literal_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_output_get_key_pair_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_private_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_modulus_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_exponent_run(argc, argv, env))) {
        }
        output_private_key_run_ = &derives::all_output_literal_private_key_run;
        return err;
    }

    /// ...output_literal_public_key_run
    int (derives::*output_literal_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_literal_public_key_run_) {
            err = (this->*output_literal_public_key_run_)(argc, argv, env);
        } else {
            err = default_output_literal_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_public_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_public_key_run(argc, argv, env);
            if ((err2 = after_output_literal_public_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_output_get_key_pair_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_private_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_modulus_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_exponent_run(argc, argv, env))) {
        }
        output_public_key_run_ = &derives::all_output_literal_public_key_run;
        return err;
    }
 
    /// ...output_literal_public_modulus_run
    int (derives::*output_literal_public_modulus_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_literal_public_modulus_run_) {
            err = (this->*output_literal_public_modulus_run_)(argc, argv, env);
        } else {
            err = default_output_literal_public_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_public_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_public_modulus_run(argc, argv, env);
            if ((err2 = after_output_literal_public_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_output_get_key_pair_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_private_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_modulus_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_exponent_run(argc, argv, env))) {
        }
        output_public_modulus_run_ = &derives::all_output_literal_public_modulus_run;
        return err;
    }

    /// ...output_literal_public_exponent_run
    int (derives::*output_literal_public_exponent_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_literal_public_exponent_run_) {
            err = (this->*output_literal_public_exponent_run_)(argc, argv, env);
        } else {
            err = default_output_literal_public_exponent_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_public_exponent_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_public_exponent_run(argc, argv, env);
            if ((err2 = after_output_literal_public_exponent_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_output_get_key_pair_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_private_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_key_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_modulus_run(argc, argv, env))) {
        }
        if (!(err = set_output_get_public_exponent_run(argc, argv, env))) {
        }
        output_public_exponent_run_ = &derives::all_output_literal_public_exponent_run;
        return err;
    }

    /// ...output_test_key_pair_run
    int (derives::*output_test_key_pair_run_)(int argc, char_t** argv, char_t** env);
     virtual int output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (output_test_key_pair_run_) {
             err = (this->*output_test_key_pair_run_)(argc, argv, env);
         } else {
             err = default_output_test_key_pair_run(argc, argv, env);
         }
         return err;
     }
     virtual int default_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         /// err = extends::run(argc, argv, env);
         return err;
     }
    virtual int before_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_key_pair_run(argc, argv, env);
            if ((err2 = after_output_test_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_key_pair_run_ = &derives::all_output_test_key_pair_run;
        return err;
    }

    /// ...output_test_private_key_run
    int (derives::*output_test_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_private_key_run_) {
            err = (this->*output_test_private_key_run_)(argc, argv, env);
        } else {
            err = default_output_test_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_private_key_run(argc, argv, env);
            if ((err2 = after_output_test_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_private_key_run_ = &derives::all_output_test_private_key_run;
        return err;
    }

    /// ...output_test_public_key_run
    int (derives::*output_test_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_public_key_run_) {
            err = (this->*output_test_public_key_run_)(argc, argv, env);
        } else {
            err = default_output_test_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_public_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_public_key_run(argc, argv, env);
            if ((err2 = after_output_test_public_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_key_run_ = &derives::all_output_test_public_key_run;
        return err;
    }

    /// ...output_test_public_modulus_run
    int (derives::*output_test_public_modulus_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_public_modulus_run_) {
            err = (this->*output_test_public_modulus_run_)(argc, argv, env);
        } else {
            err = default_output_test_public_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_public_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_public_modulus_run(argc, argv, env);
            if ((err2 = after_output_test_public_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_public_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_modulus_run_ = &derives::all_output_test_public_modulus_run;
        return err;
    }

    /// ...output_test_public_exponent_run
    int (derives::*output_test_public_exponent_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_public_exponent_run_) {
            err = (this->*output_test_public_exponent_run_)(argc, argv, env);
        } else {
            err = default_output_test_public_exponent_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_public_exponent_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_public_exponent_run(argc, argv, env);
            if ((err2 = after_output_test_public_exponent_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_public_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_exponent_run_ = &derives::all_output_test_public_exponent_run;
        return err;
    }

    /// ...option...
    virtual int on_set_key_pair_option(const char_t* key_pair, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_key_pair_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_key_pair_option(optarg, optind, argc, argv, env))) {
                err = set_output_literal_key_pair_run(argc, argv, env);
            }
        } else {
            err = set_output_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* key_pair_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTARG;
        return chars;
    }
    virtual int on_set_private_key_option(const char_t* private_key, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_private_key_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_private_key_option(optarg, optind, argc, argv, env))) {
                err = set_output_literal_private_key_run(argc, argv, env);
            }
        } else {
            err = set_output_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* private_key_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTARG;
        return chars;
    }
    virtual int on_set_public_key_option(const char_t* public_key, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_public_key_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_public_key_option(optarg, optind, argc, argv, env))) {
                err = set_output_literal_public_key_run(argc, argv, env);
            }
        } else {
            err = set_output_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* public_key_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTARG;
        return chars;
    }
    virtual int on_set_public_modulus_option(const char_t* modulus, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_modulus_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_public_modulus_option(optarg, optind, argc, argv, env))) {
                err = set_output_literal_public_modulus_run(argc, argv, env);
            }
        } else {
            err = set_output_public_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* modulus_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTARG;
        return chars;
    }
    virtual int on_set_public_exponent_option(const char_t* exponent, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_exponent_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_public_exponent_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_output_literal_public_exponent_run(argc, argv, env))) {
                }
            }
        } else {
            err = set_output_public_exponent_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* exponent_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_C:
            err = this->on_key_pair_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_C:
            err = this->on_private_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_C:
            err = this->on_public_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTVAL_C:
            err = this->on_modulus_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_C:
            err = this->on_exponent_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_C:
            chars = this->key_pair_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_C:
            chars = this->private_key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_C:
            chars = this->public_key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_MODULUS_OPTVAL_C:
            chars = this->modulus_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_C:
            chars = this->exponent_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_RSA_PAIR_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_RSA_PAIR_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace pair
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_PAIR_MAIN_OPT_HPP
