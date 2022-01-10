///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
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
///   Date: 5/1/2015, 1/10/2022
///////////////////////////////////////////////////////////////////////
#ifndef _TALAS_CRYPTO_RANDOM_READER_HPP
#define _TALAS_CRYPTO_RANDOM_READER_HPP

#include "talas/crypto/base.hpp"

namespace talas {
namespace crypto {
namespace random {

typedef base_implements reader_implements;
///////////////////////////////////////////////////////////////////////
///  Class: readert
///////////////////////////////////////////////////////////////////////
template
<class TImplements = reader_implements>

class _EXPORT_CLASS readert: virtual public TImplements {
public:
    typedef TImplements Implements;

    typedef base_implements observer_implements;
    ///////////////////////////////////////////////////////////////////////
    ///  Class: observer
    ///////////////////////////////////////////////////////////////////////
    class _EXPORT_CLASS observer: virtual public observer_implements {
    public:
        typedef observer_implements Implements;

        ///////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////
        virtual ssize_t on_read(byte_t* bytes, size_t size) {
            observer* delegated = observer_delegated();
            if ((delegated)) {
                return delegated->on_read(bytes, size);
            }
            return 0;
        }
        virtual observer* observer_delegated() const {
            return 0;
        }

        ///////////////////////////////////////////////////////////////////////
        /// deprecated
        ///////////////////////////////////////////////////////////////////////
        virtual ssize_t OnRead(BYTE* bytes, size_t size) {
            observer* delegated = ObserverDelegated();
            if ((delegated)) {
                return delegated->OnRead(bytes, size);
            }
            return this->on_read(bytes, size);
        }
        virtual observer* ObserverDelegated() const {
            return 0;
        }

        ///////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////
    };

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t read(byte_t* bytes, size_t size) {
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    /// deprecated
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t Read(BYTE* bytes, size_t size) {
        return this->read(bytes, size);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef readert<> reader;

} // namespace random 
} // namespace crypto 
} // namespace talas 

#endif // _TALAS_CRYPTO_RANDOM_READER_HPP 
