// File generated by CPPExt (CPP file)
//

#include "V3d_RectangularGrid.h"
#include "../Converter.h"
#include "../Graphic3d/Graphic3d_Structure.h"
#include "../Graphic3d/Graphic3d_Group.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCV3d_RectangularGrid::OCV3d_RectangularGrid(Handle(V3d_RectangularGrid)* nativeHandle) : OCAspect_RectangularGrid((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_V3d_RectangularGrid(*nativeHandle);
}

OCV3d_RectangularGrid::OCV3d_RectangularGrid(V3d_ViewerPointer aViewer, OCNaroWrappers::OCQuantity_Color^ aColor, OCNaroWrappers::OCQuantity_Color^ aTenthColor) : OCAspect_RectangularGrid((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_RectangularGrid(new V3d_RectangularGrid(aViewer, *((Quantity_Color*)aColor->Handle), *((Quantity_Color*)aTenthColor->Handle)));
}

 void OCV3d_RectangularGrid::SetColors(OCNaroWrappers::OCQuantity_Color^ aColor, OCNaroWrappers::OCQuantity_Color^ aTenthColor)
{
  (*((Handle_V3d_RectangularGrid*)nativeHandle))->SetColors(*((Quantity_Color*)aColor->Handle), *((Quantity_Color*)aTenthColor->Handle));
}

 void OCV3d_RectangularGrid::Display()
{
  (*((Handle_V3d_RectangularGrid*)nativeHandle))->Display();
}

 void OCV3d_RectangularGrid::Erase()
{
  (*((Handle_V3d_RectangularGrid*)nativeHandle))->Erase();
}

 System::Boolean OCV3d_RectangularGrid::IsDisplayed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_V3d_RectangularGrid*)nativeHandle))->IsDisplayed());
}

 void OCV3d_RectangularGrid::GraphicValues(Standard_Real& XSize, Standard_Real& YSize, Standard_Real& OffSet)
{
  (*((Handle_V3d_RectangularGrid*)nativeHandle))->GraphicValues(XSize, YSize, OffSet);
}

 void OCV3d_RectangularGrid::SetGraphicValues(Standard_Real XSize, Standard_Real YSize, Standard_Real OffSet)
{
  (*((Handle_V3d_RectangularGrid*)nativeHandle))->SetGraphicValues(XSize, YSize, OffSet);
}


