// File generated by CPPExt (Transient)
//
#ifndef _ShapeAnalysis_Surface_OCWrappers_HeaderFile
#define _ShapeAnalysis_Surface_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeAnalysis_Surface.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../Extrema/Extrema_ExtPS.h"
#include "../GeomAdaptor/GeomAdaptor_Surface.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Pnt2d.h"
#include "../Bnd/Bnd_Box.h"


namespace OCNaroWrappers
{

ref class OCGeom_Surface;
ref class OCGeomAdaptor_HSurface;
ref class OCGeom_Curve;
ref class OCgp_Pnt2d;
ref class OCgp_Pnt;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfPnt2d;
ref class OCBnd_Box;


//! Complements standard tool Geom_Surface by providing additional <br>
//!          functionality for detection surface singularities, checking <br>
//!          spatial surface closure and computing projections of 3D points <br>
//!          onto a surface. <br>
public ref class OCShapeAnalysis_Surface : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCShapeAnalysis_Surface(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeAnalysis_Surface(Handle(ShapeAnalysis_Surface)* nativeHandle);

// Methods PUBLIC

//! Creates an analyzer object on the basis of existing surface <br>
OCShapeAnalysis_Surface(OCNaroWrappers::OCGeom_Surface^ S);

//! Loads existing surface <br>
 /*instead*/  void Init(OCNaroWrappers::OCGeom_Surface^ S) ;

//! Reads all the data from another Surface, without recomputing <br>
 /*instead*/  void Init(OCNaroWrappers::OCShapeAnalysis_Surface^ other) ;


 /*instead*/  void SetDomain(Standard_Real U1, Standard_Real U2, Standard_Real V1, Standard_Real V2) ;

//! Returns a surface being analyzed <br>
 /*instead*/  OCGeom_Surface^ Surface() ;

//! Returns the Adaptor. <br>
//!          Creates it if not yet done. <br>
 /*instead*/  OCGeomAdaptor_HSurface^ Adaptor3d() ;

//! Returns the Adaptor (may be Null if method Adaptor() was not called) <br>
 /*instead*/  OCGeomAdaptor_HSurface^ TrueAdaptor3d() ;

//! Returns 3D distance found by one of the following methods. <br>
//!          IsDegenerated, DegeneratedValues, ProjectDegenerated <br>
//!          (distance between 3D point and found or last (if not found) <br>
//!          singularity), <br>
//!          IsUClosed, IsVClosed (minimum value of precision to consider <br>
//!          the surface to be closed), <br>
//!          ValueOfUV (distance between 3D point and found solution). <br>
 /*instead*/  Standard_Real Gap() ;

//! Returns a 3D point specified by parameters in surface <br>
//!          parametrical space <br>
 /*instead*/  OCgp_Pnt^ Value(Standard_Real u, Standard_Real v) ;

//! Returns a 3d point specified by a point in surface <br>
//!          parametrical space <br>
 /*instead*/  OCgp_Pnt^ Value(OCNaroWrappers::OCgp_Pnt2d^ p2d) ;

//! Returns True if the surface has singularities for the given <br>
//!          precision (i.e. if there are surface singularities with sizes <br>
//!          not greater than precision). <br>
 /*instead*/  System::Boolean HasSingularities(Standard_Real preci) ;

//! Returns the number of singularities for the given precision <br>
//!          (i.e. number of surface singularities with sizes not greater <br>
//!          than precision). <br>
 /*instead*/  Standard_Integer NbSingularities(Standard_Real preci) ;

//! Returns the characteristics of the singularity specified by <br>
//!          its rank number <num>. <br>
//!          That means, that it is not neccessary for <num> to be in the <br>
//!          range [1, NbSingularities] but must be not greater than <br>
//!          possible (see ComputeSingularities). <br>
//!          The returned characteristics are: <br>
//!          preci: the smallest precision with which the iso-line is <br>
//!                 considered as degenerated, <br>
//!          P3d: 3D point of singularity (middle point of the surface <br>
//!               iso-line), <br>
//!          firstP2d and lastP2d: first and last 2D points of the <br>
//!                                iso-line in parametrical surface, <br>
//!          firstpar and lastpar: first and last parameters of the <br>
//!                                iso-line in parametrical surface, <br>
//!          uisodeg: if the degenerated iso-line is U-iso (True) or <br>
//!          V-iso (False). <br>
//!          Returns False if <num> is out of range, else returns True. <br>
 /*instead*/  System::Boolean Singularity(Standard_Integer num, Standard_Real& preci, OCNaroWrappers::OCgp_Pnt^ P3d, OCNaroWrappers::OCgp_Pnt2d^ firstP2d, OCNaroWrappers::OCgp_Pnt2d^ lastP2d, Standard_Real& firstpar, Standard_Real& lastpar, System::Boolean& uisodeg) ;

//! Returns True if there is at least one surface boundary which <br>
//!          is considered as degenerated with <preci> and distance <br>
//!          between P3d and corresponding singular point is less than <br>
//!          <preci> <br>
 /*instead*/  System::Boolean IsDegenerated(OCNaroWrappers::OCgp_Pnt^ P3d, Standard_Real preci) ;

//! Returns True if there is at least one surface iso-line which <br>
//!          is considered as degenerated with <preci> and distance <br>
//!          between P3d and corresponding singular point is less than <br>
//!          <preci> (like IsDegenerated). <br>
//!          Returns characteristics of the first found boundary matching <br>
//!          those criteria. <br>
 /*instead*/  System::Boolean DegeneratedValues(OCNaroWrappers::OCgp_Pnt^ P3d, Standard_Real preci, OCNaroWrappers::OCgp_Pnt2d^ firstP2d, OCNaroWrappers::OCgp_Pnt2d^ lastP2d, Standard_Real& firstpar, Standard_Real& lastpar, System::Boolean forward) ;

//! Projects a point <P3d> on a singularity by computing <br>
//!          one of the coordinates of preliminary computed <result>. <br>
 /*instead*/  System::Boolean ProjectDegenerated(OCNaroWrappers::OCgp_Pnt^ P3d, Standard_Real preci, OCNaroWrappers::OCgp_Pnt2d^ neighbour, OCNaroWrappers::OCgp_Pnt2d^ result) ;

//! Checks points at the beginning (direct is True) or end <br>
//!          (direct is False) of array <points> to lie in singularity of <br>
//!          surface, and if yes, adjusts the indeterminate 2d coordinate <br>
//!          of these points by nearest point which is not in singularity. <br>
//!          Returns True if some points were adjusted. <br>
 /*instead*/  System::Boolean ProjectDegenerated(Standard_Integer nbrPnt, OCNaroWrappers::OCTColgp_Array1OfPnt^ points, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ pnt2d, Standard_Real preci, System::Boolean direct) ;

//! Returns True if straight pcurve going from point p2d1 to p2d2 <br>
//!          is degenerate, i.e. lies in the singularity of the surface. <br>
//!          NOTE: it uses another method of detecting singularity than <br>
//!                used by ComputeSingularities() et al.! <br>
//!          For that, maximums of distances between points p2d1, p2d2 <br>
//!          and 0.5*(p2d1+p2d2) and between corresponding 3d points are <br>
//!          computed. <br>
//!          The pcurve (p2d1, p2d2) is considered as degenerate if: <br>
//!          - max distance in 3d is less than <tol> <br>
//!          - max distance in 2d is at least <ratio> times greather than <br>
//!            the Resolution computed from max distance in 3d <br>
//!            (max3d < tol && max2d > ratio * Resolution(max3d)) <br>
//!          NOTE: <ratio> should be >1 (e.g. 10) <br>
 /*instead*/  System::Boolean IsDegenerated(OCNaroWrappers::OCgp_Pnt2d^ p2d1, OCNaroWrappers::OCgp_Pnt2d^ p2d2, Standard_Real tol, Standard_Real ratio) ;

//! Returns the bounds of the surface <br>
//!          (from Bounds from Surface, but buffered) <br>
 /*instead*/  void Bounds(Standard_Real& ufirst, Standard_Real& ulast, Standard_Real& vfirst, Standard_Real& vlast) ;

//! Computes bound isos (protected against exceptions) <br>
 /*instead*/  void ComputeBoundIsos() ;

//! Returns a U-Iso. Null if not possible or failed <br>
//!          Remark : bound isos are buffered <br>
 /*instead*/  OCGeom_Curve^ UIso(Standard_Real U) ;

//! Returns a V-Iso. Null if not possible or failed <br>
//!          Remark : bound isos are buffered <br>
 /*instead*/  OCGeom_Curve^ VIso(Standard_Real V) ;

//! Tells if the Surface is spatially closed in U with given <br>
//!          precision. If <preci> < 0 then Precision::Confusion is used. <br>
//!          If Geom_Surface says that the surface is U-closed, this method <br>
//!          also says this. Otherwise additional analysis is performed, <br>
//!          comparing given precision with the following distances: <br>
//!          - periodic B-Splines are closed, <br>
//!          - polinomial B-Spline with boundary multiplicities degree+1 <br>
//!            and Bezier - maximum distance between poles, <br>
//!          - rational B-Spline or one with boundary multiplicities not <br>
//!            degree+1 - maximum distance computed at knots and their <br>
//!            middles, <br>
//!          - surface of extrusion - distance between ends of basis <br>
//!            curve, <br>
//!          - other (RectangularTrimmed and Offset) - maximum distance <br>
//!            computed at 100 equi-distanted points. <br>
 /*instead*/  System::Boolean IsUClosed(Standard_Real preci) ;

//! Tells if the Surface is spatially closed in V with given <br>
//!          precision. If <preci> < 0 then Precision::Confusion is used. <br>
//!          If Geom_Surface says that the surface is V-closed, this method <br>
//!          also says this. Otherwise additional analysis is performed, <br>
//!          comparing given precision with the following distances: <br>
//!          - periodic B-Splines are closed, <br>
//!          - polinomial B-Spline with boundary multiplicities degree+1 <br>
//!            and Bezier - maximum distance between poles, <br>
//!          - rational B-Spline or one with boundary multiplicities not <br>
//!            degree+1 - maximum distance computed at knots and their <br>
//!            middles, <br>
//!          - surface of revolution - distance between ends of basis <br>
//!            curve, <br>
//!          - other (RectangularTrimmed and Offset) - maximum distance <br>
//!            computed at 100 equi-distanted points. <br>
 /*instead*/  System::Boolean IsVClosed(Standard_Real preci) ;

//! Computes the parameters in the surface parametrical space of <br>
//!          3D point. <br>
//!          The result is parameters of the point projected onto the <br>
//!          surface. <br>
//!          This method enhances functionality provided by the standard <br>
//!          tool GeomAPI_ProjectPointOnSurface by treatment of cases when <br>
//!          the projected point is near to the surface boundaries and <br>
//!          when this standard tool fails. <br>
 /*instead*/  OCgp_Pnt2d^ ValueOfUV(OCNaroWrappers::OCgp_Pnt^ P3D, Standard_Real preci) ;

//! Projects a point P3D on the surface. <br>
//!          Does the same thing as ValueOfUV but tries to optimize <br>
//!          computations by taking into account previous point <p2dPrev>: <br>
//!          makes a step by UV and tries Newton algorithm. <br>
//!          If <maxpreci> >0. and distance between solution and <br>
//!          P3D is greater than <maxpreci>, that solution is considered <br>
//!          as bad, and ValueOfUV() is used. <br>
//!          If not succeded, calls ValueOfUV() <br>
 /*instead*/  OCgp_Pnt2d^ NextValueOfUV(OCNaroWrappers::OCgp_Pnt2d^ p2dPrev, OCNaroWrappers::OCgp_Pnt^ P3D, Standard_Real preci, Standard_Real maxpreci) ;

//! Tries a refinement of an already computed couple (U,V) by <br>
//!          using projecting 3D point on iso-lines: <br>
//!          1. boundaries of the surface, <br>
//!          2. iso-lines passing through (U,V) <br>
//!          3. iteratively received iso-lines passing through new U and <br>
//!             new V (number of iterations is limited by 5 in each <br>
//!             direction) <br>
//!          Returns the best resulting distance between P3D and Value(U,V) <br>
//!          in the case of success. Else, returns a very great value <br>
 /*instead*/  Standard_Real UVFromIso(OCNaroWrappers::OCgp_Pnt^ P3D, Standard_Real preci, Standard_Real& U, Standard_Real& V) ;

//! Returns minimum value to consider the surface as U-closed <br>
 /*instead*/  Standard_Real UCloseVal() ;

//! Returns minimum value to consider the surface as V-closed <br>
 /*instead*/  Standard_Real VCloseVal() ;


 /*instead*/  OCBnd_Box^ GetBoxUF() ;


 /*instead*/  OCBnd_Box^ GetBoxUL() ;


 /*instead*/  OCBnd_Box^ GetBoxVF() ;


 /*instead*/  OCBnd_Box^ GetBoxVL() ;

~OCShapeAnalysis_Surface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
