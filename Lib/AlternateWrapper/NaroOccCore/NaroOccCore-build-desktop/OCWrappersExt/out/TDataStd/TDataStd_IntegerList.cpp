// File generated by CPPExt (CPP file)
//

#include "TDataStd_IntegerList.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_IntegerList::OCTDataStd_IntegerList(Handle(TDataStd_IntegerList)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_IntegerList(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_IntegerList::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_IntegerList::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_IntegerList^ OCTDataStd_IntegerList::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_IntegerList) tmp = TDataStd_IntegerList::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_IntegerList(&tmp);
}

OCTDataStd_IntegerList::OCTDataStd_IntegerList() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_IntegerList(new TDataStd_IntegerList());
}

 System::Boolean OCTDataStd_IntegerList::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntegerList*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTDataStd_IntegerList::Extent()
{
  return (*((Handle_TDataStd_IntegerList*)nativeHandle))->Extent();
}

 void OCTDataStd_IntegerList::Prepend(Standard_Integer value)
{
  (*((Handle_TDataStd_IntegerList*)nativeHandle))->Prepend(value);
}

 void OCTDataStd_IntegerList::Append(Standard_Integer value)
{
  (*((Handle_TDataStd_IntegerList*)nativeHandle))->Append(value);
}

 System::Boolean OCTDataStd_IntegerList::InsertBefore(Standard_Integer value, Standard_Integer before_value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntegerList*)nativeHandle))->InsertBefore(value, before_value));
}

 System::Boolean OCTDataStd_IntegerList::InsertAfter(Standard_Integer value, Standard_Integer after_value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntegerList*)nativeHandle))->InsertAfter(value, after_value));
}

 System::Boolean OCTDataStd_IntegerList::Remove(Standard_Integer value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntegerList*)nativeHandle))->Remove(value));
}

 void OCTDataStd_IntegerList::Clear()
{
  (*((Handle_TDataStd_IntegerList*)nativeHandle))->Clear();
}

 Standard_Integer OCTDataStd_IntegerList::First()
{
  return (*((Handle_TDataStd_IntegerList*)nativeHandle))->First();
}

 Standard_Integer OCTDataStd_IntegerList::Last()
{
  return (*((Handle_TDataStd_IntegerList*)nativeHandle))->Last();
}

OCTColStd_ListOfInteger^ OCTDataStd_IntegerList::List()
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = (*((Handle_TDataStd_IntegerList*)nativeHandle))->List();
  return gcnew OCTColStd_ListOfInteger(tmp);
}

OCStandard_GUID^ OCTDataStd_IntegerList::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_IntegerList*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_IntegerList::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_IntegerList*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_IntegerList::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_IntegerList*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_IntegerList::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_IntegerList*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_IntegerList::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_IntegerList*)nativeHandle))->Dump(anOS);
}


