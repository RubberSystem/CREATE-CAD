// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_MechanicalDesignGeometricPresentationRepresentation_OCWrappers_HeaderFile
#define _StepVisual_MechanicalDesignGeometricPresentationRepresentation_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include "../Converter.h"

#include "StepVisual_PresentationRepresentation.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_MechanicalDesignGeometricPresentationRepresentation : OCStepVisual_PresentationRepresentation {

protected:
  // dummy constructor;
  OCStepVisual_MechanicalDesignGeometricPresentationRepresentation(OCDummy^) : OCStepVisual_PresentationRepresentation((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_MechanicalDesignGeometricPresentationRepresentation(Handle(StepVisual_MechanicalDesignGeometricPresentationRepresentation)* nativeHandle);

// Methods PUBLIC

//! Returns a MechanicalDesignGeometricPresentationRepresentation <br>
OCStepVisual_MechanicalDesignGeometricPresentationRepresentation();

~OCStepVisual_MechanicalDesignGeometricPresentationRepresentation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
