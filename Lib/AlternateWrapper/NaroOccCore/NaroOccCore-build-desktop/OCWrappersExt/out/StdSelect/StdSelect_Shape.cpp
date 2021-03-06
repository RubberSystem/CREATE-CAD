// File generated by CPPExt (CPP file)
//

#include "StdSelect_Shape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Projector.h"
#include "../PrsMgr/PrsMgr_PresentationManager2d.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Geom/Geom_Transformation.h"


using namespace OCNaroWrappers;

OCStdSelect_Shape::OCStdSelect_Shape(Handle(StdSelect_Shape)* nativeHandle) : OCPrsMgr_PresentableObject((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StdSelect_Shape(*nativeHandle);
}

OCStdSelect_Shape::OCStdSelect_Shape(OCNaroWrappers::OCTopoDS_Shape^ Sh) : OCPrsMgr_PresentableObject((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StdSelect_Shape(new StdSelect_Shape(*((TopoDS_Shape*)Sh->Handle)));
}

 void OCStdSelect_Shape::Compute(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ aPresentationManager, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, Standard_Integer aMode)
{
  (*((Handle_StdSelect_Shape*)nativeHandle))->Compute(*((Handle_PrsMgr_PresentationManager3d*)aPresentationManager->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle), aMode);
}

 void OCStdSelect_Shape::Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation)
{
  (*((Handle_StdSelect_Shape*)nativeHandle))->Compute(*((Handle_Prs3d_Projector*)aProjector->Handle), *((Handle_Geom_Transformation*)aTrsf->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle));
}

OCTopoDS_Shape^ OCStdSelect_Shape::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_StdSelect_Shape*)nativeHandle))->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCStdSelect_Shape::Shape(OCNaroWrappers::OCTopoDS_Shape^ sh)
{
  (*((Handle_StdSelect_Shape*)nativeHandle))->Shape(*((TopoDS_Shape*)sh->Handle));
}


