// File generated by CPPExt (MPV)
//
#ifndef _gce_MakeScale2d_OCWrappers_HeaderFile
#define _gce_MakeScale2d_OCWrappers_HeaderFile

// include native header
#include <gce_MakeScale2d.hxx>
#include "../Converter.h"


#include "../gp/gp_Trsf2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCgp_Trsf2d;


//! This class implements an elementary construction algorithm for <br>
//! a scaling transformation in 2D space. The result is a gp_Trsf2d transformation. <br>
//! A MakeScale2d object provides a framework for: <br>
//! -   defining the construction of the transformation, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
public ref class OCgce_MakeScale2d  {

protected:
  gce_MakeScale2d* nativeHandle;
  OCgce_MakeScale2d(OCDummy^) {};

public:
  property gce_MakeScale2d* Handle
  {
    gce_MakeScale2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgce_MakeScale2d(gce_MakeScale2d* nativeHandle);

// Methods PUBLIC


//! Constructs a scaling transformation with: <br>
//! -   Point as the center of the transformation, and <br>
//! -   Scale as the scale factor. <br>
OCgce_MakeScale2d(OCNaroWrappers::OCgp_Pnt2d^ Point, Standard_Real Scale);

//! Returns the constructed transformation. <br>
 /*instead*/  OCgp_Trsf2d^ Value() ;


 /*instead*/  OCgp_Trsf2d^ Operator() ;

~OCgce_MakeScale2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
