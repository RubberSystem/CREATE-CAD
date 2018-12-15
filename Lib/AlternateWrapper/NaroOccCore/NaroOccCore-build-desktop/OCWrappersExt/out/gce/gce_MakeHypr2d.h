// File generated by CPPExt (MPV)
//
#ifndef _gce_MakeHypr2d_OCWrappers_HeaderFile
#define _gce_MakeHypr2d_OCWrappers_HeaderFile

// include native header
#include <gce_MakeHypr2d.hxx>
#include "../Converter.h"

#include "gce_Root.h"

#include "../gp/gp_Hypr2d.h"
#include "gce_Root.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCgp_Ax2d;
ref class OCgp_Ax22d;
ref class OCgp_Hypr2d;


//!This class implements the following algorithms used to <br>
//!          create a 2d Hyperbola from gp. <br>
//!          * Create a 2d Hyperbola from its center and two points: <br>
//!            one on its axis of symmetry giving the major radius, the <br>
//!            other giving the value of the small radius. <br>
//!          * Create a 2d Hyperbola from its major axis and its major <br>
//!            radius and its minor radius. <br>
//! <br>
public ref class OCgce_MakeHypr2d  : public OCgce_Root {

protected:
  // dummy constructor;
  OCgce_MakeHypr2d(OCDummy^) : OCgce_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCgce_MakeHypr2d(gce_MakeHypr2d* nativeHandle);

// Methods PUBLIC

//! Constructs a hyperbola <br>
//!   centered on the point Center, where: <br>
//!   -   the major axis of the hyperbola is defined by Center and point S1, <br>
//!   -   the major radius is the distance between Center and S1, and <br>
//!   -   the minor radius is the distance between point S2 and the major axis. <br>
OCgce_MakeHypr2d(OCNaroWrappers::OCgp_Pnt2d^ S1, OCNaroWrappers::OCgp_Pnt2d^ S2, OCNaroWrappers::OCgp_Pnt2d^ Center);

//! Constructs a hyperbola with major and minor radii MajorRadius and <br>
//!   MinorRadius, where: <br>
//!   -   the center of the hyperbola is the origin of the axis MajorAxis, and <br>
//!   -   the major axis is defined by MajorAxis if Sense <br>
//! is true, or the opposite axis to MajorAxis if Sense is false; or <br>
//! -   centered on the origin of the coordinate system <br>
//!   A, with major and minor radii MajorRadius and <br>
//!   MinorRadius, where its major axis is the "X Axis" <br>
//!   of A (A is the local coordinate system of the hyperbola). <br>
OCgce_MakeHypr2d(OCNaroWrappers::OCgp_Ax2d^ MajorAxis, Standard_Real MajorRadius, Standard_Real MinorRadius, System::Boolean Sense);

//!Creates a Hypr2d centered on the origin of the coordinate system <br>
//!  A, with major and minor radii MajorRadius and <br>
//!  MinorRadius, where its major axis is the "X Axis" <br>
//!  of A (A is the local coordinate system of the hyperbola). <br>
OCgce_MakeHypr2d(OCNaroWrappers::OCgp_Ax22d^ A, Standard_Real MajorRadius, Standard_Real MinorRadius);

//! Returns the constructed hyperbola. <br>
//! Exceptions StdFail_NotDone if no hyperbola is constructed. <br>
 /*instead*/  OCgp_Hypr2d^ Value() ;


 /*instead*/  OCgp_Hypr2d^ Operator() ;

~OCgce_MakeHypr2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif