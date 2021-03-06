// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY.h"
#include "../Converter.h"
#include "BRepMesh_ListOfXY.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "BRepMesh_DataMapOfIntegerListOfXY.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY::OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(Handle(BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(*nativeHandle);
}

OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY::OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(Standard_Integer K, OCNaroWrappers::OCBRepMesh_ListOfXY^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(new BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(K, *((BRepMesh_ListOfXY*)I->Handle), n));
}

 Standard_Integer OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY::Key()
{
  return (*((Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY*)nativeHandle))->Key();
}

OCBRepMesh_ListOfXY^ OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY::Value()
{
  BRepMesh_ListOfXY* tmp = new BRepMesh_ListOfXY();
  *tmp = (*((Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY*)nativeHandle))->Value();
  return gcnew OCBRepMesh_ListOfXY(tmp);
}


