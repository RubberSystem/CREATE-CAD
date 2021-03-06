// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Surface_OCWrappers_HeaderFile
#define _StepGeom_Surface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Surface.hxx>
#include "../Converter.h"

#include "StepGeom_GeometricRepresentationItem.h"

#include "StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{




public ref class OCStepGeom_Surface  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepGeom_Surface(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_Surface(StepGeom_Surface* nativeHandle);

// Methods PUBLIC

//! Returns a Surface <br>
OCStepGeom_Surface();

~OCStepGeom_Surface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
