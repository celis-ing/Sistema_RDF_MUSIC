INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_SYNCRO syncro)

FIND_PATH(
    SYNCRO_INCLUDE_DIRS
    NAMES syncro/api.h
    HINTS $ENV{SYNCRO_DIR}/include
        ${PC_SYNCRO_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    SYNCRO_LIBRARIES
    NAMES gnuradio-syncro
    HINTS $ENV{SYNCRO_DIR}/lib
        ${PC_SYNCRO_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SYNCRO DEFAULT_MSG SYNCRO_LIBRARIES SYNCRO_INCLUDE_DIRS)
MARK_AS_ADVANCED(SYNCRO_LIBRARIES SYNCRO_INCLUDE_DIRS)

