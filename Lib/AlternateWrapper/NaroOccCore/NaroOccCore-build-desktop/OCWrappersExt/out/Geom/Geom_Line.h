// File generated by CPPExt (Transient)
//
#ifndef _Geom_Line_OCWrappers_HeaderFile
#define _Geom_Line_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_Line.hxx>
#include "../Converter.h"

#include "Geom_Curve.h"

#include "../gp/gp_Ax1.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax1;
ref class OCgp_Lin;
ref class OCgp_Pnt;
ref class OCgp_Dir;
ref class OCgp_Vec;
ref class OCgp_Trsf;
ref class OCGeom_Geometry;


//! Describes an infinite line. <br>
//! A line is defined and positioned in space with an axis <br>
//! (gp_Ax1 object) which gives it an origin and a unit vector. <br>
//! The Geom_Line line is parameterized: <br>
//! P (U) = O + U*Dir, where: <br>
//! - P is the point of parameter U, <br>
//! - O is the origin and Dir the unit vector of its positioning axis. <br>
//!   The parameter range is ] -infinite, +infinite [. <br>
//! The orientation of the line is given by the unit vector <br>
//! of its positioning axis. <br>
public ref class OCGeom_Line : OCGeom_Curve {

protected:
  // dummy constructor;
  OCGeom_Line(OCDummy^) : OCGeom_Curve((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_Line(Handle(Geom_Line)* nativeHandle);

// Methods PUBLIC


//!  Creates a line located in 3D space with the axis placement A1. <br>
//!  The Location of A1 is the origin of the line. <br>
OCGeom_Line(OCNaroWrappers::OCgp_Ax1^ A1);


//!  Creates a line from a non transient line from package gp. <br>
OCGeom_Line(OCNaroWrappers::OCgp_Lin^ L);


//! Constructs a line passing through point P and parallel to vector V <br>
//!   (P and V are, respectively, the origin and the unit <br>
//!   vector of the positioning axis of the line). <br>
OCGeom_Line(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Dir^ V);


//!  Set <me> so that <me> has the same geometric properties as L. <br>
 /*instead*/  void SetLin(OCNaroWrappers::OCgp_Lin^ L) ;

//! changes the direction of the line. <br>
 /*instead*/  void SetDirection(OCNaroWrappers::OCgp_Dir^ V) ;


//!  changes the "Location" point (origin) of the line. <br>
 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt^ P) ;


//!  changes the "Location" and a the "Direction" of <me>. <br>
 /*instead*/  void SetPosition(OCNaroWrappers::OCgp_Ax1^ A1) ;


//!  Returns non transient line from gp with the same geometric <br>
//!  properties as <me> <br>
 /*instead*/  OCgp_Lin^ Lin() ;

//! Returns the positioning axis of this line; this is also its local coordinate system. <br>
 /*instead*/  OCgp_Ax1^ Position() ;

//! Changes the orientation of this line. As a result, the <br>
//! unit vector of the positioning axis of this line is reversed. <br>
 /*instead*/  void Reverse() ;

//! Computes the parameter on the reversed line for the <br>
//! point of parameter U on this line. <br>
//! For a line, the returned value is -U. <br>
 /*instead*/  Standard_Real ReversedParameter(Standard_Real U) ;

//! Returns the value of the first parameter of this <br>
//! line. This is Standard_Real::RealFirst(). <br>
 /*instead*/  Standard_Real FirstParameter() ;

//! Returns the value of the last parameter of this <br>
//! line. This is  Standard_Real::RealLast(). <br>
 /*instead*/  Standard_Real LastParameter() ;

//! returns False <br>
 /*instead*/  System::Boolean IsClosed() ;

//! returns False <br>
 /*instead*/  System::Boolean IsPeriodic() ;

//! Returns GeomAbs_CN, which is the global continuity of any line. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;

//! returns True. <br>//! Raised if N < 0. <br>
 /*instead*/  System::Boolean IsCN(Standard_Integer N) ;

//! Returns in P the point of parameter U. <br>
//!  P (U) = O + U * Dir where O is the "Location" point of the <br>
//!  line and Dir the direction of the line. <br>
 /*instead*/  void D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P) ;


//!  Returns the point P of parameter u and the first derivative V1. <br>
 /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1) ;


//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. V2 is a vector with null magnitude <br>
//!  for a line. <br>
 /*instead*/  void D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2) ;


//!  V2 and V3 are vectors with null magnitude for a line. <br>
 /*instead*/  void D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3) ;


//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if N < 1. <br>
 /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Integer N) ;

//! Applies the transformation T to this line. <br>
 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;

//! Returns the  parameter on the  transformed  curve for <br>
//!          the transform of the point of parameter U on <me>. <br>
//! <br>
//!          me->Transformed(T)->Value(me->TransformedParameter(U,T)) <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U).Transformed(T) <br>
//! <br>
//!          This methods returns <U> * T.ScaleFactor() <br>
virtual /*instead*/  Standard_Real TransformedParameter(Standard_Real U, OCNaroWrappers::OCgp_Trsf^ T) override;

//! Returns a  coefficient to compute the parameter on <br>
//!          the transformed  curve  for  the transform  of the <br>
//!          point on <me>. <br>
//! <br>
//!          Transformed(T)->Value(U * ParametricTransformation(T)) <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          Value(U).Transformed(T) <br>
//! <br>
//!          This methods returns T.ScaleFactor() <br>
virtual /*instead*/  Standard_Real ParametricTransformation(OCNaroWrappers::OCgp_Trsf^ T) override;

//! Creates a new object which is a copy of this line. <br>
 /*instead*/  OCGeom_Geometry^ Copy() ;

~OCGeom_Line()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
