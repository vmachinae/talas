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
///   Date: 1/10/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPT_HPP

#include "xos/app/console/prime/main_opt.hpp"
#include "xos/app/console/rsa/main_opt.hpp"

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPT "generate"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTARG ""
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTUSE "generate RSA keys"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTVAL_S "r"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTVAL_S \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTION \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_S \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_MAIN_EXPONENT_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTION \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace rsa {
namespace generate {

/// class main_optt
template 
<class TExtends = xos::app::console::prime::main_optt<xos::app::console::rsa::main_optt<> >, 
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

    /// ...option...
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
                if (!(err = this->set_output_literal_exponent_run(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = this->set_output_exponent_run(argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual int on_generate_keys_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* generate_keys_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTVAL_C:
            err = this->on_generate_keys_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_KEYS_OPTVAL_C:
            chars = this->generate_keys_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_RSA_GENERATE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace generate
} /// namespace rsa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPT_HPP
