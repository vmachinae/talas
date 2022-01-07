///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   Date: 7/14/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_BASE_GETOPT_MAIN_OPT_HPP
#define XOS_BASE_GETOPT_MAIN_OPT_HPP

#include "xos/console/getopt/main.hpp"

#define XOS_MAIN_OPT_ARGUMENT_NONE XOS_CONSOLE_MAIN_OPT_ARGUMENT_NONE
#define XOS_MAIN_OPT_ARGUMENT_REQUIRED XOS_CONSOLE_MAIN_OPT_ARGUMENT_REQUIRED
#define XOS_MAIN_OPT_ARGUMENT_OPTIONAL XOS_CONSOLE_MAIN_OPT_ARGUMENT_OPTIONAL

#define XOS_MAIN_LOGGING_OPTVAL_C XOS_CONSOLE_MAIN_LOGGING_OPTVAL_C
#define XOS_MAIN_LOGGING_OPTARG XOS_CONSOLE_MAIN_LOGGING_OPTARG
#define XOS_MAIN_LOGGING_OPTUSE XOS_CONSOLE_MAIN_LOGGING_OPTUSE

#define XOS_MAIN_HELP_OPTVAL_C XOS_CONSOLE_MAIN_HELP_OPTVAL_C
#define XOS_MAIN_HELP_OPTARG XOS_CONSOLE_MAIN_HELP_OPTARG
#define XOS_MAIN_HELP_OPTUSE XOS_CONSOLE_MAIN_HELP_OPTUSE

namespace xos {
namespace base {
namespace getopt {

typedef xos::console::getopt::main main;
typedef xos::console::getopt::main::implements main_implement;
typedef xos::console::getopt::main::extends main_extend;

} /// namespace getopt
} /// namespace base
} /// namespace xos

#endif /// XOS_BASE_GETOPT_MAIN_OPT_HPP
