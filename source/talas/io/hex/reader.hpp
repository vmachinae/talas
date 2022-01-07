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
///   File: reader.hpp
///
/// Author: $author$
///   Date: 1/6/2022
///////////////////////////////////////////////////////////////////////
#ifndef TALAS_IO_HEX_READER_HPP
#define TALAS_IO_HEX_READER_HPP

#include "talas/io/delegated/reader.hpp"

namespace talas {
namespace io {
namespace hex {

///////////////////////////////////////////////////////////////////////
/// class reader_eventst
///////////////////////////////////////////////////////////////////////
template 
<class TReader, 
 class TImplements = talas::io::delegated::reader_eventst<TReader> >

class _EXPORT_CLASS reader_eventst: virtual public TImplements {
public:
    typedef TImplements Implements;
    typedef reader_eventst Derives;

    typedef TReader reader_t;
    typedef typename reader_t::what_t what_t;
    typedef typename reader_t::sized_t sized_t;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t on_begin(what_t* what, size_t size) {
        return size;
    }
    virtual ssize_t on_end(what_t* what, size_t size) {
        return size;
    }
    virtual ssize_t on_hex_char(what_t* what, size_t size) {
        sized_t* sized = 0;

        if ((sized = ((sized_t*)what))) {
            char c = ((char)(*sized));

            if ((c >= '0') && (c <= '9')) {
                return on_hex_digit((c - '0'), what, size);
            } else {
                if ((c >= 'a') && (c <= 'f')) {
                    return on_hex_digit(((c - 'a') + 10), what, size);
                } else {
                    if ((c >= 'A') && (c <= 'F')) {
                        return on_hex_digit(((c - 'A') + 10), what, size);
                    } else {
                    }
                }
            }
        }
        return size;
    }
    virtual ssize_t on_hex_digit(unsigned d, what_t* what, size_t size) {
        return size;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
}; /// class reader_eventst

#if defined(XOS_IO_SEEKER_HPP)
typedef reader_eventst<io::char_reader> reader_events;
#else /// defined(XOS_IO_SEEKER_HPP)
typedef reader_eventst<io::reader> reader_events;
#endif /// defined(XOS_IO_SEEKER_HPP)

///////////////////////////////////////////////////////////////////////
/// class readert
///////////////////////////////////////////////////////////////////////
template 
<class TReader, 
 class TReaderEvents = talas::io::hex::reader_eventst<TReader>, 
 class TExtends = talas::io::delegated::readert<TReader, TReaderEvents>,
 class TImplements = typename TExtends::Implements>

class _EXPORT_CLASS readert: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    typedef readert Derives;

    typedef TReader reader_t;
    typedef TReaderEvents reader_events_t;
    typedef typename Extends::what_t what_t;
    typedef typename Extends::sized_t sized_t;
    
    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    readert(reader_events_t& reader_events, reader_t& reader)
    : Extends(reader_events, reader), on_read_(0), reader_events_(reader_events) {
    }
    readert(reader_t& reader): Extends(reader), on_read_(0), reader_events_(*this) {
    }
    readert(const readert& copy)
    : Extends(copy), on_read_(0), reader_events_(copy.reader_events_) {
    }
    virtual ~readert() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t on_begin(what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_begin(what, size);
        }
        return size;
    }
    virtual ssize_t on_end(what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_end(what, size);
        }
        return size;
    }
    virtual ssize_t on_hex_char(what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_hex_char(what, size);
        }
        return size;
    }
    virtual ssize_t on_hex_digit(unsigned d, what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_hex_digit(d, what, size);
        }
        return size;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    ssize_t (Derives::*on_read_)(what_t* what, size_t size);
    virtual ssize_t on_read(what_t* what, size_t size) {
        ssize_t count = size;
        if ((on_read_)) {
            (this->*on_read_)(what, size);
        } else {
            this->on_read_begin(what, size);
        }
        return count;
    }
    virtual ssize_t on_read_begin(what_t* what, size_t size) {
        ssize_t count = size;
        sized_t* sized = 0;
        char c = 0;
        if ((sized = ((sized_t*)what))) {
            if (is_hex_char(c = ((char)(*sized)))) {
                on_read_ = &Derives::on_read_hex;
                this->on_hex_char(what, size);
            } else {
                if (!is_ws_char(c)) {
                    on_read_ = &Derives::on_read_end;
                }
            }
        }
        return count;
    }
    virtual ssize_t on_read_end(what_t* what, size_t size) {
        ssize_t count = size;
        sized_t* sized = 0;
        char c = 0;
        if ((sized = ((sized_t*)what))) {
            switch (c = ((char)(*sized))) {
            default:
                break;
            }
        }
        return count;
    }
    virtual ssize_t on_read_hex(what_t* what, size_t size) {
        ssize_t count = size;
        sized_t* sized = 0;
        char c = 0;
        if ((sized = ((sized_t*)what))) {
            if (is_hex_char(c = ((char)(*sized)))) {
                this->on_hex_char(what, size);
            } else {
                if (!is_ws_char(c)) {
                    on_read_ = &Derives::on_read_end;
                }
            }
        }
        return count;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    inline unsigned hex_digit(char c) const {
        if ((c >= '0') && (c <= '9')) {
            return (c - '0');
        } else {
            if ((c >= 'a') && (c <= 'f')) {
                return (c - 'a') + 10;
            } else {
                if ((c >= 'A') && (c <= 'F')) {
                    return (c - 'A') + 10;
                } else {
                }
            }
        }
        return 0;
    }
    inline bool is_hex_char(char c) const {
        if (((c >= '0') && (c <= '9'))
            || ((c >= 'a') && (c <= 'f'))
            || ((c >= 'A') && (c <= 'F'))) {
            return true;
        }
        return false;
    }
    inline bool is_ws_char(char c) const {
        switch (c) {
        case '\n':
        case '\r':
        case '\t':
        case '\v':
            return true;
        }
        return false;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    reader_events_t& reader_events_;
}; /// class readert

#if defined(XOS_IO_SEEKER_HPP)
typedef readert<io::char_reader> reader;
#else /// defined(XOS_IO_SEEKER_HPP)
typedef readert<io::reader> reader;
#endif /// defined(XOS_IO_SEEKER_HPP)

} /// namespace hex 
} /// namespace io 
} /// namespace talas 

#endif /// ndef TALAS_IO_HEX_READER_HPP 
