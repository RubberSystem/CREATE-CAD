// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_BooleanOperations.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_HDataStructure.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopOpeBRepBuild/TopOpeBRepBuild_HBuilder.h"
#include "BRepAlgo_DSAccess.h"


using namespace OCNaroWrappers;

OCBRepAlgo_BooleanOperations::OCBRepAlgo_BooleanOperations(BRepAlgo_BooleanOperations* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_BooleanOperations::OCBRepAlgo_BooleanOperations() 
{
  nativeHandle = new BRepAlgo_BooleanOperations();
}

 void OCBRepAlgo_BooleanOperations::Shapes2d(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  ((BRepAlgo_BooleanOperations*)nativeHandle)->Shapes2d(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

 void OCBRepAlgo_BooleanOperations::Shapes(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  ((BRepAlgo_BooleanOperations*)nativeHandle)->Shapes(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

 void OCBRepAlgo_BooleanOperations::SetApproxParameters(Standard_Integer NbPntMax, Standard_Real Tol3D, Standard_Real Tol2D, System::Boolean RelativeTol)
{
  ((BRepAlgo_BooleanOperations*)nativeHandle)->SetApproxParameters(NbPntMax, Tol3D, Tol2D, OCConverter::BooleanToStandardBoolean(RelativeTol));
}

 void OCBRepAlgo_BooleanOperations::Define(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS)
{
  ((BRepAlgo_BooleanOperations*)nativeHandle)->Define(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((Handle_TopOpeBRepDS_HDataStructure*)HDS->Handle));
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperations::Common()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Common();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperations::Fus()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Fus();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperations::Cut()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Cut();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperations::Section()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Section();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperations::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_BooleanOperations::ShapeFrom(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->ShapeFrom(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCBRepAlgo_BooleanOperations::Modified(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Modified(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepAlgo_BooleanOperations::IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_BooleanOperations*)nativeHandle)->IsDeleted(*((TopoDS_Shape*)S->Handle)));
}

OCTopOpeBRepDS_HDataStructure^ OCBRepAlgo_BooleanOperations::DataStructure()
{
  Handle(TopOpeBRepDS_HDataStructure) tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->DataStructure();
  return gcnew OCTopOpeBRepDS_HDataStructure(&tmp);
}

OCTopOpeBRepDS_HDataStructure^ OCBRepAlgo_BooleanOperations::ChangeDataStructure()
{
  Handle(TopOpeBRepDS_HDataStructure) tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->ChangeDataStructure();
  return gcnew OCTopOpeBRepDS_HDataStructure(&tmp);
}

OCTopOpeBRepBuild_HBuilder^ OCBRepAlgo_BooleanOperations::Builder()
{
  Handle(TopOpeBRepBuild_HBuilder) tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->Builder();
  return gcnew OCTopOpeBRepBuild_HBuilder(&tmp);
}

OCTopOpeBRepBuild_HBuilder^ OCBRepAlgo_BooleanOperations::ChangeBuilder()
{
  Handle(TopOpeBRepBuild_HBuilder) tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->ChangeBuilder();
  return gcnew OCTopOpeBRepBuild_HBuilder(&tmp);
}

OCBRepAlgo_DSAccess^ OCBRepAlgo_BooleanOperations::DataStructureAccess()
{
  BRepAlgo_DSAccess* tmp = new BRepAlgo_DSAccess();
  *tmp = ((BRepAlgo_BooleanOperations*)nativeHandle)->DataStructureAccess();
  return gcnew OCBRepAlgo_DSAccess(tmp);
}

