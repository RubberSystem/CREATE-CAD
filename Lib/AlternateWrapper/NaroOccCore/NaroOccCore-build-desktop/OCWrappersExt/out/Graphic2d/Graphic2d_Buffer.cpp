// File generated by CPPExt (CPP file)
//

#include "Graphic2d_Buffer.h"
#include "../Converter.h"
#include "../Aspect/Aspect_WindowDriver.h"
#include "Graphic2d_View.h"
#include "Graphic2d_GraphicObject.h"
#include "Graphic2d_Primitive.h"
#include "Graphic2d_ViewMapping.h"


using namespace OCNaroWrappers;

OCGraphic2d_Buffer::OCGraphic2d_Buffer(Handle(Graphic2d_Buffer)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic2d_Buffer(*nativeHandle);
}

OCGraphic2d_Buffer::OCGraphic2d_Buffer(OCNaroWrappers::OCGraphic2d_View^ aView, Quantity_Length aPivotX, Quantity_Length aPivotY, Standard_Integer aWidthIndex, Standard_Integer aColorIndex, Standard_Integer aFontIndex, OCAspect_TypeOfDrawMode aDrawMode) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic2d_Buffer(new Graphic2d_Buffer(*((Handle_Graphic2d_View*)aView->Handle), aPivotX, aPivotY, aWidthIndex, aColorIndex, aFontIndex, (Aspect_TypeOfDrawMode)aDrawMode));
}

 void OCGraphic2d_Buffer::Add(OCNaroWrappers::OCGraphic2d_GraphicObject^ anObject)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Add(*((Handle_Graphic2d_GraphicObject*)anObject->Handle));
}

 void OCGraphic2d_Buffer::Add(OCNaroWrappers::OCGraphic2d_Primitive^ aPrimitive)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Add(*((Handle_Graphic2d_Primitive*)aPrimitive->Handle));
}

 void OCGraphic2d_Buffer::Remove(OCNaroWrappers::OCGraphic2d_GraphicObject^ anObject)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Remove(*((Handle_Graphic2d_GraphicObject*)anObject->Handle));
}

 void OCGraphic2d_Buffer::Remove(OCNaroWrappers::OCGraphic2d_Primitive^ aPrimitive)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Remove(*((Handle_Graphic2d_Primitive*)aPrimitive->Handle));
}

 void OCGraphic2d_Buffer::Clear()
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Clear();
}

 void OCGraphic2d_Buffer::SetAttrib(Standard_Integer aWidthIndex, Standard_Integer aColorIndex, Standard_Integer aFontIndex, OCAspect_TypeOfDrawMode aDrawMode)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->SetAttrib(aWidthIndex, aColorIndex, aFontIndex, (Aspect_TypeOfDrawMode)aDrawMode);
}

 void OCGraphic2d_Buffer::SetPivot(Quantity_Length aPivotX, Quantity_Length aPivotY)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->SetPivot(aPivotX, aPivotY);
}

 void OCGraphic2d_Buffer::SetPivot()
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->SetPivot();
}

 void OCGraphic2d_Buffer::Move(Quantity_Length aDeltaX, Quantity_Length aDeltaY)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Move(aDeltaX, aDeltaY);
}

 void OCGraphic2d_Buffer::Rotate(Quantity_PlaneAngle anAngle)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Rotate(anAngle);
}

 void OCGraphic2d_Buffer::Scale(Quantity_Factor aFactor)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Scale(aFactor);
}

OCGraphic2d_View^ OCGraphic2d_Buffer::View()
{
  Handle(Graphic2d_View) tmp = (*((Handle_Graphic2d_Buffer*)nativeHandle))->View();
  return gcnew OCGraphic2d_View(&tmp);
}

 System::Boolean OCGraphic2d_Buffer::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Buffer*)nativeHandle))->IsEmpty());
}

 System::Boolean OCGraphic2d_Buffer::IsIn(OCNaroWrappers::OCGraphic2d_Primitive^ aPrimitive)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Buffer*)nativeHandle))->IsIn(*((Handle_Graphic2d_Primitive*)aPrimitive->Handle)));
}

 System::Boolean OCGraphic2d_Buffer::IsIn(OCNaroWrappers::OCGraphic2d_GraphicObject^ anObject)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Buffer*)nativeHandle))->IsIn(*((Handle_Graphic2d_GraphicObject*)anObject->Handle)));
}

 void OCGraphic2d_Buffer::Post()
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Post();
}

 void OCGraphic2d_Buffer::Post(OCNaroWrappers::OCAspect_WindowDriver^ aDriver, OCNaroWrappers::OCGraphic2d_ViewMapping^ aViewMapping, Standard_Real aXPosition, Standard_Real aYPosition, Standard_Real aScale)
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->Post(*((Handle_Aspect_WindowDriver*)aDriver->Handle), *((Handle_Graphic2d_ViewMapping*)aViewMapping->Handle), aXPosition, aYPosition, aScale);
}

 void OCGraphic2d_Buffer::UnPost()
{
  (*((Handle_Graphic2d_Buffer*)nativeHandle))->UnPost();
}

 System::Boolean OCGraphic2d_Buffer::IsPosted()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic2d_Buffer*)nativeHandle))->IsPosted());
}

 Quantity_PlaneAngle OCGraphic2d_Buffer::Angle()
{
  return (*((Handle_Graphic2d_Buffer*)nativeHandle))->Angle();
}

 Quantity_Factor OCGraphic2d_Buffer::Scale()
{
  return (*((Handle_Graphic2d_Buffer*)nativeHandle))->Scale();
}

 Quantity_Length OCGraphic2d_Buffer::Xpivot()
{
  return (*((Handle_Graphic2d_Buffer*)nativeHandle))->Xpivot();
}

 Quantity_Length OCGraphic2d_Buffer::Ypivot()
{
  return (*((Handle_Graphic2d_Buffer*)nativeHandle))->Ypivot();
}

