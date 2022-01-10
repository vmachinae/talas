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
///   Date: 1/9/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PRIME_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PRIME_MAIN_OPT_HPP

#include "xos/app/console/talas/main.hpp"

#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS 1024

#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPT "generate"
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTARG ""
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTUSE "generate prime"
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTVAL_S "r::"
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPT "miller-rabin"
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTARG "[number]"
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTUSE "miller rabin primality test"
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_S "m::"
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPT "fermat-witness"
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTARG ""
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTUSE "fermat witness primality test"
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_S "w"
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_C 'w'
#define XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPT "bn-integer"
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTARG ""
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTUSE "use bn integer library"
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_S "b"
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_C 'b'
#define XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPT "gmp-integer"
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTARG ""
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTUSE "use gmp integer library"
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_S "g"
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPT "bytes"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTARG "[number]"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTUSE "integer size in bytes"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPT "bits"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTARG "[number]"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTUSE "integer size in bits"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_S "i::"
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPT "host"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd | ...}]"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTUSE "random input hostname or address"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_S "o::"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPT "port"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTARG "[{ 0..2^16-1 }]"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTUSE "random input port number"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPT "file"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTARG "[string]"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTUSE "random input file"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_S "f::"
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_C 'f'
#define XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTION \
   {XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_S \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_S \

#define XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTION \
   XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTION \

#define XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_PRIME_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PRIME_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace prime {

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

    /// ...prime_run
    int (derives::*prime_run_)(int argc, char_t** argv, char_t** env);
    virtual int prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prime_run_) {
            err = (this->*prime_run_)(argc, argv, env);
        } else {
            err = generate_prime_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prime_run(argc, argv, env))) {
            int err2 = 0;
            err = prime_run(argc, argv, env);
            if ((err2 = after_prime_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_prime_run;
        return err;
    }

    /// ...generate_prime_run
    virtual int generate_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_generate_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_prime_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_prime_run(argc, argv, env);
            if ((err2 = after_generate_prime_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        prime_run_ = &derives::all_generate_prime_run;
        return err;
    }
    virtual int set_run_generate_bn_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_run_generate_mp_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...miller_rabin_prime_run
    virtual int miller_rabin_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_miller_rabin_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_miller_rabin_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_miller_rabin_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_miller_rabin_prime_run(argc, argv, env))) {
            int err2 = 0;
            err = miller_rabin_prime_run(argc, argv, env);
            if ((err2 = after_miller_rabin_prime_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_miller_rabin_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        prime_run_ = &derives::all_miller_rabin_prime_run;
        return err;
    }
    virtual int set_run_miller_rabin_bn_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_run_miller_rabin_mp_prime(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...option...
    virtual int on_generate_prime_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        return err;
    }
    virtual const char_t* generate_prime_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTARG;
        return chars;
    }
    virtual int on_miller_rabin_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        err = set_miller_rabin_prime_run(argc, argv, env);
        return err;
    }
    virtual const char_t* miller_rabin_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTARG;
        return chars;
    }
    virtual int on_fermat_witness_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        err = set_generate_prime_run(argc, argv, env);
        return err;
    }
    virtual const char_t* fermat_witness_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTARG;
        return chars;
    }
    virtual int on_bn_integer_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        err = set_run_generate_bn_prime(argc, argv, env);
        err = set_run_miller_rabin_bn_prime(argc, argv, env);
        return err;
    }
    virtual const char_t* bn_integer_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTARG;
        return chars;
    }
    virtual int on_gmp_integer_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        err = set_run_generate_mp_prime(argc, argv, env);
        err = set_run_miller_rabin_mp_prime(argc, argv, env);
        return err;
    }
    virtual const char_t* gmp_integer_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTARG;
        return chars;
    }
    virtual int on_integer_bytes_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        return err;
    }
    virtual const char_t* integer_bytes_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTARG;
        return chars;
    }
    virtual int on_integer_bits_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = set_prime_run(argc, argv, env);
        return err;
    }
    virtual const char_t* integer_bits_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTARG;
        return chars;
    }
    virtual int on_input_host_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* input_host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTARG;
        return chars;
    }
    virtual int on_input_port_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* input_port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTARG;
        return chars;
    }
    virtual int on_input_file_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* input_file_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTVAL_C:
            err = this->on_generate_prime_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_C:
            err = this->on_miller_rabin_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_C:
            err = this->on_fermat_witness_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_C:
            err = this->on_bn_integer_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_C:
            err = this->on_gmp_integer_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_C:
            err = this->on_integer_bytes_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_C:
            err = this->on_integer_bits_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_C:
            err = this->on_input_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_C:
            err = this->on_input_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_C:
            err = this->on_input_file_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_PRIME_MAIN_GENERATE_PRIME_OPTVAL_C:
            chars = generate_prime_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_MILLER_RABIN_OPTVAL_C:
            chars = miller_rabin_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_FERMAT_WITNESS_OPTVAL_C:
            chars = fermat_witness_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_BN_INTEGER_OPTVAL_C:
            chars = bn_integer_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_GMP_INTEGER_OPTVAL_C:
            chars = gmp_integer_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BYTES_OPTVAL_C:
            chars = integer_bytes_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INTEGER_BITS_OPTVAL_C:
            chars = integer_bits_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INPUT_HOST_OPTVAL_C:
            chars = input_host_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INPUT_PORT_OPTVAL_C:
            chars = input_port_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PRIME_MAIN_INPUT_FILE_OPTVAL_C:
            chars = input_file_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PRIME_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PRIME_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PRIME_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace prime
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PRIME_MAIN_OPT_HPP
