// File generated by CPPExt (CPP file)
//

#include "StepBasic_SiUnitAndPlaneAngleUnit.h"
#include "../Converter.h"
#include "StepBasic_PlaneAngleUnit.h"
#include "StepBasic_DimensionalExponents.h"


using namespace OCNaroWrappers;

OCStepBasic_SiUnitAndPlaneAngleUnit::OCStepBasic_SiUnitAndPlaneAngleUnit(Handle(StepBasic_SiUnitAndPlaneAngleUnit)* nativeHandle) : OCStepBasic_SiUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_SiUnitAndPlaneAngleUnit(*nativeHandle);
}

OCStepBasic_SiUnitAndPlaneAngleUnit::OCStepBasic_SiUnitAndPlaneAngleUnit() : OCStepBasic_SiUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_SiUnitAndPlaneAngleUnit(new StepBasic_SiUnitAndPlaneAngleUnit());
}

 void OCStepBasic_SiUnitAndPlaneAngleUnit::Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions)
{
  (*((Handle_StepBasic_SiUnitAndPlaneAngleUnit*)nativeHandle))->Init(*((Handle_StepBasic_DimensionalExponents*)aDimensions->Handle));
}

 void OCStepBasic_SiUnitAndPlaneAngleUnit::Init(System::Boolean hasAprefix, OCStepBasic_SiPrefix aPrefix, OCStepBasic_SiUnitName aName)
{
  (*((Handle_StepBasic_SiUnitAndPlaneAngleUnit*)nativeHandle))->Init(OCConverter::BooleanToStandardBoolean(hasAprefix), (StepBasic_SiPrefix)aPrefix, (StepBasic_SiUnitName)aName);
}

 void OCStepBasic_SiUnitAndPlaneAngleUnit::SetPlaneAngleUnit(OCNaroWrappers::OCStepBasic_PlaneAngleUnit^ aPlaneAngleUnit)
{
  (*((Handle_StepBasic_SiUnitAndPlaneAngleUnit*)nativeHandle))->SetPlaneAngleUnit(*((Handle_StepBasic_PlaneAngleUnit*)aPlaneAngleUnit->Handle));
}

OCStepBasic_PlaneAngleUnit^ OCStepBasic_SiUnitAndPlaneAngleUnit::PlaneAngleUnit()
{
  Handle(StepBasic_PlaneAngleUnit) tmp = (*((Handle_StepBasic_SiUnitAndPlaneAngleUnit*)nativeHandle))->PlaneAngleUnit();
  return gcnew OCStepBasic_PlaneAngleUnit(&tmp);
}


