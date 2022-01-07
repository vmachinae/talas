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
///   File: read_to_array.cpp
///
/// Author: $author$
///   Date: 1/6/2022
///////////////////////////////////////////////////////////////////////
#include "talas/io/hex/read_to_array.hpp"

namespace talas {
namespace io {
namespace hex {

///////////////////////////////////////////////////////////////////////
/// class read_to_arrayt
///////////////////////////////////////////////////////////////////////
#if defined(TALAS_IO_HEX_READ_TO_ARRAY_INSTANCE)
static read_to_array the_read_to_array;
#endif /// defined(TALAS_IO_HEX_READ_TO_ARRAY_INSTANCE) 

} /// namespace hex 
} /// namespace io 
} /// namespace talas 
