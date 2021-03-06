// File generated by CPPExt (MPV)
//
#ifndef _AIS_SequenceOfInteractive_OCWrappers_HeaderFile
#define _AIS_SequenceOfInteractive_OCWrappers_HeaderFile

// include native header
#include <AIS_SequenceOfInteractive.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCAIS_InteractiveObject;
ref class OCAIS_SequenceNodeOfSequenceOfInteractive;



public ref class OCAIS_SequenceOfInteractive  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCAIS_SequenceOfInteractive(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_SequenceOfInteractive(AIS_SequenceOfInteractive* nativeHandle);

// Methods PUBLIC


OCAIS_SequenceOfInteractive();


 /*instead*/  OCAIS_SequenceOfInteractive^ Assign(OCNaroWrappers::OCAIS_SequenceOfInteractive^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCAIS_InteractiveObject^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCAIS_SequenceOfInteractive^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAIS_InteractiveObject^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAIS_SequenceOfInteractive^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAIS_InteractiveObject^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAIS_SequenceOfInteractive^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAIS_InteractiveObject^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAIS_SequenceOfInteractive^ S) ;


 /*instead*/  OCAIS_InteractiveObject^ First() ;


 /*instead*/  OCAIS_InteractiveObject^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCAIS_SequenceOfInteractive^ Sub) ;


 /*instead*/  OCAIS_InteractiveObject^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAIS_InteractiveObject^ I) ;


 /*instead*/  OCAIS_InteractiveObject^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCAIS_SequenceOfInteractive()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
