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
#   File: mpz.pri
#
# Author: $author$
#   Date: 1/4/2022
#
# generic QtCreator project .pri file for framework talas executable mpz
########################################################################

########################################################################
# mpz

# mpz TARGET
#
mpz_TARGET = mpz

# mpz INCLUDEPATH
#
mpz_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# mpz DEFINES
#
mpz_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# mpz OBJECTIVE_HEADERS
#
#mpz_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/mpz/main.hh \

# mpz OBJECTIVE_SOURCES
#
#mpz_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/mpz/main.mm \

########################################################################
# mpz HEADERS
#
mpz_HEADERS += \
$${TALAS_SRC}/xos/app/console/mpz/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/mpz/main.hpp \

# mpz SOURCES
#
mpz_SOURCES += \
$${TALAS_SRC}/xos/app/console/mpz/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/mpz/main.cpp \

########################################################################
# mpz FRAMEWORKS
#
mpz_FRAMEWORKS += \
$${talas_mp_FRAMEWORKS} \

# mpz LIBS
#
mpz_LIBS += \
$${talas_mp_LIBS} \

########################################################################
# NO Qt
QT -= gui core

