// File generated by CPPExt (CPP file)
//

#include "IntCurveSurface_TheExactHInter.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HSurfaceTool.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "IntCurveSurface_TheHCurveTool.h"
#include "IntCurveSurface_TheCSFunctionOfHInter.h"
#include "../math/math_FunctionSetRoot.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntCurveSurface_TheExactHInter::OCIntCurveSurface_TheExactHInter(IntCurveSurface_TheExactHInter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntCurveSurface_TheExactHInter::OCIntCurveSurface_TheExactHInter(Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCIntCurveSurface_TheCSFunctionOfHInter^ F, Standard_Real TolTangency, Standard_Real MarginCoef) 
{
  nativeHandle = new IntCurveSurface_TheExactHInter(U, V, W, *((IntCurveSurface_TheCSFunctionOfHInter*)F->Handle), TolTangency, MarginCoef);
}

OCIntCurveSurface_TheExactHInter::OCIntCurveSurface_TheExactHInter(OCNaroWrappers::OCIntCurveSurface_TheCSFunctionOfHInter^ F, Standard_Real TolTangency) 
{
  nativeHandle = new IntCurveSurface_TheExactHInter(*((IntCurveSurface_TheCSFunctionOfHInter*)F->Handle), TolTangency);
}

 void OCIntCurveSurface_TheExactHInter::Perform(Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCmath_FunctionSetRoot^ Rsnld, Standard_Real u0, Standard_Real v0, Standard_Real u1, Standard_Real v1, Standard_Real w0, Standard_Real w1)
{
  ((IntCurveSurface_TheExactHInter*)nativeHandle)->Perform(U, V, W, *((math_FunctionSetRoot*)Rsnld->Handle), u0, v0, u1, v1, w0, w1);
}

 System::Boolean OCIntCurveSurface_TheExactHInter::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntCurveSurface_TheExactHInter*)nativeHandle)->IsDone());
}

 System::Boolean OCIntCurveSurface_TheExactHInter::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntCurveSurface_TheExactHInter*)nativeHandle)->IsEmpty());
}

OCgp_Pnt^ OCIntCurveSurface_TheExactHInter::Point()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntCurveSurface_TheExactHInter*)nativeHandle)->Point();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntCurveSurface_TheExactHInter::ParameterOnCurve()
{
  return ((IntCurveSurface_TheExactHInter*)nativeHandle)->ParameterOnCurve();
}

 void OCIntCurveSurface_TheExactHInter::ParameterOnSurface(Standard_Real& U, Standard_Real& V)
{
  ((IntCurveSurface_TheExactHInter*)nativeHandle)->ParameterOnSurface(U, V);
}

OCIntCurveSurface_TheCSFunctionOfHInter^ OCIntCurveSurface_TheExactHInter::Function()
{
  IntCurveSurface_TheCSFunctionOfHInter* tmp = new IntCurveSurface_TheCSFunctionOfHInter(123abc, 123abc);
  *tmp = ((IntCurveSurface_TheExactHInter*)nativeHandle)->Function();
  return gcnew OCIntCurveSurface_TheCSFunctionOfHInter(tmp);
}


