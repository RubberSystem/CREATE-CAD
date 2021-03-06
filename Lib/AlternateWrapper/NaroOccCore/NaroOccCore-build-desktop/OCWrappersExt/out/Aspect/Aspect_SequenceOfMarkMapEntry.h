// File generated by CPPExt (MPV)
//
#ifndef _Aspect_SequenceOfMarkMapEntry_OCWrappers_HeaderFile
#define _Aspect_SequenceOfMarkMapEntry_OCWrappers_HeaderFile

// include native header
#include <Aspect_SequenceOfMarkMapEntry.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCAspect_MarkMapEntry;
ref class OCAspect_SequenceNodeOfSequenceOfMarkMapEntry;



public ref class OCAspect_SequenceOfMarkMapEntry  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCAspect_SequenceOfMarkMapEntry(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCAspect_SequenceOfMarkMapEntry(Aspect_SequenceOfMarkMapEntry* nativeHandle);

// Methods PUBLIC


OCAspect_SequenceOfMarkMapEntry();


 /*instead*/  OCAspect_SequenceOfMarkMapEntry^ Assign(OCNaroWrappers::OCAspect_SequenceOfMarkMapEntry^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCAspect_MarkMapEntry^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCAspect_SequenceOfMarkMapEntry^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAspect_MarkMapEntry^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAspect_SequenceOfMarkMapEntry^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_MarkMapEntry^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfMarkMapEntry^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_MarkMapEntry^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfMarkMapEntry^ S) ;


 /*instead*/  OCAspect_MarkMapEntry^ First() ;


 /*instead*/  OCAspect_MarkMapEntry^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfMarkMapEntry^ Sub) ;


 /*instead*/  OCAspect_MarkMapEntry^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_MarkMapEntry^ I) ;


 /*instead*/  OCAspect_MarkMapEntry^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCAspect_SequenceOfMarkMapEntry()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
