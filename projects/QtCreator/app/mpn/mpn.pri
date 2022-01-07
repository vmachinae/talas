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
#   File: mpn.pri
#
# Author: $author$
#   Date: 1/4/2022
#
# generic QtCreator project .pri file for framework talas executable mpn
########################################################################

########################################################################
# mpn

# mpn TARGET
#
mpn_TARGET = mpn

# mpn INCLUDEPATH
#
mpn_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# mpn DEFINES
#
mpn_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# mpn OBJECTIVE_HEADERS
#
#mpn_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/mpn/main.hh \

# mpn OBJECTIVE_SOURCES
#
#mpn_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/mpn/main.mm \

########################################################################
# mpn HEADERS
#
mpn_HEADERS += \
$${TALAS_SRC}/xos/app/console/mpn/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/mpn/main.hpp \

# mpn SOURCES
#
mpn_SOURCES += \
$${TALAS_SRC}/xos/app/console/mpn/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/mpn/main.cpp \

########################################################################
# mpn FRAMEWORKS
#
mpn_FRAMEWORKS += \
$${talas_mp_FRAMEWORKS} \

# mpn LIBS
#
mpn_LIBS += \
$${talas_mp_LIBS} \

########################################################################
# NO Qt
QT -= gui core

