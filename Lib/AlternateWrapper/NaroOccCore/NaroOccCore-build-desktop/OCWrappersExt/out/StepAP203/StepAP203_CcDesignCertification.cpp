// File generated by CPPExt (CPP file)
//

#include "StepAP203_CcDesignCertification.h"
#include "../Converter.h"
#include "StepAP203_HArray1OfCertifiedItem.h"
#include "../StepBasic/StepBasic_Certification.h"


using namespace OCNaroWrappers;

OCStepAP203_CcDesignCertification::OCStepAP203_CcDesignCertification(Handle(StepAP203_CcDesignCertification)* nativeHandle) : OCStepBasic_CertificationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP203_CcDesignCertification(*nativeHandle);
}

OCStepAP203_CcDesignCertification::OCStepAP203_CcDesignCertification() : OCStepBasic_CertificationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_CcDesignCertification(new StepAP203_CcDesignCertification());
}

 void OCStepAP203_CcDesignCertification::Init(OCNaroWrappers::OCStepBasic_Certification^ aCertificationAssignment_AssignedCertification, OCNaroWrappers::OCStepAP203_HArray1OfCertifiedItem^ aItems)
{
  (*((Handle_StepAP203_CcDesignCertification*)nativeHandle))->Init(*((Handle_StepBasic_Certification*)aCertificationAssignment_AssignedCertification->Handle), *((Handle_StepAP203_HArray1OfCertifiedItem*)aItems->Handle));
}

OCStepAP203_HArray1OfCertifiedItem^ OCStepAP203_CcDesignCertification::Items()
{
  Handle(StepAP203_HArray1OfCertifiedItem) tmp = (*((Handle_StepAP203_CcDesignCertification*)nativeHandle))->Items();
  return gcnew OCStepAP203_HArray1OfCertifiedItem(&tmp);
}

 void OCStepAP203_CcDesignCertification::SetItems(OCNaroWrappers::OCStepAP203_HArray1OfCertifiedItem^ Items)
{
  (*((Handle_StepAP203_CcDesignCertification*)nativeHandle))->SetItems(*((Handle_StepAP203_HArray1OfCertifiedItem*)Items->Handle));
}


