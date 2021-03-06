// File generated by CPPExt (CPP file)
//

#include "IntPatch_Polygo.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCIntPatch_Polygo::OCIntPatch_Polygo(IntPatch_Polygo* nativeHandle) : OCIntf_Polygon2d((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_Polygo::OCIntPatch_Polygo(Standard_Real theError) : OCIntf_Polygon2d((OCDummy^)nullptr)

{}

 Standard_Real OCIntPatch_Polygo::Error()
{
  return ((IntPatch_Polygo*)nativeHandle)->Error();
}

 Standard_Real OCIntPatch_Polygo::DeflectionOverEstimation()
{
  return ((IntPatch_Polygo*)nativeHandle)->DeflectionOverEstimation();
}

 Standard_Integer OCIntPatch_Polygo::NbSegments()
{
  return ((IntPatch_Polygo*)nativeHandle)->NbSegments();
}

 void OCIntPatch_Polygo::Segment(Standard_Integer theIndex, OCNaroWrappers::OCgp_Pnt2d^ theBegin, OCNaroWrappers::OCgp_Pnt2d^ theEnd)
{
  ((IntPatch_Polygo*)nativeHandle)->Segment(theIndex, *((gp_Pnt2d*)theBegin->Handle), *((gp_Pnt2d*)theEnd->Handle));
}

 void OCIntPatch_Polygo::Dump()
{
  ((IntPatch_Polygo*)nativeHandle)->Dump();
}


