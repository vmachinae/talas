########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: prime.pri
#
# Author: $author$
#   Date: 1/9/2022
#
# generic QtCreator project .pri file for framework talas executable prime
########################################################################

########################################################################
# prime

# prime TARGET
#
prime_TARGET = prime

# prime INCLUDEPATH
#
prime_INCLUDEPATH += \
$${talas_medusade_INCLUDEPATH} \

# prime DEFINES
#
prime_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# prime OBJECTIVE_HEADERS
#
#prime_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/prime/main.hh \

# prime OBJECTIVE_SOURCES
#
#prime_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/prime/main.mm \

########################################################################
# prime HEADERS
#
prime_HEADERS += \
$${NADIR_SRC}/xos/base/attached.hpp \
$${NADIR_SRC}/xos/base/created.hpp \
\
$${TALAS_SRC}/xos/app/console/prime/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/prime/main.hpp \

# prime SOURCES
#
prime_SOURCES += \
$${NADIR_SRC}/xos/base/attached.cpp \
$${NADIR_SRC}/xos/base/created.cpp \
\
$${TALAS_SRC}/xos/app/console/prime/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/prime/main.cpp \
\
$${TALAS_SRC}/talas/crypto/random/prime/small_primes.cpp \

########################################################################
# prime FRAMEWORKS
#
prime_FRAMEWORKS += \
$${talas_rsa_FRAMEWORKS} \

# prime LIBS
#
prime_LIBS += \
$${talas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

