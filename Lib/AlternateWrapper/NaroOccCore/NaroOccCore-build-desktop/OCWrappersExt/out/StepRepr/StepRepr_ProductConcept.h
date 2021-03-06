// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_ProductConcept_OCWrappers_HeaderFile
#define _StepRepr_ProductConcept_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_ProductConcept.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_ProductConceptContext;


//! Representation of STEP entity ProductConcept <br>
public ref class OCStepRepr_ProductConcept : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_ProductConcept(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_ProductConcept(Handle(StepRepr_ProductConcept)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepRepr_ProductConcept();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_ProductConceptContext^ aMarketContext) ;

//! Returns field Id <br>
 /*instead*/  OCTCollection_HAsciiString^ Id() ;

//! Set field Id <br>
 /*instead*/  void SetId(OCNaroWrappers::OCTCollection_HAsciiString^ Id) ;

//! Returns field Name <br>
 /*instead*/  OCTCollection_HAsciiString^ Name() ;

//! Set field Name <br>
 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name) ;

//! Returns field Description <br>
 /*instead*/  OCTCollection_HAsciiString^ Description() ;

//! Set field Description <br>
 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description) ;

//! Returns True if optional field Description is defined <br>
 /*instead*/  System::Boolean HasDescription() ;

//! Returns field MarketContext <br>
 /*instead*/  OCStepBasic_ProductConceptContext^ MarketContext() ;

//! Set field MarketContext <br>
 /*instead*/  void SetMarketContext(OCNaroWrappers::OCStepBasic_ProductConceptContext^ MarketContext) ;

~OCStepRepr_ProductConcept()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
