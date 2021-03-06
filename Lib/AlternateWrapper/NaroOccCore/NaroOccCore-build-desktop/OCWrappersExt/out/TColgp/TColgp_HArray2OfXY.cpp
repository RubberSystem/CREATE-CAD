// File generated by CPPExt (CPP file)
//

#include "TColgp_HArray2OfXY.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"
#include "TColgp_Array2OfXY.h"


using namespace OCNaroWrappers;

OCTColgp_HArray2OfXY::OCTColgp_HArray2OfXY(Handle(TColgp_HArray2OfXY)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HArray2OfXY(*nativeHandle);
}

OCTColgp_HArray2OfXY::OCTColgp_HArray2OfXY(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray2OfXY(new TColgp_HArray2OfXY(R1, R2, C1, C2));
}

OCTColgp_HArray2OfXY::OCTColgp_HArray2OfXY(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCgp_XY^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray2OfXY(new TColgp_HArray2OfXY(R1, R2, C1, C2, *((gp_XY*)V->Handle)));
}

 void OCTColgp_HArray2OfXY::Init(OCNaroWrappers::OCgp_XY^ V)
{
  (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->Init(*((gp_XY*)V->Handle));
}

 Standard_Integer OCTColgp_HArray2OfXY::ColLength()
{
  return (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->ColLength();
}

 Standard_Integer OCTColgp_HArray2OfXY::RowLength()
{
  return (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->RowLength();
}

 Standard_Integer OCTColgp_HArray2OfXY::LowerCol()
{
  return (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->LowerCol();
}

 Standard_Integer OCTColgp_HArray2OfXY::LowerRow()
{
  return (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->LowerRow();
}

 Standard_Integer OCTColgp_HArray2OfXY::UpperCol()
{
  return (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->UpperCol();
}

 Standard_Integer OCTColgp_HArray2OfXY::UpperRow()
{
  return (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->UpperRow();
}

 void OCTColgp_HArray2OfXY::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_XY^ Value)
{
  (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->SetValue(Row, Col, *((gp_XY*)Value->Handle));
}

OCgp_XY^ OCTColgp_HArray2OfXY::Value(Standard_Integer Row, Standard_Integer Col)
{
  gp_XY* tmp = new gp_XY();
  *tmp = (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->Value(Row, Col);
  return gcnew OCgp_XY(tmp);
}

OCgp_XY^ OCTColgp_HArray2OfXY::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  gp_XY* tmp = new gp_XY();
  *tmp = (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->ChangeValue(Row, Col);
  return gcnew OCgp_XY(tmp);
}

OCTColgp_Array2OfXY^ OCTColgp_HArray2OfXY::Array2()
{
  TColgp_Array2OfXY* tmp = new TColgp_Array2OfXY(0, 0, 0, 0);
  *tmp = (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->Array2();
  return gcnew OCTColgp_Array2OfXY(tmp);
}

OCTColgp_Array2OfXY^ OCTColgp_HArray2OfXY::ChangeArray2()
{
  TColgp_Array2OfXY* tmp = new TColgp_Array2OfXY(0, 0, 0, 0);
  *tmp = (*((Handle_TColgp_HArray2OfXY*)nativeHandle))->ChangeArray2();
  return gcnew OCTColgp_Array2OfXY(tmp);
}


