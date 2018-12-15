// File generated by CPPExt (Transient)
//
#ifndef _Transfer_VoidBinder_OCWrappers_HeaderFile
#define _Transfer_VoidBinder_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_VoidBinder.hxx>
#include "../Converter.h"

#include "Transfer_Binder.h"



namespace OCNaroWrappers
{

ref class OCStandard_Type;


//! a VoidBinder is used to bind a starting item with a status, <br>
//!           error or warning messages, but no result <br>
//!           It is interpreted by TransferProcess, which admits a <br>
//!           VoidBinder to be over-written, and copies its check to the <br>
//!           new Binder <br>
public ref class OCTransfer_VoidBinder : OCTransfer_Binder {

protected:
  // dummy constructor;
  OCTransfer_VoidBinder(OCDummy^) : OCTransfer_Binder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_VoidBinder(Handle(Transfer_VoidBinder)* nativeHandle);

// Methods PUBLIC

//! a VoidBinder is not Multiple (Remark : it is not Simple too) <br>
//!           But it can bring next results ... <br>
OCTransfer_VoidBinder();

//! while a VoidBinder admits no Result, its ResultType returns <br>
//!           the type of <me> <br>
 /*instead*/  OCStandard_Type^ ResultType() ;

//! Returns "(void)" <br>
 /*instead*/  System::String^ ResultTypeName() ;

~OCTransfer_VoidBinder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif