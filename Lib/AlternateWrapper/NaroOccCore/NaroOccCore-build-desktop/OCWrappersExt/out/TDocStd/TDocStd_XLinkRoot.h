// File generated by CPPExt (Transient)
//
#ifndef _TDocStd_XLinkRoot_OCWrappers_HeaderFile
#define _TDocStd_XLinkRoot_OCWrappers_HeaderFile

// include the wrapped class
#include <TDocStd_XLinkRoot.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"



namespace OCNaroWrappers
{

ref class OCTDocStd_XLinkIterator;
ref class OCStandard_GUID;
ref class OCTDF_Data;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;


//! This attribute is the root of all external <br>
//!          references contained in a Data from TDF. Only one <br>
//!          instance of this class is added to the TDF_Data <br>
//!          root label. Starting from this attribute all the <br>
//!          Reference are linked together, to be found <br>
//!          easely. <br>
public ref class OCTDocStd_XLinkRoot : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDocStd_XLinkRoot(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDocStd_XLinkRoot(Handle(TDocStd_XLinkRoot)* nativeHandle);

// Methods PUBLIC

//! Returns the ID: 2a96b61d-ec8b-11d0-bee7-080009dc3333 <br>
//! <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//! Sets an empty XLinkRoot to Root or gets the <br>
//!          existing one. Only one attribute per TDF_Data. <br>
static /*instead*/  OCTDocStd_XLinkRoot^ Set(OCNaroWrappers::OCTDF_Data^ aDF) ;

//! Inserts <anXLinkPtr> at the beginning of the XLink chain. <br>
static /*instead*/  void Insert(TDocStd_XLinkPtr anXLinkPtr) ;

//! Removes <anXLinkPtr> from the XLink chain, if it exists. <br>
static /*instead*/  void Remove(TDocStd_XLinkPtr anXLinkPtr) ;

//! Returns the ID of the attribute. <br>
//! <br>
virtual /*instead*/  OCStandard_GUID^ ID() ;

//! Returns a null handle. <br>
virtual /*instead*/  OCTDF_Attribute^ BackupCopy() override;

//! Does nothing. <br>
virtual /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ anAttribute) ;

//! Returns a null handle. <br>
virtual /*instead*/  OCTDF_Attribute^ NewEmpty() ;

//! Does nothing. <br>
virtual /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ intoAttribute, OCNaroWrappers::OCTDF_RelocationTable^ aRelocationTable) ;

//! Dumps the attribute on <aStream>. <br>
virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& anOS) override;

~OCTDocStd_XLinkRoot()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
