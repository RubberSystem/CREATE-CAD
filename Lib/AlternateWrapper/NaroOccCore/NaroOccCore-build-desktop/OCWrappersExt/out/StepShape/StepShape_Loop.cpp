// File generated by CPPExt (CPP file)
//

#include "StepShape_Loop.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepShape_Loop::OCStepShape_Loop(StepShape_Loop* nativeHandle) : OCStepShape_TopologicalRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_Loop::OCStepShape_Loop() : OCStepShape_TopologicalRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_Loop();
}


