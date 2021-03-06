// File generated by CPPExt (CPP file)
//

#include "TNaming_DeltaOnRemoval.h"
#include "../Converter.h"
#include "TNaming_DeltaOnModification.h"
#include "TNaming_NamedShape.h"


using namespace OCNaroWrappers;

OCTNaming_DeltaOnRemoval::OCTNaming_DeltaOnRemoval(Handle(TNaming_DeltaOnRemoval)* nativeHandle) : OCTDF_DeltaOnRemoval((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TNaming_DeltaOnRemoval(*nativeHandle);
}

OCTNaming_DeltaOnRemoval::OCTNaming_DeltaOnRemoval(OCNaroWrappers::OCTNaming_NamedShape^ NS) : OCTDF_DeltaOnRemoval((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TNaming_DeltaOnRemoval(new TNaming_DeltaOnRemoval(*((Handle_TNaming_NamedShape*)NS->Handle)));
}

 void OCTNaming_DeltaOnRemoval::Apply()
{
  (*((Handle_TNaming_DeltaOnRemoval*)nativeHandle))->Apply();
}


