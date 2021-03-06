// File generated by CPPExt (CPP file)
//

#include "StepShape_VertexLoop.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepShape_Vertex.h"


using namespace OCNaroWrappers;

OCStepShape_VertexLoop::OCStepShape_VertexLoop(StepShape_VertexLoop* nativeHandle) : OCStepShape_Loop((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_VertexLoop::OCStepShape_VertexLoop() : OCStepShape_Loop((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_VertexLoop();
}

 void OCStepShape_VertexLoop::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepShape_VertexLoop*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepShape_VertexLoop::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_Vertex^ aLoopVertex)
{
  ((StepShape_VertexLoop*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepShape_Vertex*)aLoopVertex->Handle));
}

 void OCStepShape_VertexLoop::SetLoopVertex(OCNaroWrappers::OCStepShape_Vertex^ aLoopVertex)
{
  ((StepShape_VertexLoop*)nativeHandle)->SetLoopVertex(*((StepShape_Vertex*)aLoopVertex->Handle));
}

OCStepShape_Vertex^ OCStepShape_VertexLoop::LoopVertex()
{
  StepShape_Vertex* tmp = new StepShape_Vertex();
  *tmp = ((StepShape_VertexLoop*)nativeHandle)->LoopVertex();
  return gcnew OCStepShape_Vertex(tmp);
}


