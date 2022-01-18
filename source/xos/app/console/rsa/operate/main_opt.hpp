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
///   Date: 1/17/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPT_HPP

#include "xos/app/console/rsa/generate/main.hpp"

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPT "plain"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTARG "[string]"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTUSE "Plain text"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTVAL_S "a::"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTVAL_C 'a'
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTION \
   {XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPT "encrypt"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTARG ""
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTUSE "RSA public encrypt/decrypt"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTVAL_S "e::"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTION \
   {XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPT "decrypt"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTARG ""
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTUSE "RSA private decrypt/encrypt"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTVAL_S "d::"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTVAL_C 'd'
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTION \
   {XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPT "cipher"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTARG ""
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTUSE "Cipher text"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTVAL_S "c"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTVAL_C 'c'
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTION \
   {XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPT "original"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTARG ""
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTUSE "Original text"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTVAL_S "o"
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTION \
   {XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTVAL_S \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTVAL_S \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTION \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTION \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTION \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PUBLIC_KEY_OPTION \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_PRIVATE_KEY_OPTION \
    XOS_APP_CONSOLE_RSA_PAIR_MAIN_KEY_PAIR_OPTION \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTION \
    XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTION \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_FILE_INPUT_OPTVAL_S \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_FILE_INPUT_OPTION \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_OPTIONS \

#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace operate {

/// class main_optt
template 
<class TExtends = xos::app::console::rsa::generate::main, 
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
    main_optt(): run_(0), is_cipher_text_(false) {
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

    /// ...output_plain_run
    int (derives::*output_plain_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_plain_run_) {
            err = (this->*output_plain_run_)(argc, argv, env);
        } else {
            err = default_output_plain_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_plain_run(argc, argv, env);
        return err;
    }
    virtual int before_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = output_plain_run(argc, argv, env);
            if ((err2 = after_output_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_plain_run;
        return err;
    }

    /// ...output_literal_plain_run
    int (derives::*output_literal_plain_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_literal_plain_run_) {
            err = (this->*output_literal_plain_run_)(argc, argv, env);
        } else {
            err = default_output_literal_plain_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_literal_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = output_literal_plain_run(argc, argv, env);
            if ((err2 = after_output_literal_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_literal_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_plain_run_ = &derives::all_output_literal_plain_run;
        return err;
    }

    /// ...output_test_plain_run
    int (derives::*output_test_plain_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_plain_run_) {
            err = (this->*output_test_plain_run_)(argc, argv, env);
        } else {
            err = default_output_test_plain_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_plain_run(argc, argv, env);
            if ((err2 = after_output_test_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_plain_run_ = &derives::all_output_test_plain_run;
        return err;
    }

    /// ...encrypt_run
    int (derives::*encrypt_run_)(int argc, char_t** argv, char_t** env);
    virtual int encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (encrypt_run_) {
            err = (this->*encrypt_run_)(argc, argv, env);
        } else {
            err = default_encrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool original = !is_cipher_text_;
        err = public_key_operate_run(original, argc, argv, env);
        return err;
    }
    virtual int before_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_encrypt_run(argc, argv, env))) {
            int err2 = 0;
            err = encrypt_run(argc, argv, env);
            if ((err2 = after_encrypt_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_encrypt_run;
        return err;
    }

    /// ...decrypt_run
    int (derives::*decrypt_run_)(int argc, char_t** argv, char_t** env);
    virtual int decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (decrypt_run_) {
            err = (this->*decrypt_run_)(argc, argv, env);
        } else {
            err = default_decrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool original = !is_cipher_text_;
        err = private_key_operate_run(original, argc, argv, env);
        return err;
    }
    virtual int before_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_decrypt_run(argc, argv, env))) {
            int err2 = 0;
            err = decrypt_run(argc, argv, env);
            if ((err2 = after_decrypt_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_decrypt_run;
        return err;
    }

    /// ...public_key_operate_run
    int (derives::*public_key_operate_run_)(bool original, int argc, char_t** argv, char_t** env);
    virtual int public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (public_key_operate_run_) {
            err = (this->*public_key_operate_run_)(original, argc, argv, env);
        } else {
            err = default_public_key_operate_run(original, argc, argv, env);
        }
        return err;
    }
    virtual int default_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = bn_public_key_operate_run(original, argc, argv, env);
        return err;
    }
    virtual int before_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_public_key_operate_run(original, argc, argv, env))) {
            int err2 = 0;
            err = public_key_operate_run(original, argc, argv, env);
            if ((err2 = after_public_key_operate_run(original, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...private_key_operate_run
    int (derives::*private_key_operate_run_)(bool original, int argc, char_t** argv, char_t** env);
    virtual int private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (private_key_operate_run_) {
            err = (this->*private_key_operate_run_)(original, argc, argv, env);
        } else {
            err = default_private_key_operate_run(original, argc, argv, env);
        }
        return err;
    }
    virtual int default_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = bn_private_key_operate_run(original, argc, argv, env);
        return err;
    }
    virtual int before_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_private_key_operate_run(original, argc, argv, env))) {
            int err2 = 0;
            err = private_key_operate_run(original, argc, argv, env);
            if ((err2 = after_private_key_operate_run(original, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...bn_public_key_operate_run
    virtual int bn_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_public_key_operate_run(original, argc, argv, env))) {
            int err2 = 0;
            err = bn_public_key_operate_run(original, argc, argv, env);
            if ((err2 = after_bn_public_key_operate_run(original, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_bn_public_key_operate_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        public_key_operate_run_ = &derives::all_bn_public_key_operate_run;
        return err;
    }

    /// ...gmp_public_key_operate_run
    virtual int gmp_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_public_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_public_key_operate_run(original, argc, argv, env))) {
            int err2 = 0;
            err = gmp_public_key_operate_run(original, argc, argv, env);
            if ((err2 = after_gmp_public_key_operate_run(original, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gmp_public_key_operate_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        public_key_operate_run_ = &derives::all_gmp_public_key_operate_run;
        return err;
    }

    /// ...bn_private_key_operate_run
    virtual int bn_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_private_key_operate_run(original, argc, argv, env))) {
            int err2 = 0;
            err = bn_private_key_operate_run(original, argc, argv, env);
            if ((err2 = after_bn_private_key_operate_run(original, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_bn_private_key_operate_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        private_key_operate_run_ = &derives::all_bn_private_key_operate_run;
        return err;
    }

    /// ...gmp_private_key_operate_run
    virtual int gmp_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_private_key_operate_run(bool original, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_private_key_operate_run(original, argc, argv, env))) {
            int err2 = 0;
            err = gmp_private_key_operate_run(original, argc, argv, env);
            if ((err2 = after_gmp_private_key_operate_run(original, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gmp_private_key_operate_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        private_key_operate_run_ = &derives::all_gmp_private_key_operate_run;
        return err;
    }

    /// ...option...
    virtual int on_plain_option_set(const char_t* plain, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_set_plain_option(const char_t* plain, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int on_plain_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_plain_option(optarg, optind, argc, argv, env))) {
                err = set_output_literal_plain_run(argc, argv, env);
            }
        } else {
            err = set_output_plain_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* plain_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTARG;
        return chars;
    }
    virtual int on_encrypt_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = set_encrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* encrypt_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTARG;
        return chars;
    }
    virtual int on_decrypt_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = set_decrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* decrypt_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTARG;
        return chars;
    }
    virtual int on_cipher_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            is_cipher_text_ = true;
        }
        return err;
    }
    virtual const char_t* cipher_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTARG;
        return chars;
    }
    virtual int on_original_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            is_cipher_text_ = false;
        }
        return err;
    }
    virtual const char_t* original_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTVAL_C:
            err = this->on_plain_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTVAL_C:
            err = this->on_encrypt_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTVAL_C:
            err = this->on_decrypt_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTVAL_C:
            err = this->on_cipher_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTVAL_C:
            err = this->on_original_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_PLAIN_OPTVAL_C:
            chars = this->plain_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ENCRYPT_OPTVAL_C:
            chars = this->encrypt_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_DECRYPT_OPTVAL_C:
            chars = this->decrypt_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_CIPHER_OPTVAL_C:
            chars = this->cipher_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ORIGINAL_OPTVAL_C:
            chars = this->original_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_RSA_OPERATE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
    bool is_cipher_text_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace operate
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_OPERATE_MAIN_OPT_HPP
