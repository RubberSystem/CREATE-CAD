// File generated by CPPExt (CPP file)
//

#include "Aspect_GenericColorMap.h"
#include "../Converter.h"
#include "Aspect_ColorMapEntry.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCAspect_GenericColorMap::OCAspect_GenericColorMap(Handle(Aspect_GenericColorMap)* nativeHandle) : OCAspect_ColorMap((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Aspect_GenericColorMap(*nativeHandle);
}

OCAspect_GenericColorMap::OCAspect_GenericColorMap() : OCAspect_ColorMap((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Aspect_GenericColorMap(new Aspect_GenericColorMap());
}

 void OCAspect_GenericColorMap::AddEntry(OCNaroWrappers::OCAspect_ColorMapEntry^ AnEntry)
{
  (*((Handle_Aspect_GenericColorMap*)nativeHandle))->AddEntry(*((Aspect_ColorMapEntry*)AnEntry->Handle));
}

 Standard_Integer OCAspect_GenericColorMap::AddEntry(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  return (*((Handle_Aspect_GenericColorMap*)nativeHandle))->AddEntry(*((Quantity_Color*)aColor->Handle));
}

 void OCAspect_GenericColorMap::RemoveEntry(Standard_Integer AColorMapEntryIndex)
{
  (*((Handle_Aspect_GenericColorMap*)nativeHandle))->RemoveEntry(AColorMapEntryIndex);
}

 Standard_Integer OCAspect_GenericColorMap::FindColorMapIndex(Standard_Integer AColorMapEntryIndex)
{
  return (*((Handle_Aspect_GenericColorMap*)nativeHandle))->FindColorMapIndex(AColorMapEntryIndex);
}

OCAspect_ColorMapEntry^ OCAspect_GenericColorMap::FindEntry(Standard_Integer AColorMapEntryIndex)
{
  Aspect_ColorMapEntry* tmp = new Aspect_ColorMapEntry();
  *tmp = (*((Handle_Aspect_GenericColorMap*)nativeHandle))->FindEntry(AColorMapEntryIndex);
  return gcnew OCAspect_ColorMapEntry(tmp);
}

 Standard_Integer OCAspect_GenericColorMap::NearestColorMapIndex(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  return (*((Handle_Aspect_GenericColorMap*)nativeHandle))->NearestColorMapIndex(*((Quantity_Color*)aColor->Handle));
}

OCAspect_ColorMapEntry^ OCAspect_GenericColorMap::NearestEntry(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  Aspect_ColorMapEntry* tmp = new Aspect_ColorMapEntry();
  *tmp = (*((Handle_Aspect_GenericColorMap*)nativeHandle))->NearestEntry(*((Quantity_Color*)aColor->Handle));
  return gcnew OCAspect_ColorMapEntry(tmp);
}

