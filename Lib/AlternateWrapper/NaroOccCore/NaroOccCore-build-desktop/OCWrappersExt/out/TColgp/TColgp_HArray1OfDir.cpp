// File generated by CPPExt (CPP file)
//

#include "TColgp_HArray1OfDir.h"
#include "../Converter.h"
#include "../gp/gp_Dir.h"
#include "TColgp_Array1OfDir.h"


using namespace OCNaroWrappers;

OCTColgp_HArray1OfDir::OCTColgp_HArray1OfDir(Handle(TColgp_HArray1OfDir)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HArray1OfDir(*nativeHandle);
}

OCTColgp_HArray1OfDir::OCTColgp_HArray1OfDir(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfDir(new TColgp_HArray1OfDir(Low, Up));
}

OCTColgp_HArray1OfDir::OCTColgp_HArray1OfDir(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_Dir^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfDir(new TColgp_HArray1OfDir(Low, Up, *((gp_Dir*)V->Handle)));
}

 void OCTColgp_HArray1OfDir::Init(OCNaroWrappers::OCgp_Dir^ V)
{
  (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->Init(*((gp_Dir*)V->Handle));
}

 Standard_Integer OCTColgp_HArray1OfDir::Length()
{
  return (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->Length();
}

 Standard_Integer OCTColgp_HArray1OfDir::Lower()
{
  return (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->Lower();
}

 Standard_Integer OCTColgp_HArray1OfDir::Upper()
{
  return (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->Upper();
}

 void OCTColgp_HArray1OfDir::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Dir^ Value)
{
  (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->SetValue(Index, *((gp_Dir*)Value->Handle));
}

OCgp_Dir^ OCTColgp_HArray1OfDir::Value(Standard_Integer Index)
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->Value(Index);
  return gcnew OCgp_Dir(tmp);
}

OCgp_Dir^ OCTColgp_HArray1OfDir::ChangeValue(Standard_Integer Index)
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->ChangeValue(Index);
  return gcnew OCgp_Dir(tmp);
}

OCTColgp_Array1OfDir^ OCTColgp_HArray1OfDir::Array1()
{
  TColgp_Array1OfDir* tmp = new TColgp_Array1OfDir(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->Array1();
  return gcnew OCTColgp_Array1OfDir(tmp);
}

OCTColgp_Array1OfDir^ OCTColgp_HArray1OfDir::ChangeArray1()
{
  TColgp_Array1OfDir* tmp = new TColgp_Array1OfDir(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfDir*)nativeHandle))->ChangeArray1();
  return gcnew OCTColgp_Array1OfDir(tmp);
}


