// File generated by CPPExt (CPP file)
//

#include "Bnd_SeqOfBox.h"
#include "../Converter.h"
#include "Bnd_Box.h"
#include "Bnd_SequenceNodeOfSeqOfBox.h"


using namespace OCNaroWrappers;

OCBnd_SeqOfBox::OCBnd_SeqOfBox(Bnd_SeqOfBox* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBnd_SeqOfBox::OCBnd_SeqOfBox() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Bnd_SeqOfBox();
}

OCBnd_SeqOfBox^ OCBnd_SeqOfBox::Assign(OCNaroWrappers::OCBnd_SeqOfBox^ Other)
{
  Bnd_SeqOfBox* tmp = new Bnd_SeqOfBox();
  *tmp = ((Bnd_SeqOfBox*)nativeHandle)->Assign(*((Bnd_SeqOfBox*)Other->Handle));
  return gcnew OCBnd_SeqOfBox(tmp);
}

 void OCBnd_SeqOfBox::Append(OCNaroWrappers::OCBnd_Box^ T)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Append(*((Bnd_Box*)T->Handle));
}

 void OCBnd_SeqOfBox::Append(OCNaroWrappers::OCBnd_SeqOfBox^ S)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Append(*((Bnd_SeqOfBox*)S->Handle));
}

 void OCBnd_SeqOfBox::Prepend(OCNaroWrappers::OCBnd_Box^ T)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Prepend(*((Bnd_Box*)T->Handle));
}

 void OCBnd_SeqOfBox::Prepend(OCNaroWrappers::OCBnd_SeqOfBox^ S)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Prepend(*((Bnd_SeqOfBox*)S->Handle));
}

 void OCBnd_SeqOfBox::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBnd_Box^ T)
{
  ((Bnd_SeqOfBox*)nativeHandle)->InsertBefore(Index, *((Bnd_Box*)T->Handle));
}

 void OCBnd_SeqOfBox::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBnd_SeqOfBox^ S)
{
  ((Bnd_SeqOfBox*)nativeHandle)->InsertBefore(Index, *((Bnd_SeqOfBox*)S->Handle));
}

 void OCBnd_SeqOfBox::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBnd_Box^ T)
{
  ((Bnd_SeqOfBox*)nativeHandle)->InsertAfter(Index, *((Bnd_Box*)T->Handle));
}

 void OCBnd_SeqOfBox::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBnd_SeqOfBox^ S)
{
  ((Bnd_SeqOfBox*)nativeHandle)->InsertAfter(Index, *((Bnd_SeqOfBox*)S->Handle));
}

OCBnd_Box^ OCBnd_SeqOfBox::First()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((Bnd_SeqOfBox*)nativeHandle)->First();
  return gcnew OCBnd_Box(tmp);
}

OCBnd_Box^ OCBnd_SeqOfBox::Last()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((Bnd_SeqOfBox*)nativeHandle)->Last();
  return gcnew OCBnd_Box(tmp);
}

 void OCBnd_SeqOfBox::Split(Standard_Integer Index, OCNaroWrappers::OCBnd_SeqOfBox^ Sub)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Split(Index, *((Bnd_SeqOfBox*)Sub->Handle));
}

OCBnd_Box^ OCBnd_SeqOfBox::Value(Standard_Integer Index)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((Bnd_SeqOfBox*)nativeHandle)->Value(Index);
  return gcnew OCBnd_Box(tmp);
}

 void OCBnd_SeqOfBox::SetValue(Standard_Integer Index, OCNaroWrappers::OCBnd_Box^ I)
{
  ((Bnd_SeqOfBox*)nativeHandle)->SetValue(Index, *((Bnd_Box*)I->Handle));
}

OCBnd_Box^ OCBnd_SeqOfBox::ChangeValue(Standard_Integer Index)
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((Bnd_SeqOfBox*)nativeHandle)->ChangeValue(Index);
  return gcnew OCBnd_Box(tmp);
}

 void OCBnd_SeqOfBox::Remove(Standard_Integer Index)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Remove(Index);
}

 void OCBnd_SeqOfBox::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Bnd_SeqOfBox*)nativeHandle)->Remove(FromIndex, ToIndex);
}

