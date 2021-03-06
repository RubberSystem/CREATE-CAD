// File generated by CPPExt (MPV)
//
#ifndef _TColStd_SequenceOfExtendedString_OCWrappers_HeaderFile
#define _TColStd_SequenceOfExtendedString_OCWrappers_HeaderFile

// include native header
#include <TColStd_SequenceOfExtendedString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCTColStd_SequenceNodeOfSequenceOfExtendedString;



public ref class OCTColStd_SequenceOfExtendedString  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTColStd_SequenceOfExtendedString(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_SequenceOfExtendedString(TColStd_SequenceOfExtendedString* nativeHandle);

// Methods PUBLIC


OCTColStd_SequenceOfExtendedString();


 /*instead*/  OCTColStd_SequenceOfExtendedString^ Assign(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTCollection_ExtendedString^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTCollection_ExtendedString^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTCollection_ExtendedString^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTCollection_ExtendedString^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S) ;


 /*instead*/  OCTCollection_ExtendedString^ First() ;


 /*instead*/  OCTCollection_ExtendedString^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ Sub) ;


 /*instead*/  OCTCollection_ExtendedString^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTCollection_ExtendedString^ I) ;


 /*instead*/  OCTCollection_ExtendedString^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTColStd_SequenceOfExtendedString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
