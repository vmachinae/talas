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
///   File: file.hpp
///
/// Author: $author$
///   Date: 7/14/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_IO_READ_FILE_HPP
#define XOS_IO_READ_FILE_HPP

#include "xos/io/crt/file/reader.hpp"

namespace xos {
namespace io {
namespace read {

typedef crt::file::reader file;
typedef crt::file::char_reader char_file;

} /// namespace read
} /// namespace io
} /// namespace xos

#endif /// XOS_IO_READ_FILE_HPP
