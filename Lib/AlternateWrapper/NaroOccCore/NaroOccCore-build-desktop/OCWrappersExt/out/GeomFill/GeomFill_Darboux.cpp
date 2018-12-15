// File generated by CPPExt (CPP file)
//

#include "GeomFill_Darboux.h"
#include "../Converter.h"
#include "GeomFill_TrihedronLaw.h"
#include "../gp/gp_Vec.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCGeomFill_Darboux::OCGeomFill_Darboux(Handle(GeomFill_Darboux)* nativeHandle) : OCGeomFill_TrihedronLaw((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomFill_Darboux(*nativeHandle);
}

OCGeomFill_Darboux::OCGeomFill_Darboux() : OCGeomFill_TrihedronLaw((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomFill_Darboux(new GeomFill_Darboux());
}

OCGeomFill_TrihedronLaw^ OCGeomFill_Darboux::Copy()
{
  Handle(GeomFill_TrihedronLaw) tmp = (*((Handle_GeomFill_Darboux*)nativeHandle))->Copy();
  return gcnew OCGeomFill_TrihedronLaw(&tmp);
}

 System::Boolean OCGeomFill_Darboux::D0(Standard_Real Param, OCNaroWrappers::OCgp_Vec^ Tangent, OCNaroWrappers::OCgp_Vec^ Normal, OCNaroWrappers::OCgp_Vec^ BiNormal)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_Darboux*)nativeHandle))->D0(Param, *((gp_Vec*)Tangent->Handle), *((gp_Vec*)Normal->Handle), *((gp_Vec*)BiNormal->Handle)));
}

 System::Boolean OCGeomFill_Darboux::D1(Standard_Real Param, OCNaroWrappers::OCgp_Vec^ Tangent, OCNaroWrappers::OCgp_Vec^ DTangent, OCNaroWrappers::OCgp_Vec^ Normal, OCNaroWrappers::OCgp_Vec^ DNormal, OCNaroWrappers::OCgp_Vec^ BiNormal, OCNaroWrappers::OCgp_Vec^ DBiNormal)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_Darboux*)nativeHandle))->D1(Param, *((gp_Vec*)Tangent->Handle), *((gp_Vec*)DTangent->Handle), *((gp_Vec*)Normal->Handle), *((gp_Vec*)DNormal->Handle), *((gp_Vec*)BiNormal->Handle), *((gp_Vec*)DBiNormal->Handle)));
}

 System::Boolean OCGeomFill_Darboux::D2(Standard_Real Param, OCNaroWrappers::OCgp_Vec^ Tangent, OCNaroWrappers::OCgp_Vec^ DTangent, OCNaroWrappers::OCgp_Vec^ D2Tangent, OCNaroWrappers::OCgp_Vec^ Normal, OCNaroWrappers::OCgp_Vec^ DNormal, OCNaroWrappers::OCgp_Vec^ D2Normal, OCNaroWrappers::OCgp_Vec^ BiNormal, OCNaroWrappers::OCgp_Vec^ DBiNormal, OCNaroWrappers::OCgp_Vec^ D2BiNormal)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_Darboux*)nativeHandle))->D2(Param, *((gp_Vec*)Tangent->Handle), *((gp_Vec*)DTangent->Handle), *((gp_Vec*)D2Tangent->Handle), *((gp_Vec*)Normal->Handle), *((gp_Vec*)DNormal->Handle), *((gp_Vec*)D2Normal->Handle), *((gp_Vec*)BiNormal->Handle), *((gp_Vec*)DBiNormal->Handle), *((gp_Vec*)D2BiNormal->Handle)));
}

 Standard_Integer OCGeomFill_Darboux::NbIntervals(OCGeomAbs_Shape S)
{
  return (*((Handle_GeomFill_Darboux*)nativeHandle))->NbIntervals((GeomAbs_Shape)S);
}

 void OCGeomFill_Darboux::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  (*((Handle_GeomFill_Darboux*)nativeHandle))->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCGeomFill_Darboux::GetAverageLaw(OCNaroWrappers::OCgp_Vec^ ATangent, OCNaroWrappers::OCgp_Vec^ ANormal, OCNaroWrappers::OCgp_Vec^ ABiNormal)
{
  (*((Handle_GeomFill_Darboux*)nativeHandle))->GetAverageLaw(*((gp_Vec*)ATangent->Handle), *((gp_Vec*)ANormal->Handle), *((gp_Vec*)ABiNormal->Handle));
}

 System::Boolean OCGeomFill_Darboux::IsConstant()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_Darboux*)nativeHandle))->IsConstant());
}

 System::Boolean OCGeomFill_Darboux::IsOnlyBy3dCurve()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_Darboux*)nativeHandle))->IsOnlyBy3dCurve());
}

