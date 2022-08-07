/* -*- c++ -*- */

#define SYNCRO_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "syncro_swig_doc.i"

%{
#include "syncro/phase_offset.h"
%}


%include "syncro/phase_offset.h"
GR_SWIG_BLOCK_MAGIC2(syncro, phase_offset);
