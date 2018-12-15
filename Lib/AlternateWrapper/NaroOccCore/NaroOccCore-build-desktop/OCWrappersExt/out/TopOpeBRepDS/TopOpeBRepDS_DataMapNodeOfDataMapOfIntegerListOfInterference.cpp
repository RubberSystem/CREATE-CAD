// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference.h"
#include "../Converter.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_DataMapOfIntegerListOfInterference.h"
#include "TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference::OCTopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference(Handle(TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference(*nativeHandle);
}

OCTopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference::OCTopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference(Standard_Integer K, OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference(new TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference(K, *((TopOpeBRepDS_ListOfInterference*)I->Handle), n));
}

 Standard_Integer OCTopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference::Key()
{
  return (*((Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference*)nativeHandle))->Key();
}

OCTopOpeBRepDS_ListOfInterference^ OCTopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference::Value()
{
  TopOpeBRepDS_ListOfInterference* tmp = new TopOpeBRepDS_ListOfInterference();
  *tmp = (*((Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepDS_ListOfInterference(tmp);
}

