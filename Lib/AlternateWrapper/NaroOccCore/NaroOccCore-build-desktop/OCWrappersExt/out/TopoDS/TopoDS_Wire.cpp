// File generated by CPPExt (CPP file)
//

#include "TopoDS_Wire.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTopoDS_Wire::OCTopoDS_Wire(TopoDS_Wire* nativeHandle) : OCTopoDS_Shape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopoDS_Wire::OCTopoDS_Wire() : OCTopoDS_Shape((OCDummy^)nullptr)

{
  nativeHandle = new TopoDS_Wire();
}


