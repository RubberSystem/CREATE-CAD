// File generated by CPPExt (CPP file)
//

#include "BOP_Area2dBuilder.h"
#include "../Converter.h"
#include "BOP_LoopSet.h"
#include "BOP_LoopClassifier.h"


using namespace OCNaroWrappers;

OCBOP_Area2dBuilder::OCBOP_Area2dBuilder(BOP_Area2dBuilder* nativeHandle) : OCBOP_AreaBuilder((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOP_Area2dBuilder::OCBOP_Area2dBuilder() : OCBOP_AreaBuilder((OCDummy^)nullptr)

{
  nativeHandle = new BOP_Area2dBuilder();
}

OCBOP_Area2dBuilder::OCBOP_Area2dBuilder(OCNaroWrappers::OCBOP_LoopSet^ LS, OCNaroWrappers::OCBOP_LoopClassifier^ LC, System::Boolean ForceClass) : OCBOP_AreaBuilder((OCDummy^)nullptr)

{
  nativeHandle = new BOP_Area2dBuilder(*((BOP_LoopSet*)LS->Handle), *((BOP_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

 void OCBOP_Area2dBuilder::InitAreaBuilder(OCNaroWrappers::OCBOP_LoopSet^ LS, OCNaroWrappers::OCBOP_LoopClassifier^ LC, System::Boolean ForceClass)
{
  ((BOP_Area2dBuilder*)nativeHandle)->InitAreaBuilder(*((BOP_LoopSet*)LS->Handle), *((BOP_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

