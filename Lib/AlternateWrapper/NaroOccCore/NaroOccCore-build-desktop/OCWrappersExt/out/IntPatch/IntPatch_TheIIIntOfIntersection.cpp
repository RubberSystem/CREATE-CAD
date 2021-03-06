// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheIIIntOfIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "IntPatch_HCurve2dTool.h"
#include "IntPatch_HSurfaceTool.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"
#include "IntPatch_HInterTool.h"
#include "IntPatch_ThePointOfIntersection.h"
#include "IntPatch_SequenceOfPointOfIntersection.h"
#include "IntPatch_TheGLineOfIntersection.h"
#include "IntPatch_TheALineOfIntersection.h"
#include "IntPatch_TheRLineOfIntersection.h"
#include "IntPatch_TheArcFunctionOfIntersection.h"
#include "IntPatch_ThePathPointOfTheSOnBoundsOfIntersection.h"
#include "IntPatch_TheSegmentOfTheSOnBoundsOfIntersection.h"
#include "IntPatch_SequenceOfPathPointOfTheSOnBoundsOfIntersection.h"
#include "IntPatch_SequenceOfSegmentOfTheSOnBoundsOfIntersection.h"
#include "IntPatch_TheSOnBoundsOfIntersection.h"
#include "IntPatch_Line.h"


using namespace OCNaroWrappers;

OCIntPatch_TheIIIntOfIntersection::OCIntPatch_TheIIIntOfIntersection(IntPatch_TheIIIntOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_TheIIIntOfIntersection::OCIntPatch_TheIIIntOfIntersection() 
{
  nativeHandle = new IntPatch_TheIIIntOfIntersection();
}

OCIntPatch_TheIIIntOfIntersection::OCIntPatch_TheIIIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang) 
{
  nativeHandle = new IntPatch_TheIIIntOfIntersection(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_TopolTool*)D1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_TopolTool*)D2->Handle), TolArc, TolTang);
}

 void OCIntPatch_TheIIIntOfIntersection::Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, Standard_Real TolArc, Standard_Real TolTang)
{
  ((IntPatch_TheIIIntOfIntersection*)nativeHandle)->Perform(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_TopolTool*)D1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_TopolTool*)D2->Handle), TolArc, TolTang);
}

 System::Boolean OCIntPatch_TheIIIntOfIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheIIIntOfIntersection*)nativeHandle)->IsDone());
}

 System::Boolean OCIntPatch_TheIIIntOfIntersection::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheIIIntOfIntersection*)nativeHandle)->IsEmpty());
}

 System::Boolean OCIntPatch_TheIIIntOfIntersection::TangentFaces()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheIIIntOfIntersection*)nativeHandle)->TangentFaces());
}

 System::Boolean OCIntPatch_TheIIIntOfIntersection::OppositeFaces()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheIIIntOfIntersection*)nativeHandle)->OppositeFaces());
}

 Standard_Integer OCIntPatch_TheIIIntOfIntersection::NbPnts()
{
  return ((IntPatch_TheIIIntOfIntersection*)nativeHandle)->NbPnts();
}

OCIntPatch_ThePointOfIntersection^ OCIntPatch_TheIIIntOfIntersection::Point(Standard_Integer Index)
{
  IntPatch_ThePointOfIntersection* tmp = new IntPatch_ThePointOfIntersection();
  *tmp = ((IntPatch_TheIIIntOfIntersection*)nativeHandle)->Point(Index);
  return gcnew OCIntPatch_ThePointOfIntersection(tmp);
}

 Standard_Integer OCIntPatch_TheIIIntOfIntersection::NbLines()
{
  return ((IntPatch_TheIIIntOfIntersection*)nativeHandle)->NbLines();
}

OCIntPatch_Line^ OCIntPatch_TheIIIntOfIntersection::Line(Standard_Integer Index)
{
  Handle(IntPatch_Line) tmp = ((IntPatch_TheIIIntOfIntersection*)nativeHandle)->Line(Index);
  return gcnew OCIntPatch_Line(&tmp);
}


