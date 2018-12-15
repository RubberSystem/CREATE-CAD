// File generated by CPPExt (CPP file)
//

#include "MAT2d_Connexion.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCMAT2d_Connexion::OCMAT2d_Connexion(Handle(MAT2d_Connexion)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT2d_Connexion(*nativeHandle);
}

OCMAT2d_Connexion::OCMAT2d_Connexion() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_Connexion(new MAT2d_Connexion());
}

OCMAT2d_Connexion::OCMAT2d_Connexion(Standard_Integer LineA, Standard_Integer LineB, Standard_Integer ItemA, Standard_Integer ItemB, Standard_Real Distance, Standard_Real ParameterOnA, Standard_Real ParameterOnB, OCNaroWrappers::OCgp_Pnt2d^ PointA, OCNaroWrappers::OCgp_Pnt2d^ PointB) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_Connexion(new MAT2d_Connexion(LineA, LineB, ItemA, ItemB, Distance, ParameterOnA, ParameterOnB, *((gp_Pnt2d*)PointA->Handle), *((gp_Pnt2d*)PointB->Handle)));
}

 Standard_Integer OCMAT2d_Connexion::IndexFirstLine()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexFirstLine();
}

 Standard_Integer OCMAT2d_Connexion::IndexSecondLine()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexSecondLine();
}

 Standard_Integer OCMAT2d_Connexion::IndexItemOnFirst()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexItemOnFirst();
}

 Standard_Integer OCMAT2d_Connexion::IndexItemOnSecond()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexItemOnSecond();
}

 Standard_Real OCMAT2d_Connexion::ParameterOnFirst()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->ParameterOnFirst();
}

 Standard_Real OCMAT2d_Connexion::ParameterOnSecond()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->ParameterOnSecond();
}

OCgp_Pnt2d^ OCMAT2d_Connexion::PointOnFirst()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_MAT2d_Connexion*)nativeHandle))->PointOnFirst();
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Pnt2d^ OCMAT2d_Connexion::PointOnSecond()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_MAT2d_Connexion*)nativeHandle))->PointOnSecond();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCMAT2d_Connexion::Distance()
{
  return (*((Handle_MAT2d_Connexion*)nativeHandle))->Distance();
}

 void OCMAT2d_Connexion::IndexFirstLine(Standard_Integer anIndex)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexFirstLine(anIndex);
}

 void OCMAT2d_Connexion::IndexSecondLine(Standard_Integer anIndex)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexSecondLine(anIndex);
}

 void OCMAT2d_Connexion::IndexItemOnFirst(Standard_Integer anIndex)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexItemOnFirst(anIndex);
}

 void OCMAT2d_Connexion::IndexItemOnSecond(Standard_Integer anIndex)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->IndexItemOnSecond(anIndex);
}

 void OCMAT2d_Connexion::ParameterOnFirst(Standard_Real aParameter)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->ParameterOnFirst(aParameter);
}

 void OCMAT2d_Connexion::ParameterOnSecond(Standard_Real aParameter)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->ParameterOnSecond(aParameter);
}

 void OCMAT2d_Connexion::PointOnFirst(OCNaroWrappers::OCgp_Pnt2d^ aPoint)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->PointOnFirst(*((gp_Pnt2d*)aPoint->Handle));
}

 void OCMAT2d_Connexion::PointOnSecond(OCNaroWrappers::OCgp_Pnt2d^ aPoint)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->PointOnSecond(*((gp_Pnt2d*)aPoint->Handle));
}

 void OCMAT2d_Connexion::Distance(Standard_Real aDistance)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->Distance(aDistance);
}

OCMAT2d_Connexion^ OCMAT2d_Connexion::Reverse()
{
  Handle(MAT2d_Connexion) tmp = (*((Handle_MAT2d_Connexion*)nativeHandle))->Reverse();
  return gcnew OCMAT2d_Connexion(&tmp);
}

 System::Boolean OCMAT2d_Connexion::IsAfter(OCNaroWrappers::OCMAT2d_Connexion^ aConnexion, Standard_Real aSense)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MAT2d_Connexion*)nativeHandle))->IsAfter(*((Handle_MAT2d_Connexion*)aConnexion->Handle), aSense));
}

 void OCMAT2d_Connexion::Dump(Standard_Integer Deep, Standard_Integer Offset)
{
  (*((Handle_MAT2d_Connexion*)nativeHandle))->Dump(Deep, Offset);
}

