// File generated by CPPExt (CPP file)
//

#include "StepAP214_Array1OfGroupItem.h"
#include "../Converter.h"
#include "StepAP214_GroupItem.h"


using namespace OCNaroWrappers;

OCStepAP214_Array1OfGroupItem::OCStepAP214_Array1OfGroupItem(StepAP214_Array1OfGroupItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_Array1OfGroupItem::OCStepAP214_Array1OfGroupItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfGroupItem(Low, Up);
}

OCStepAP214_Array1OfGroupItem::OCStepAP214_Array1OfGroupItem(OCNaroWrappers::OCStepAP214_GroupItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfGroupItem(*((StepAP214_GroupItem*)Item->Handle), Low, Up);
}

 void OCStepAP214_Array1OfGroupItem::Init(OCNaroWrappers::OCStepAP214_GroupItem^ V)
{
  ((StepAP214_Array1OfGroupItem*)nativeHandle)->Init(*((StepAP214_GroupItem*)V->Handle));
}

 System::Boolean OCStepAP214_Array1OfGroupItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP214_Array1OfGroupItem*)nativeHandle)->IsAllocated());
}

OCStepAP214_Array1OfGroupItem^ OCStepAP214_Array1OfGroupItem::Assign(OCNaroWrappers::OCStepAP214_Array1OfGroupItem^ Other)
{
  StepAP214_Array1OfGroupItem* tmp = new StepAP214_Array1OfGroupItem(0, 0);
  *tmp = ((StepAP214_Array1OfGroupItem*)nativeHandle)->Assign(*((StepAP214_Array1OfGroupItem*)Other->Handle));
  return gcnew OCStepAP214_Array1OfGroupItem(tmp);
}

 Standard_Integer OCStepAP214_Array1OfGroupItem::Length()
{
  return ((StepAP214_Array1OfGroupItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP214_Array1OfGroupItem::Lower()
{
  return ((StepAP214_Array1OfGroupItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP214_Array1OfGroupItem::Upper()
{
  return ((StepAP214_Array1OfGroupItem*)nativeHandle)->Upper();
}

 void OCStepAP214_Array1OfGroupItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_GroupItem^ Value)
{
  ((StepAP214_Array1OfGroupItem*)nativeHandle)->SetValue(Index, *((StepAP214_GroupItem*)Value->Handle));
}

OCStepAP214_GroupItem^ OCStepAP214_Array1OfGroupItem::Value(Standard_Integer Index)
{
  StepAP214_GroupItem* tmp = new StepAP214_GroupItem();
  *tmp = ((StepAP214_Array1OfGroupItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP214_GroupItem(tmp);
}

OCStepAP214_GroupItem^ OCStepAP214_Array1OfGroupItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_GroupItem* tmp = new StepAP214_GroupItem();
  *tmp = ((StepAP214_Array1OfGroupItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP214_GroupItem(tmp);
}


