// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_Hctxff2d.h"
#include "../Converter.h"
#include "../BRepAdaptor/BRepAdaptor_HSurface.h"
#include "../TopoDS/TopoDS_Face.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_Hctxff2d::OCTopOpeBRep_Hctxff2d(Handle(TopOpeBRep_Hctxff2d)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRep_Hctxff2d(*nativeHandle);
}

OCTopOpeBRep_Hctxff2d::OCTopOpeBRep_Hctxff2d() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRep_Hctxff2d(new TopOpeBRep_Hctxff2d());
}

 void OCTopOpeBRep_Hctxff2d::SetFaces(OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2)
{
  (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->SetFaces(*((TopoDS_Face*)F1->Handle), *((TopoDS_Face*)F2->Handle));
}

 void OCTopOpeBRep_Hctxff2d::SetHSurfaces(OCNaroWrappers::OCBRepAdaptor_HSurface^ S1, OCNaroWrappers::OCBRepAdaptor_HSurface^ S2)
{
  (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->SetHSurfaces(*((Handle_BRepAdaptor_HSurface*)S1->Handle), *((Handle_BRepAdaptor_HSurface*)S2->Handle));
}

 void OCTopOpeBRep_Hctxff2d::SetTolerances(Standard_Real Tol1, Standard_Real Tol2)
{
  (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->SetTolerances(Tol1, Tol2);
}

 void OCTopOpeBRep_Hctxff2d::GetTolerances(Standard_Real& Tol1, Standard_Real& Tol2)
{
  (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->GetTolerances(Tol1, Tol2);
}

 Standard_Real OCTopOpeBRep_Hctxff2d::GetMaxTolerance()
{
  return (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->GetMaxTolerance();
}

OCTopoDS_Face^ OCTopOpeBRep_Hctxff2d::Face(Standard_Integer I)
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->Face(I);
  return gcnew OCTopoDS_Face(tmp);
}

OCBRepAdaptor_HSurface^ OCTopOpeBRep_Hctxff2d::HSurface(Standard_Integer I)
{
  Handle(BRepAdaptor_HSurface) tmp = (*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->HSurface(I);
  return gcnew OCBRepAdaptor_HSurface(&tmp);
}

 System::Boolean OCTopOpeBRep_Hctxff2d::SurfacesSameOriented()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->SurfacesSameOriented());
}

 System::Boolean OCTopOpeBRep_Hctxff2d::FacesSameOriented()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->FacesSameOriented());
}

 System::Boolean OCTopOpeBRep_Hctxff2d::FaceSameOrientedWithRef(Standard_Integer I)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRep_Hctxff2d*)nativeHandle))->FaceSameOrientedWithRef(I));
}


