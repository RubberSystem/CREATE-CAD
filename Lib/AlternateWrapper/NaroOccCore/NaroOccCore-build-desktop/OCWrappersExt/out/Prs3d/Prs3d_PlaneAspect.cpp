// File generated by CPPExt (CPP file)
//

#include "Prs3d_PlaneAspect.h"
#include "../Converter.h"
#include "Prs3d_LineAspect.h"


using namespace OCNaroWrappers;

OCPrs3d_PlaneAspect::OCPrs3d_PlaneAspect(Handle(Prs3d_PlaneAspect)* nativeHandle) : OCPrs3d_CompositeAspect((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs3d_PlaneAspect(*nativeHandle);
}

OCPrs3d_PlaneAspect::OCPrs3d_PlaneAspect() : OCPrs3d_CompositeAspect((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_PlaneAspect(new Prs3d_PlaneAspect());
}

OCPrs3d_LineAspect^ OCPrs3d_PlaneAspect::EdgesAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->EdgesAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

OCPrs3d_LineAspect^ OCPrs3d_PlaneAspect::IsoAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->IsoAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

OCPrs3d_LineAspect^ OCPrs3d_PlaneAspect::ArrowAspect()
{
  Handle(Prs3d_LineAspect) tmp = (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->ArrowAspect();
  return gcnew OCPrs3d_LineAspect(&tmp);
}

 void OCPrs3d_PlaneAspect::SetArrowsLength(Quantity_Length L)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetArrowsLength(L);
}

 Quantity_Length OCPrs3d_PlaneAspect::ArrowsLength()
{
  return (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->ArrowsLength();
}

 void OCPrs3d_PlaneAspect::SetArrowsSize(Quantity_Length L)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetArrowsSize(L);
}

 Quantity_Length OCPrs3d_PlaneAspect::ArrowsSize()
{
  return (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->ArrowsSize();
}

 void OCPrs3d_PlaneAspect::SetArrowsAngle(Quantity_PlaneAngle ang)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetArrowsAngle(ang);
}

 Quantity_PlaneAngle OCPrs3d_PlaneAspect::ArrowsAngle()
{
  return (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->ArrowsAngle();
}

 void OCPrs3d_PlaneAspect::SetDisplayCenterArrow(System::Boolean draw)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetDisplayCenterArrow(OCConverter::BooleanToStandardBoolean(draw));
}

 System::Boolean OCPrs3d_PlaneAspect::DisplayCenterArrow()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_PlaneAspect*)nativeHandle))->DisplayCenterArrow());
}

 void OCPrs3d_PlaneAspect::SetDisplayEdgesArrows(System::Boolean draw)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetDisplayEdgesArrows(OCConverter::BooleanToStandardBoolean(draw));
}

 System::Boolean OCPrs3d_PlaneAspect::DisplayEdgesArrows()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_PlaneAspect*)nativeHandle))->DisplayEdgesArrows());
}

 void OCPrs3d_PlaneAspect::SetDisplayEdges(System::Boolean draw)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetDisplayEdges(OCConverter::BooleanToStandardBoolean(draw));
}

 System::Boolean OCPrs3d_PlaneAspect::DisplayEdges()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_PlaneAspect*)nativeHandle))->DisplayEdges());
}

 void OCPrs3d_PlaneAspect::SetDisplayIso(System::Boolean draw)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetDisplayIso(OCConverter::BooleanToStandardBoolean(draw));
}

 System::Boolean OCPrs3d_PlaneAspect::DisplayIso()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Prs3d_PlaneAspect*)nativeHandle))->DisplayIso());
}

 void OCPrs3d_PlaneAspect::SetPlaneLength(Quantity_Length LX, Quantity_Length LY)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetPlaneLength(LX, LY);
}

 Quantity_Length OCPrs3d_PlaneAspect::PlaneXLength()
{
  return (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->PlaneXLength();
}

 Quantity_Length OCPrs3d_PlaneAspect::PlaneYLength()
{
  return (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->PlaneYLength();
}

 void OCPrs3d_PlaneAspect::SetIsoDistance(Quantity_Length L)
{
  (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->SetIsoDistance(L);
}

 Quantity_Length OCPrs3d_PlaneAspect::IsoDistance()
{
  return (*((Handle_Prs3d_PlaneAspect*)nativeHandle))->IsoDistance();
}


