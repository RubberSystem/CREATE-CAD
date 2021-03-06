// File generated by CPPExt (CPP file)
//

#include "MDF_ASDriverHSequence.h"
#include "../Converter.h"
#include "MDF_ASDriver.h"
#include "MDF_ASDriverSequence.h"


using namespace OCNaroWrappers;

OCMDF_ASDriverHSequence::OCMDF_ASDriverHSequence(Handle(MDF_ASDriverHSequence)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MDF_ASDriverHSequence(*nativeHandle);
}

OCMDF_ASDriverHSequence::OCMDF_ASDriverHSequence() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MDF_ASDriverHSequence(new MDF_ASDriverHSequence());
}

 System::Boolean OCMDF_ASDriverHSequence::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MDF_ASDriverHSequence*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCMDF_ASDriverHSequence::Length()
{
  return (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Length();
}

 void OCMDF_ASDriverHSequence::Clear()
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Clear();
}

 void OCMDF_ASDriverHSequence::Append(OCNaroWrappers::OCMDF_ASDriver^ anItem)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Append(*((Handle_MDF_ASDriver*)anItem->Handle));
}

 void OCMDF_ASDriverHSequence::Append(OCNaroWrappers::OCMDF_ASDriverHSequence^ aSequence)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Append(*((Handle_MDF_ASDriverHSequence*)aSequence->Handle));
}

 void OCMDF_ASDriverHSequence::Prepend(OCNaroWrappers::OCMDF_ASDriver^ anItem)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Prepend(*((Handle_MDF_ASDriver*)anItem->Handle));
}

 void OCMDF_ASDriverHSequence::Prepend(OCNaroWrappers::OCMDF_ASDriverHSequence^ aSequence)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Prepend(*((Handle_MDF_ASDriverHSequence*)aSequence->Handle));
}

 void OCMDF_ASDriverHSequence::Reverse()
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Reverse();
}

 void OCMDF_ASDriverHSequence::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ASDriver^ anItem)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->InsertBefore(anIndex, *((Handle_MDF_ASDriver*)anItem->Handle));
}

 void OCMDF_ASDriverHSequence::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ASDriverHSequence^ aSequence)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->InsertBefore(anIndex, *((Handle_MDF_ASDriverHSequence*)aSequence->Handle));
}

 void OCMDF_ASDriverHSequence::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ASDriver^ anItem)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->InsertAfter(anIndex, *((Handle_MDF_ASDriver*)anItem->Handle));
}

 void OCMDF_ASDriverHSequence::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ASDriverHSequence^ aSequence)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->InsertAfter(anIndex, *((Handle_MDF_ASDriverHSequence*)aSequence->Handle));
}

 void OCMDF_ASDriverHSequence::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCMDF_ASDriverHSequence^ OCMDF_ASDriverHSequence::Split(Standard_Integer anIndex)
{
  Handle(MDF_ASDriverHSequence) tmp = (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Split(anIndex);
  return gcnew OCMDF_ASDriverHSequence(&tmp);
}

 void OCMDF_ASDriverHSequence::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCMDF_ASDriver^ anItem)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->SetValue(anIndex, *((Handle_MDF_ASDriver*)anItem->Handle));
}

OCMDF_ASDriver^ OCMDF_ASDriverHSequence::Value(Standard_Integer anIndex)
{
  Handle(MDF_ASDriver) tmp = (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Value(anIndex);
  return gcnew OCMDF_ASDriver(&tmp);
}

OCMDF_ASDriver^ OCMDF_ASDriverHSequence::ChangeValue(Standard_Integer anIndex)
{
  Handle(MDF_ASDriver) tmp = (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCMDF_ASDriver(&tmp);
}

 void OCMDF_ASDriverHSequence::Remove(Standard_Integer anIndex)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Remove(anIndex);
}

 void OCMDF_ASDriverHSequence::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCMDF_ASDriverSequence^ OCMDF_ASDriverHSequence::Sequence()
{
  MDF_ASDriverSequence* tmp = new MDF_ASDriverSequence();
  *tmp = (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->Sequence();
  return gcnew OCMDF_ASDriverSequence(tmp);
}

OCMDF_ASDriverSequence^ OCMDF_ASDriverHSequence::ChangeSequence()
{
  MDF_ASDriverSequence* tmp = new MDF_ASDriverSequence();
  *tmp = (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->ChangeSequence();
  return gcnew OCMDF_ASDriverSequence(tmp);
}

OCMDF_ASDriverHSequence^ OCMDF_ASDriverHSequence::ShallowCopy()
{
  Handle(MDF_ASDriverHSequence) tmp = (*((Handle_MDF_ASDriverHSequence*)nativeHandle))->ShallowCopy();
  return gcnew OCMDF_ASDriverHSequence(&tmp);
}


