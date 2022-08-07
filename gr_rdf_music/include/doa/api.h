/*
 * Copyright 2011 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef INCLUDED_DOA_API_H
#define INCLUDED_DOA_API_H

#include <gnuradio/attributes.h>

#ifdef gnuradio_doa_EXPORTS
#  define DOA_API __GR_ATTR_EXPORT
#else
#  define DOA_API __GR_ATTR_IMPORT
#endif

#endif /* INCLUDED_DOA_API_H */
