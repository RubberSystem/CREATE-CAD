// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_PresentationArea_OCWrappers_HeaderFile
#define _StepVisual_PresentationArea_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_PresentationArea.hxx>
#include "../Converter.h"

#include "StepVisual_PresentationRepresentation.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_PresentationArea : OCStepVisual_PresentationRepresentation {

protected:
  // dummy constructor;
  OCStepVisual_PresentationArea(OCDummy^) : OCStepVisual_PresentationRepresentation((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_PresentationArea(Handle(StepVisual_PresentationArea)* nativeHandle);

// Methods PUBLIC

//! Returns a PresentationArea <br>
OCStepVisual_PresentationArea();

~OCStepVisual_PresentationArea()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
