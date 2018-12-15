// File generated by CPPExt (CPP file)
//

#include "TColgp_SequenceNodeOfSequenceOfDir.h"
#include "../Converter.h"
#include "../gp/gp_Dir.h"
#include "TColgp_SequenceOfDir.h"


using namespace OCNaroWrappers;

OCTColgp_SequenceNodeOfSequenceOfDir::OCTColgp_SequenceNodeOfSequenceOfDir(Handle(TColgp_SequenceNodeOfSequenceOfDir)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_SequenceNodeOfSequenceOfDir(*nativeHandle);
}

OCTColgp_SequenceNodeOfSequenceOfDir::OCTColgp_SequenceNodeOfSequenceOfDir(OCNaroWrappers::OCgp_Dir^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_SequenceNodeOfSequenceOfDir(new TColgp_SequenceNodeOfSequenceOfDir(*((gp_Dir*)I->Handle), n, p));
}

OCgp_Dir^ OCTColgp_SequenceNodeOfSequenceOfDir::Value()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = (*((Handle_TColgp_SequenceNodeOfSequenceOfDir*)nativeHandle))->Value();
  return gcnew OCgp_Dir(tmp);
}

