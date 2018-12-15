// File generated by CPPExt (CPP file)
//

#include "StepShape_ToleranceValue.h"
#include "../Converter.h"
#include "../StepBasic/StepBasic_MeasureWithUnit.h"


using namespace OCNaroWrappers;

OCStepShape_ToleranceValue::OCStepShape_ToleranceValue(Handle(StepShape_ToleranceValue)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepShape_ToleranceValue(*nativeHandle);
}

OCStepShape_ToleranceValue::OCStepShape_ToleranceValue() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepShape_ToleranceValue(new StepShape_ToleranceValue());
}

 void OCStepShape_ToleranceValue::Init(OCNaroWrappers::OCStepBasic_MeasureWithUnit^ lower_bound, OCNaroWrappers::OCStepBasic_MeasureWithUnit^ upper_bound)
{
  (*((Handle_StepShape_ToleranceValue*)nativeHandle))->Init(*((Handle_StepBasic_MeasureWithUnit*)lower_bound->Handle), *((Handle_StepBasic_MeasureWithUnit*)upper_bound->Handle));
}

OCStepBasic_MeasureWithUnit^ OCStepShape_ToleranceValue::LowerBound()
{
  Handle(StepBasic_MeasureWithUnit) tmp = (*((Handle_StepShape_ToleranceValue*)nativeHandle))->LowerBound();
  return gcnew OCStepBasic_MeasureWithUnit(&tmp);
}

 void OCStepShape_ToleranceValue::SetLowerBound(OCNaroWrappers::OCStepBasic_MeasureWithUnit^ lower_bound)
{
  (*((Handle_StepShape_ToleranceValue*)nativeHandle))->SetLowerBound(*((Handle_StepBasic_MeasureWithUnit*)lower_bound->Handle));
}

OCStepBasic_MeasureWithUnit^ OCStepShape_ToleranceValue::UpperBound()
{
  Handle(StepBasic_MeasureWithUnit) tmp = (*((Handle_StepShape_ToleranceValue*)nativeHandle))->UpperBound();
  return gcnew OCStepBasic_MeasureWithUnit(&tmp);
}

 void OCStepShape_ToleranceValue::SetUpperBound(OCNaroWrappers::OCStepBasic_MeasureWithUnit^ upper_bound)
{
  (*((Handle_StepShape_ToleranceValue*)nativeHandle))->SetUpperBound(*((Handle_StepBasic_MeasureWithUnit*)upper_bound->Handle));
}

