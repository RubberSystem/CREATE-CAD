// File generated by CPPExt (CPP file)
//

#include "StepShape_ConnectedEdgeSet.h"
#include "../Converter.h"
#include "StepShape_HArray1OfEdge.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepShape_ConnectedEdgeSet::OCStepShape_ConnectedEdgeSet(StepShape_ConnectedEdgeSet* nativeHandle) : OCStepShape_TopologicalRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_ConnectedEdgeSet::OCStepShape_ConnectedEdgeSet() : OCStepShape_TopologicalRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_ConnectedEdgeSet();
}

 void OCStepShape_ConnectedEdgeSet::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aRepresentationItem_Name, OCNaroWrappers::OCStepShape_HArray1OfEdge^ aCesEdges)
{
  ((StepShape_ConnectedEdgeSet*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aRepresentationItem_Name->Handle), *((Handle_StepShape_HArray1OfEdge*)aCesEdges->Handle));
}

OCStepShape_HArray1OfEdge^ OCStepShape_ConnectedEdgeSet::CesEdges()
{
  Handle(StepShape_HArray1OfEdge) tmp = ((StepShape_ConnectedEdgeSet*)nativeHandle)->CesEdges();
  return gcnew OCStepShape_HArray1OfEdge(&tmp);
}

 void OCStepShape_ConnectedEdgeSet::SetCesEdges(OCNaroWrappers::OCStepShape_HArray1OfEdge^ CesEdges)
{
  ((StepShape_ConnectedEdgeSet*)nativeHandle)->SetCesEdges(*((Handle_StepShape_HArray1OfEdge*)CesEdges->Handle));
}


