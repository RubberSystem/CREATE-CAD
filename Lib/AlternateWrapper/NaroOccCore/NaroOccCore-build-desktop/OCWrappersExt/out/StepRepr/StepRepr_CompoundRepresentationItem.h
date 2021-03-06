// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_CompoundRepresentationItem_OCWrappers_HeaderFile
#define _StepRepr_CompoundRepresentationItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_CompoundRepresentationItem.hxx>
#include "../Converter.h"

#include "StepRepr_RepresentationItem.h"



namespace OCNaroWrappers
{

ref class OCStepRepr_HArray1OfRepresentationItem;
ref class OCTCollection_HAsciiString;
ref class OCStepRepr_RepresentationItem;


//! Added for Dimensional Tolerances <br>
public ref class OCStepRepr_CompoundRepresentationItem : OCStepRepr_RepresentationItem {

protected:
  // dummy constructor;
  OCStepRepr_CompoundRepresentationItem(OCDummy^) : OCStepRepr_RepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_CompoundRepresentationItem(Handle(StepRepr_CompoundRepresentationItem)* nativeHandle);

// Methods PUBLIC


OCStepRepr_CompoundRepresentationItem();


 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepRepr_HArray1OfRepresentationItem^ item_element) ;


 /*instead*/  OCStepRepr_HArray1OfRepresentationItem^ ItemElement() ;


 /*instead*/  Standard_Integer NbItemElement() ;


 /*instead*/  void SetItemElement(OCNaroWrappers::OCStepRepr_HArray1OfRepresentationItem^ item_element) ;


 /*instead*/  OCStepRepr_RepresentationItem^ ItemElementValue(Standard_Integer num) ;


 /*instead*/  void SetItemElementValue(Standard_Integer num, OCNaroWrappers::OCStepRepr_RepresentationItem^ anelement) ;

~OCStepRepr_CompoundRepresentationItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
