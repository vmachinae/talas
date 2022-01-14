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
#   File: rsa.pri
#
# Author: $author$
#   Date: 1/5/2022
#
# generic QtCreator project .pri file for framework talas executable rsa
########################################################################

########################################################################
# rsa

# rsa TARGET
#
rsa_TARGET = rsa

# rsa INCLUDEPATH
#
rsa_INCLUDEPATH += \
$${talas_medusade_INCLUDEPATH} \

# rsa DEFINES
#
rsa_DEFINES += \
$${talas_medusade_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# rsa OBJECTIVE_HEADERS
#
#rsa_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/rsa/main.hh \

# rsa OBJECTIVE_SOURCES
#
#rsa_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/rsa/main.mm \

########################################################################
# rsa HEADERS
#
rsa_HEADERS += \
$${NADIR_SRC}/xos/base/attached.hpp \
$${NADIR_SRC}/xos/base/created.hpp \
\
$${TALAS_SRC}/talas/io/read/file.hpp \
$${TALAS_SRC}/talas/io/hex/reader.hpp \
$${TALAS_SRC}/talas/io/hex/read_to_array.hpp \
$${TALAS_SRC}/talas/io/hex/read_to_arrays.hpp \
\
$${TALAS_SRC}/talas/crypto/random/prime/small_primes.hpp \
\
$${TALAS_SRC}/xos/app/console/prime/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/prime/main.hpp \
\
$${TALAS_SRC}/xos/app/console/rsa/base/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/rsa/base/main.hpp \
\
$${TALAS_SRC}/xos/app/console/rsa/pair/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/rsa/pair/main.hpp \
\
$${TALAS_SRC}/xos/app/console/rsa/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/rsa/main.hpp \
\
$${TALAS_SRC}/xos/app/console/rsa/generate/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/rsa/generate/main.hpp \

# rsa SOURCES
#
rsa_SOURCES += \
$${NADIR_SRC}/xos/base/attached.cpp \
$${NADIR_SRC}/xos/base/created.cpp \
\
$${TALAS_SRC}/talas/io/read/file.cpp \
$${TALAS_SRC}/talas/io/hex/reader.cpp \
$${TALAS_SRC}/talas/io/hex/read_to_array.cpp \
$${TALAS_SRC}/talas/io/hex/read_to_arrays.cpp \
\
$${TALAS_SRC}/talas/crypto/random/prime/small_primes.cpp \

rsa_base_SOURCES += \
$${TALAS_SRC}/xos/app/console/rsa/base/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/rsa/base/main.cpp \

rsa_pair_SOURCES += \
$${TALAS_SRC}/xos/app/console/rsa/pair/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/rsa/pair/main.cpp \

rsa_operate_SOURCES += \
$${TALAS_SRC}/xos/app/console/rsa/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/rsa/main.cpp \

rsa_generate_SOURCES += \
$${TALAS_SRC}/xos/app/console/rsa/generate/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/rsa/generate/main.cpp \

#rsa_SOURCES += $${rsa_base_SOURCES}
rsa_SOURCES += $${rsa_pair_SOURCES}
#rsa_SOURCES += $${rsa_operate_SOURCES}
#rsa_SOURCES += $${rsa_generate_SOURCES}

########################################################################
# rsa FRAMEWORKS
#
rsa_FRAMEWORKS += \
$${talas_rsa_FRAMEWORKS} \

# rsa LIBS
#
rsa_LIBS += \
$${talas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

