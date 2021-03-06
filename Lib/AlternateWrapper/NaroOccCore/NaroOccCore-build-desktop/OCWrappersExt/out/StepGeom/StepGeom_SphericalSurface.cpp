// File generated by CPPExt (CPP file)
//

#include "StepGeom_SphericalSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Axis2Placement3d.h"


using namespace OCNaroWrappers;

OCStepGeom_SphericalSurface::OCStepGeom_SphericalSurface(StepGeom_SphericalSurface* nativeHandle) : OCStepGeom_ElementarySurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_SphericalSurface::OCStepGeom_SphericalSurface() : OCStepGeom_ElementarySurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_SphericalSurface();
}

 void OCStepGeom_SphericalSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition)
{
  ((StepGeom_SphericalSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle));
}

 void OCStepGeom_SphericalSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition, Standard_Real aRadius)
{
  ((StepGeom_SphericalSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle), aRadius);
}

 void OCStepGeom_SphericalSurface::SetRadius(Standard_Real aRadius)
{
  ((StepGeom_SphericalSurface*)nativeHandle)->SetRadius(aRadius);
}

 Standard_Real OCStepGeom_SphericalSurface::Radius()
{
  return ((StepGeom_SphericalSurface*)nativeHandle)->Radius();
}


