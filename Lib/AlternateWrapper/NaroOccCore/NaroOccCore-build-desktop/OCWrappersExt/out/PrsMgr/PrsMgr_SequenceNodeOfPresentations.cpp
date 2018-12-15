// File generated by CPPExt (CPP file)
//

#include "PrsMgr_SequenceNodeOfPresentations.h"
#include "../Converter.h"
#include "PrsMgr_ModedPresentation.h"
#include "PrsMgr_Presentations.h"


using namespace OCNaroWrappers;

OCPrsMgr_SequenceNodeOfPresentations::OCPrsMgr_SequenceNodeOfPresentations(Handle(PrsMgr_SequenceNodeOfPresentations)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PrsMgr_SequenceNodeOfPresentations(*nativeHandle);
}

OCPrsMgr_SequenceNodeOfPresentations::OCPrsMgr_SequenceNodeOfPresentations(OCNaroWrappers::OCPrsMgr_ModedPresentation^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PrsMgr_SequenceNodeOfPresentations(new PrsMgr_SequenceNodeOfPresentations(*((PrsMgr_ModedPresentation*)I->Handle), n, p));
}

OCPrsMgr_ModedPresentation^ OCPrsMgr_SequenceNodeOfPresentations::Value()
{
  PrsMgr_ModedPresentation* tmp = new PrsMgr_ModedPresentation();
  *tmp = (*((Handle_PrsMgr_SequenceNodeOfPresentations*)nativeHandle))->Value();
  return gcnew OCPrsMgr_ModedPresentation(tmp);
}

