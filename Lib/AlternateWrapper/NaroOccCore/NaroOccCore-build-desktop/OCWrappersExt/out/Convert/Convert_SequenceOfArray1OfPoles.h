// File generated by CPPExt (MPV)
//
#ifndef _Convert_SequenceOfArray1OfPoles_OCWrappers_HeaderFile
#define _Convert_SequenceOfArray1OfPoles_OCWrappers_HeaderFile

// include native header
#include <Convert_SequenceOfArray1OfPoles.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTColgp_HArray1OfPnt;
ref class OCConvert_SequenceNodeOfSequenceOfArray1OfPoles;



public ref class OCConvert_SequenceOfArray1OfPoles  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCConvert_SequenceOfArray1OfPoles(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCConvert_SequenceOfArray1OfPoles(Convert_SequenceOfArray1OfPoles* nativeHandle);

// Methods PUBLIC


OCConvert_SequenceOfArray1OfPoles();


 /*instead*/  OCConvert_SequenceOfArray1OfPoles^ Assign(OCNaroWrappers::OCConvert_SequenceOfArray1OfPoles^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColgp_HArray1OfPnt^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCConvert_SequenceOfArray1OfPoles^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColgp_HArray1OfPnt^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCConvert_SequenceOfArray1OfPoles^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColgp_HArray1OfPnt^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCConvert_SequenceOfArray1OfPoles^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColgp_HArray1OfPnt^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCConvert_SequenceOfArray1OfPoles^ S) ;


 /*instead*/  OCTColgp_HArray1OfPnt^ First() ;


 /*instead*/  OCTColgp_HArray1OfPnt^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCConvert_SequenceOfArray1OfPoles^ Sub) ;


 /*instead*/  OCTColgp_HArray1OfPnt^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTColgp_HArray1OfPnt^ I) ;


 /*instead*/  OCTColgp_HArray1OfPnt^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCConvert_SequenceOfArray1OfPoles()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
