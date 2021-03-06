// File generated by CPPExt (CPP file)
//

#include "TDocStd_Document.h"
#include "../Converter.h"
#include "../TDF/TDF_Data.h"
#include "../TDF/TDF_Delta.h"
#include "../TDF/TDF_Label.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TDF/TDF_LabelMap.h"
#include "../TDF/TDF_DeltaList.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../CDM/CDM_Document.h"
#include "TDocStd_CompoundDelta.h"


using namespace OCNaroWrappers;

OCTDocStd_Document::OCTDocStd_Document(Handle(TDocStd_Document)* nativeHandle) : OCCDM_Document((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDocStd_Document(*nativeHandle);
}

OCTDocStd_Document^ OCTDocStd_Document::Get(OCNaroWrappers::OCTDF_Label^ L)
{
  Handle(TDocStd_Document) tmp = TDocStd_Document::Get(*((TDF_Label*)L->Handle));
  return gcnew OCTDocStd_Document(&tmp);
}

OCTDocStd_Document::OCTDocStd_Document(OCNaroWrappers::OCTCollection_ExtendedString^ astorageformat) : OCCDM_Document((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDocStd_Document(new TDocStd_Document(*((TCollection_ExtendedString*)astorageformat->Handle)));
}

 System::Boolean OCTDocStd_Document::IsSaved()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->IsSaved());
}

 System::Boolean OCTDocStd_Document::IsChanged()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->IsChanged());
}

 void OCTDocStd_Document::SetSaved()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetSaved();
}

 void OCTDocStd_Document::SetSavedTime(Standard_Integer theTime)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetSavedTime(theTime);
}

 Standard_Integer OCTDocStd_Document::GetSavedTime()
{
  return (*((Handle_TDocStd_Document*)nativeHandle))->GetSavedTime();
}

OCTCollection_ExtendedString^ OCTDocStd_Document::GetName()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->GetName();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTCollection_ExtendedString^ OCTDocStd_Document::GetPath()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->GetPath();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTDocStd_Document::SetData(OCNaroWrappers::OCTDF_Data^ data)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetData(*((Handle_TDF_Data*)data->Handle));
}

OCTDF_Data^ OCTDocStd_Document::GetData()
{
  Handle(TDF_Data) tmp = (*((Handle_TDocStd_Document*)nativeHandle))->GetData();
  return gcnew OCTDF_Data(&tmp);
}

OCTDF_Label^ OCTDocStd_Document::Main()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->Main();
  return gcnew OCTDF_Label(tmp);
}

 System::Boolean OCTDocStd_Document::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->IsEmpty());
}

 System::Boolean OCTDocStd_Document::IsValid()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->IsValid());
}

 void OCTDocStd_Document::SetModified(OCNaroWrappers::OCTDF_Label^ L)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetModified(*((TDF_Label*)L->Handle));
}

 void OCTDocStd_Document::PurgeModified()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->PurgeModified();
}

OCTDF_LabelMap^ OCTDocStd_Document::GetModified()
{
  TDF_LabelMap* tmp = new TDF_LabelMap(0);
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->GetModified();
  return gcnew OCTDF_LabelMap(tmp);
}

 void OCTDocStd_Document::NewCommand()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->NewCommand();
}

 System::Boolean OCTDocStd_Document::HasOpenCommand()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->HasOpenCommand());
}

 void OCTDocStd_Document::OpenCommand()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->OpenCommand();
}

 System::Boolean OCTDocStd_Document::CommitCommand()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->CommitCommand());
}

 void OCTDocStd_Document::AbortCommand()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->AbortCommand();
}

 Standard_Integer OCTDocStd_Document::GetUndoLimit()
{
  return (*((Handle_TDocStd_Document*)nativeHandle))->GetUndoLimit();
}

 void OCTDocStd_Document::SetUndoLimit(Standard_Integer L)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetUndoLimit(L);
}

 void OCTDocStd_Document::ClearUndos()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->ClearUndos();
}

 void OCTDocStd_Document::ClearRedos()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->ClearRedos();
}

 Standard_Integer OCTDocStd_Document::GetAvailableUndos()
{
  return (*((Handle_TDocStd_Document*)nativeHandle))->GetAvailableUndos();
}

 System::Boolean OCTDocStd_Document::Undo()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->Undo());
}

 Standard_Integer OCTDocStd_Document::GetAvailableRedos()
{
  return (*((Handle_TDocStd_Document*)nativeHandle))->GetAvailableRedos();
}

 System::Boolean OCTDocStd_Document::Redo()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->Redo());
}

OCTDF_DeltaList^ OCTDocStd_Document::GetUndos()
{
  TDF_DeltaList* tmp = new TDF_DeltaList();
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->GetUndos();
  return gcnew OCTDF_DeltaList(tmp);
}

OCTDF_DeltaList^ OCTDocStd_Document::GetRedos()
{
  TDF_DeltaList* tmp = new TDF_DeltaList();
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->GetRedos();
  return gcnew OCTDF_DeltaList(tmp);
}

 void OCTDocStd_Document::RemoveFirstUndo()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->RemoveFirstUndo();
}

 System::Boolean OCTDocStd_Document::InitDeltaCompaction()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->InitDeltaCompaction());
}

 System::Boolean OCTDocStd_Document::PerformDeltaCompaction()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->PerformDeltaCompaction());
}

 void OCTDocStd_Document::UpdateReferences(OCNaroWrappers::OCTCollection_AsciiString^ aDocEntry)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->UpdateReferences(*((TCollection_AsciiString*)aDocEntry->Handle));
}

 void OCTDocStd_Document::Recompute()
{
  (*((Handle_TDocStd_Document*)nativeHandle))->Recompute();
}

 void OCTDocStd_Document::Update(OCNaroWrappers::OCCDM_Document^ aToDocument, Standard_Integer aReferenceIdentifier, Standard_Address aModifContext)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->Update(*((Handle_CDM_Document*)aToDocument->Handle), aReferenceIdentifier, aModifContext);
}

OCTCollection_ExtendedString^ OCTDocStd_Document::StorageFormat()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_TDocStd_Document*)nativeHandle))->StorageFormat();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTDocStd_Document::ChangeStorageFormat(OCNaroWrappers::OCTCollection_ExtendedString^ newStorageFormat)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->ChangeStorageFormat(*((TCollection_ExtendedString*)newStorageFormat->Handle));
}

 void OCTDocStd_Document::SetNestedTransactionMode(System::Boolean isAllowed)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetNestedTransactionMode(OCConverter::BooleanToStandardBoolean(isAllowed));
}

 System::Boolean OCTDocStd_Document::IsNestedTransactionMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->IsNestedTransactionMode());
}

 void OCTDocStd_Document::SetModificationMode(System::Boolean theTransactionOnly)
{
  (*((Handle_TDocStd_Document*)nativeHandle))->SetModificationMode(OCConverter::BooleanToStandardBoolean(theTransactionOnly));
}

 System::Boolean OCTDocStd_Document::ModificationMode()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Document*)nativeHandle))->ModificationMode());
}


