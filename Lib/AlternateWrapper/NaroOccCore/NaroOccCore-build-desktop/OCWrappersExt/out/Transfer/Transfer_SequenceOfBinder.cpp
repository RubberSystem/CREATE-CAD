// File generated by CPPExt (CPP file)
//

#include "Transfer_SequenceOfBinder.h"
#include "../Converter.h"
#include "Transfer_Binder.h"
#include "Transfer_SequenceNodeOfSequenceOfBinder.h"


using namespace OCNaroWrappers;

OCTransfer_SequenceOfBinder::OCTransfer_SequenceOfBinder(Transfer_SequenceOfBinder* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTransfer_SequenceOfBinder::OCTransfer_SequenceOfBinder() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Transfer_SequenceOfBinder();
}

OCTransfer_SequenceOfBinder^ OCTransfer_SequenceOfBinder::Assign(OCNaroWrappers::OCTransfer_SequenceOfBinder^ Other)
{
  Transfer_SequenceOfBinder* tmp = new Transfer_SequenceOfBinder();
  *tmp = ((Transfer_SequenceOfBinder*)nativeHandle)->Assign(*((Transfer_SequenceOfBinder*)Other->Handle));
  return gcnew OCTransfer_SequenceOfBinder(tmp);
}

 void OCTransfer_SequenceOfBinder::Append(OCNaroWrappers::OCTransfer_Binder^ T)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Append(*((Handle_Transfer_Binder*)T->Handle));
}

 void OCTransfer_SequenceOfBinder::Append(OCNaroWrappers::OCTransfer_SequenceOfBinder^ S)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Append(*((Transfer_SequenceOfBinder*)S->Handle));
}

 void OCTransfer_SequenceOfBinder::Prepend(OCNaroWrappers::OCTransfer_Binder^ T)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Prepend(*((Handle_Transfer_Binder*)T->Handle));
}

 void OCTransfer_SequenceOfBinder::Prepend(OCNaroWrappers::OCTransfer_SequenceOfBinder^ S)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Prepend(*((Transfer_SequenceOfBinder*)S->Handle));
}

 void OCTransfer_SequenceOfBinder::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTransfer_Binder^ T)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->InsertBefore(Index, *((Handle_Transfer_Binder*)T->Handle));
}

 void OCTransfer_SequenceOfBinder::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTransfer_SequenceOfBinder^ S)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->InsertBefore(Index, *((Transfer_SequenceOfBinder*)S->Handle));
}

 void OCTransfer_SequenceOfBinder::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTransfer_Binder^ T)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->InsertAfter(Index, *((Handle_Transfer_Binder*)T->Handle));
}

 void OCTransfer_SequenceOfBinder::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTransfer_SequenceOfBinder^ S)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->InsertAfter(Index, *((Transfer_SequenceOfBinder*)S->Handle));
}

OCTransfer_Binder^ OCTransfer_SequenceOfBinder::First()
{
  Handle(Transfer_Binder) tmp = ((Transfer_SequenceOfBinder*)nativeHandle)->First();
  return gcnew OCTransfer_Binder(&tmp);
}

OCTransfer_Binder^ OCTransfer_SequenceOfBinder::Last()
{
  Handle(Transfer_Binder) tmp = ((Transfer_SequenceOfBinder*)nativeHandle)->Last();
  return gcnew OCTransfer_Binder(&tmp);
}

 void OCTransfer_SequenceOfBinder::Split(Standard_Integer Index, OCNaroWrappers::OCTransfer_SequenceOfBinder^ Sub)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Split(Index, *((Transfer_SequenceOfBinder*)Sub->Handle));
}

OCTransfer_Binder^ OCTransfer_SequenceOfBinder::Value(Standard_Integer Index)
{
  Handle(Transfer_Binder) tmp = ((Transfer_SequenceOfBinder*)nativeHandle)->Value(Index);
  return gcnew OCTransfer_Binder(&tmp);
}

 void OCTransfer_SequenceOfBinder::SetValue(Standard_Integer Index, OCNaroWrappers::OCTransfer_Binder^ I)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->SetValue(Index, *((Handle_Transfer_Binder*)I->Handle));
}

OCTransfer_Binder^ OCTransfer_SequenceOfBinder::ChangeValue(Standard_Integer Index)
{
  Handle(Transfer_Binder) tmp = ((Transfer_SequenceOfBinder*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTransfer_Binder(&tmp);
}

 void OCTransfer_SequenceOfBinder::Remove(Standard_Integer Index)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Remove(Index);
}

 void OCTransfer_SequenceOfBinder::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Transfer_SequenceOfBinder*)nativeHandle)->Remove(FromIndex, ToIndex);
}


