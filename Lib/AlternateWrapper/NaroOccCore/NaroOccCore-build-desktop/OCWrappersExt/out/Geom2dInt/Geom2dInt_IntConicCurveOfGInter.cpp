// File generated by CPPExt (CPP file)
//

#include "Geom2dInt_IntConicCurveOfGInter.h"
#include "../Converter.h"
#include "../IntCurve/IntCurve_IConicTool.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "Geom2dInt_Geom2dCurveTool.h"
#include "Geom2dInt_TheIntConicCurveOfGInter.h"
#include "../gp/gp_Lin2d.h"
#include "../IntRes2d/IntRes2d_Domain.h"
#include "../gp/gp_Circ2d.h"
#include "../gp/gp_Elips2d.h"
#include "../gp/gp_Parab2d.h"
#include "../gp/gp_Hypr2d.h"


using namespace OCNaroWrappers;

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter(Geom2dInt_IntConicCurveOfGInter* nativeHandle) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter() : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_IntConicCurveOfGInter();
}

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_IntConicCurveOfGInter(*((gp_Lin2d*)L->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter(OCNaroWrappers::OCgp_Circ2d^ C, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_IntConicCurveOfGInter(*((gp_Circ2d*)C->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter(OCNaroWrappers::OCgp_Elips2d^ E, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_IntConicCurveOfGInter(*((gp_Elips2d*)E->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter(OCNaroWrappers::OCgp_Parab2d^ Prb, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_IntConicCurveOfGInter(*((gp_Parab2d*)Prb->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

OCGeom2dInt_IntConicCurveOfGInter::OCGeom2dInt_IntConicCurveOfGInter(OCNaroWrappers::OCgp_Hypr2d^ H, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) : OCIntRes2d_Intersection((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_IntConicCurveOfGInter(*((gp_Hypr2d*)H->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

 void OCGeom2dInt_IntConicCurveOfGInter::Perform(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_IntConicCurveOfGInter*)nativeHandle)->Perform(*((gp_Lin2d*)L->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

 void OCGeom2dInt_IntConicCurveOfGInter::Perform(OCNaroWrappers::OCgp_Circ2d^ C, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_IntConicCurveOfGInter*)nativeHandle)->Perform(*((gp_Circ2d*)C->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

 void OCGeom2dInt_IntConicCurveOfGInter::Perform(OCNaroWrappers::OCgp_Elips2d^ E, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_IntConicCurveOfGInter*)nativeHandle)->Perform(*((gp_Elips2d*)E->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

 void OCGeom2dInt_IntConicCurveOfGInter::Perform(OCNaroWrappers::OCgp_Parab2d^ Prb, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_IntConicCurveOfGInter*)nativeHandle)->Perform(*((gp_Parab2d*)Prb->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}

 void OCGeom2dInt_IntConicCurveOfGInter::Perform(OCNaroWrappers::OCgp_Hypr2d^ H, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol)
{
  ((Geom2dInt_IntConicCurveOfGInter*)nativeHandle)->Perform(*((gp_Hypr2d*)H->Handle), *((IntRes2d_Domain*)D1->Handle), *((Adaptor2d_Curve2d*)PCurve->Handle), *((IntRes2d_Domain*)D2->Handle), TolConf, Tol);
}


