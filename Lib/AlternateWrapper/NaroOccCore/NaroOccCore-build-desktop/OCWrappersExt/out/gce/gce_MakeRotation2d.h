// File generated by CPPExt (MPV)
//
#ifndef _gce_MakeRotation2d_OCWrappers_HeaderFile
#define _gce_MakeRotation2d_OCWrappers_HeaderFile

// include native header
#include <gce_MakeRotation2d.hxx>
#include "../Converter.h"


#include "../gp/gp_Trsf2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCgp_Trsf2d;


//! Implements an elementary construction algorithm for <br>
//! a rotation in 2D space. The result is a gp_Trsf2d transformation. <br>
//! A MakeRotation2d object provides a framework for: <br>
//! -   defining the construction of the transformation, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
public ref class OCgce_MakeRotation2d  {

protected:
  gce_MakeRotation2d* nativeHandle;
  OCgce_MakeRotation2d(OCDummy^) {};

public:
  property gce_MakeRotation2d* Handle
  {
    gce_MakeRotation2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgce_MakeRotation2d(gce_MakeRotation2d* nativeHandle);

// Methods PUBLIC

//! Constructs a rotation through angle Angle about the center Point. <br>
OCgce_MakeRotation2d(OCNaroWrappers::OCgp_Pnt2d^ Point, Standard_Real Angle);

//! Returns the constructed transformation. <br>
 /*instead*/  OCgp_Trsf2d^ Value() ;


 /*instead*/  OCgp_Trsf2d^ Operator() ;

~OCgce_MakeRotation2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
