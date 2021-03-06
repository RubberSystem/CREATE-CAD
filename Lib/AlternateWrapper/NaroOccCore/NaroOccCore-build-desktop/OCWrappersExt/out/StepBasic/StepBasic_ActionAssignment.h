// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ActionAssignment_OCWrappers_HeaderFile
#define _StepBasic_ActionAssignment_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ActionAssignment.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepBasic_Action;


//! Representation of STEP entity ActionAssignment <br>
public ref class OCStepBasic_ActionAssignment : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_ActionAssignment(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ActionAssignment(Handle(StepBasic_ActionAssignment)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_ActionAssignment();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Action^ aAssignedAction) ;

//! Returns field AssignedAction <br>
 /*instead*/  OCStepBasic_Action^ AssignedAction() ;

//! Set field AssignedAction <br>
 /*instead*/  void SetAssignedAction(OCNaroWrappers::OCStepBasic_Action^ AssignedAction) ;

~OCStepBasic_ActionAssignment()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
