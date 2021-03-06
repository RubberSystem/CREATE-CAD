// File generated by CPPExt (CPP file)
//

#include "Geom2dInt_TheIntPCurvePCurveOfGInter.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "Geom2dInt_Geom2dCurveTool.h"
#include "Geom2dInt_TheProjPCurOfGInter.h"
#include "Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.h"
#include "Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.h"
#include "Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.h"
#include "../IntRes2d/IntRes2d_Domain.h"


using namespace OCNaroWrappers;

OCGeom2dInt_TheIntPCurvePCurveOfGInter::OCGeom2dInt_TheIntPCurvePCurveOfGInter(Geom2dInt_TheIntPCurvePCurveOfGInter* nativeHandle) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeom2dInt_TheIntPCurvePCurveOfGInter::OCGeom2dInt_TheIntPCurvePCurveOfGInter() : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_TheIntPCurvePCurveOfGInter();
}

 void OCGeom2dInt_TheIntPCurvePCurveOfGInter::Perform(OCNaroWrappers::OCAdaptor2d_Curve2d^ Curve1, OCNaroWrappers::OCIntRes2d_Domain^ Domain1, OCNaroWrappers::OCAdaptor2d_Curve2d^ Curve2, OCNaroWrappers::OCIntRes2d_Domain^ Domain2, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_TheIntPCurvePCurveOfGInter*)nativeHandle)->Perform(*((Adaptor2d_Curve2d*)Curve1->Handle), *((IntRes2d_Domain*)Domain1->Handle), *((Adaptor2d_Curve2d*)Curve2->Handle), *((IntRes2d_Domain*)Domain2->Handle), TolConf, Tol);
}

 void OCGeom2dInt_TheIntPCurvePCurveOfGInter::Perform(OCNaroWrappers::OCAdaptor2d_Curve2d^ Curve1, OCNaroWrappers::OCIntRes2d_Domain^ Domain1, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_TheIntPCurvePCurveOfGInter*)nativeHandle)->Perform(*((Adaptor2d_Curve2d*)Curve1->Handle), *((IntRes2d_Domain*)Domain1->Handle), TolConf, Tol);
}


