// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheInterfPolyhedron.h"
#include "../Converter.h"
#include "IntPatch_Polyhedron.h"
#include "IntPatch_PolyhedronTool.h"
#include "../Intf/Intf_TangentZone.h"


using namespace OCNaroWrappers;

OCIntPatch_TheInterfPolyhedron::OCIntPatch_TheInterfPolyhedron(IntPatch_TheInterfPolyhedron* nativeHandle) : OCIntf_Interference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_TheInterfPolyhedron::OCIntPatch_TheInterfPolyhedron() : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheInterfPolyhedron();
}

OCIntPatch_TheInterfPolyhedron::OCIntPatch_TheInterfPolyhedron(OCNaroWrappers::OCIntPatch_Polyhedron^ Obje1, OCNaroWrappers::OCIntPatch_Polyhedron^ Obje2) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheInterfPolyhedron(*((IntPatch_Polyhedron*)Obje1->Handle), *((IntPatch_Polyhedron*)Obje2->Handle));
}

OCIntPatch_TheInterfPolyhedron::OCIntPatch_TheInterfPolyhedron(OCNaroWrappers::OCIntPatch_Polyhedron^ Obje) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheInterfPolyhedron(*((IntPatch_Polyhedron*)Obje->Handle));
}

 void OCIntPatch_TheInterfPolyhedron::Perform(OCNaroWrappers::OCIntPatch_Polyhedron^ Obje1, OCNaroWrappers::OCIntPatch_Polyhedron^ Obje2)
{
  ((IntPatch_TheInterfPolyhedron*)nativeHandle)->Perform(*((IntPatch_Polyhedron*)Obje1->Handle), *((IntPatch_Polyhedron*)Obje2->Handle));
}

 void OCIntPatch_TheInterfPolyhedron::Perform(OCNaroWrappers::OCIntPatch_Polyhedron^ Obje)
{
  ((IntPatch_TheInterfPolyhedron*)nativeHandle)->Perform(*((IntPatch_Polyhedron*)Obje->Handle));
}


