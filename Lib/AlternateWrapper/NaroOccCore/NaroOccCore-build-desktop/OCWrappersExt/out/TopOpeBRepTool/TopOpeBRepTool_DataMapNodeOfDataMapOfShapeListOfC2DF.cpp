// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepTool_ListOfC2DF.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepTool_DataMapOfShapeListOfC2DF.h"
#include "TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF::OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF(Handle(TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF(*nativeHandle);
}

OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF::OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepTool_ListOfC2DF^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF(new TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF(*((TopoDS_Shape*)K->Handle), *((TopOpeBRepTool_ListOfC2DF*)I->Handle), n));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopOpeBRepTool_ListOfC2DF^ OCTopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF::Value()
{
  TopOpeBRepTool_ListOfC2DF* tmp = new TopOpeBRepTool_ListOfC2DF();
  *tmp = (*((Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfShapeListOfC2DF*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepTool_ListOfC2DF(tmp);
}


