// File generated by CPPExt (MPV)
//
#ifndef _Geom2dInt_TheIntConicCurveOfGInter_OCWrappers_HeaderFile
#define _Geom2dInt_TheIntConicCurveOfGInter_OCWrappers_HeaderFile

// include native header
#include <Geom2dInt_TheIntConicCurveOfGInter.hxx>
#include "../Converter.h"

#include "../IntRes2d/IntRes2d_Intersection.h"

#include "../IntRes2d/IntRes2d_Intersection.h"


namespace OCNaroWrappers
{

ref class OCIntCurve_IConicTool;
ref class OCAdaptor2d_Curve2d;
ref class OCGeom2dInt_Geom2dCurveTool;
ref class OCGeom2dInt_TheProjPCurOfGInter;
ref class OCGeom2dInt_TheIntersectorOfTheIntConicCurveOfGInter;
ref class OCGeom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter;
ref class OCgp_Lin2d;
ref class OCIntRes2d_Domain;
ref class OCgp_Circ2d;
ref class OCgp_Elips2d;
ref class OCgp_Parab2d;
ref class OCgp_Hypr2d;



public ref class OCGeom2dInt_TheIntConicCurveOfGInter  : public OCIntRes2d_Intersection {

protected:
  // dummy constructor;
  OCGeom2dInt_TheIntConicCurveOfGInter(OCDummy^) : OCIntRes2d_Intersection((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2dInt_TheIntConicCurveOfGInter(Geom2dInt_TheIntConicCurveOfGInter* nativeHandle);

// Methods PUBLIC


OCGeom2dInt_TheIntConicCurveOfGInter();


OCGeom2dInt_TheIntConicCurveOfGInter(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol);


OCGeom2dInt_TheIntConicCurveOfGInter(OCNaroWrappers::OCgp_Circ2d^ C, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol);


OCGeom2dInt_TheIntConicCurveOfGInter(OCNaroWrappers::OCgp_Elips2d^ E, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol);


OCGeom2dInt_TheIntConicCurveOfGInter(OCNaroWrappers::OCgp_Parab2d^ Prb, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol);


OCGeom2dInt_TheIntConicCurveOfGInter(OCNaroWrappers::OCgp_Hypr2d^ H, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol);


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Circ2d^ C, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Elips2d^ E, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Parab2d^ Prb, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Hypr2d^ H, OCNaroWrappers::OCIntRes2d_Domain^ D1, OCNaroWrappers::OCAdaptor2d_Curve2d^ PCurve, OCNaroWrappers::OCIntRes2d_Domain^ D2, Standard_Real TolConf, Standard_Real Tol) ;

~OCGeom2dInt_TheIntConicCurveOfGInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
