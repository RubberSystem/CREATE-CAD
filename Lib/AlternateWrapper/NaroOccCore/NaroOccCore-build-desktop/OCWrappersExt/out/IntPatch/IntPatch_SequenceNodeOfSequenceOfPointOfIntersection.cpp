// File generated by CPPExt (CPP file)
//

#include "IntPatch_SequenceNodeOfSequenceOfPointOfIntersection.h"
#include "../Converter.h"
#include "IntPatch_ThePointOfIntersection.h"
#include "IntPatch_SequenceOfPointOfIntersection.h"


using namespace OCNaroWrappers;

OCIntPatch_SequenceNodeOfSequenceOfPointOfIntersection::OCIntPatch_SequenceNodeOfSequenceOfPointOfIntersection(Handle(IntPatch_SequenceNodeOfSequenceOfPointOfIntersection)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntPatch_SequenceNodeOfSequenceOfPointOfIntersection(*nativeHandle);
}

OCIntPatch_SequenceNodeOfSequenceOfPointOfIntersection::OCIntPatch_SequenceNodeOfSequenceOfPointOfIntersection(OCNaroWrappers::OCIntPatch_ThePointOfIntersection^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_SequenceNodeOfSequenceOfPointOfIntersection(new IntPatch_SequenceNodeOfSequenceOfPointOfIntersection(*((IntPatch_ThePointOfIntersection*)I->Handle), n, p));
}

OCIntPatch_ThePointOfIntersection^ OCIntPatch_SequenceNodeOfSequenceOfPointOfIntersection::Value()
{
  IntPatch_ThePointOfIntersection* tmp = new IntPatch_ThePointOfIntersection();
  *tmp = (*((Handle_IntPatch_SequenceNodeOfSequenceOfPointOfIntersection*)nativeHandle))->Value();
  return gcnew OCIntPatch_ThePointOfIntersection(tmp);
}


