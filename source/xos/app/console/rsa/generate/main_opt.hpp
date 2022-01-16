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
///   Date: 1/15/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPT_HPP

#include "xos/app/console/rsa/pair/main.hpp"
#include "talas/crypto/random/reader.hpp"

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPT "generate"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTARG ""
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTUSE "generate RSA key pair"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTVAL_S "n"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPT "miller-rabin"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTARG ""
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTUSE "do miller rabin primality test"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTVAL_S "r"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPT "fermat-witness"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTARG ""
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTUSE "do fermat witness primality test"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTVAL_S "w"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTVAL_C 'w'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPT "modulus-bits"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTARG "[number]"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTUSE "RSA public modulus size in bits"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTVAL_S "i::"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPT "modulus-bytes"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTARG "[number]"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTUSE "RSA public modulus size in bytes"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPT "random-host"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd | ...}]"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTUSE "random input host or address"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTVAL_S "o::"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPT "random-port"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTARG "[{ 0..2^16-1 }]"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTUSE "random input port number"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTION \
   {XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_BN_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_GMP_INTEGER_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTVAL_S \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTVAL_S \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTION \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTION \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTION \
   XOS_APP_CONSOLE_RSA_PAIR_MAIN_EXPONENT_OPTION \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTION \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTION \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_BN_INTEGER_OPTION \
   XOS_APP_CONSOLE_RSA_BASE_MAIN_GMP_INTEGER_OPTION \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTION \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTION \

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_TALAS_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_RSA_GENERATE_MAIN_OPTIONS_OPTIONS_EXTEND \
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
<class TExtends = xos::app::console::rsa::pair::main, 
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

    typedef ::talas::crypto::random::reader random_reader_t;

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

    /// ...generate_keys_run
    virtual int generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_keys_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_keys_run(argc, argv, env);
            if ((err2 = after_generate_keys_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_generate_keys_run;
        return err;
    }

    /// ...generate_keys_run
    int (derives::*generate_keys_run_)(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env);
    virtual int generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (generate_keys_run_) {
            err = (this->*generate_keys_run_)(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
        } else {
            err = default_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
        }
        return err;
    }
    virtual int default_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_bn_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
        return err;
    }
    virtual int before_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env))) {
            int err2 = 0;
            err = generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
            if ((err2 = after_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...bn_generate_keys_run
    virtual int bn_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env))) {
            int err2 = 0;
            err = bn_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
            if ((err2 = after_bn_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_bn_generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_keys_run_ = &derives::all_bn_generate_keys_run;
        return err;
    }

    /// ...gmp_generate_keys_run
    virtual int gmp_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_generate_keys_run(size_t modbytes, const byte_t* exponent, size_t expbytes, size_t pbytes, random_reader_t &random, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env))) {
            int err2 = 0;
            err = gmp_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env);
            if ((err2 = after_gmp_generate_keys_run(modbytes, exponent, expbytes, pbytes, random, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gmp_generate_keys_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_keys_run_ = &derives::all_gmp_generate_keys_run;
        return err;
    }

    /// ...option...
    virtual int on_generate_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = set_generate_keys_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* generate_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTARG;
        return chars;
    }
    virtual int on_set_miller_rabin_option
    (int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_miller_rabin_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = on_set_miller_rabin_option(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* miller_rabin_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTARG;
        return chars;
    }
    virtual int on_set_fermat_witness_option
    (int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_fermat_witness_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = on_set_fermat_witness_option(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* fermat_witness_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTARG;
        return chars;
    }
    virtual int on_set_modulus_bits
    (unsigned bytes, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_modulus_bits_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned bits = arg.to_unsigned();
            if ((bits)) {
                if (!(err = on_set_modulus_bits(bits, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* modulus_bits_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTARG;
        return chars;
    }
    virtual int on_set_modulus_bytes
    (unsigned bytes, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_modulus_bytes_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned bytes = arg.to_unsigned();
            if ((bytes)) {
                if (!(err = on_set_modulus_bytes(bytes, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* modulus_bytes_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTARG;
        return chars;
    }
    virtual int on_random_host_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* random_host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTARG;
        return chars;
    }
    virtual int on_random_port_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* random_port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTUSE;
        optarg = XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTVAL_C:
            err = this->on_generate_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTVAL_C:
            err = this->on_miller_rabin_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTVAL_C:
            err = this->on_fermat_witness_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTVAL_C:
            err = this->on_modulus_bits_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTVAL_C:
            err = this->on_modulus_bytes_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTVAL_C:
            err = this->on_random_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTVAL_C:
            err = this->on_random_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_GENERATE_OPTVAL_C:
            chars = this->generate_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MILLER_RABIN_OPTVAL_C:
            chars = this->miller_rabin_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_FERMAT_WITNESS_OPTVAL_C:
            chars = this->fermat_witness_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BITS_OPTVAL_C:
            chars = this->modulus_bits_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_MODULUS_BYTES_OPTVAL_C:
            chars = this->modulus_bytes_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_HOST_OPTVAL_C:
            chars = this->random_host_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RSA_GENERATE_MAIN_RANDOM_PORT_OPTVAL_C:
            chars = this->random_port_option_usage(optarg, longopt);
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
