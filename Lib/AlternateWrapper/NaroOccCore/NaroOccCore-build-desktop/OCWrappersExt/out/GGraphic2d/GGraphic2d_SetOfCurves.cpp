// File generated by CPPExt (CPP file)
//

#include "GGraphic2d_SetOfCurves.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Graphic2d/Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCGGraphic2d_SetOfCurves::OCGGraphic2d_SetOfCurves(Handle(GGraphic2d_SetOfCurves)* nativeHandle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GGraphic2d_SetOfCurves(*nativeHandle);
}

OCGGraphic2d_SetOfCurves::OCGGraphic2d_SetOfCurves(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GGraphic2d_SetOfCurves(new GGraphic2d_SetOfCurves(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle)));
}

 void OCGGraphic2d_SetOfCurves::Add(OCNaroWrappers::OCGeom2d_Curve^ aCurve)
{
  (*((Handle_GGraphic2d_SetOfCurves*)nativeHandle))->Add(*((Handle_Geom2d_Curve*)aCurve->Handle));
}

 Standard_Integer OCGGraphic2d_SetOfCurves::Length()
{
  return (*((Handle_GGraphic2d_SetOfCurves*)nativeHandle))->Length();
}

OCGeom2d_Curve^ OCGGraphic2d_SetOfCurves::Values(Standard_Integer aRank)
{
  Handle(Geom2d_Curve) tmp = (*((Handle_GGraphic2d_SetOfCurves*)nativeHandle))->Values(aRank);
  return gcnew OCGeom2d_Curve(&tmp);
}

