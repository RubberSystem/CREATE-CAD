// File generated by CPPExt (CPP file)
//

#include "BRepPrim_Torus.h"
#include "../Converter.h"
#include "../gp/gp_Ax2.h"
#include "../gp/gp_Pnt.h"
#include "../TopoDS/TopoDS_Face.h"


using namespace OCNaroWrappers;

OCBRepPrim_Torus::OCBRepPrim_Torus(BRepPrim_Torus* nativeHandle) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepPrim_Torus::OCBRepPrim_Torus(OCNaroWrappers::OCgp_Ax2^ Position, Standard_Real Major, Standard_Real Minor) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrim_Torus(*((gp_Ax2*)Position->Handle), Major, Minor);
}

OCBRepPrim_Torus::OCBRepPrim_Torus(Standard_Real Major, Standard_Real Minor) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrim_Torus(Major, Minor);
}

OCBRepPrim_Torus::OCBRepPrim_Torus(OCNaroWrappers::OCgp_Pnt^ Center, Standard_Real Major, Standard_Real Minor) : OCBRepPrim_Revolution((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrim_Torus(*((gp_Pnt*)Center->Handle), Major, Minor);
}

OCTopoDS_Face^ OCBRepPrim_Torus::MakeEmptyLateralFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((BRepPrim_Torus*)nativeHandle)->MakeEmptyLateralFace();
  return gcnew OCTopoDS_Face(tmp);
}


