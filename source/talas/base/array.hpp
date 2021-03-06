///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2016 $organization$
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
///   File: array.hpp
///
/// Author: $author$
///   Date: 1/1/2016, 1/9/2022
///////////////////////////////////////////////////////////////////////
#ifndef _TALAS_BASE_ARRAY_HPP
#define _TALAS_BASE_ARRAY_HPP

#include "xos/base/array.hpp"

#define TALAS_ARRAY_DEFAULT_SIZE XOS_ARRAY_DEFAULT_SIZE

namespace talas {

typedef xos::base::implement_base array_implements;
typedef xos::base::base array_extends;

typedef xos::base::char_array char_array_t;
typedef xos::base::tchar_array tchar_array_t;
typedef xos::base::wchar_array wchar_array_t;

typedef xos::base::byte_array byte_array_t;
typedef xos::base::word_array word_array_t;

typedef xos::base::arrayt<char_array_t*> char_arrays_t;
typedef xos::base::arrayt<tchar_array_t*> tchar_arrays_t;
typedef xos::base::arrayt<wchar_array_t*> wchar_arrays_t;

typedef xos::base::arrayt<byte_array_t*> byte_arrays_t;
typedef xos::base::arrayt<word_array_t*> word_arrays_t;

} // namespace talas

#endif // _TALAS_BASE_ARRAY_HPP 
