// File generated by CPPExt (Transient)
//
#ifndef _IntTools_SequenceNodeOfSequenceOfCommonPrts_OCWrappers_HeaderFile
#define _IntTools_SequenceNodeOfSequenceOfCommonPrts_OCWrappers_HeaderFile

// include the wrapped class
#include <IntTools_SequenceNodeOfSequenceOfCommonPrts.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "IntTools_CommonPrt.h"


namespace OCNaroWrappers
{

ref class OCIntTools_CommonPrt;
ref class OCIntTools_SequenceOfCommonPrts;



public ref class OCIntTools_SequenceNodeOfSequenceOfCommonPrts : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntTools_SequenceNodeOfSequenceOfCommonPrts(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_SequenceNodeOfSequenceOfCommonPrts(Handle(IntTools_SequenceNodeOfSequenceOfCommonPrts)* nativeHandle);

// Methods PUBLIC


OCIntTools_SequenceNodeOfSequenceOfCommonPrts(OCNaroWrappers::OCIntTools_CommonPrt^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntTools_CommonPrt^ Value() ;

~OCIntTools_SequenceNodeOfSequenceOfCommonPrts()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
