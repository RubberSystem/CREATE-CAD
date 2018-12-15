// File generated by CPPExt (CPP file)
//

#include "Adaptor3d_HVertex.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"


using namespace OCNaroWrappers;

OCAdaptor3d_HVertex::OCAdaptor3d_HVertex(Handle(Adaptor3d_HVertex)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Adaptor3d_HVertex(*nativeHandle);
}

OCAdaptor3d_HVertex::OCAdaptor3d_HVertex() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Adaptor3d_HVertex(new Adaptor3d_HVertex());
}

OCAdaptor3d_HVertex::OCAdaptor3d_HVertex(OCNaroWrappers::OCgp_Pnt2d^ P, OCTopAbs_Orientation Ori, Standard_Real Resolution) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Adaptor3d_HVertex(new Adaptor3d_HVertex(*((gp_Pnt2d*)P->Handle), (TopAbs_Orientation)Ori, Resolution));
}

OCgp_Pnt2d^ OCAdaptor3d_HVertex::Value()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Adaptor3d_HVertex*)nativeHandle))->Value();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCAdaptor3d_HVertex::Parameter(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return (*((Handle_Adaptor3d_HVertex*)nativeHandle))->Parameter(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
}

 Standard_Real OCAdaptor3d_HVertex::Resolution(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return (*((Handle_Adaptor3d_HVertex*)nativeHandle))->Resolution(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
}

 OCTopAbs_Orientation OCAdaptor3d_HVertex::Orientation()
{
  return (OCTopAbs_Orientation)((*((Handle_Adaptor3d_HVertex*)nativeHandle))->Orientation());
}

 System::Boolean OCAdaptor3d_HVertex::IsSame(OCNaroWrappers::OCAdaptor3d_HVertex^ Other)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Adaptor3d_HVertex*)nativeHandle))->IsSame(*((Handle_Adaptor3d_HVertex*)Other->Handle)));
}

