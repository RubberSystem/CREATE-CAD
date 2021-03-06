// File generated by CPPExt (Transient)
//
#ifndef _Geom_SweptSurface_OCWrappers_HeaderFile
#define _Geom_SweptSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_SweptSurface.hxx>
#include "../Converter.h"

#include "Geom_Surface.h"

#include "../gp/gp_Dir.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCGeom_Curve;
ref class OCgp_Dir;


//! Describes the common behavior for surfaces <br>
//! constructed by sweeping a curve with another curve. <br>
//! The Geom package provides two concrete derived <br>
//! surfaces: surface of revolution (a revolved surface), <br>
//! and surface of linear extrusion (an extruded surface). <br>
public ref class OCGeom_SweptSurface : OCGeom_Surface {

protected:
  // dummy constructor;
  OCGeom_SweptSurface(OCDummy^) : OCGeom_Surface((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_SweptSurface(Handle(Geom_SweptSurface)* nativeHandle);

// Methods PUBLIC


//!  returns the continuity of the surface : <br>
//!  C0 : only geometric continuity, <br>
//!  C1 : continuity of the first derivative all along the surface, <br>
//!  C2 : continuity of the second derivative all along the surface, <br>
//!  C3 : continuity of the third derivative all along the surface, <br>
//!  G1 : tangency continuity all along the surface, <br>
//!  G2 : curvature continuity all along the surface, <br>
//!  CN : the order of continuity is infinite. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;


//!  Returns the reference direction of the swept surface. <br>
//!  For a surface of revolution it is the direction of the <br>
//!  revolution axis, for a surface of linear extrusion it is <br>
//!  the direction of extrusion. <br>
 /*instead*/  OCgp_Dir^ Direction() ;


//!  Returns the referenced curve of the surface. <br>
//!  For a surface of revolution it is the revolution curve, <br>
//!  for a surface of linear extrusion it is the extruded curve. <br>
 /*instead*/  OCGeom_Curve^ BasisCurve() ;

~OCGeom_SweptSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
