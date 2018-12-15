// File generated by CPPExt (CPP file)
//

#include "Storage_HArrayOfCallBack.h"
#include "../Converter.h"
#include "Storage_CallBack.h"
#include "Storage_ArrayOfCallBack.h"


using namespace OCNaroWrappers;

OCStorage_HArrayOfCallBack::OCStorage_HArrayOfCallBack(Handle(Storage_HArrayOfCallBack)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Storage_HArrayOfCallBack(*nativeHandle);
}

OCStorage_HArrayOfCallBack::OCStorage_HArrayOfCallBack(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Storage_HArrayOfCallBack(new Storage_HArrayOfCallBack(Low, Up));
}

OCStorage_HArrayOfCallBack::OCStorage_HArrayOfCallBack(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStorage_CallBack^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Storage_HArrayOfCallBack(new Storage_HArrayOfCallBack(Low, Up, *((Handle_Storage_CallBack*)V->Handle)));
}

 void OCStorage_HArrayOfCallBack::Init(OCNaroWrappers::OCStorage_CallBack^ V)
{
  (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->Init(*((Handle_Storage_CallBack*)V->Handle));
}

 Standard_Integer OCStorage_HArrayOfCallBack::Length()
{
  return (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->Length();
}

 Standard_Integer OCStorage_HArrayOfCallBack::Lower()
{
  return (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->Lower();
}

 Standard_Integer OCStorage_HArrayOfCallBack::Upper()
{
  return (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->Upper();
}

 void OCStorage_HArrayOfCallBack::SetValue(Standard_Integer Index, OCNaroWrappers::OCStorage_CallBack^ Value)
{
  (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->SetValue(Index, *((Handle_Storage_CallBack*)Value->Handle));
}

OCStorage_CallBack^ OCStorage_HArrayOfCallBack::Value(Standard_Integer Index)
{
  Handle(Storage_CallBack) tmp = (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->Value(Index);
  return gcnew OCStorage_CallBack(&tmp);
}

OCStorage_CallBack^ OCStorage_HArrayOfCallBack::ChangeValue(Standard_Integer Index)
{
  Handle(Storage_CallBack) tmp = (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStorage_CallBack(&tmp);
}

OCStorage_ArrayOfCallBack^ OCStorage_HArrayOfCallBack::Array1()
{
  Storage_ArrayOfCallBack* tmp = new Storage_ArrayOfCallBack(0, 0);
  *tmp = (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->Array1();
  return gcnew OCStorage_ArrayOfCallBack(tmp);
}

OCStorage_ArrayOfCallBack^ OCStorage_HArrayOfCallBack::ChangeArray1()
{
  Storage_ArrayOfCallBack* tmp = new Storage_ArrayOfCallBack(0, 0);
  *tmp = (*((Handle_Storage_HArrayOfCallBack*)nativeHandle))->ChangeArray1();
  return gcnew OCStorage_ArrayOfCallBack(tmp);
}

