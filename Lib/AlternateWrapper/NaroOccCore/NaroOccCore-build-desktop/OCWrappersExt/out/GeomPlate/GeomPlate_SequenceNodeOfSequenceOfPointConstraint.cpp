// File generated by CPPExt (CPP file)
//

#include "GeomPlate_SequenceNodeOfSequenceOfPointConstraint.h"
#include "../Converter.h"
#include "GeomPlate_PointConstraint.h"
#include "GeomPlate_SequenceOfPointConstraint.h"


using namespace OCNaroWrappers;

OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint::OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint(Handle(GeomPlate_SequenceNodeOfSequenceOfPointConstraint)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomPlate_SequenceNodeOfSequenceOfPointConstraint(*nativeHandle);
}

OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint::OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint(OCNaroWrappers::OCGeomPlate_PointConstraint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_SequenceNodeOfSequenceOfPointConstraint(new GeomPlate_SequenceNodeOfSequenceOfPointConstraint(*((Handle_GeomPlate_PointConstraint*)I->Handle), n, p));
}

OCGeomPlate_PointConstraint^ OCGeomPlate_SequenceNodeOfSequenceOfPointConstraint::Value()
{
  Handle(GeomPlate_PointConstraint) tmp = (*((Handle_GeomPlate_SequenceNodeOfSequenceOfPointConstraint*)nativeHandle))->Value();
  return gcnew OCGeomPlate_PointConstraint(&tmp);
}


