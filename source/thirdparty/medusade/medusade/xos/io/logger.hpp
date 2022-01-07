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
///   File: logger.hpp
///
/// Author: $author$
///   Date: 7/14/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_IO_LOGGER_HPP
#define XOS_IO_LOGGER_HPP

#include "xos/base/logger.hpp"

/// LOG_...
#if !defined(LOG_ERROR)
#define LOG_ERROR LOGGER_LOG_ERROR
#endif /// !defined(LOG_ERROR)

#if !defined(LOG_INFO)
#define LOG_INFO LOGGER_LOG_INFO
#endif /// !defined(LOG_INFO)

#if !defined(LOG_DEBUG)
#define LOG_DEBUG LOGGER_LOG_DEBUG
#endif /// !defined(LOG_DEBUG)

#if !defined(LOG_TRACE)
#define LOG_TRACE LOGGER_LOG_TRACE
#endif /// !defined(LOG_TRACE)

/// XOS_LOG_...
#if !defined(XOS_LOG_ERROR)
#define XOS_LOG_ERROR LOGGER_LOG_ERROR
#endif /// !defined(XOS_LOG_ERROR)

#if !defined(XOS_LOG_INFO)
#define XOS_LOG_INFO LOGGER_LOG_INFO
#endif /// !defined(XOS_LOG_INFO)

#if !defined(XOS_LOG_DEBUG)
#define XOS_LOG_DEBUG LOGGER_LOG_DEBUG
#endif /// !defined(XOS_LOG_DEBUG)

#if !defined(XOS_LOG_TRACE)
#define XOS_LOG_TRACE LOGGER_LOG_TRACE
#endif /// !defined(XOS_LOG_TRACE)

namespace xos {
namespace io {

} /// namespace io
} /// namespace xos

#endif /// XOS_IO_LOGGER_HPP
