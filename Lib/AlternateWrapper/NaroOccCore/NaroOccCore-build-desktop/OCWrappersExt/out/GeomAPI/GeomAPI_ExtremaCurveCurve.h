// File generated by CPPExt (MPV)
//
#ifndef _GeomAPI_ExtremaCurveCurve_OCWrappers_HeaderFile
#define _GeomAPI_ExtremaCurveCurve_OCWrappers_HeaderFile

// include native header
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include "../Converter.h"


#include "../Extrema/Extrema_ExtCC.h"
#include "../GeomAdaptor/GeomAdaptor_Curve.h"
#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCGeom_Curve;
ref class OCgp_Pnt;
ref class OCExtrema_ExtCC;


//! Describes functions for computing all the extrema <br>
//! between two 3D curves. <br>
//! An ExtremaCurveCurve algorithm minimizes or <br>
//! maximizes the distance between a point on the first <br>
//! curve and a point on the second curve. Thus, it <br>
//! computes start and end points of perpendiculars <br>
//! common to the two curves (an intersection point is <br>
//! not an extremum unless the two curves are tangential at this point). <br>
//! Solutions consist of pairs of points, and an extremum <br>
//! is considered to be a segment joining the two points of a solution. <br>
//! An ExtremaCurveCurve object provides a framework for: <br>
//! -   defining the construction of the extrema, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. <br>
//! Warning <br>
//! In some cases, the nearest points between two <br>
//! curves do not correspond to one of the computed <br>
//! extrema. Instead, they may be given by: <br>
//! -   a limit point of one curve and one of the following: <br>
//!   -   its orthogonal projection on the other curve, <br>
//!   -   a limit point of the other curve; or <br>
//!   -   an intersection point between the two curves. <br>
public ref class OCGeomAPI_ExtremaCurveCurve  {

protected:
  GeomAPI_ExtremaCurveCurve* nativeHandle;
  OCGeomAPI_ExtremaCurveCurve(OCDummy^) {};

public:
  property GeomAPI_ExtremaCurveCurve* Handle
  {
    GeomAPI_ExtremaCurveCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomAPI_ExtremaCurveCurve(GeomAPI_ExtremaCurveCurve* nativeHandle);

// Methods PUBLIC

//! Constructs an empty algorithm for computing <br>
//! extrema between two curves. Use an Init function <br>
//! to define the curves on which it is going to work. <br>
OCGeomAPI_ExtremaCurveCurve();

//! Computes the extrema between the curves C1 and C2. <br>
OCGeomAPI_ExtremaCurveCurve(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2);

//! Computes   the portion of the curve C1 limited by the two <br>
//!    points of parameter (U1min,U1max), and <br>
//!  -   the portion of the curve C2 limited by the two <br>
//!   points of parameter (U2min,U2max). <br>
//!        Warning <br>
//! Use the function NbExtrema to obtain the number <br>
//! of solutions. If this algorithm fails, NbExtrema returns 0. <br>
OCGeomAPI_ExtremaCurveCurve(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2, Quantity_Parameter U1min, Quantity_Parameter U1max, Quantity_Parameter U2min, Quantity_Parameter U2max);

//! Initializes this algorithm with the given arguments <br>
//! and computes the extrema between the curves C1 and C2 <br>
 /*instead*/  void Init(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2) ;

//! Initializes this algorithm with the given arguments <br>
//! and computes the extrema between : <br>
//!   -   the portion of the curve C1 limited by the two <br>
//!    points of parameter (U1min,U1max), and <br>
//!   -   the portion of the curve C2 limited by the two <br>
//!    points of parameter (U2min,U2max). <br>
//!        Warning <br>
//! Use the function NbExtrema to obtain the number <br>
//! of solutions. If this algorithm fails, NbExtrema returns 0. <br>
 /*instead*/  void Init(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2, Quantity_Parameter U1min, Quantity_Parameter U1max, Quantity_Parameter U2min, Quantity_Parameter U2max) ;

//! Returns the number of extrema computed by this algorithm. <br>
//! Note: if this algorithm fails, NbExtrema returns 0. <br>
 /*instead*/  Standard_Integer NbExtrema() ;

//! Returns the points P1 on the first curve and P2 on <br>
//! the second curve, which are the ends of the <br>
//! extremum of index Index computed by this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ <br>
//! 1,NbExtrema ], where NbExtrema is the <br>
//! number of extrema computed by this algorithm. <br>
 /*instead*/  void Points(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

//! Returns the parameters U1 of the point on the first <br>
//! curve and U2 of the point on the second curve, which <br>
//! are the ends of the extremum of index Index computed by this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ <br>
//! 1,NbExtrema ], where NbExtrema is the <br>
//! number of extrema computed by this algorithm. <br>
 /*instead*/  void Parameters(Standard_Integer Index, Quantity_Parameter& U1, Quantity_Parameter& U2) ;

//! Computes the distance between the end points of the <br>
//! extremum of index Index computed by this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ <br>
//! 1,NbExtrema ], where NbExtrema is the <br>
//! number of extrema computed by this algorithm. <br>
 /*instead*/  Quantity_Length Distance(Standard_Integer Index) ;

//! Returns the points P1 on the first curve and P2 on <br>
//! the second curve, which are the ends of the shortest <br>
//! extremum computed by this algorithm. <br>
//! Exceptions StdFail_NotDone if this algorithm fails. <br>
 /*instead*/  void NearestPoints(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

//! Returns the parameters U1 of the point on the first <br>
//! curve and U2 of the point on the second curve, which <br>
//! are the ends of the shortest extremum computed by this algorithm. <br>
//! Exceptions StdFail_NotDone if this algorithm fails. <br>
 /*instead*/  void LowerDistanceParameters(Quantity_Parameter& U1, Quantity_Parameter& U2) ;

//! Computes the distance between the end points of the <br>
//! shortest extremum computed by this algorithm. <br>
//! Exceptions StdFail_NotDone if this algorithm fails. <br>
 /*instead*/  Quantity_Length LowerDistance() ;

//! return the algorithmic object from Extrema <br>
 /*instead*/  OCExtrema_ExtCC^ Extrema() ;

//! set  in  <P1>  and <P2> the couple solution points <br>
//!          such a the distance [P1,P2] is the minimum. taking  in  account <br>
//!          extremity  points  of  curves. <br>
 /*instead*/  System::Boolean TotalNearestPoints(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

//! set  in <U1> and <U2> the parameters of the couple <br>
//!          solution   points  which  represents  the  total  nearest <br>
//!          solution. <br>
 /*instead*/  System::Boolean TotalLowerDistanceParameters(Quantity_Parameter& U1, Quantity_Parameter& U2) ;

//! return the distance of the total  nearest couple solution <br>
//!          point. <br>//! if <myExtCC> is not done <br>
 /*instead*/  Quantity_Length TotalLowerDistance() ;

~OCGeomAPI_ExtremaCurveCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif