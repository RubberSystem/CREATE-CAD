// File generated by CPPExt (CPP file)
//

#include "TColGeom_Array1OfBezierCurve.h"
#include "../Converter.h"
#include "../Geom/Geom_BezierCurve.h"


using namespace OCNaroWrappers;

OCTColGeom_Array1OfBezierCurve::OCTColGeom_Array1OfBezierCurve(TColGeom_Array1OfBezierCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_Array1OfBezierCurve::OCTColGeom_Array1OfBezierCurve(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfBezierCurve(Low, Up);
}

OCTColGeom_Array1OfBezierCurve::OCTColGeom_Array1OfBezierCurve(OCNaroWrappers::OCGeom_BezierCurve^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfBezierCurve(*((Handle_Geom_BezierCurve*)Item->Handle), Low, Up);
}

 void OCTColGeom_Array1OfBezierCurve::Init(OCNaroWrappers::OCGeom_BezierCurve^ V)
{
  ((TColGeom_Array1OfBezierCurve*)nativeHandle)->Init(*((Handle_Geom_BezierCurve*)V->Handle));
}

 System::Boolean OCTColGeom_Array1OfBezierCurve::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColGeom_Array1OfBezierCurve*)nativeHandle)->IsAllocated());
}

OCTColGeom_Array1OfBezierCurve^ OCTColGeom_Array1OfBezierCurve::Assign(OCNaroWrappers::OCTColGeom_Array1OfBezierCurve^ Other)
{
  TColGeom_Array1OfBezierCurve* tmp = new TColGeom_Array1OfBezierCurve(0, 0);
  *tmp = ((TColGeom_Array1OfBezierCurve*)nativeHandle)->Assign(*((TColGeom_Array1OfBezierCurve*)Other->Handle));
  return gcnew OCTColGeom_Array1OfBezierCurve(tmp);
}

 Standard_Integer OCTColGeom_Array1OfBezierCurve::Length()
{
  return ((TColGeom_Array1OfBezierCurve*)nativeHandle)->Length();
}

 Standard_Integer OCTColGeom_Array1OfBezierCurve::Lower()
{
  return ((TColGeom_Array1OfBezierCurve*)nativeHandle)->Lower();
}

 Standard_Integer OCTColGeom_Array1OfBezierCurve::Upper()
{
  return ((TColGeom_Array1OfBezierCurve*)nativeHandle)->Upper();
}

 void OCTColGeom_Array1OfBezierCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_BezierCurve^ Value)
{
  ((TColGeom_Array1OfBezierCurve*)nativeHandle)->SetValue(Index, *((Handle_Geom_BezierCurve*)Value->Handle));
}

OCGeom_BezierCurve^ OCTColGeom_Array1OfBezierCurve::Value(Standard_Integer Index)
{
  Handle(Geom_BezierCurve) tmp = ((TColGeom_Array1OfBezierCurve*)nativeHandle)->Value(Index);
  return gcnew OCGeom_BezierCurve(&tmp);
}

OCGeom_BezierCurve^ OCTColGeom_Array1OfBezierCurve::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_BezierCurve) tmp = ((TColGeom_Array1OfBezierCurve*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_BezierCurve(&tmp);
}


