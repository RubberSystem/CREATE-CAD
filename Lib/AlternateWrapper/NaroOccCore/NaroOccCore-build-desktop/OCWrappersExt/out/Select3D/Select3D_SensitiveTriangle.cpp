// File generated by CPPExt (CPP file)
//

#include "Select3D_SensitiveTriangle.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "../gp/gp_Pnt.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_XY.h"
#include "Select3D_SensitiveEntity.h"
#include "../TopLoc/TopLoc_Location.h"


using namespace OCNaroWrappers;

OCSelect3D_SensitiveTriangle::OCSelect3D_SensitiveTriangle(Handle(Select3D_SensitiveTriangle)* nativeHandle) : OCSelect3D_SensitivePoly((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Select3D_SensitiveTriangle(*nativeHandle);
}

OCSelect3D_SensitiveTriangle::OCSelect3D_SensitiveTriangle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3, OCSelect3D_TypeOfSensitivity Sensitivity) : OCSelect3D_SensitivePoly((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select3D_SensitiveTriangle(new Select3D_SensitiveTriangle(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), *((gp_Pnt*)P3->Handle), (Select3D_TypeOfSensitivity)Sensitivity));
}

 System::Boolean OCSelect3D_SensitiveTriangle::Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Matches(X, Y, aTol, DMin));
}

 System::Boolean OCSelect3D_SensitiveTriangle::Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Matches(XMin, YMin, XMax, YMax, aTol));
}

 System::Boolean OCSelect3D_SensitiveTriangle::Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Matches(*((TColgp_Array1OfPnt2d*)Polyline->Handle), *((Bnd_Box2d*)aBox->Handle), aTol));
}

 Standard_Real OCSelect3D_SensitiveTriangle::ComputeDepth(OCNaroWrappers::OCgp_Lin^ EyeLine)
{
  return (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->ComputeDepth(*((gp_Lin*)EyeLine->Handle));
}

 void OCSelect3D_SensitiveTriangle::Points3D(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3)
{
  (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Points3D(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), *((gp_Pnt*)P3->Handle));
}

OCgp_Pnt^ OCSelect3D_SensitiveTriangle::Center3D()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Center3D();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_XY^ OCSelect3D_SensitiveTriangle::Center2D()
{
  gp_XY* tmp = new gp_XY();
  *tmp = (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Center2D();
  return gcnew OCgp_XY(tmp);
}

 Standard_Integer OCSelect3D_SensitiveTriangle::Status(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& Dmin)
{
  return (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Status(X, Y, aTol, Dmin);
}

 Standard_Integer OCSelect3D_SensitiveTriangle::Status(OCNaroWrappers::OCgp_XY^ p0, OCNaroWrappers::OCgp_XY^ p1, OCNaroWrappers::OCgp_XY^ p2, OCNaroWrappers::OCgp_XY^ aPoint, Standard_Real aTol, Standard_Real& Dmin)
{
  return Select3D_SensitiveTriangle::Status(*((gp_XY*)p0->Handle), *((gp_XY*)p1->Handle), *((gp_XY*)p2->Handle), *((gp_XY*)aPoint->Handle), aTol, Dmin);
}

 void OCSelect3D_SensitiveTriangle::Dump(Standard_OStream& S, System::Boolean FullDump)
{
  (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->Dump(S, OCConverter::BooleanToStandardBoolean(FullDump));
}

OCSelect3D_SensitiveEntity^ OCSelect3D_SensitiveTriangle::GetConnected(OCNaroWrappers::OCTopLoc_Location^ theLocation)
{
  Handle(Select3D_SensitiveEntity) tmp = (*((Handle_Select3D_SensitiveTriangle*)nativeHandle))->GetConnected(*((TopLoc_Location*)theLocation->Handle));
  return gcnew OCSelect3D_SensitiveEntity(&tmp);
}

