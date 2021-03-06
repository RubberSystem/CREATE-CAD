// File generated by CPPExt (CPP file)
//

#include "BRepIntCurveSurface_Inter.h"
#include "../Converter.h"
#include "../BRepTopAdaptor/BRepTopAdaptor_TopolTool.h"
#include "../BRepAdaptor/BRepAdaptor_HSurface.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../GeomAdaptor/GeomAdaptor_Curve.h"
#include "../gp/gp_Lin.h"
#include "../IntCurveSurface/IntCurveSurface_IntersectionPoint.h"
#include "../gp/gp_Pnt.h"
#include "../TopoDS/TopoDS_Face.h"


using namespace OCNaroWrappers;

OCBRepIntCurveSurface_Inter::OCBRepIntCurveSurface_Inter(BRepIntCurveSurface_Inter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepIntCurveSurface_Inter::OCBRepIntCurveSurface_Inter() 
{
  nativeHandle = new BRepIntCurveSurface_Inter();
}

 void OCBRepIntCurveSurface_Inter::Init(OCNaroWrappers::OCTopoDS_Shape^ Sh, OCNaroWrappers::OCGeomAdaptor_Curve^ Cu, Standard_Real Tol)
{
  ((BRepIntCurveSurface_Inter*)nativeHandle)->Init(*((TopoDS_Shape*)Sh->Handle), *((GeomAdaptor_Curve*)Cu->Handle), Tol);
}

 void OCBRepIntCurveSurface_Inter::Init(OCNaroWrappers::OCTopoDS_Shape^ Sh, OCNaroWrappers::OCgp_Lin^ L, Standard_Real Tol)
{
  ((BRepIntCurveSurface_Inter*)nativeHandle)->Init(*((TopoDS_Shape*)Sh->Handle), *((gp_Lin*)L->Handle), Tol);
}

 System::Boolean OCBRepIntCurveSurface_Inter::More()
{
  return OCConverter::StandardBooleanToBoolean(((BRepIntCurveSurface_Inter*)nativeHandle)->More());
}

 void OCBRepIntCurveSurface_Inter::Next()
{
  ((BRepIntCurveSurface_Inter*)nativeHandle)->Next();
}

OCIntCurveSurface_IntersectionPoint^ OCBRepIntCurveSurface_Inter::Point()
{
  IntCurveSurface_IntersectionPoint* tmp = new IntCurveSurface_IntersectionPoint();
  *tmp = ((BRepIntCurveSurface_Inter*)nativeHandle)->Point();
  return gcnew OCIntCurveSurface_IntersectionPoint(tmp);
}

OCgp_Pnt^ OCBRepIntCurveSurface_Inter::Pnt()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BRepIntCurveSurface_Inter*)nativeHandle)->Pnt();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCBRepIntCurveSurface_Inter::U()
{
  return ((BRepIntCurveSurface_Inter*)nativeHandle)->U();
}

 Standard_Real OCBRepIntCurveSurface_Inter::V()
{
  return ((BRepIntCurveSurface_Inter*)nativeHandle)->V();
}

 Standard_Real OCBRepIntCurveSurface_Inter::W()
{
  return ((BRepIntCurveSurface_Inter*)nativeHandle)->W();
}

 OCTopAbs_State OCBRepIntCurveSurface_Inter::State()
{
  return (OCTopAbs_State)(((BRepIntCurveSurface_Inter*)nativeHandle)->State());
}

 OCIntCurveSurface_TransitionOnCurve OCBRepIntCurveSurface_Inter::Transition()
{
  return (OCIntCurveSurface_TransitionOnCurve)(((BRepIntCurveSurface_Inter*)nativeHandle)->Transition());
}

OCTopoDS_Face^ OCBRepIntCurveSurface_Inter::Face()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepIntCurveSurface_Inter*)nativeHandle)->Face();
  return gcnew OCTopoDS_Face(tmp);
}


