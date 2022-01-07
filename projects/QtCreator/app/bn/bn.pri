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
#   File: bn.pri
#
# Author: $author$
#   Date: 1/4/2022
#
# generic QtCreator project .pri file for framework talas executable bn
########################################################################

########################################################################
# bn

# bn TARGET
#
bn_TARGET = bn

# bn INCLUDEPATH
#
bn_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# bn DEFINES
#
bn_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# bn OBJECTIVE_HEADERS
#
#bn_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/bn/main.hh \

# bn OBJECTIVE_SOURCES
#
#bn_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/bn/main.mm \

########################################################################
# bn HEADERS
#
bn_HEADERS += \
$${TALAS_SRC}/xos/app/console/bn/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/bn/main.hpp \

# bn SOURCES
#
bn_SOURCES += \
$${TALAS_SRC}/xos/app/console/bn/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/bn/main.cpp \

########################################################################
# bn FRAMEWORKS
#
bn_FRAMEWORKS += \
$${talas_bn_FRAMEWORKS} \

# bn LIBS
#
bn_LIBS += \
$${talas_bn_LIBS} \

########################################################################
# NO Qt
QT -= gui core

