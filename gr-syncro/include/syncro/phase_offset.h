/* -*- c++ -*- */
/* 
 * Copyright 2022 <Ruben Dario Celis Bolaños>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_SYNCRO_PHASE_OFFSET_H
#define INCLUDED_SYNCRO_PHASE_OFFSET_H

#include <syncro/api.h>
#include <gnuradio/sync_block.h>

#define PI 3.14159265358979323846

namespace gr {
  namespace syncro {

    /*!
     * \brief <Bloque para calcular el offset o diferencia de fase entre señales y sincronizar.>
     * \ingroup syncro
     *
     */
    class SYNCRO_API phase_offset : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<phase_offset> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of syncro::phase_offset.
       *
       * To avoid accidental use of raw pointers, syncro::phase_offset's
       * constructor is in a private implementation
       * class. syncro::phase_offset::make is the public interface for
       * creating new instances.
       */
      static sptr make(double angle);
	virtual void set_angle_offset(double angle) = 0;
    };

  } // namespace syncro
} // namespace gr

#endif /* INCLUDED_SYNCRO_PHASE_OFFSET_H */

