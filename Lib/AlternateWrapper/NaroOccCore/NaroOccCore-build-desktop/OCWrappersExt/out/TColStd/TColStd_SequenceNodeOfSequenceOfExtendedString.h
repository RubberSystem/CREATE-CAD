// File generated by CPPExt (Transient)
//
#ifndef _TColStd_SequenceNodeOfSequenceOfExtendedString_OCWrappers_HeaderFile
#define _TColStd_SequenceNodeOfSequenceOfExtendedString_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_SequenceNodeOfSequenceOfExtendedString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../TCollection/TCollection_ExtendedString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_ExtendedString;
ref class OCTColStd_SequenceOfExtendedString;



public ref class OCTColStd_SequenceNodeOfSequenceOfExtendedString : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColStd_SequenceNodeOfSequenceOfExtendedString(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_SequenceNodeOfSequenceOfExtendedString(Handle(TColStd_SequenceNodeOfSequenceOfExtendedString)* nativeHandle);

// Methods PUBLIC


OCTColStd_SequenceNodeOfSequenceOfExtendedString(OCNaroWrappers::OCTCollection_ExtendedString^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTCollection_ExtendedString^ Value() ;

~OCTColStd_SequenceNodeOfSequenceOfExtendedString()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
