// File generated by CPPExt (CPP file)
//

#include "TDF_ListIteratorOfAttributeList.h"
#include "../Converter.h"
#include "TDF_AttributeList.h"
#include "TDF_Attribute.h"
#include "TDF_ListNodeOfAttributeList.h"


using namespace OCNaroWrappers;

OCTDF_ListIteratorOfAttributeList::OCTDF_ListIteratorOfAttributeList(TDF_ListIteratorOfAttributeList* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTDF_ListIteratorOfAttributeList::OCTDF_ListIteratorOfAttributeList() 
{
  nativeHandle = new TDF_ListIteratorOfAttributeList();
}

OCTDF_ListIteratorOfAttributeList::OCTDF_ListIteratorOfAttributeList(OCNaroWrappers::OCTDF_AttributeList^ L) 
{
  nativeHandle = new TDF_ListIteratorOfAttributeList(*((TDF_AttributeList*)L->Handle));
}

 void OCTDF_ListIteratorOfAttributeList::Initialize(OCNaroWrappers::OCTDF_AttributeList^ L)
{
  ((TDF_ListIteratorOfAttributeList*)nativeHandle)->Initialize(*((TDF_AttributeList*)L->Handle));
}

 System::Boolean OCTDF_ListIteratorOfAttributeList::More()
{
  return OCConverter::StandardBooleanToBoolean(((TDF_ListIteratorOfAttributeList*)nativeHandle)->More());
}

 void OCTDF_ListIteratorOfAttributeList::Next()
{
  ((TDF_ListIteratorOfAttributeList*)nativeHandle)->Next();
}

OCTDF_Attribute^ OCTDF_ListIteratorOfAttributeList::Value()
{
  Handle(TDF_Attribute) tmp = ((TDF_ListIteratorOfAttributeList*)nativeHandle)->Value();
  return gcnew OCTDF_Attribute(&tmp);
}


