// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepMesh_EdgeDiscret.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepMesh_DataMapOfShapeEdgeDiscret.h"
#include "BRepMesh_DataMapNodeOfDataMapOfShapeEdgeDiscret.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret::OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret(BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret::OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret();
}

OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret::OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret(OCNaroWrappers::OCBRepMesh_DataMapOfShapeEdgeDiscret^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret(*((BRepMesh_DataMapOfShapeEdgeDiscret*)aMap->Handle));
}

 void OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret::Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfShapeEdgeDiscret^ aMap)
{
  ((BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret*)nativeHandle)->Initialize(*((BRepMesh_DataMapOfShapeEdgeDiscret*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCBRepMesh_EdgeDiscret^ OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret::Value()
{
  Handle(BRepMesh_EdgeDiscret) tmp = ((BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret*)nativeHandle)->Value();
  return gcnew OCBRepMesh_EdgeDiscret(&tmp);
}

