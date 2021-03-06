// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_CartesianTransformationOperator2d_OCWrappers_HeaderFile
#define _StepGeom_CartesianTransformationOperator2d_OCWrappers_HeaderFile

// include native header
#include <StepGeom_CartesianTransformationOperator2d.hxx>
#include "../Converter.h"

#include "StepGeom_CartesianTransformationOperator.h"

#include "StepGeom_CartesianTransformationOperator.h"


namespace OCNaroWrappers
{



//! Added from StepGeom Rev2 to Rev4 <br>
public ref class OCStepGeom_CartesianTransformationOperator2d  : public OCStepGeom_CartesianTransformationOperator {

protected:
  // dummy constructor;
  OCStepGeom_CartesianTransformationOperator2d(OCDummy^) : OCStepGeom_CartesianTransformationOperator((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_CartesianTransformationOperator2d(StepGeom_CartesianTransformationOperator2d* nativeHandle);

// Methods PUBLIC


OCStepGeom_CartesianTransformationOperator2d();

~OCStepGeom_CartesianTransformationOperator2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
