// File generated by CPPExt (CPP file)
//

#include "BRepAdaptor_HCurve.h"
#include "../Converter.h"
#include "BRepAdaptor_Curve.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"


using namespace OCNaroWrappers;

OCBRepAdaptor_HCurve::OCBRepAdaptor_HCurve(Handle(BRepAdaptor_HCurve)* nativeHandle) : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepAdaptor_HCurve(*nativeHandle);
}

OCBRepAdaptor_HCurve::OCBRepAdaptor_HCurve() : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepAdaptor_HCurve(new BRepAdaptor_HCurve());
}

OCBRepAdaptor_HCurve::OCBRepAdaptor_HCurve(OCNaroWrappers::OCBRepAdaptor_Curve^ C) : OCAdaptor3d_HCurve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepAdaptor_HCurve(new BRepAdaptor_HCurve(*((BRepAdaptor_Curve*)C->Handle)));
}

 void OCBRepAdaptor_HCurve::Set(OCNaroWrappers::OCBRepAdaptor_Curve^ C)
{
  (*((Handle_BRepAdaptor_HCurve*)nativeHandle))->Set(*((BRepAdaptor_Curve*)C->Handle));
}

OCAdaptor3d_Curve^ OCBRepAdaptor_HCurve::Curve()
{
  Adaptor3d_Curve* tmp = new Adaptor3d_Curve();
  *tmp = (*((Handle_BRepAdaptor_HCurve*)nativeHandle))->Curve();
  return gcnew OCAdaptor3d_Curve(tmp);
}

OCAdaptor3d_Curve^ OCBRepAdaptor_HCurve::GetCurve()
{
  Adaptor3d_Curve* tmp = new Adaptor3d_Curve();
  *tmp = (*((Handle_BRepAdaptor_HCurve*)nativeHandle))->GetCurve();
  return gcnew OCAdaptor3d_Curve(tmp);
}

OCBRepAdaptor_Curve^ OCBRepAdaptor_HCurve::ChangeCurve()
{
  BRepAdaptor_Curve* tmp = new BRepAdaptor_Curve();
  *tmp = (*((Handle_BRepAdaptor_HCurve*)nativeHandle))->ChangeCurve();
  return gcnew OCBRepAdaptor_Curve(tmp);
}

