// File generated by CPPExt (CPP file)
//

#include "StepBasic_RoleAssociation.h"
#include "../Converter.h"
#include "StepBasic_ObjectRole.h"
#include "StepBasic_RoleSelect.h"


using namespace OCNaroWrappers;

OCStepBasic_RoleAssociation::OCStepBasic_RoleAssociation(Handle(StepBasic_RoleAssociation)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_RoleAssociation(*nativeHandle);
}

OCStepBasic_RoleAssociation::OCStepBasic_RoleAssociation() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_RoleAssociation(new StepBasic_RoleAssociation());
}

 void OCStepBasic_RoleAssociation::Init(OCNaroWrappers::OCStepBasic_ObjectRole^ aRole, OCNaroWrappers::OCStepBasic_RoleSelect^ aItemWithRole)
{
  (*((Handle_StepBasic_RoleAssociation*)nativeHandle))->Init(*((Handle_StepBasic_ObjectRole*)aRole->Handle), *((StepBasic_RoleSelect*)aItemWithRole->Handle));
}

OCStepBasic_ObjectRole^ OCStepBasic_RoleAssociation::Role()
{
  Handle(StepBasic_ObjectRole) tmp = (*((Handle_StepBasic_RoleAssociation*)nativeHandle))->Role();
  return gcnew OCStepBasic_ObjectRole(&tmp);
}

 void OCStepBasic_RoleAssociation::SetRole(OCNaroWrappers::OCStepBasic_ObjectRole^ Role)
{
  (*((Handle_StepBasic_RoleAssociation*)nativeHandle))->SetRole(*((Handle_StepBasic_ObjectRole*)Role->Handle));
}

OCStepBasic_RoleSelect^ OCStepBasic_RoleAssociation::ItemWithRole()
{
  StepBasic_RoleSelect* tmp = new StepBasic_RoleSelect();
  *tmp = (*((Handle_StepBasic_RoleAssociation*)nativeHandle))->ItemWithRole();
  return gcnew OCStepBasic_RoleSelect(tmp);
}

 void OCStepBasic_RoleAssociation::SetItemWithRole(OCNaroWrappers::OCStepBasic_RoleSelect^ ItemWithRole)
{
  (*((Handle_StepBasic_RoleAssociation*)nativeHandle))->SetItemWithRole(*((StepBasic_RoleSelect*)ItemWithRole->Handle));
}


