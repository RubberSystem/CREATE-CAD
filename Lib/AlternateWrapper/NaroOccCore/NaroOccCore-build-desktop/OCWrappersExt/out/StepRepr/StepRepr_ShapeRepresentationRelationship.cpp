// File generated by CPPExt (CPP file)
//

#include "StepRepr_ShapeRepresentationRelationship.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepRepr_ShapeRepresentationRelationship::OCStepRepr_ShapeRepresentationRelationship(Handle(StepRepr_ShapeRepresentationRelationship)* nativeHandle) : OCStepRepr_RepresentationRelationship((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_ShapeRepresentationRelationship(*nativeHandle);
}

OCStepRepr_ShapeRepresentationRelationship::OCStepRepr_ShapeRepresentationRelationship() : OCStepRepr_RepresentationRelationship((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_ShapeRepresentationRelationship(new StepRepr_ShapeRepresentationRelationship());
}


