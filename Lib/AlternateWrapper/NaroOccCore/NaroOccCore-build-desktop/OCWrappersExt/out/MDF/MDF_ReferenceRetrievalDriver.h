// File generated by CPPExt (Transient)
//
#ifndef _MDF_ReferenceRetrievalDriver_OCWrappers_HeaderFile
#define _MDF_ReferenceRetrievalDriver_OCWrappers_HeaderFile

// include the wrapped class
#include <MDF_ReferenceRetrievalDriver.hxx>
#include "../Converter.h"

#include "MDF_ARDriver.h"



namespace OCNaroWrappers
{

ref class OCCDM_MessageDriver;
ref class OCStandard_Type;
ref class OCTDF_Attribute;
ref class OCPDF_Attribute;
ref class OCMDF_RRelocationTable;



public ref class OCMDF_ReferenceRetrievalDriver : OCMDF_ARDriver {

protected:
  // dummy constructor;
  OCMDF_ReferenceRetrievalDriver(OCDummy^) : OCMDF_ARDriver((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_ReferenceRetrievalDriver(Handle(MDF_ReferenceRetrievalDriver)* nativeHandle);

// Methods PUBLIC


OCMDF_ReferenceRetrievalDriver(OCNaroWrappers::OCCDM_MessageDriver^ theMessageDriver);

//! Returns the version number from which the driver <br>
//!          is available: 0. <br>
 /*instead*/  Standard_Integer VersionNumber() ;

//! Returns the type: Reference from PDF. <br>
 /*instead*/  OCStandard_Type^ SourceType() ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCPDF_Attribute^ Source, OCNaroWrappers::OCTDF_Attribute^ Target, OCNaroWrappers::OCMDF_RRelocationTable^ RelocTable) ;

~OCMDF_ReferenceRetrievalDriver()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
