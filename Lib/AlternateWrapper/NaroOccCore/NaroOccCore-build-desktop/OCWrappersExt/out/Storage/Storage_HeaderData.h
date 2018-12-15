// File generated by CPPExt (Transient)
//
#ifndef _Storage_HeaderData_OCWrappers_HeaderFile
#define _Storage_HeaderData_OCWrappers_HeaderFile

// include the wrapped class
#include <Storage_HeaderData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TCollection/TCollection_AsciiString.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColStd/TColStd_SequenceOfAsciiString.h"
#include "../TColStd/TColStd_SequenceOfExtendedString.h"
#include "Storage_Error.h"


namespace OCNaroWrappers
{

ref class OCStorage_Schema;
ref class OCTCollection_AsciiString;
ref class OCTCollection_ExtendedString;
ref class OCTColStd_SequenceOfAsciiString;
ref class OCTColStd_SequenceOfExtendedString;



public ref class OCStorage_HeaderData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStorage_HeaderData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_HeaderData(Handle(Storage_HeaderData)* nativeHandle);

// Methods PUBLIC


OCStorage_HeaderData();

//! return the creation date <br>
 /*instead*/  OCTCollection_AsciiString^ CreationDate() ;

//! return the Storage package version <br>
 /*instead*/  OCTCollection_AsciiString^ StorageVersion() ;

//! get the version of the schema <br>
 /*instead*/  OCTCollection_AsciiString^ SchemaVersion() ;

//! get the schema's name <br>
 /*instead*/  OCTCollection_AsciiString^ SchemaName() ;

//! set the version of the application <br>
 /*instead*/  void SetApplicationVersion(OCNaroWrappers::OCTCollection_AsciiString^ aVersion) ;

//! get the version of the application <br>
 /*instead*/  OCTCollection_AsciiString^ ApplicationVersion() ;

//! set the name of the application <br>
 /*instead*/  void SetApplicationName(OCNaroWrappers::OCTCollection_ExtendedString^ aName) ;

//! get the name of the application <br>
 /*instead*/  OCTCollection_ExtendedString^ ApplicationName() ;

//! set the data type <br>
 /*instead*/  void SetDataType(OCNaroWrappers::OCTCollection_ExtendedString^ aType) ;

//! returns data type <br>
 /*instead*/  OCTCollection_ExtendedString^ DataType() ;

//! add <theUserInfo> to the user informations <br>
 /*instead*/  void AddToUserInfo(OCNaroWrappers::OCTCollection_AsciiString^ theUserInfo) ;

//! return the user informations <br>
 /*instead*/  OCTColStd_SequenceOfAsciiString^ UserInfo() ;

//! add <theUserInfo> to the user informations <br>
 /*instead*/  void AddToComments(OCNaroWrappers::OCTCollection_ExtendedString^ aComment) ;

//! return the user informations <br>
 /*instead*/  OCTColStd_SequenceOfExtendedString^ Comments() ;

//! the the number of persistent objects <br>
//!  Return: <br>
//!   the number of persistent objects readed <br>
 /*instead*/  Standard_Integer NumberOfObjects() ;


 /*instead*/  OCStorage_Error ErrorStatus() ;


 /*instead*/  OCTCollection_AsciiString^ ErrorStatusExtension() ;


 /*instead*/  void ClearErrorStatus() ;

~OCStorage_HeaderData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif