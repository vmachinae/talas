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
#   File: mp.pri
#
# Author: $author$
#   Date: 1/4/2022
#
# generic QtCreator project .pri file for framework talas executable mp
########################################################################

########################################################################
# mp

# mp TARGET
#
mp_TARGET = mp

# mp INCLUDEPATH
#
mp_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# mp DEFINES
#
mp_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# mp OBJECTIVE_HEADERS
#
#mp_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/mp/main.hh \

# mp OBJECTIVE_SOURCES
#
#mp_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/mp/main.mm \

########################################################################
# mp HEADERS
#
mp_HEADERS += \
$${TALAS_SRC}/xos/app/console/mp/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/mp/main.hpp \

# mp SOURCES
#
mp_SOURCES += \
$${TALAS_SRC}/xos/app/console/mp/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/mp/main.cpp \

########################################################################
# mp FRAMEWORKS
#
mp_FRAMEWORKS += \
$${talas_FRAMEWORKS} \

# mp LIBS
#
mp_LIBS += \
$${talas_LIBS} \

########################################################################
# NO Qt
QT -= gui core

