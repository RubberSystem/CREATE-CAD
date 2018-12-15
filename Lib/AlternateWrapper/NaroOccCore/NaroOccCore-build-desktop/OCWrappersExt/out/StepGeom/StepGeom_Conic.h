// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Conic_OCWrappers_HeaderFile
#define _StepGeom_Conic_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Conic.hxx>
#include "../Converter.h"

#include "StepGeom_Curve.h"

#include "StepGeom_Axis2Placement.h"
#include "StepGeom_Curve.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Axis2Placement;



public ref class OCStepGeom_Conic  : public OCStepGeom_Curve {

protected:
  // dummy constructor;
  OCStepGeom_Conic(OCDummy^) : OCStepGeom_Curve((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_Conic(StepGeom_Conic* nativeHandle);

// Methods PUBLIC

//! Returns a Conic <br>
OCStepGeom_Conic();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement^ aPosition) ;


 /*instead*/  void SetPosition(OCNaroWrappers::OCStepGeom_Axis2Placement^ aPosition) ;


 /*instead*/  OCStepGeom_Axis2Placement^ Position() ;

~OCStepGeom_Conic()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif