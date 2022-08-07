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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "phase_offset_impl.h"

namespace gr {
  namespace syncro {

    phase_offset::sptr
    phase_offset::make(double angle)
    {
      return gnuradio::get_initial_sptr
        (new phase_offset_impl(angle));
    }

    /*
     * The private constructor
     */
    phase_offset_impl::phase_offset_impl(double angle)
      : gr::sync_block("phase_offset",
              gr::io_signature::make(1, 1, sizeof(gr_complex)),
              gr::io_signature::make(1, 1, sizeof(gr_complex)))
	, d_offset_angle(angle)
    {}

    /*
     * Our virtual destructor.
     */
    phase_offset_impl::~phase_offset_impl()
    {
    }

    int
    phase_offset_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      const gr_complex *in = (const gr_complex *) input_items[0];
      gr_complex *out = (gr_complex *) output_items[0];

	double rad = d_offset_angle/180*PI;//Convertir el ángulo en radianes

      // Do <+signal processing+>
	for (int i = 0; i < noutput_items; ++i)
        {
          out[i] = in[i] * gr_complex(cos(rad), sin(rad));
         } 

        std::cout << "d_offset_angle = " << d_offset_angle << std::endl;

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace syncro */
} /* namespace gr */

