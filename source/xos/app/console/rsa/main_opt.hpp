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
///   Date: 1/5/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_RSA_MAIN_OPT_HPP

#include "xos/app/console/talas/main.hpp"
#include "talas/io/hex/read_to_arrays.hpp"
#include "talas/io/hex/read_to_array.hpp"
#include "talas/io/hex/reader.hpp"
#include "talas/base/array.hpp"
#include "talas/base/string.hpp"

#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPT "key-pair"
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTUSE "RSA key pair"
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTVAL_S "k::"
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTVAL_C 'k'
#define XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPT "private-key"
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTUSE "RSA private key"
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTVAL_S "r::"
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPT "public-key"
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTUSE "RSA public key"
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPT "modulus"
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTUSE "RSA public modulus"
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTVAL_S "m::"
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPT "exponent"
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTUSE "RSA public exponent"
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_S "e::"
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPT "bn-integer"
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTARG ""
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTUSE "use bn integer library"
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTVAL_S "b"
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTVAL_C 'b'
#define XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPT "gmp-integer"
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTARG ""
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTUSE "use gmp integer library"
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTVAL_S "g"
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPT "file-input"
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTARG ""
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTUSE "input from file"
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTVAL_S "f"
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTVAL_C 'f'
#define XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTION \
   {XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPT, \
    XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTVAL_S \

#define XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTION \
   XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTION \
   XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTION \   
   XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTION \
   XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTION \
   XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTION \
   XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTION \
   XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTION \

#define XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_RSA_MAIN_ARGS 0
#define XOS_APP_CONSOLE_RSA_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace rsa {

/// class main_optt
template 
<class TExtends = xos::app::console::talas::main, 
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

    /// ...output_exponent_run
    int (derives::*output_exponent_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_exponent_run_) {
            err = (this->*output_exponent_run_)(argc, argv, env);
        } else {
            err = output_test_exponent_run(argc, argv, env);
        }
        return err;
    }
    virtual int before_output_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_exponent_run(argc, argv, env))) {
            int err2 = 0;
            err = output_exponent_run(argc, argv, env);
            if ((err2 = after_output_exponent_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_exponent_run;
        return err;
    }

    /// ...output_modulus_run
    int (derives::*output_modulus_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_modulus_run_) {
            err = (this->*output_modulus_run_)(argc, argv, env);
        } else {
            err = output_test_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual int before_output_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_modulus_run(argc, argv, env);
            if ((err2 = after_output_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_modulus_run;
        return err;
    }

    /// ...output_public_key_run
    int (derives::*output_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_public_key_run_) {
            err = (this->*output_public_key_run_)(argc, argv, env);
        } else {
            err = output_test_public_key_run(argc, argv, env);
        }
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

    /// ...output_private_key_run
    int (derives::*output_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_private_key_run_) {
            err = (this->*output_private_key_run_)(argc, argv, env);
        } else {
            err = output_test_private_key_run(argc, argv, env);
        }
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

    /// ...output_key_pair_run
    int (derives::*output_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_key_pair_run_) {
            err = (this->*output_key_pair_run_)(argc, argv, env);
        } else {
            err = output_test_key_pair_run(argc, argv, env);
        }
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

    /// ...output_get_public_key_run
    virtual int output_get_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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

    /// ...output_get_private_key_run
    virtual int output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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

    /// ...output_get_key_pair_run
    virtual int output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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

    /// ...output_literal_exponent_run
    virtual int output_literal_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_literal_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_exponent_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_exponent_run(argc, argv, env);
            if ((err2 = after_output_literal_exponent_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_exponent_run_ = &derives::all_output_literal_exponent_run;
        return err;
    }

    /// ...output_literal_modulus_run
    virtual int output_literal_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_literal_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_modulus_run(argc, argv, env);
            if ((err2 = after_output_literal_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_modulus_run_ = &derives::all_output_literal_modulus_run;
        return err;
    }

    /// ...output_literal_public_key_run
    virtual int output_literal_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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
        output_public_key_run_ = &derives::all_output_literal_public_key_run;
        return err;
    }

    /// ...output_literal_private_key_run
    virtual int output_literal_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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
        output_private_key_run_ = &derives::all_output_literal_private_key_run;
        return err;
    }

    /// ...output_literal_key_pair_run
    virtual int output_literal_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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
        output_key_pair_run_ = &derives::all_output_literal_key_pair_run;
        return err;
    }

    /// ...output_test_exponent_run
    virtual int output_test_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_test_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_exponent_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_exponent_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_exponent_run(argc, argv, env);
            if ((err2 = after_output_test_exponent_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_test_modulus_run
    virtual int output_test_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_test_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_modulus_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_modulus_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_modulus_run(argc, argv, env);
            if ((err2 = after_output_test_modulus_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_test_public_key_run
    virtual int output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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

    /// ...output_test_private_key_run
    virtual int output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
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

    /// ...output_test_key_pair_run
    virtual int output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_output_test_public_key_run(argc, argv, env))) {
            err = all_output_test_private_key_run(argc, argv, env);
        }
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

    /// ...bn_run
    int (derives::*bn_run_)(int argc, char_t** argv, char_t** env);
    virtual int bn_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (bn_run_) {
            err = (this->*bn_run_)(argc, argv, env);
        } else {
            err = all_bn_test_run(argc, argv, env);
        }
        return err;
    }
    virtual int before_bn_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_run(argc, argv, env))) {
            int err2 = 0;
            err = bn_run(argc, argv, env);
            if ((err2 = after_bn_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_bn_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_bn_run;
        return err;
    }
    /// ...gmp_run
    int (derives::*gmp_run_)(int argc, char_t** argv, char_t** env);
    virtual int gmp_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (gmp_run_) {
            err = (this->*gmp_run_)(argc, argv, env);
        } else {
            err = all_gmp_test_run(argc, argv, env);
        }
        return err;
    }
    virtual int before_gmp_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_run(argc, argv, env))) {
            int err2 = 0;
            err = gmp_run(argc, argv, env);
            if ((err2 = after_gmp_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gmp_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_gmp_run;
        return err;
    }

    /// ...bn_literal_run
    virtual int bn_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_literal_run(argc, argv, env))) {
            int err2 = 0;
            err = bn_literal_run(argc, argv, env);
            if ((err2 = after_bn_literal_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...gmp_literal_run
    virtual int gmp_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_literal_run(argc, argv, env))) {
            int err2 = 0;
            err = gmp_literal_run(argc, argv, env);
            if ((err2 = after_gmp_literal_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_literal_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        bn_run_ = &derives::all_bn_literal_run;
        gmp_run_ = &derives::all_gmp_literal_run;
        return err;
    }

    /// ...bn_test_run
    virtual int bn_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_test_run(argc, argv, env))) {
            int err2 = 0;
            err = bn_test_run(argc, argv, env);
            if ((err2 = after_bn_test_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...gmp_test_run
    virtual int gmp_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_test_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_test_run(argc, argv, env))) {
            int err2 = 0;
            err = gmp_test_run(argc, argv, env);
            if ((err2 = after_gmp_test_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_hex_run
    virtual int output_hex_run
    (::talas::byte_array_t &array, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        byte_t *bytes = 0;
        
        if ((bytes = array.elements(length))) {
            this->output_x(bytes, length, argc, argv, env);
        }
        return err;
    }
    virtual int output_hex_run
    (::talas::byte_array_t &a1, ::talas::byte_array_t &a2, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        byte_t *bytes = 0;
        
        if ((bytes = a1.elements(length))) {
            this->output_x(bytes, length, argc, argv, env);
            if ((bytes = a2.elements(length))) {
                this->output_x(bytes, length, argc, argv, env);
            }
        }
        return err;
    }
    virtual int output_hex_run
    (::talas::byte_array_t &a1, ::talas::byte_array_t &a2, 
     ::talas::byte_array_t &a3, ::talas::byte_array_t &a4, 
     ::talas::byte_array_t &a5, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        byte_t *bytes = 0;
        if ((bytes = a1.elements(length))) {
            this->output_x(bytes, length, argc, argv, env);
            if ((bytes = a2.elements(length))) {
                this->output_x(bytes, length, argc, argv, env);
                if ((bytes = a3.elements(length))) {
                    this->output_x(bytes, length, argc, argv, env);
                    if ((bytes = a4.elements(length))) {
                        this->output_x(bytes, length, argc, argv, env);
                        if ((bytes = a5.elements(length))) {
                            this->output_x(bytes, length, argc, argv, env);
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual int output_hex_run
    (::talas::byte_array_t &a1, ::talas::byte_array_t &a2, 
     ::talas::byte_array_t &a3, ::talas::byte_array_t &a4, 
     ::talas::byte_array_t &a5, ::talas::byte_array_t &a6, ::talas::byte_array_t &a7,
     int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        byte_t *bytes = 0;
        if ((bytes = a1.elements(length))) {
            this->output_x(bytes, length, argc, argv, env);
            if ((bytes = a2.elements(length))) {
                this->output_x(bytes, length, argc, argv, env);
                if ((bytes = a3.elements(length))) {
                    this->output_x(bytes, length, argc, argv, env);
                    if ((bytes = a4.elements(length))) {
                        this->output_x(bytes, length, argc, argv, env);
                        if ((bytes = a5.elements(length))) {
                            this->output_x(bytes, length, argc, argv, env);
                            if ((bytes = a6.elements(length))) {
                                this->output_x(bytes, length, argc, argv, env);
                                if ((bytes = a7.elements(length))) {
                                    this->output_x(bytes, length, argc, argv, env);
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }

    /// ...output_x
    int (derives::*output_x_)(const void* out, size_t len, int argc, char_t** argv, char_t** env);
    virtual int output_x(const void* out, size_t len, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_x_) {
            err = (this->*output_x_)(out, len, argc, argv, env);
        } else {
            err = default_output_x(out, len, argc, argv, env);
        }
        return err;
    }
    virtual int default_output_x(const void* out, size_t len, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const byte_t *bytes = 0;

        if ((bytes = ((const byte_t*)out)) && (len)) {
            size_t cols = 32, col = 0;
            char_t nextln = '\\';

            for (col = 0; len; --len, ++bytes, ++col) {
                if (cols <= (col)) {
                    this->outln(&nextln, 1);
                    col = 0;
                }
                this->outx(bytes, 1);
            }
            this->outln();
        }
        return err;
    }

    /// ...on_set_hex_literal
    int (derives::*on_set_hex_literal_)(::talas::byte_array_t &array, ::talas::string_t &literal, int argc, char_t** argv, char_t** env);
    virtual int on_set_hex_literal(::talas::byte_array_t &array, ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (on_set_hex_literal_) {
            err = (this->*on_set_hex_literal_)(array, literal, argc, argv, env);
        } else {
            err = on_set_hex_string_literal(array, literal, argc, argv, env);
        }
        return err;
    }
    virtual int on_set_hex_string_literal(::talas::byte_array_t &array, ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_set_hex_file_literal(::talas::byte_array_t &array, ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_on_set_hex_string_literal(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_set_hex_literal_ = &derives::on_set_hex_string_literal;
        return err;
    }
    virtual int set_on_set_hex_file_literal(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_set_hex_literal_ = &derives::on_set_hex_file_literal;
        return err;
    }

    /// ...on_set_hex_literals
    int (derives::*on_set_hex_literals_)
    (::talas::io::hex::read_to_byte_arrays &to_arrays, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env);
    virtual int on_set_hex_literals
    (::talas::io::hex::read_to_byte_arrays &to_arrays, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (on_set_hex_literals_) {
            err = (this->*on_set_hex_literals_)(to_arrays, literal, argc, argv, env);
        } else {
            err = on_set_hex_string_literals(to_arrays, literal, argc, argv, env);
        }
        return err;
    }
    virtual int on_set_hex_string_literals
    (::talas::io::hex::read_to_byte_arrays &to_arrays, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_set_hex_file_literals
    (::talas::io::hex::read_to_byte_arrays &to_arrays, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_on_set_hex_string_literals(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_set_hex_literals_ = &derives::on_set_hex_string_literals;
        return err;
    }
    virtual int set_on_set_hex_file_literals(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_set_hex_literals_ = &derives::on_set_hex_file_literals;
        return err;
    }

    virtual int on_set_hex_literals
    (::talas::byte_array_t &a1, ::talas::byte_array_t &a2, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ::talas::io::hex::read_to_byte_arrays to_arrays(&a1, &a2, null);
        err = on_set_hex_literals(to_arrays, literal, argc, argv, env);
        return err;
    }
    virtual int on_set_hex_literals
    (::talas::byte_array_t &a1, ::talas::byte_array_t &a2, 
     ::talas::byte_array_t &a3, ::talas::byte_array_t &a4, ::talas::byte_array_t &a5, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ::talas::io::hex::read_to_byte_arrays to_arrays(&a1, &a2, &a3, &a4, &a5, null);
        err = on_set_hex_literals(to_arrays, literal, argc, argv, env);
        return err;
    }
    virtual int on_set_hex_literals
    (::talas::byte_array_t &a1, ::talas::byte_array_t &a2, 
     ::talas::byte_array_t &a3, ::talas::byte_array_t &a4, 
     ::talas::byte_array_t &a5, ::talas::byte_array_t &a6, ::talas::byte_array_t &a7, 
     ::talas::string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ::talas::io::hex::read_to_byte_arrays to_arrays(&a1, &a2, &a3, &a4, &a5, &a6, &a7, null);
        err = on_set_hex_literals(to_arrays, literal, argc, argv, env);
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
    virtual const char_t* keys_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTARG;
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
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTARG;
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
    virtual const char_t* key_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTARG;
        return chars;
    }
    virtual int on_set_modulus_option(const char_t* modulus, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_modulus_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_modulus_option(optarg, optind, argc, argv, env))) {
                err = set_output_literal_modulus_run(argc, argv, env);
            }
        } else {
            err = set_output_modulus_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* modulus_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTARG;
        return chars;
    }
    virtual int on_set_exponent_option(const char_t* exponent, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_exponent_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_exponent_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_output_literal_exponent_run(argc, argv, env))) {
                }
            }
        } else {
            err = set_output_exponent_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* exponent_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTARG;
        return chars;
    }
    virtual int on_bn_integer_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = set_bn_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* bn_integer_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTARG;
        return chars;
    }
    virtual int on_gmp_integer_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = set_gmp_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* gmp_integer_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTARG;
        return chars;
    }
    virtual int on_file_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_on_set_hex_file_literal(argc, argv, env);
        err = set_on_set_hex_file_literals(argc, argv, env);
        return err;
    }
    virtual const char_t* file_input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTVAL_C:
            err = this->on_key_pair_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTVAL_C:
            err = this->on_private_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTVAL_C:
            err = this->on_public_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTVAL_C:
            err = this->on_modulus_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_C:
            err = this->on_exponent_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTVAL_C:
            err = this->on_bn_integer_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTVAL_C:
            err = this->on_gmp_integer_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTVAL_C:
            err = this->on_file_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_RSA_MAIN_KEY_PAIR_OPTVAL_C:
            chars = keys_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_PRIVATE_KEY_OPTVAL_C:
            chars = private_key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_PUBLIC_KEY_OPTVAL_C:
            chars = key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_MODULUS_OPTVAL_C:
            chars = modulus_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_C:
            chars = exponent_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_BN_INTEGER_OPTVAL_C:
            chars = bn_integer_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_GMP_INTEGER_OPTVAL_C:
            chars = gmp_integer_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_MAIN_FILE_INPUT_OPTVAL_C:
            chars = file_input_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_RSA_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_RSA_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_RSA_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_MAIN_OPT_HPP
