// File generated by CPPExt (CPP file)
//

#include "BRepExtrema_DistanceSS.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Bnd/Bnd_Box.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"
#include "BRepExtrema_SeqOfSolution.h"


using namespace OCNaroWrappers;

OCBRepExtrema_DistanceSS::OCBRepExtrema_DistanceSS(BRepExtrema_DistanceSS* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepExtrema_DistanceSS::OCBRepExtrema_DistanceSS(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBnd_Box^ B1, OCNaroWrappers::OCBnd_Box^ B2, Standard_Real DstRef) 
{
  nativeHandle = new BRepExtrema_DistanceSS(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((Bnd_Box*)B1->Handle), *((Bnd_Box*)B2->Handle), DstRef);
}

OCBRepExtrema_DistanceSS::OCBRepExtrema_DistanceSS(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBnd_Box^ B1, OCNaroWrappers::OCBnd_Box^ B2, Standard_Real DstRef, Standard_Real aDeflection) 
{
  nativeHandle = new BRepExtrema_DistanceSS(*((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle), *((Bnd_Box*)B1->Handle), *((Bnd_Box*)B2->Handle), DstRef, aDeflection);
}

 System::Boolean OCBRepExtrema_DistanceSS::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BRepExtrema_DistanceSS*)nativeHandle)->IsDone());
}

 Standard_Real OCBRepExtrema_DistanceSS::DistValue()
{
  return ((BRepExtrema_DistanceSS*)nativeHandle)->DistValue();
}

OCBRepExtrema_SeqOfSolution^ OCBRepExtrema_DistanceSS::Seq1Value()
{
  BRepExtrema_SeqOfSolution* tmp = new BRepExtrema_SeqOfSolution();
  *tmp = ((BRepExtrema_DistanceSS*)nativeHandle)->Seq1Value();
  return gcnew OCBRepExtrema_SeqOfSolution(tmp);
}

OCBRepExtrema_SeqOfSolution^ OCBRepExtrema_DistanceSS::Seq2Value()
{
  BRepExtrema_SeqOfSolution* tmp = new BRepExtrema_SeqOfSolution();
  *tmp = ((BRepExtrema_DistanceSS*)nativeHandle)->Seq2Value();
  return gcnew OCBRepExtrema_SeqOfSolution(tmp);
}


