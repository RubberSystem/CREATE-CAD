// File generated by CPPExt (CPP file)
//

#include "StepBasic_TimeMeasureWithUnit.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepBasic_TimeMeasureWithUnit::OCStepBasic_TimeMeasureWithUnit(Handle(StepBasic_TimeMeasureWithUnit)* nativeHandle) : OCStepBasic_MeasureWithUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_TimeMeasureWithUnit(*nativeHandle);
}

OCStepBasic_TimeMeasureWithUnit::OCStepBasic_TimeMeasureWithUnit() : OCStepBasic_MeasureWithUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_TimeMeasureWithUnit(new StepBasic_TimeMeasureWithUnit());
}


