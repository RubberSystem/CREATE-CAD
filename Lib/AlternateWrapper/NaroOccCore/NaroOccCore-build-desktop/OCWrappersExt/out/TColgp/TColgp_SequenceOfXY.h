// File generated by CPPExt (MPV)
//
#ifndef _TColgp_SequenceOfXY_OCWrappers_HeaderFile
#define _TColgp_SequenceOfXY_OCWrappers_HeaderFile

// include native header
#include <TColgp_SequenceOfXY.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCgp_XY;
ref class OCTColgp_SequenceNodeOfSequenceOfXY;



public ref class OCTColgp_SequenceOfXY  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTColgp_SequenceOfXY(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_SequenceOfXY(TColgp_SequenceOfXY* nativeHandle);

// Methods PUBLIC


OCTColgp_SequenceOfXY();


 /*instead*/  OCTColgp_SequenceOfXY^ Assign(OCNaroWrappers::OCTColgp_SequenceOfXY^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCgp_XY^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColgp_SequenceOfXY^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCgp_XY^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColgp_SequenceOfXY^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfXY^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfXY^ S) ;


 /*instead*/  OCgp_XY^ First() ;


 /*instead*/  OCgp_XY^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfXY^ Sub) ;


 /*instead*/  OCgp_XY^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ I) ;


 /*instead*/  OCgp_XY^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTColgp_SequenceOfXY()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
