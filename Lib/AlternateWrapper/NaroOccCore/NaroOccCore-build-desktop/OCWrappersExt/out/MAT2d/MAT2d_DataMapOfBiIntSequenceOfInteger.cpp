// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapOfBiIntSequenceOfInteger.h"
#include "../Converter.h"
#include "MAT2d_BiInt.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "MAT2d_MapBiIntHasher.h"
#include "MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger.h"
#include "MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapOfBiIntSequenceOfInteger::OCMAT2d_DataMapOfBiIntSequenceOfInteger(MAT2d_DataMapOfBiIntSequenceOfInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_DataMapOfBiIntSequenceOfInteger::OCMAT2d_DataMapOfBiIntSequenceOfInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_DataMapOfBiIntSequenceOfInteger(NbBuckets);
}

OCMAT2d_DataMapOfBiIntSequenceOfInteger^ OCMAT2d_DataMapOfBiIntSequenceOfInteger::Assign(OCNaroWrappers::OCMAT2d_DataMapOfBiIntSequenceOfInteger^ Other)
{
  MAT2d_DataMapOfBiIntSequenceOfInteger* tmp = new MAT2d_DataMapOfBiIntSequenceOfInteger(0);
  *tmp = ((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->Assign(*((MAT2d_DataMapOfBiIntSequenceOfInteger*)Other->Handle));
  return gcnew OCMAT2d_DataMapOfBiIntSequenceOfInteger(tmp);
}

 void OCMAT2d_DataMapOfBiIntSequenceOfInteger::ReSize(Standard_Integer NbBuckets)
{
  ((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCMAT2d_DataMapOfBiIntSequenceOfInteger::Bind(OCNaroWrappers::OCMAT2d_BiInt^ K, OCNaroWrappers::OCTColStd_SequenceOfInteger^ I)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->Bind(*((MAT2d_BiInt*)K->Handle), *((TColStd_SequenceOfInteger*)I->Handle)));
}

 System::Boolean OCMAT2d_DataMapOfBiIntSequenceOfInteger::IsBound(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->IsBound(*((MAT2d_BiInt*)K->Handle)));
}

 System::Boolean OCMAT2d_DataMapOfBiIntSequenceOfInteger::UnBind(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->UnBind(*((MAT2d_BiInt*)K->Handle)));
}

OCTColStd_SequenceOfInteger^ OCMAT2d_DataMapOfBiIntSequenceOfInteger::Find(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  TColStd_SequenceOfInteger* tmp = new TColStd_SequenceOfInteger();
  *tmp = ((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->Find(*((MAT2d_BiInt*)K->Handle));
  return gcnew OCTColStd_SequenceOfInteger(tmp);
}

OCTColStd_SequenceOfInteger^ OCMAT2d_DataMapOfBiIntSequenceOfInteger::ChangeFind(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  TColStd_SequenceOfInteger* tmp = new TColStd_SequenceOfInteger();
  *tmp = ((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->ChangeFind(*((MAT2d_BiInt*)K->Handle));
  return gcnew OCTColStd_SequenceOfInteger(tmp);
}

 Standard_Address OCMAT2d_DataMapOfBiIntSequenceOfInteger::Find1(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return ((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->Find1(*((MAT2d_BiInt*)K->Handle));
}

 Standard_Address OCMAT2d_DataMapOfBiIntSequenceOfInteger::ChangeFind1(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return ((MAT2d_DataMapOfBiIntSequenceOfInteger*)nativeHandle)->ChangeFind1(*((MAT2d_BiInt*)K->Handle));
}


