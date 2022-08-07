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

#ifndef INCLUDED_SYNCRO_PHASE_OFFSET_IMPL_H
#define INCLUDED_SYNCRO_PHASE_OFFSET_IMPL_H

#include <syncro/phase_offset.h>

namespace gr {
  namespace syncro {

    class phase_offset_impl : public phase_offset
    {
     private:
	double d_offset_angle;
      // Nothing to declare in this block.

     public:
      phase_offset_impl(double angle);
      ~phase_offset_impl();


	void set_angle_offset(double angle)
       {
         d_offset_angle = angle;
       }
	

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace syncro
} // namespace gr

#endif /* INCLUDED_SYNCRO_PHASE_OFFSET_IMPL_H */

