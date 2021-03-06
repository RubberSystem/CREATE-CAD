// File generated by CPPExt (CPP file)
//

#include "GeomLib_Array1OfMat.h"
#include "../Converter.h"
#include "../gp/gp_Mat.h"


using namespace OCNaroWrappers;

OCGeomLib_Array1OfMat::OCGeomLib_Array1OfMat(GeomLib_Array1OfMat* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomLib_Array1OfMat::OCGeomLib_Array1OfMat(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new GeomLib_Array1OfMat(Low, Up);
}

OCGeomLib_Array1OfMat::OCGeomLib_Array1OfMat(OCNaroWrappers::OCgp_Mat^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new GeomLib_Array1OfMat(*((gp_Mat*)Item->Handle), Low, Up);
}

 void OCGeomLib_Array1OfMat::Init(OCNaroWrappers::OCgp_Mat^ V)
{
  ((GeomLib_Array1OfMat*)nativeHandle)->Init(*((gp_Mat*)V->Handle));
}

 System::Boolean OCGeomLib_Array1OfMat::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((GeomLib_Array1OfMat*)nativeHandle)->IsAllocated());
}

OCGeomLib_Array1OfMat^ OCGeomLib_Array1OfMat::Assign(OCNaroWrappers::OCGeomLib_Array1OfMat^ Other)
{
  GeomLib_Array1OfMat* tmp = new GeomLib_Array1OfMat(0, 0);
  *tmp = ((GeomLib_Array1OfMat*)nativeHandle)->Assign(*((GeomLib_Array1OfMat*)Other->Handle));
  return gcnew OCGeomLib_Array1OfMat(tmp);
}

 Standard_Integer OCGeomLib_Array1OfMat::Length()
{
  return ((GeomLib_Array1OfMat*)nativeHandle)->Length();
}

 Standard_Integer OCGeomLib_Array1OfMat::Lower()
{
  return ((GeomLib_Array1OfMat*)nativeHandle)->Lower();
}

 Standard_Integer OCGeomLib_Array1OfMat::Upper()
{
  return ((GeomLib_Array1OfMat*)nativeHandle)->Upper();
}

 void OCGeomLib_Array1OfMat::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Mat^ Value)
{
  ((GeomLib_Array1OfMat*)nativeHandle)->SetValue(Index, *((gp_Mat*)Value->Handle));
}

OCgp_Mat^ OCGeomLib_Array1OfMat::Value(Standard_Integer Index)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((GeomLib_Array1OfMat*)nativeHandle)->Value(Index);
  return gcnew OCgp_Mat(tmp);
}

OCgp_Mat^ OCGeomLib_Array1OfMat::ChangeValue(Standard_Integer Index)
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((GeomLib_Array1OfMat*)nativeHandle)->ChangeValue(Index);
  return gcnew OCgp_Mat(tmp);
}


