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
///   File: reader.cpp
///
/// Author: $author$
///   Date: 1/6/2022
///////////////////////////////////////////////////////////////////////
#include "talas/io/hex/reader.hpp"

namespace talas {
namespace io {
namespace hex {

///////////////////////////////////////////////////////////////////////
/// class reader_eventst
///////////////////////////////////////////////////////////////////////
#if defined(TALAS_IO_HEX_READER_EVENTS_INSTANCE)
static reader_events the_reader_events;
#endif /// defined(TALAS_IO_HEX_READER_EVENTS_INSTANCE) 

///////////////////////////////////////////////////////////////////////
/// class readert
///////////////////////////////////////////////////////////////////////
#if defined(TALAS_IO_HEX_READER_INSTANCE)
static reader the_reader;
#endif /// defined(TALAS_IO_HEX_READER_INSTANCE) 

} /// namespace hex 
} /// namespace io 
} /// namespace talas 
