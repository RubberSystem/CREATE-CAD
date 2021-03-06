// File generated by CPPExt (Transient)
//
#ifndef _Transfer_ProcessForFinder_OCWrappers_HeaderFile
#define _Transfer_ProcessForFinder_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_ProcessForFinder.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_IndexedMapOfInteger.h"
#include "Transfer_TransferMapOfProcessForFinder.h"


namespace OCNaroWrappers
{

ref class OCMessage_Messenger;
ref class OCTransfer_Finder;
ref class OCTransfer_Binder;
ref class OCTransfer_ActorOfProcessForFinder;
ref class OCMessage_ProgressIndicator;
ref class OCTransfer_FindHasher;
ref class OCTransfer_HSequenceOfFinder;
ref class OCTransfer_TransferMapOfProcessForFinder;
ref class OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder;
ref class OCTransfer_IteratorOfProcessForFinder;
ref class OCMessage_Msg;
ref class OCInterface_Check;
ref class OCStandard_Transient;
ref class OCStandard_Type;
ref class OCInterface_CheckIterator;



public ref class OCTransfer_ProcessForFinder : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTransfer_ProcessForFinder(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_ProcessForFinder(Handle(Transfer_ProcessForFinder)* nativeHandle);

// Methods PUBLIC


OCTransfer_ProcessForFinder(Standard_Integer nb);


OCTransfer_ProcessForFinder(OCNaroWrappers::OCMessage_Messenger^ printer, Standard_Integer nb);


 /*instead*/  void Clear() ;


 /*instead*/  void Clean() ;


 /*instead*/  void Resize(Standard_Integer nb) ;


 /*instead*/  void SetActor(OCNaroWrappers::OCTransfer_ActorOfProcessForFinder^ actor) ;


 /*instead*/  OCTransfer_ActorOfProcessForFinder^ Actor() ;


 /*instead*/  OCTransfer_Binder^ Find(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  System::Boolean IsAlreadyUsed(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void Bind(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCTransfer_Binder^ binder) ;


 /*instead*/  void Rebind(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCTransfer_Binder^ binder) ;


 /*instead*/  System::Boolean Unbind(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  OCTransfer_Binder^ FindElseBind(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void SetMessenger(OCNaroWrappers::OCMessage_Messenger^ messenger) ;


 /*instead*/  OCMessage_Messenger^ Messenger() ;


 /*instead*/  void SetTraceLevel(Standard_Integer tracelev) ;


 /*instead*/  Standard_Integer TraceLevel() ;


 /*instead*/  void SendFail(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Msg^ amsg) ;


 /*instead*/  void SendWarning(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Msg^ amsg) ;


 /*instead*/  void SendMsg(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Msg^ amsg) ;


 /*instead*/  void AddFail(OCNaroWrappers::OCTransfer_Finder^ start, System::String^ mess, System::String^ orig) ;


 /*instead*/  void AddError(OCNaroWrappers::OCTransfer_Finder^ start, System::String^ mess, System::String^ orig) ;


 /*instead*/  void AddFail(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Msg^ amsg) ;


 /*instead*/  void AddWarning(OCNaroWrappers::OCTransfer_Finder^ start, System::String^ mess, System::String^ orig) ;


 /*instead*/  void AddWarning(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Msg^ amsg) ;


 /*instead*/  void Mend(OCNaroWrappers::OCTransfer_Finder^ start, System::String^ pref) ;


 /*instead*/  OCInterface_Check^ Check(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void BindTransient(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCStandard_Transient^ res) ;


 /*instead*/  OCStandard_Transient^ FindTransient(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void BindMultiple(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void AddMultiple(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCStandard_Transient^ res) ;


 /*instead*/  System::Boolean FindTypedTransient(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCStandard_Type^ atype, OCNaroWrappers::OCStandard_Transient^ val) ;


 /*instead*/  System::Boolean GetTypedTransient(OCNaroWrappers::OCTransfer_Binder^ binder, OCNaroWrappers::OCStandard_Type^ atype, OCNaroWrappers::OCStandard_Transient^ val) ;


 /*instead*/  Standard_Integer NbMapped() ;


 /*instead*/  OCTransfer_Finder^ Mapped(Standard_Integer num) ;


 /*instead*/  Standard_Integer MapIndex(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  OCTransfer_Binder^ MapItem(Standard_Integer num) ;


 /*instead*/  void SetRoot(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void SetRootManagement(System::Boolean stat) ;


 /*instead*/  Standard_Integer NbRoots() ;


 /*instead*/  OCTransfer_Finder^ Root(Standard_Integer num) ;


 /*instead*/  OCTransfer_Binder^ RootItem(Standard_Integer num) ;


 /*instead*/  Standard_Integer RootIndex(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  Standard_Integer NestingLevel() ;


 /*instead*/  void ResetNestingLevel() ;


 /*instead*/  System::Boolean Recognize(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  OCTransfer_Binder^ Transferring(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  System::Boolean Transfer(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void SetErrorHandle(System::Boolean err) ;


 /*instead*/  System::Boolean ErrorHandle() ;


 /*instead*/  void StartTrace(OCNaroWrappers::OCTransfer_Binder^ binder, OCNaroWrappers::OCTransfer_Finder^ start, Standard_Integer level, Standard_Integer mode) ;


virtual /*instead*/  void PrintTrace(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCMessage_Messenger^ S) ;


 /*instead*/  System::Boolean IsLooping(Standard_Integer alevel) ;


 /*instead*/  OCTransfer_IteratorOfProcessForFinder^ RootResult(System::Boolean withstart) ;


 /*instead*/  OCTransfer_IteratorOfProcessForFinder^ CompleteResult(System::Boolean withstart) ;


 /*instead*/  OCTransfer_IteratorOfProcessForFinder^ AbnormalResult() ;


 /*instead*/  OCInterface_CheckIterator^ CheckList(System::Boolean erronly) ;


 /*instead*/  OCTransfer_IteratorOfProcessForFinder^ ResultOne(OCNaroWrappers::OCTransfer_Finder^ start, Standard_Integer level, System::Boolean withstart) ;


 /*instead*/  OCInterface_CheckIterator^ CheckListOne(OCNaroWrappers::OCTransfer_Finder^ start, Standard_Integer level, System::Boolean erronly) ;


 /*instead*/  System::Boolean IsCheckListEmpty(OCNaroWrappers::OCTransfer_Finder^ start, Standard_Integer level, System::Boolean erronly) ;


 /*instead*/  void RemoveResult(OCNaroWrappers::OCTransfer_Finder^ start, Standard_Integer level, System::Boolean compute) ;


virtual /*instead*/  Standard_Integer CheckNum(OCNaroWrappers::OCTransfer_Finder^ start) ;


 /*instead*/  void SetProgress(OCNaroWrappers::OCMessage_ProgressIndicator^ theProgress) ;


 /*instead*/  OCMessage_ProgressIndicator^ GetProgress() ;

~OCTransfer_ProcessForFinder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
