// File generated by CPPExt (CPP file)
//

#include "PTColStd_DataMapIteratorOfPersistentTransientMap.h"
#include "../Converter.h"
#include "../Standard/Standard_Persistent.h"
#include "../Standard/Standard_Transient.h"
#include "PTColStd_MapPersistentHasher.h"
#include "PTColStd_PersistentTransientMap.h"
#include "PTColStd_DataMapNodeOfPersistentTransientMap.h"


using namespace OCNaroWrappers;

OCPTColStd_DataMapIteratorOfPersistentTransientMap::OCPTColStd_DataMapIteratorOfPersistentTransientMap(PTColStd_DataMapIteratorOfPersistentTransientMap* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCPTColStd_DataMapIteratorOfPersistentTransientMap::OCPTColStd_DataMapIteratorOfPersistentTransientMap() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new PTColStd_DataMapIteratorOfPersistentTransientMap();
}

OCPTColStd_DataMapIteratorOfPersistentTransientMap::OCPTColStd_DataMapIteratorOfPersistentTransientMap(OCNaroWrappers::OCPTColStd_PersistentTransientMap^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new PTColStd_DataMapIteratorOfPersistentTransientMap(*((PTColStd_PersistentTransientMap*)aMap->Handle));
}

 void OCPTColStd_DataMapIteratorOfPersistentTransientMap::Initialize(OCNaroWrappers::OCPTColStd_PersistentTransientMap^ aMap)
{
  ((PTColStd_DataMapIteratorOfPersistentTransientMap*)nativeHandle)->Initialize(*((PTColStd_PersistentTransientMap*)aMap->Handle));
}

OCStandard_Persistent^ OCPTColStd_DataMapIteratorOfPersistentTransientMap::Key()
{
  Handle(Standard_Persistent) tmp = ((PTColStd_DataMapIteratorOfPersistentTransientMap*)nativeHandle)->Key();
  return gcnew OCStandard_Persistent(&tmp);
}

OCStandard_Transient^ OCPTColStd_DataMapIteratorOfPersistentTransientMap::Value()
{
  Handle(Standard_Transient) tmp = ((PTColStd_DataMapIteratorOfPersistentTransientMap*)nativeHandle)->Value();
  return gcnew OCStandard_Transient(&tmp);
}


