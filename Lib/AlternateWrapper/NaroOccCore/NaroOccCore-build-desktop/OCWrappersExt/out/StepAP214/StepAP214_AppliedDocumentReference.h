// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_AppliedDocumentReference_OCWrappers_HeaderFile
#define _StepAP214_AppliedDocumentReference_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_AppliedDocumentReference.hxx>
#include "../Converter.h"

#include "../StepBasic/StepBasic_DocumentReference.h"



namespace OCNaroWrappers
{

ref class OCStepAP214_HArray1OfDocumentReferenceItem;
ref class OCStepBasic_Document;
ref class OCTCollection_HAsciiString;
ref class OCStepAP214_DocumentReferenceItem;



public ref class OCStepAP214_AppliedDocumentReference : OCStepBasic_DocumentReference {

protected:
  // dummy constructor;
  OCStepAP214_AppliedDocumentReference(OCDummy^) : OCStepBasic_DocumentReference((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_AppliedDocumentReference(Handle(StepAP214_AppliedDocumentReference)* nativeHandle);

// Methods PUBLIC


OCStepAP214_AppliedDocumentReference();


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Document^ aAssignedDocument, OCNaroWrappers::OCTCollection_HAsciiString^ aSource, OCNaroWrappers::OCStepAP214_HArray1OfDocumentReferenceItem^ aItems) ;


 /*instead*/  OCStepAP214_HArray1OfDocumentReferenceItem^ Items() ;


 /*instead*/  void SetItems(OCNaroWrappers::OCStepAP214_HArray1OfDocumentReferenceItem^ aItems) ;


 /*instead*/  OCStepAP214_DocumentReferenceItem^ ItemsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbItems() ;

~OCStepAP214_AppliedDocumentReference()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
