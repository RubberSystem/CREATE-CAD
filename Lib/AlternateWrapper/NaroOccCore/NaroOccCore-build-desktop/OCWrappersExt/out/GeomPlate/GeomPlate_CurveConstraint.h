// File generated by CPPExt (Transient)
//
#ifndef _GeomPlate_CurveConstraint_OCWrappers_HeaderFile
#define _GeomPlate_CurveConstraint_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomPlate_CurveConstraint.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../GeomLProp/GeomLProp_SLProps.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurveOnSurface;
ref class OCAdaptor3d_HCurve;
ref class OCGeom2d_Curve;
ref class OCAdaptor2d_HCurve2d;
ref class OCLaw_Function;
ref class OCGeomLProp_SLProps;
ref class OCgp_Pnt;
ref class OCgp_Vec;



//! Defines curves as constraints to be used to deform a surface. <br>
public ref class OCGeomPlate_CurveConstraint : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGeomPlate_CurveConstraint(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomPlate_CurveConstraint(Handle(GeomPlate_CurveConstraint)* nativeHandle);

// Methods PUBLIC


//! Initializes an empty curve constraint object. <br>
OCGeomPlate_CurveConstraint();

//! Create a constraint <br>
//!  Order is the order of the constraint. The possible values for order are -1,0,1,2. <br>
//!  Order i means constraints Gi <br>
//!  Npt is the number of points associated with the constraint. <br>
//!  TolDist is the maximum error to satisfy for G0 constraints <br>
//!  TolAng is the maximum error to satisfy for G1 constraints <br>
//!  TolCurv is the maximum error to satisfy for G2 constraints <br>
//!  These errors can be replaced by laws of criterion. <br>
//! Raises    ConstructionError if Order is not -1 , 0,  1,  2 <br>
OCGeomPlate_CurveConstraint(OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ Boundary, Standard_Integer Order, Standard_Integer NPt, Standard_Real TolDist, Standard_Real TolAng, Standard_Real TolCurv);

//! Create a constraint <br>
//!  Order is the order of the constraint. The possible values for order are -1,0. <br>
//!  Order i means constraints Gi <br>
//!  Npt is the number of points associated with the constraint. <br>
//!  TolDist is the maximum error to satisfy for G0 constraints <br>
//!  These errors can be replaced by laws of criterion. <br>
//! Raises    ConstructionError if Order  is  not  0  or  -1 <br>
OCGeomPlate_CurveConstraint(OCNaroWrappers::OCAdaptor3d_HCurve^ Boundary, Standard_Integer Tang, Standard_Integer NPt, Standard_Real TolDist);

//! Allows you to set the order of continuity required for <br>
//! the constraints: G0, G1, and G2, controlled <br>
//! respectively by G0Criterion G1Criterion and G2Criterion. <br>
 /*instead*/  void SetOrder(Standard_Integer Order) ;

//! Returns the order of constraint, one of G0, G1 or G2. <br>
 /*instead*/  Standard_Integer Order() ;

//! Returns the number of points on the curve used as a <br>
//! constraint. The default setting is 10. This parameter <br>
//! affects computation time, which increases by the cube of <br>
//! the number of points. <br>
 /*instead*/  Standard_Integer NbPoints() ;


//! Allows you to set the number of points on the curve <br>
//! constraint. The default setting is 10. This parameter <br>
//! affects computation time, which increases by the cube of <br>
//! the number of points. <br>
 /*instead*/  void SetNbPoints(Standard_Integer NewNb) ;


//! Allows you to set the G0 criterion. This is the law <br>
//! defining the greatest distance allowed between the <br>
//! constraint and the target surface for each point of the <br>
//! constraint. If this criterion is not set, TolDist, the <br>
//! distance tolerance from the constructor, is used. <br>
 /*instead*/  void SetG0Criterion(OCNaroWrappers::OCLaw_Function^ G0Crit) ;


//! Allows you to set the G1 criterion. This is the law <br>
//! defining the greatest angle allowed between the <br>
//! constraint and the target surface. If this criterion is not <br>
//! set, TolAng, the angular tolerance from the constructor, is used. <br>
//! Raises  ConstructionError if  the  curve  is  not  on  a  surface <br>
 /*instead*/  void SetG1Criterion(OCNaroWrappers::OCLaw_Function^ G1Crit) ;


 /*instead*/  void SetG2Criterion(OCNaroWrappers::OCLaw_Function^ G2Crit) ;

//!  Returns the G0 criterion at the parametric point U on <br>
//! the curve. This is the greatest distance allowed between <br>
//! the constraint and the target surface at U. <br>
 /*instead*/  Standard_Real G0Criterion(Standard_Real U) ;

//! Returns the G1 criterion at the parametric point U on <br>
//! the curve. This is the greatest angle allowed between <br>
//! the constraint and the target surface at U. <br>
//! Raises  ConstructionError if  the  curve  is  not  on  a  surface <br>
 /*instead*/  Standard_Real G1Criterion(Standard_Real U) ;

//! Returns the G2 criterion at the parametric point U on <br>
//! the curve. This is the greatest difference in curvature <br>
//! allowed between the constraint and the target surface at U. <br>
//! Raises  ConstructionError if  the  curve  is  not  on  a  surface <br>
 /*instead*/  Standard_Real G2Criterion(Standard_Real U) ;


 /*instead*/  Standard_Real FirstParameter() ;


 /*instead*/  Standard_Real LastParameter() ;


 /*instead*/  Standard_Real Length() ;


 /*instead*/  OCGeomLProp_SLProps^ LPropSurf(Standard_Real U) ;


 /*instead*/  void D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2) ;


 /*instead*/  void D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3, OCNaroWrappers::OCgp_Vec^ V4, OCNaroWrappers::OCgp_Vec^ V5) ;


 /*instead*/  OCAdaptor3d_HCurve^ Curve3d() ;

//! loads a 2d curve associated the surface resulting of the constraints <br>
 /*instead*/  void SetCurve2dOnSurf(OCNaroWrappers::OCGeom2d_Curve^ Curve2d) ;

//! Returns a 2d curve associated the surface resulting of the constraints <br>
//! <br>
 /*instead*/  OCGeom2d_Curve^ Curve2dOnSurf() ;

//!  loads a 2d curve  resulting from the normal projection of <br>
//!          the curve on the initial surface <br>
//! <br>
 /*instead*/  void SetProjectedCurve(OCNaroWrappers::OCAdaptor2d_HCurve2d^ Curve2d, Standard_Real TolU, Standard_Real TolV) ;

//! Returns the projected curve resulting from the normal projection of the <br>
//!          curve on the initial surface <br>
//! <br>
 /*instead*/  OCAdaptor2d_HCurve2d^ ProjectedCurve() ;

~OCGeomPlate_CurveConstraint()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
