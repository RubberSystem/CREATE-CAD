// File generated by CPPExt (Transient)
//
#ifndef _BOPTools_SequenceNodeOfSequenceOfCurves_OCWrappers_HeaderFile
#define _BOPTools_SequenceNodeOfSequenceOfCurves_OCWrappers_HeaderFile

// include the wrapped class
#include <BOPTools_SequenceNodeOfSequenceOfCurves.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "BOPTools_Curve.h"


namespace OCNaroWrappers
{

ref class OCBOPTools_Curve;
ref class OCBOPTools_SequenceOfCurves;



public ref class OCBOPTools_SequenceNodeOfSequenceOfCurves : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCBOPTools_SequenceNodeOfSequenceOfCurves(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTools_SequenceNodeOfSequenceOfCurves(Handle(BOPTools_SequenceNodeOfSequenceOfCurves)* nativeHandle);

// Methods PUBLIC


OCBOPTools_SequenceNodeOfSequenceOfCurves(OCNaroWrappers::OCBOPTools_Curve^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCBOPTools_Curve^ Value() ;

~OCBOPTools_SequenceNodeOfSequenceOfCurves()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
