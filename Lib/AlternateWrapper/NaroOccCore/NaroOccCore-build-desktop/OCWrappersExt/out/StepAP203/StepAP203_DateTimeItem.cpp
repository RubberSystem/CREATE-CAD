// File generated by CPPExt (CPP file)
//

#include "StepAP203_DateTimeItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../StepBasic/StepBasic_ProductDefinition.h"
#include "StepAP203_ChangeRequest.h"
#include "StepAP203_StartRequest.h"
#include "StepAP203_Change.h"
#include "StepAP203_StartWork.h"
#include "../StepBasic/StepBasic_ApprovalPersonOrganization.h"
#include "../StepBasic/StepBasic_Contract.h"
#include "../StepBasic/StepBasic_SecurityClassification.h"
#include "../StepBasic/StepBasic_Certification.h"


using namespace OCNaroWrappers;

OCStepAP203_DateTimeItem::OCStepAP203_DateTimeItem(StepAP203_DateTimeItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP203_DateTimeItem::OCStepAP203_DateTimeItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepAP203_DateTimeItem();
}

 Standard_Integer OCStepAP203_DateTimeItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP203_DateTimeItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_ProductDefinition^ OCStepAP203_DateTimeItem::ProductDefinition()
{
  Handle(StepBasic_ProductDefinition) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->ProductDefinition();
  return gcnew OCStepBasic_ProductDefinition(&tmp);
}

OCStepAP203_ChangeRequest^ OCStepAP203_DateTimeItem::ChangeRequest()
{
  Handle(StepAP203_ChangeRequest) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->ChangeRequest();
  return gcnew OCStepAP203_ChangeRequest(&tmp);
}

OCStepAP203_StartRequest^ OCStepAP203_DateTimeItem::StartRequest()
{
  Handle(StepAP203_StartRequest) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->StartRequest();
  return gcnew OCStepAP203_StartRequest(&tmp);
}

OCStepAP203_Change^ OCStepAP203_DateTimeItem::Change()
{
  Handle(StepAP203_Change) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->Change();
  return gcnew OCStepAP203_Change(&tmp);
}

OCStepAP203_StartWork^ OCStepAP203_DateTimeItem::StartWork()
{
  Handle(StepAP203_StartWork) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->StartWork();
  return gcnew OCStepAP203_StartWork(&tmp);
}

OCStepBasic_ApprovalPersonOrganization^ OCStepAP203_DateTimeItem::ApprovalPersonOrganization()
{
  Handle(StepBasic_ApprovalPersonOrganization) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->ApprovalPersonOrganization();
  return gcnew OCStepBasic_ApprovalPersonOrganization(&tmp);
}

OCStepBasic_Contract^ OCStepAP203_DateTimeItem::Contract()
{
  Handle(StepBasic_Contract) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->Contract();
  return gcnew OCStepBasic_Contract(&tmp);
}

OCStepBasic_SecurityClassification^ OCStepAP203_DateTimeItem::SecurityClassification()
{
  Handle(StepBasic_SecurityClassification) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->SecurityClassification();
  return gcnew OCStepBasic_SecurityClassification(&tmp);
}

OCStepBasic_Certification^ OCStepAP203_DateTimeItem::Certification()
{
  Handle(StepBasic_Certification) tmp = ((StepAP203_DateTimeItem*)nativeHandle)->Certification();
  return gcnew OCStepBasic_Certification(&tmp);
}

