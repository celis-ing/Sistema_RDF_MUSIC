#
# This file is part of GNU Radio
#
# GNU Radio is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# GNU Radio is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#

########################################################################
# Install public header files
########################################################################
install(FILES
    api.h
    autocorrelate.h
    MUSIC_lin_array.h
    rootMUSIC_linear_array.h
    antenna_correction.h
    find_local_max.h
    calibrate_lin_array.h
    DESTINATION include/doa
)
