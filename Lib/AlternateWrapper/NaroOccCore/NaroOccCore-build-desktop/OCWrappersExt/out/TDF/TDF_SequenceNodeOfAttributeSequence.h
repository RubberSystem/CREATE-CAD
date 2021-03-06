// File generated by CPPExt (Transient)
//
#ifndef _TDF_SequenceNodeOfAttributeSequence_OCWrappers_HeaderFile
#define _TDF_SequenceNodeOfAttributeSequence_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_SequenceNodeOfAttributeSequence.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCTDF_Attribute;
ref class OCTDF_AttributeSequence;



public ref class OCTDF_SequenceNodeOfAttributeSequence : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTDF_SequenceNodeOfAttributeSequence(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_SequenceNodeOfAttributeSequence(Handle(TDF_SequenceNodeOfAttributeSequence)* nativeHandle);

// Methods PUBLIC


OCTDF_SequenceNodeOfAttributeSequence(OCNaroWrappers::OCTDF_Attribute^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTDF_Attribute^ Value() ;

~OCTDF_SequenceNodeOfAttributeSequence()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
