// File generated by CPPExt (CPP file)
//

#include "PrsMgr_Presentation2d.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "PrsMgr_PresentationManager2d.h"
#include "PrsMgr_PresentableObject.h"


using namespace OCNaroWrappers;

OCPrsMgr_Presentation2d::OCPrsMgr_Presentation2d(Handle(PrsMgr_Presentation2d)* nativeHandle) : OCPrsMgr_Presentation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PrsMgr_Presentation2d(*nativeHandle);
}

 OCPrsMgr_KindOfPrs OCPrsMgr_Presentation2d::KindOfPresentation()
{
  return (OCPrsMgr_KindOfPrs)((*((Handle_PrsMgr_Presentation2d*)nativeHandle))->KindOfPresentation());
}

 void OCPrsMgr_Presentation2d::Clear()
{
  (*((Handle_PrsMgr_Presentation2d*)nativeHandle))->Clear();
}

 void OCPrsMgr_Presentation2d::SetOffset(Standard_Integer anOffset)
{
  (*((Handle_PrsMgr_Presentation2d*)nativeHandle))->SetOffset(anOffset);
}

 Standard_Integer OCPrsMgr_Presentation2d::Offset()
{
  return (*((Handle_PrsMgr_Presentation2d*)nativeHandle))->Offset();
}

OCGraphic2d_GraphicObject^ OCPrsMgr_Presentation2d::Presentation()
{
  Handle(Graphic2d_GraphicObject) tmp = (*((Handle_PrsMgr_Presentation2d*)nativeHandle))->Presentation();
  return gcnew OCGraphic2d_GraphicObject(&tmp);
}

