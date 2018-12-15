// File generated by CPPExt (CPP file)
//

#include "GeomAPI_PointsToBSpline.h"
#include "../Converter.h"
#include "../Geom/Geom_BSplineCurve.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCGeomAPI_PointsToBSpline::OCGeomAPI_PointsToBSpline(GeomAPI_PointsToBSpline* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomAPI_PointsToBSpline::OCGeomAPI_PointsToBSpline() 
{
  nativeHandle = new GeomAPI_PointsToBSpline();
}

OCGeomAPI_PointsToBSpline::OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) 
{
  nativeHandle = new GeomAPI_PointsToBSpline(*((TColgp_Array1OfPnt*)Points->Handle), DegMin, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

OCGeomAPI_PointsToBSpline::OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCApprox_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) 
{
  nativeHandle = new GeomAPI_PointsToBSpline(*((TColgp_Array1OfPnt*)Points->Handle), (Approx_ParametrizationType)ParType, DegMin, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

OCGeomAPI_PointsToBSpline::OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) 
{
  nativeHandle = new GeomAPI_PointsToBSpline(*((TColgp_Array1OfPnt*)Points->Handle), *((TColStd_Array1OfReal*)Parameters->Handle), DegMin, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

OCGeomAPI_PointsToBSpline::OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Real Weight1, Standard_Real Weight2, Standard_Real Weight3, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) 
{
  nativeHandle = new GeomAPI_PointsToBSpline(*((TColgp_Array1OfPnt*)Points->Handle), Weight1, Weight2, Weight3, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

 void OCGeomAPI_PointsToBSpline::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D)
{
  ((GeomAPI_PointsToBSpline*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)Points->Handle), DegMin, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

 void OCGeomAPI_PointsToBSpline::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCApprox_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D)
{
  ((GeomAPI_PointsToBSpline*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)Points->Handle), (Approx_ParametrizationType)ParType, DegMin, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

 void OCGeomAPI_PointsToBSpline::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D)
{
  ((GeomAPI_PointsToBSpline*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)Points->Handle), *((TColStd_Array1OfReal*)Parameters->Handle), DegMin, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

 void OCGeomAPI_PointsToBSpline::Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Real Weight1, Standard_Real Weight2, Standard_Real Weight3, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D)
{
  ((GeomAPI_PointsToBSpline*)nativeHandle)->Init(*((TColgp_Array1OfPnt*)Points->Handle), Weight1, Weight2, Weight3, DegMax, (GeomAbs_Shape)Continuity, Tol3D);
}

OCGeom_BSplineCurve^ OCGeomAPI_PointsToBSpline::Curve()
{
  Handle(Geom_BSplineCurve) tmp = ((GeomAPI_PointsToBSpline*)nativeHandle)->Curve();
  return gcnew OCGeom_BSplineCurve(&tmp);
}

 System::Boolean OCGeomAPI_PointsToBSpline::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((GeomAPI_PointsToBSpline*)nativeHandle)->IsDone());
}

