/* -*- c++ -*- */
/* 
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
 */

#ifndef INCLUDED_DOA_CALIBRATE_LIN_ARRAY_IMPL_H
#define INCLUDED_DOA_CALIBRATE_LIN_ARRAY_IMPL_H

#include <doa/calibrate_lin_array.h>
#include <armadillo>
using namespace arma;

namespace gr {
  namespace doa {

    class calibrate_lin_array_impl : public calibrate_lin_array
    {
     private:
      float d_norm_spacing;
      int d_num_ant_ele;
      float d_pilot_angle;
      fcolvec d_array_loc;
      cx_fmat d_diagmat_v_vec;
      cx_fmat d_diagmat_v_vec_conj;

     public:
      calibrate_lin_array_impl(float norm_spacing, int num_ant_ele, float pilot_angle);
      ~calibrate_lin_array_impl();

      // Where all the action really happens
      void amv(cx_fcolvec& v_ii, fcolvec& array_loc, float theta);

      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace doa
} // namespace gr

#endif /* INCLUDED_DOA_CALIBRATE_LIN_ARRAY_IMPL_H */

