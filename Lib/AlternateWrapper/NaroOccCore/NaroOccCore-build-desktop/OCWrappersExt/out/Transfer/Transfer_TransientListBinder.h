// File generated by CPPExt (Transient)
//
#ifndef _Transfer_TransientListBinder_OCWrappers_HeaderFile
#define _Transfer_TransientListBinder_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_TransientListBinder.hxx>
#include "../Converter.h"

#include "Transfer_Binder.h"



namespace OCNaroWrappers
{

ref class OCTColStd_HSequenceOfTransient;
ref class OCStandard_Type;
ref class OCStandard_Transient;


//! This binder binds several (a list of) Transients with a starting <br>
//!           entity, when this entity itself corresponds to a simple list <br>
//!           of Transients. Each part is not seen as a sub-result of an <br>
//!           independant componant, but as an item of a built-in list <br>
public ref class OCTransfer_TransientListBinder : OCTransfer_Binder {

protected:
  // dummy constructor;
  OCTransfer_TransientListBinder(OCDummy^) : OCTransfer_Binder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_TransientListBinder(Handle(Transfer_TransientListBinder)* nativeHandle);

// Methods PUBLIC


OCTransfer_TransientListBinder();


OCTransfer_TransientListBinder(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list);


virtual /*instead*/  System::Boolean IsMultiple() override;


 /*instead*/  OCStandard_Type^ ResultType() ;


 /*instead*/  System::String^ ResultTypeName() ;

//! Adds an item to the result list <br>
 /*instead*/  void AddResult(OCNaroWrappers::OCStandard_Transient^ res) ;


 /*instead*/  OCTColStd_HSequenceOfTransient^ Result() ;

//! Changes an already defined sub-result <br>
 /*instead*/  void SetResult(Standard_Integer num, OCNaroWrappers::OCStandard_Transient^ res) ;


 /*instead*/  Standard_Integer NbTransients() ;


 /*instead*/  OCStandard_Transient^ Transient(Standard_Integer num) ;

~OCTransfer_TransientListBinder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
