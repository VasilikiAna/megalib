/*
 * MResponseImagingBinnedMode.h
 *
 * Copyright (C) by Andreas Zoglauer.
 * All rights reserved.
 *
 * Please see the source-file for the copyright-notice.
 *
 */


#ifndef __MResponseImagingBinnedMode__
#define __MResponseImagingBinnedMode__


////////////////////////////////////////////////////////////////////////////////


// Standard libs:

// ROOT libs:

// MEGAlib libs:
#include "MGlobal.h"
#include "MResponseBuilder.h"
#include "MResponseMatrixON.h"

// Forward declarations:


////////////////////////////////////////////////////////////////////////////////


class MResponseImagingBinnedMode : public MResponseBuilder
{
  // public interface:
 public:
  MResponseImagingBinnedMode();
  virtual ~MResponseImagingBinnedMode();

  //! Initialize the response matrices and their generation
  virtual bool Initialize();

  //! Analyze th events (all if in file mode, one if in event-by-event mode)
  virtual bool Analyze();
    
  //! Finalize the response generation (i.e. save the data a final time )
  virtual bool Finalize();

  
  // protected methods:
 protected:

  //! Save the response matrices
  virtual bool Save();
  
  
  // private methods:
 private:



  // protected members:
 protected:
  //! The imaging response 
  MResponseMatrixON m_ImagingResponse;
  // the exposure
  MResponseMatrixON m_Exposure;
  //! The fine energy response (fine than the one in imaging)
  MResponseMatrixON m_EnergyResponse;
  

  // private members:
 private:



#ifdef ___CINT___
 public:
  ClassDef(MResponseImagingBinnedMode, 0) // no description
#endif

};

#endif


////////////////////////////////////////////////////////////////////////////////
