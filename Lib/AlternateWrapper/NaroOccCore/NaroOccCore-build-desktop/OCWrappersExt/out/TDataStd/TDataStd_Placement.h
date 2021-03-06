// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_Placement_OCWrappers_HeaderFile
#define _TDataStd_Placement_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_Placement.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCStandard_GUID;
ref class OCTDF_Label;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;



public ref class OCTDataStd_Placement : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_Placement(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_Placement(Handle(TDataStd_Placement)* nativeHandle);

// Methods PUBLIC

//! class methods <br>
//!          ============= <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//! Find, or    create,   an Placement  attribute.     the <br>
//!          Placement attribute is returned. <br>//! Placement methods <br>
//!          ================= <br>
static /*instead*/  OCTDataStd_Placement^ Set(OCNaroWrappers::OCTDF_Label^ label) ;


OCTDataStd_Placement();


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ With) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDataStd_Placement()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
