// File generated by CPPExt (CPP file)
//

#include "BRepMesh_ComparatorOfIndexedVertexOfDelaun.h"
#include "../Converter.h"
#include "BRepMesh_DataStructureOfDelaun.h"
#include "../gp/gp_XY.h"


using namespace OCNaroWrappers;

OCBRepMesh_ComparatorOfIndexedVertexOfDelaun::OCBRepMesh_ComparatorOfIndexedVertexOfDelaun(BRepMesh_ComparatorOfIndexedVertexOfDelaun* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_ComparatorOfIndexedVertexOfDelaun::OCBRepMesh_ComparatorOfIndexedVertexOfDelaun(OCNaroWrappers::OCgp_XY^ theDir, Standard_Real TheTol, OCNaroWrappers::OCBRepMesh_DataStructureOfDelaun^ HDS) 
{
  nativeHandle = new BRepMesh_ComparatorOfIndexedVertexOfDelaun(*((gp_XY*)theDir->Handle), TheTol, *((Handle_BRepMesh_DataStructureOfDelaun*)HDS->Handle));
}

 System::Boolean OCBRepMesh_ComparatorOfIndexedVertexOfDelaun::IsLower(Standard_Integer Left, Standard_Integer Right)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_ComparatorOfIndexedVertexOfDelaun*)nativeHandle)->IsLower(Left, Right));
}

 System::Boolean OCBRepMesh_ComparatorOfIndexedVertexOfDelaun::IsGreater(Standard_Integer Left, Standard_Integer Right)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_ComparatorOfIndexedVertexOfDelaun*)nativeHandle)->IsGreater(Left, Right));
}

 System::Boolean OCBRepMesh_ComparatorOfIndexedVertexOfDelaun::IsEqual(Standard_Integer Left, Standard_Integer Right)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_ComparatorOfIndexedVertexOfDelaun*)nativeHandle)->IsEqual(Left, Right));
}

