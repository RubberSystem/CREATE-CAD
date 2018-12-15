// File generated by CPPExt (CPP file)
//

#include "MAT2d_SequenceNodeOfSequenceOfConnexion.h"
#include "../Converter.h"
#include "MAT2d_Connexion.h"
#include "MAT2d_SequenceOfConnexion.h"


using namespace OCNaroWrappers;

OCMAT2d_SequenceNodeOfSequenceOfConnexion::OCMAT2d_SequenceNodeOfSequenceOfConnexion(Handle(MAT2d_SequenceNodeOfSequenceOfConnexion)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT2d_SequenceNodeOfSequenceOfConnexion(*nativeHandle);
}

OCMAT2d_SequenceNodeOfSequenceOfConnexion::OCMAT2d_SequenceNodeOfSequenceOfConnexion(OCNaroWrappers::OCMAT2d_Connexion^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_SequenceNodeOfSequenceOfConnexion(new MAT2d_SequenceNodeOfSequenceOfConnexion(*((Handle_MAT2d_Connexion*)I->Handle), n, p));
}

OCMAT2d_Connexion^ OCMAT2d_SequenceNodeOfSequenceOfConnexion::Value()
{
  Handle(MAT2d_Connexion) tmp = (*((Handle_MAT2d_SequenceNodeOfSequenceOfConnexion*)nativeHandle))->Value();
  return gcnew OCMAT2d_Connexion(&tmp);
}

