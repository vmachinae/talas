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
///   File: types.hpp
///
/// Author: $author$
///   Date: 7/13/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_BASE_TYPES_HPP
#define XOS_BASE_TYPES_HPP

#include "xos/base/chars.hpp"

namespace xos {
namespace base {

typedef xos::chars_t chars_t;
typedef xos::tchars_t tchars_t;
typedef xos::wchars_t wchars_t;
typedef xos::bytes_t bytes_t;
typedef xos::words_t words_t;

} /// namespace base
} /// namespace xos

#endif /// XOS_BASE_TYPES_HPP
