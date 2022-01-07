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
///   File: version.cpp
///
/// Author: $author$
///   Date: 1/4/2022
///////////////////////////////////////////////////////////////////////
#include "xos/lib/mp/version.hpp"
#include "gmp_version.c"

#if !defined(XOS_LIB_MP_VERSION_NAME)
#define XOS_LIB_MP_VERSION_NAME   "libmp"
#endif /// !defined(XOS_LIB_MP_VERSION_NAME)

#if !defined(XOS_LIB_MP_VERSION_MAJOR)
#define XOS_LIB_MP_VERSION_MAJOR   2
#endif /// !defined(XOS_LIB_MP_VERSION_MAJOR)

#if !defined(XOS_LIB_MP_VERSION_MINOR)
#define XOS_LIB_MP_VERSION_MINOR   0
#endif /// !defined(XOS_LIB_MP_VERSION_MINOR)

#if !defined(XOS_LIB_MP_VERSION_RELEASE)
#define XOS_LIB_MP_VERSION_RELEASE 2
#endif /// !defined(XOS_LIB_MP_VERSION_RELEASE)

#if !defined(XOS_LIB_MP_VERSION_BUILD_PREFIX)
#define XOS_LIB_MP_VERSION_BUILD_PREFIX   ssh-2-1996
#endif /// !defined(XOS_LIB_MP_VERSION_BUILD_PREFIX)

#if !defined(XOS_LIB_MP_VERSION_BUILD_DATE)
#define XOS_LIB_MP_VERSION_BUILD_DATE   1/4/2022
#endif /// !defined(XOS_LIB_MP_VERSION_BUILD_DATE)

#if !defined(XOS_LIB_MP_VERSION_BUILD)
#if defined(XOS_LIB_MP_VERSION_BUILD_PREFIX)
#define XOS_LIB_MP_VERSION_BUILD   XOS_LIB_MP_VERSION_BUILD_PREFIX-XOS_LIB_MP_VERSION_BUILD_DATE
#else /// defined(XOS_LIB_MP_VERSION_BUILD_PREFIX)
#define XOS_LIB_MP_VERSION_BUILD   XOS_LIB_MP_VERSION_BUILD_DATE
#endif /// defined(XOS_LIB_MP_VERSION_BUILD_PREFIX)
#endif /// !defined(XOS_LIB_MP_VERSION_BUILD)

#if !defined(XOS_LIB_MP_VERSION_BUILD_CHARS)
#define XOS_LIB_MP_VERSION_BUILD_CHARS   XOS_2CHARS(XOS_LIB_MP_VERSION_BUILD)
#endif /// !defined(XOS_LIB_MP_VERSION_BUILD_CHARS)

namespace xos {
namespace lib {
namespace mp {

namespace which {
/// class versiont
template <class TExtends = lib::extended::version, class TImplements = typename TExtends::implements>
class exported versiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef versiont derives;

    /// constructor / destructor
    versiont(const versiont& copy): extends(copy) {
    }
    versiont(): extends
    (XOS_LIB_MP_VERSION_NAME, 
     XOS_LIB_MP_VERSION_MAJOR, XOS_LIB_MP_VERSION_MINOR, 
     XOS_LIB_MP_VERSION_RELEASE, XOS_LIB_MP_VERSION_BUILD_CHARS) {
    }
    virtual ~versiont() {
    }
}; /// class versiont
typedef versiont<> version;
} /// namespace which

/// class version
const lib::version& version::which() {
    static const mp::which::version version;
    return version;
}

} /// namespace mp
} /// namespace lib
} /// namespace xos
