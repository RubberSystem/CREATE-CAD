// File generated by CPPExt (MPV)
//
#ifndef _Aspect_SequenceOfFontMapEntry_OCWrappers_HeaderFile
#define _Aspect_SequenceOfFontMapEntry_OCWrappers_HeaderFile

// include native header
#include <Aspect_SequenceOfFontMapEntry.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCAspect_FontMapEntry;
ref class OCAspect_SequenceNodeOfSequenceOfFontMapEntry;



public ref class OCAspect_SequenceOfFontMapEntry  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCAspect_SequenceOfFontMapEntry(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCAspect_SequenceOfFontMapEntry(Aspect_SequenceOfFontMapEntry* nativeHandle);

// Methods PUBLIC


OCAspect_SequenceOfFontMapEntry();


 /*instead*/  OCAspect_SequenceOfFontMapEntry^ Assign(OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCAspect_FontMapEntry^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAspect_FontMapEntry^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_FontMapEntry^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_FontMapEntry^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ S) ;


 /*instead*/  OCAspect_FontMapEntry^ First() ;


 /*instead*/  OCAspect_FontMapEntry^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfFontMapEntry^ Sub) ;


 /*instead*/  OCAspect_FontMapEntry^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_FontMapEntry^ I) ;


 /*instead*/  OCAspect_FontMapEntry^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCAspect_SequenceOfFontMapEntry()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
