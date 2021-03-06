// File generated by CPPExt (Transient)
//
#ifndef _TDocStd_Modified_OCWrappers_HeaderFile
#define _TDocStd_Modified_OCWrappers_HeaderFile

// include the wrapped class
#include <TDocStd_Modified.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"

#include "../TDF/TDF_LabelMap.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMap;
ref class OCStandard_GUID;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;


//!   Transient     attribute   wich     register modified <br>
//!          labels. This attribute is attached to root label. <br>
public ref class OCTDocStd_Modified : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDocStd_Modified(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDocStd_Modified(Handle(TDocStd_Modified)* nativeHandle);

// Methods PUBLIC

//! API class methods <br>
//!          ================= <br>
static /*instead*/  System::Boolean IsEmpty(OCNaroWrappers::OCTDF_Label^ access) ;


static /*instead*/  System::Boolean Add(OCNaroWrappers::OCTDF_Label^ alabel) ;


static /*instead*/  System::Boolean Remove(OCNaroWrappers::OCTDF_Label^ alabel) ;


static /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTDF_Label^ alabel) ;

//! if <IsEmpty> raise an exception. <br>
static /*instead*/  OCTDF_LabelMap^ Get(OCNaroWrappers::OCTDF_Label^ access) ;

//! remove all modified labels. becomes empty <br>
static /*instead*/  void Clear(OCNaroWrappers::OCTDF_Label^ access) ;

//! Modified methods <br>
//!          ================ <br>
static /*instead*/  OCStandard_GUID^ GetID() ;


OCTDocStd_Modified();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Clear() ;

//! add <L> as modified <br>
 /*instead*/  System::Boolean AddLabel(OCNaroWrappers::OCTDF_Label^ L) ;

//! remove  <L> as modified <br>
 /*instead*/  System::Boolean RemoveLabel(OCNaroWrappers::OCTDF_Label^ L) ;

//! returns modified label map <br>
 /*instead*/  OCTDF_LabelMap^ Get() ;


 /*instead*/  OCStandard_GUID^ ID() ;


 /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ With) ;


 /*instead*/  OCTDF_Attribute^ NewEmpty() ;


 /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDocStd_Modified()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
