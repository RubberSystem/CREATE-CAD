// File generated by CPPExt (Transient)
//
#ifndef _Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC_OCWrappers_HeaderFile
#define _Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC_OCWrappers_HeaderFile

// include the wrapped class
#include <Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Extrema_POnCurv.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv;
ref class OCExtrema_SeqPCOfPCLocFOfLocEPCOfLocateExtPC;



public ref class OCExtrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCExtrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC(Handle(Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC)* nativeHandle);

// Methods PUBLIC


OCExtrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC(OCNaroWrappers::OCExtrema_POnCurv^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCExtrema_POnCurv^ Value() ;

~OCExtrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
