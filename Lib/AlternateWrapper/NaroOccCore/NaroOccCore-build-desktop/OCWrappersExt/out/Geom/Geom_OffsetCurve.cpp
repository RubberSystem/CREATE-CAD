// File generated by CPPExt (CPP file)
//

#include "Geom_OffsetCurve.h"
#include "../Converter.h"
#include "Geom_Curve.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Trsf.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_OffsetCurve::OCGeom_OffsetCurve(Handle(Geom_OffsetCurve)* nativeHandle) : OCGeom_Curve((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_OffsetCurve(*nativeHandle);
}

OCGeom_OffsetCurve::OCGeom_OffsetCurve(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real Offset, OCNaroWrappers::OCgp_Dir^ V) : OCGeom_Curve((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_OffsetCurve(new Geom_OffsetCurve(*((Handle_Geom_Curve*)C->Handle), Offset, *((gp_Dir*)V->Handle)));
}

 void OCGeom_OffsetCurve::Reverse()
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->Reverse();
}

 Standard_Real OCGeom_OffsetCurve::ReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->ReversedParameter(U);
}

 void OCGeom_OffsetCurve::SetBasisCurve(OCNaroWrappers::OCGeom_Curve^ C)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->SetBasisCurve(*((Handle_Geom_Curve*)C->Handle));
}

 void OCGeom_OffsetCurve::SetDirection(OCNaroWrappers::OCgp_Dir^ V)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->SetDirection(*((gp_Dir*)V->Handle));
}

 void OCGeom_OffsetCurve::SetOffsetValue(Standard_Real D)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->SetOffsetValue(D);
}

OCGeom_Curve^ OCGeom_OffsetCurve::BasisCurve()
{
  Handle(Geom_Curve) tmp = (*((Handle_Geom_OffsetCurve*)nativeHandle))->BasisCurve();
  return gcnew OCGeom_Curve(&tmp);
}

 OCGeomAbs_Shape OCGeom_OffsetCurve::Continuity()
{
  return (OCGeomAbs_Shape)((*((Handle_Geom_OffsetCurve*)nativeHandle))->Continuity());
}

OCgp_Dir^ OCGeom_OffsetCurve::Direction()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = (*((Handle_Geom_OffsetCurve*)nativeHandle))->Direction();
  return gcnew OCgp_Dir(tmp);
}

 void OCGeom_OffsetCurve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D0(U, *((gp_Pnt*)P->Handle));
}

 void OCGeom_OffsetCurve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D1(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle));
}

 void OCGeom_OffsetCurve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D2(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCGeom_OffsetCurve::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D3(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

OCgp_Vec^ OCGeom_OffsetCurve::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_OffsetCurve*)nativeHandle))->DN(U, N);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_OffsetCurve::Value(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pnt^ Pbasis, OCNaroWrappers::OCgp_Vec^ V1basis)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->Value(U, *((gp_Pnt*)P->Handle), *((gp_Pnt*)Pbasis->Handle), *((gp_Vec*)V1basis->Handle));
}

 void OCGeom_OffsetCurve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pnt^ Pbasis, OCNaroWrappers::OCgp_Vec^ V1basis)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D0(U, *((gp_Pnt*)P->Handle), *((gp_Pnt*)Pbasis->Handle), *((gp_Vec*)V1basis->Handle));
}

 void OCGeom_OffsetCurve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pnt^ Pbasis, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V1basis, OCNaroWrappers::OCgp_Vec^ V2basis)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D1(U, *((gp_Pnt*)P->Handle), *((gp_Pnt*)Pbasis->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V1basis->Handle), *((gp_Vec*)V2basis->Handle));
}

 void OCGeom_OffsetCurve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Pnt^ Pbasis, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V1basis, OCNaroWrappers::OCgp_Vec^ V2basis, OCNaroWrappers::OCgp_Vec^ V3basis)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->D2(U, *((gp_Pnt*)P->Handle), *((gp_Pnt*)Pbasis->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V1basis->Handle), *((gp_Vec*)V2basis->Handle), *((gp_Vec*)V3basis->Handle));
}

 Standard_Real OCGeom_OffsetCurve::FirstParameter()
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->FirstParameter();
}

 Standard_Real OCGeom_OffsetCurve::LastParameter()
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->LastParameter();
}

 Standard_Real OCGeom_OffsetCurve::Offset()
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->Offset();
}

 System::Boolean OCGeom_OffsetCurve::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_OffsetCurve*)nativeHandle))->IsClosed());
}

 System::Boolean OCGeom_OffsetCurve::IsCN(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_OffsetCurve*)nativeHandle))->IsCN(N));
}

 System::Boolean OCGeom_OffsetCurve::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_OffsetCurve*)nativeHandle))->IsPeriodic());
}

 Standard_Real OCGeom_OffsetCurve::Period()
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->Period();
}

 void OCGeom_OffsetCurve::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_OffsetCurve*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

 Standard_Real OCGeom_OffsetCurve::TransformedParameter(Standard_Real U, OCNaroWrappers::OCgp_Trsf^ T)
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->TransformedParameter(U, *((gp_Trsf*)T->Handle));
}

 Standard_Real OCGeom_OffsetCurve::ParametricTransformation(OCNaroWrappers::OCgp_Trsf^ T)
{
  return (*((Handle_Geom_OffsetCurve*)nativeHandle))->ParametricTransformation(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_OffsetCurve::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_OffsetCurve*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}


