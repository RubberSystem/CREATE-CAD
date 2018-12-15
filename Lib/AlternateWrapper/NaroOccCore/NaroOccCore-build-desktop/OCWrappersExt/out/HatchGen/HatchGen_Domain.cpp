// File generated by CPPExt (CPP file)
//

#include "HatchGen_Domain.h"
#include "../Converter.h"
#include "HatchGen_PointOnHatching.h"


using namespace OCNaroWrappers;

OCHatchGen_Domain::OCHatchGen_Domain(HatchGen_Domain* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCHatchGen_Domain::OCHatchGen_Domain() 
{
  nativeHandle = new HatchGen_Domain();
}

OCHatchGen_Domain::OCHatchGen_Domain(OCNaroWrappers::OCHatchGen_PointOnHatching^ P1, OCNaroWrappers::OCHatchGen_PointOnHatching^ P2) 
{
  nativeHandle = new HatchGen_Domain(*((HatchGen_PointOnHatching*)P1->Handle), *((HatchGen_PointOnHatching*)P2->Handle));
}

OCHatchGen_Domain::OCHatchGen_Domain(OCNaroWrappers::OCHatchGen_PointOnHatching^ P, System::Boolean First) 
{
  nativeHandle = new HatchGen_Domain(*((HatchGen_PointOnHatching*)P->Handle), OCConverter::BooleanToStandardBoolean(First));
}

 void OCHatchGen_Domain::SetPoints(OCNaroWrappers::OCHatchGen_PointOnHatching^ P1, OCNaroWrappers::OCHatchGen_PointOnHatching^ P2)
{
  ((HatchGen_Domain*)nativeHandle)->SetPoints(*((HatchGen_PointOnHatching*)P1->Handle), *((HatchGen_PointOnHatching*)P2->Handle));
}

 void OCHatchGen_Domain::SetPoints()
{
  ((HatchGen_Domain*)nativeHandle)->SetPoints();
}

 void OCHatchGen_Domain::SetFirstPoint(OCNaroWrappers::OCHatchGen_PointOnHatching^ P)
{
  ((HatchGen_Domain*)nativeHandle)->SetFirstPoint(*((HatchGen_PointOnHatching*)P->Handle));
}

 void OCHatchGen_Domain::SetFirstPoint()
{
  ((HatchGen_Domain*)nativeHandle)->SetFirstPoint();
}

 void OCHatchGen_Domain::SetSecondPoint(OCNaroWrappers::OCHatchGen_PointOnHatching^ P)
{
  ((HatchGen_Domain*)nativeHandle)->SetSecondPoint(*((HatchGen_PointOnHatching*)P->Handle));
}

 void OCHatchGen_Domain::SetSecondPoint()
{
  ((HatchGen_Domain*)nativeHandle)->SetSecondPoint();
}

 System::Boolean OCHatchGen_Domain::HasFirstPoint()
{
  return OCConverter::StandardBooleanToBoolean(((HatchGen_Domain*)nativeHandle)->HasFirstPoint());
}

OCHatchGen_PointOnHatching^ OCHatchGen_Domain::FirstPoint()
{
  HatchGen_PointOnHatching* tmp = new HatchGen_PointOnHatching();
  *tmp = ((HatchGen_Domain*)nativeHandle)->FirstPoint();
  return gcnew OCHatchGen_PointOnHatching(tmp);
}

 System::Boolean OCHatchGen_Domain::HasSecondPoint()
{
  return OCConverter::StandardBooleanToBoolean(((HatchGen_Domain*)nativeHandle)->HasSecondPoint());
}

OCHatchGen_PointOnHatching^ OCHatchGen_Domain::SecondPoint()
{
  HatchGen_PointOnHatching* tmp = new HatchGen_PointOnHatching();
  *tmp = ((HatchGen_Domain*)nativeHandle)->SecondPoint();
  return gcnew OCHatchGen_PointOnHatching(tmp);
}

 void OCHatchGen_Domain::Dump(Standard_Integer Index)
{
  ((HatchGen_Domain*)nativeHandle)->Dump(Index);
}

