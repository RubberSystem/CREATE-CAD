// File generated by CPPExt (CPP file)
//

#include "V3d_CircularGrid.h"
#include "../Converter.h"
#include "../Graphic3d/Graphic3d_Structure.h"
#include "../Graphic3d/Graphic3d_Group.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCV3d_CircularGrid::OCV3d_CircularGrid(Handle(V3d_CircularGrid)* nativeHandle) : OCAspect_CircularGrid((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_V3d_CircularGrid(*nativeHandle);
}

OCV3d_CircularGrid::OCV3d_CircularGrid(V3d_ViewerPointer aViewer, OCNaroWrappers::OCQuantity_Color^ aColor, OCNaroWrappers::OCQuantity_Color^ aTenthColor) : OCAspect_CircularGrid((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_CircularGrid(new V3d_CircularGrid(aViewer, *((Quantity_Color*)aColor->Handle), *((Quantity_Color*)aTenthColor->Handle)));
}

 void OCV3d_CircularGrid::SetColors(OCNaroWrappers::OCQuantity_Color^ aColor, OCNaroWrappers::OCQuantity_Color^ aTenthColor)
{
  (*((Handle_V3d_CircularGrid*)nativeHandle))->SetColors(*((Quantity_Color*)aColor->Handle), *((Quantity_Color*)aTenthColor->Handle));
}

 void OCV3d_CircularGrid::Display()
{
  (*((Handle_V3d_CircularGrid*)nativeHandle))->Display();
}

 void OCV3d_CircularGrid::Erase()
{
  (*((Handle_V3d_CircularGrid*)nativeHandle))->Erase();
}

 System::Boolean OCV3d_CircularGrid::IsDisplayed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_V3d_CircularGrid*)nativeHandle))->IsDisplayed());
}

 void OCV3d_CircularGrid::GraphicValues(Standard_Real& Radius, Standard_Real& OffSet)
{
  (*((Handle_V3d_CircularGrid*)nativeHandle))->GraphicValues(Radius, OffSet);
}

 void OCV3d_CircularGrid::SetGraphicValues(Standard_Real Radius, Standard_Real OffSet)
{
  (*((Handle_V3d_CircularGrid*)nativeHandle))->SetGraphicValues(Radius, OffSet);
}


