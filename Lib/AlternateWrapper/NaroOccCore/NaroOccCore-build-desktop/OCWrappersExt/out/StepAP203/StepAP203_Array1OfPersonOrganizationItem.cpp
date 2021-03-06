// File generated by CPPExt (CPP file)
//

#include "StepAP203_Array1OfPersonOrganizationItem.h"
#include "../Converter.h"
#include "StepAP203_PersonOrganizationItem.h"


using namespace OCNaroWrappers;

OCStepAP203_Array1OfPersonOrganizationItem::OCStepAP203_Array1OfPersonOrganizationItem(StepAP203_Array1OfPersonOrganizationItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP203_Array1OfPersonOrganizationItem::OCStepAP203_Array1OfPersonOrganizationItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP203_Array1OfPersonOrganizationItem(Low, Up);
}

OCStepAP203_Array1OfPersonOrganizationItem::OCStepAP203_Array1OfPersonOrganizationItem(OCNaroWrappers::OCStepAP203_PersonOrganizationItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP203_Array1OfPersonOrganizationItem(*((StepAP203_PersonOrganizationItem*)Item->Handle), Low, Up);
}

 void OCStepAP203_Array1OfPersonOrganizationItem::Init(OCNaroWrappers::OCStepAP203_PersonOrganizationItem^ V)
{
  ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->Init(*((StepAP203_PersonOrganizationItem*)V->Handle));
}

 System::Boolean OCStepAP203_Array1OfPersonOrganizationItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->IsAllocated());
}

OCStepAP203_Array1OfPersonOrganizationItem^ OCStepAP203_Array1OfPersonOrganizationItem::Assign(OCNaroWrappers::OCStepAP203_Array1OfPersonOrganizationItem^ Other)
{
  StepAP203_Array1OfPersonOrganizationItem* tmp = new StepAP203_Array1OfPersonOrganizationItem(0, 0);
  *tmp = ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->Assign(*((StepAP203_Array1OfPersonOrganizationItem*)Other->Handle));
  return gcnew OCStepAP203_Array1OfPersonOrganizationItem(tmp);
}

 Standard_Integer OCStepAP203_Array1OfPersonOrganizationItem::Length()
{
  return ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP203_Array1OfPersonOrganizationItem::Lower()
{
  return ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP203_Array1OfPersonOrganizationItem::Upper()
{
  return ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->Upper();
}

 void OCStepAP203_Array1OfPersonOrganizationItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_PersonOrganizationItem^ Value)
{
  ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->SetValue(Index, *((StepAP203_PersonOrganizationItem*)Value->Handle));
}

OCStepAP203_PersonOrganizationItem^ OCStepAP203_Array1OfPersonOrganizationItem::Value(Standard_Integer Index)
{
  StepAP203_PersonOrganizationItem* tmp = new StepAP203_PersonOrganizationItem();
  *tmp = ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP203_PersonOrganizationItem(tmp);
}

OCStepAP203_PersonOrganizationItem^ OCStepAP203_Array1OfPersonOrganizationItem::ChangeValue(Standard_Integer Index)
{
  StepAP203_PersonOrganizationItem* tmp = new StepAP203_PersonOrganizationItem();
  *tmp = ((StepAP203_Array1OfPersonOrganizationItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP203_PersonOrganizationItem(tmp);
}


