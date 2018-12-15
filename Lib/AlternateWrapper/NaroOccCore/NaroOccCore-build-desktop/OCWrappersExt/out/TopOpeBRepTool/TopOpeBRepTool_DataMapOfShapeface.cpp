// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_DataMapOfShapeface.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepTool_face.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepTool_DataMapNodeOfDataMapOfShapeface.h"
#include "TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_DataMapOfShapeface::OCTopOpeBRepTool_DataMapOfShapeface(TopOpeBRepTool_DataMapOfShapeface* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepTool_DataMapOfShapeface::OCTopOpeBRepTool_DataMapOfShapeface(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepTool_DataMapOfShapeface(NbBuckets);
}

OCTopOpeBRepTool_DataMapOfShapeface^ OCTopOpeBRepTool_DataMapOfShapeface::Assign(OCNaroWrappers::OCTopOpeBRepTool_DataMapOfShapeface^ Other)
{
  TopOpeBRepTool_DataMapOfShapeface* tmp = new TopOpeBRepTool_DataMapOfShapeface(0);
  *tmp = ((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->Assign(*((TopOpeBRepTool_DataMapOfShapeface*)Other->Handle));
  return gcnew OCTopOpeBRepTool_DataMapOfShapeface(tmp);
}

 void OCTopOpeBRepTool_DataMapOfShapeface::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopOpeBRepTool_DataMapOfShapeface::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepTool_face^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((TopOpeBRepTool_face*)I->Handle)));
}

 System::Boolean OCTopOpeBRepTool_DataMapOfShapeface::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCTopOpeBRepTool_DataMapOfShapeface::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCTopOpeBRepTool_face^ OCTopOpeBRepTool_DataMapOfShapeface::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopOpeBRepTool_face* tmp = new TopOpeBRepTool_face();
  *tmp = ((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopOpeBRepTool_face(tmp);
}

OCTopOpeBRepTool_face^ OCTopOpeBRepTool_DataMapOfShapeface::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  TopOpeBRepTool_face* tmp = new TopOpeBRepTool_face();
  *tmp = ((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCTopOpeBRepTool_face(tmp);
}

 Standard_Address OCTopOpeBRepTool_DataMapOfShapeface::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopOpeBRepTool_DataMapOfShapeface::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRepTool_DataMapOfShapeface*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}

