// File generated by CPPExt (CPP file)
//

#include "BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger.h"
#include "../Converter.h"
#include "../TColStd/TColStd_IndexedMapOfInteger.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "BOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger::OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger(Handle(BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger(*nativeHandle);
}

OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger::OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger(Standard_Integer K1, Standard_Integer K2, OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger(new BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger(K1, K2, *((TColStd_IndexedMapOfInteger*)I->Handle), n1, n2));
}

 Standard_Integer OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger::Key1()
{
  return (*((Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle))->Key1();
}

 Standard_Integer OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger::Key2()
{
  return (*((Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger::Next2()
{
  return (*((Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle))->Next2();
}

OCTColStd_IndexedMapOfInteger^ OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger::Value()
{
  TColStd_IndexedMapOfInteger* tmp = new TColStd_IndexedMapOfInteger(0);
  *tmp = (*((Handle_BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfIntegerIndexedMapOfInteger*)nativeHandle))->Value();
  return gcnew OCTColStd_IndexedMapOfInteger(tmp);
}


