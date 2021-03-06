// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapNodeOfDataMapOfIntegerBisec.h"
#include "../Converter.h"
#include "../Bisector/Bisector_Bisec.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT2d_DataMapOfIntegerBisec.h"
#include "MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec::OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec(Handle(MAT2d_DataMapNodeOfDataMapOfIntegerBisec)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec(*nativeHandle);
}

OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec::OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec(Standard_Integer K, OCNaroWrappers::OCBisector_Bisec^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec(new MAT2d_DataMapNodeOfDataMapOfIntegerBisec(K, *((Bisector_Bisec*)I->Handle), n));
}

 Standard_Integer OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec::Key()
{
  return (*((Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec*)nativeHandle))->Key();
}

OCBisector_Bisec^ OCMAT2d_DataMapNodeOfDataMapOfIntegerBisec::Value()
{
  Bisector_Bisec* tmp = new Bisector_Bisec();
  *tmp = (*((Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec*)nativeHandle))->Value();
  return gcnew OCBisector_Bisec(tmp);
}


