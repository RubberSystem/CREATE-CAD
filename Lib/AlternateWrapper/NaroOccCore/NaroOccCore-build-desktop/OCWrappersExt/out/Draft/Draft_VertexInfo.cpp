// File generated by CPPExt (CPP file)
//

#include "Draft_VertexInfo.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCDraft_VertexInfo::OCDraft_VertexInfo(Draft_VertexInfo* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCDraft_VertexInfo::OCDraft_VertexInfo() 
{
  nativeHandle = new Draft_VertexInfo();
}

 void OCDraft_VertexInfo::Add(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  ((Draft_VertexInfo*)nativeHandle)->Add(*((TopoDS_Edge*)E->Handle));
}

OCgp_Pnt^ OCDraft_VertexInfo::Geometry()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Draft_VertexInfo*)nativeHandle)->Geometry();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCDraft_VertexInfo::Parameter(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  return ((Draft_VertexInfo*)nativeHandle)->Parameter(*((TopoDS_Edge*)E->Handle));
}

 void OCDraft_VertexInfo::InitEdgeIterator()
{
  ((Draft_VertexInfo*)nativeHandle)->InitEdgeIterator();
}

OCTopoDS_Edge^ OCDraft_VertexInfo::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((Draft_VertexInfo*)nativeHandle)->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

 void OCDraft_VertexInfo::NextEdge()
{
  ((Draft_VertexInfo*)nativeHandle)->NextEdge();
}

 System::Boolean OCDraft_VertexInfo::MoreEdge()
{
  return OCConverter::StandardBooleanToBoolean(((Draft_VertexInfo*)nativeHandle)->MoreEdge());
}

OCgp_Pnt^ OCDraft_VertexInfo::ChangeGeometry()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Draft_VertexInfo*)nativeHandle)->ChangeGeometry();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCDraft_VertexInfo::ChangeParameter(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  return ((Draft_VertexInfo*)nativeHandle)->ChangeParameter(*((TopoDS_Edge*)E->Handle));
}


