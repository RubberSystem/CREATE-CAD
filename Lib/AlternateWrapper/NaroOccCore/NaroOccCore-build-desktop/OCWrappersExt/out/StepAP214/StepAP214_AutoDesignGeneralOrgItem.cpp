// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignGeneralOrgItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../StepBasic/StepBasic_Product.h"
#include "../StepBasic/StepBasic_ProductDefinition.h"
#include "../StepBasic/StepBasic_ProductDefinitionFormation.h"
#include "../StepBasic/StepBasic_ProductDefinitionRelationship.h"
#include "../StepBasic/StepBasic_ProductDefinitionWithAssociatedDocuments.h"
#include "../StepRepr/StepRepr_Representation.h"
#include "../StepRepr/StepRepr_ExternallyDefinedRepresentation.h"
#include "StepAP214_AutoDesignDocumentReference.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignGeneralOrgItem::OCStepAP214_AutoDesignGeneralOrgItem(StepAP214_AutoDesignGeneralOrgItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_AutoDesignGeneralOrgItem::OCStepAP214_AutoDesignGeneralOrgItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepAP214_AutoDesignGeneralOrgItem();
}

 Standard_Integer OCStepAP214_AutoDesignGeneralOrgItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_Product^ OCStepAP214_AutoDesignGeneralOrgItem::Product()
{
  Handle(StepBasic_Product) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->Product();
  return gcnew OCStepBasic_Product(&tmp);
}

OCStepBasic_ProductDefinition^ OCStepAP214_AutoDesignGeneralOrgItem::ProductDefinition()
{
  Handle(StepBasic_ProductDefinition) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->ProductDefinition();
  return gcnew OCStepBasic_ProductDefinition(&tmp);
}

OCStepBasic_ProductDefinitionFormation^ OCStepAP214_AutoDesignGeneralOrgItem::ProductDefinitionFormation()
{
  Handle(StepBasic_ProductDefinitionFormation) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->ProductDefinitionFormation();
  return gcnew OCStepBasic_ProductDefinitionFormation(&tmp);
}

OCStepBasic_ProductDefinitionRelationship^ OCStepAP214_AutoDesignGeneralOrgItem::ProductDefinitionRelationship()
{
  Handle(StepBasic_ProductDefinitionRelationship) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->ProductDefinitionRelationship();
  return gcnew OCStepBasic_ProductDefinitionRelationship(&tmp);
}

OCStepBasic_ProductDefinitionWithAssociatedDocuments^ OCStepAP214_AutoDesignGeneralOrgItem::ProductDefinitionWithAssociatedDocuments()
{
  Handle(StepBasic_ProductDefinitionWithAssociatedDocuments) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->ProductDefinitionWithAssociatedDocuments();
  return gcnew OCStepBasic_ProductDefinitionWithAssociatedDocuments(&tmp);
}

OCStepRepr_Representation^ OCStepAP214_AutoDesignGeneralOrgItem::Representation()
{
  Handle(StepRepr_Representation) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->Representation();
  return gcnew OCStepRepr_Representation(&tmp);
}

OCStepRepr_ExternallyDefinedRepresentation^ OCStepAP214_AutoDesignGeneralOrgItem::ExternallyDefinedRepresentation()
{
  Handle(StepRepr_ExternallyDefinedRepresentation) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->ExternallyDefinedRepresentation();
  return gcnew OCStepRepr_ExternallyDefinedRepresentation(&tmp);
}

OCStepAP214_AutoDesignDocumentReference^ OCStepAP214_AutoDesignGeneralOrgItem::AutoDesignDocumentReference()
{
  Handle(StepAP214_AutoDesignDocumentReference) tmp = ((StepAP214_AutoDesignGeneralOrgItem*)nativeHandle)->AutoDesignDocumentReference();
  return gcnew OCStepAP214_AutoDesignDocumentReference(&tmp);
}


