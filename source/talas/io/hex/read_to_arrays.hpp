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
///   File: read_to_arrays.hpp
///
/// Author: $author$
///   Date: 1/9/2022
///////////////////////////////////////////////////////////////////////
#ifndef TALAS_IO_HEX_READ_TO_ARRAYS_HPP
#define TALAS_IO_HEX_READ_TO_ARRAYS_HPP

#include "talas/io/hex/reader.hpp"
#include "talas/base/array.hpp"
#include "talas/io/logger.hpp"
#include <stdarg.h>

namespace talas {
namespace io {
namespace hex {

///////////////////////////////////////////////////////////////////////
/// class read_to_arrayst
///////////////////////////////////////////////////////////////////////
template 
<class TArrays, class TArray,
 class TReaderEvents = reader_events, 
 class TImplements = TReaderEvents>

class _EXPORT_CLASS read_to_arrayst: virtual public TImplements {
public:
    typedef TImplements Implements;
    typedef read_to_arrayst Derives;

    typedef TArrays arrays_t;
    typedef typename arrays_t::what_t array_pointer_t;
    typedef TArray array_t;
    typedef typename array_t::what_t element_t;
    typedef TReaderEvents reader_events_t;
    typedef typename reader_events_t::what_t what_t;
    typedef typename reader_events_t::sized_t sized_t;

    ///////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    ///////////////////////////////////////////////////////////////////////
    read_to_arrayst(const read_to_arrayst& copy)
    : array_index_(0), array_pointer_(0), byte_(0), nibble_(0) {
        construct(copy);
    }
    read_to_arrayst(array_pointer_t array_pointer, ...)
    : array_index_(0), array_pointer_(0), byte_(0), nibble_(0) {
        va_list va;
        va_start(va, array_pointer);
        construct(array_pointer, va);
        va_end(va);
    }
    virtual ~read_to_arrayst() {
        destruct();
    }
    void construct(const read_to_arrayst& copy) {
    }
    void construct(array_pointer_t array_pointer, va_list va) {
        for (size_t index = 0, count = 0; array_pointer; ++count) {
            arrays_.append(&array_pointer, 1);
            array_pointer = va_arg(va, array_pointer_t);
        }
    }
    void destruct() {
        arrays_.clear();
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t on_begin(what_t* what, size_t size) {
        if ((array_index_ < arrays_.length())) {
            if ((array_pointer_ = arrays_[array_index_++])) {
                array_pointer_->set_length(0);
            }
        }
        byte_ = nibble_ = 0;
        return size;
    }
    virtual ssize_t on_end(what_t* what, size_t size) {
        return size;
    }
    virtual ssize_t on_hex_digit(unsigned d, what_t* what, size_t size) {
        byte_t n = ((byte_t)(d & 15)); 
        byte_ = ((byte_ << 4) | n);
        if ((nibble_++)) {
            if ((array_pointer_)) {
                element_t e = ((element_t)byte_);
                array_pointer_->append(&e, 1);
            }
            byte_ = nibble_ = 0;
         }
        return size;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual arrays_t &arrays() const {
        return (arrays_t &)arrays_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    size_t array_index_;
    array_pointer_t array_pointer_;
    byte_t byte_, nibble_;
    arrays_t arrays_;
}; /// class read_to_arrayst

typedef read_to_arrayst<byte_arrays_t, byte_array_t> read_to_byte_arrays;

} /// namespace hex 
} /// namespace io 
} /// namespace talas 

#endif /// ndef TALAS_IO_HEX_READ_TO_ARRAYS_HPP 