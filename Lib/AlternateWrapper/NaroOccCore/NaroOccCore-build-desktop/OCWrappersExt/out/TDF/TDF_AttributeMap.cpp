// File generated by CPPExt (CPP file)
//

#include "TDF_AttributeMap.h"
#include "../Converter.h"
#include "TDF_Attribute.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "TDF_StdMapNodeOfAttributeMap.h"
#include "TDF_MapIteratorOfAttributeMap.h"


using namespace OCNaroWrappers;

OCTDF_AttributeMap::OCTDF_AttributeMap(TDF_AttributeMap* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDF_AttributeMap::OCTDF_AttributeMap(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TDF_AttributeMap(NbBuckets);
}

OCTDF_AttributeMap^ OCTDF_AttributeMap::Assign(OCNaroWrappers::OCTDF_AttributeMap^ Other)
{
  TDF_AttributeMap* tmp = new TDF_AttributeMap(0);
  *tmp = ((TDF_AttributeMap*)nativeHandle)->Assign(*((TDF_AttributeMap*)Other->Handle));
  return gcnew OCTDF_AttributeMap(tmp);
}

 void OCTDF_AttributeMap::ReSize(Standard_Integer NbBuckets)
{
  ((TDF_AttributeMap*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTDF_AttributeMap::Add(OCNaroWrappers::OCTDF_Attribute^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_AttributeMap*)nativeHandle)->Add(*((Handle_TDF_Attribute*)aKey->Handle)));
}

 System::Boolean OCTDF_AttributeMap::Contains(OCNaroWrappers::OCTDF_Attribute^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_AttributeMap*)nativeHandle)->Contains(*((Handle_TDF_Attribute*)aKey->Handle)));
}

 System::Boolean OCTDF_AttributeMap::Remove(OCNaroWrappers::OCTDF_Attribute^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_AttributeMap*)nativeHandle)->Remove(*((Handle_TDF_Attribute*)aKey->Handle)));
}


