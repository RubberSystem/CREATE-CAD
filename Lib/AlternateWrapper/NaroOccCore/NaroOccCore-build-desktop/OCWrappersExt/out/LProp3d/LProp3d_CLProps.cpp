// File generated by CPPExt (CPP file)
//

#include "LProp3d_CLProps.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"
#include "LProp3d_CurveTool.h"


using namespace OCNaroWrappers;

OCLProp3d_CLProps::OCLProp3d_CLProps(LProp3d_CLProps* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCLProp3d_CLProps::OCLProp3d_CLProps(OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Integer N, Standard_Real Resolution) 
{
  nativeHandle = new LProp3d_CLProps(*((Handle_Adaptor3d_HCurve*)C->Handle), N, Resolution);
}

OCLProp3d_CLProps::OCLProp3d_CLProps(OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real U, Standard_Integer N, Standard_Real Resolution) 
{
  nativeHandle = new LProp3d_CLProps(*((Handle_Adaptor3d_HCurve*)C->Handle), U, N, Resolution);
}

OCLProp3d_CLProps::OCLProp3d_CLProps(Standard_Integer N, Standard_Real Resolution) 
{
  nativeHandle = new LProp3d_CLProps(N, Resolution);
}

 void OCLProp3d_CLProps::SetParameter(Standard_Real U)
{
  ((LProp3d_CLProps*)nativeHandle)->SetParameter(U);
}

 void OCLProp3d_CLProps::SetCurve(OCNaroWrappers::OCAdaptor3d_HCurve^ C)
{
  ((LProp3d_CLProps*)nativeHandle)->SetCurve(*((Handle_Adaptor3d_HCurve*)C->Handle));
}

OCgp_Pnt^ OCLProp3d_CLProps::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((LProp3d_CLProps*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Vec^ OCLProp3d_CLProps::D1()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((LProp3d_CLProps*)nativeHandle)->D1();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCLProp3d_CLProps::D2()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((LProp3d_CLProps*)nativeHandle)->D2();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCLProp3d_CLProps::D3()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((LProp3d_CLProps*)nativeHandle)->D3();
  return gcnew OCgp_Vec(tmp);
}

 System::Boolean OCLProp3d_CLProps::IsTangentDefined()
{
  return OCConverter::StandardBooleanToBoolean(((LProp3d_CLProps*)nativeHandle)->IsTangentDefined());
}

 void OCLProp3d_CLProps::Tangent(OCNaroWrappers::OCgp_Dir^ D)
{
  ((LProp3d_CLProps*)nativeHandle)->Tangent(*((gp_Dir*)D->Handle));
}

 Standard_Real OCLProp3d_CLProps::Curvature()
{
  return ((LProp3d_CLProps*)nativeHandle)->Curvature();
}

 void OCLProp3d_CLProps::Normal(OCNaroWrappers::OCgp_Dir^ N)
{
  ((LProp3d_CLProps*)nativeHandle)->Normal(*((gp_Dir*)N->Handle));
}

 void OCLProp3d_CLProps::CentreOfCurvature(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((LProp3d_CLProps*)nativeHandle)->CentreOfCurvature(*((gp_Pnt*)P->Handle));
}


