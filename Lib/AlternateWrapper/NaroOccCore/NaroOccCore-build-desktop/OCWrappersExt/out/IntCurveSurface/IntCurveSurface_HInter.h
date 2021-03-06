// File generated by CPPExt (MPV)
//
#ifndef _IntCurveSurface_HInter_OCWrappers_HeaderFile
#define _IntCurveSurface_HInter_OCWrappers_HeaderFile

// include native header
#include <IntCurveSurface_HInter.hxx>
#include "../Converter.h"

#include "IntCurveSurface_Intersection.h"

#include "IntCurveSurface_Intersection.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurve;
ref class OCIntCurveSurface_TheHCurveTool;
ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HSurfaceTool;
ref class OCIntCurveSurface_ThePolygonOfHInter;
ref class OCIntCurveSurface_ThePolygonToolOfHInter;
ref class OCIntCurveSurface_ThePolyhedronOfHInter;
ref class OCIntCurveSurface_ThePolyhedronToolOfHInter;
ref class OCIntCurveSurface_TheInterferenceOfHInter;
ref class OCIntCurveSurface_TheCSFunctionOfHInter;
ref class OCIntCurveSurface_TheExactHInter;
ref class OCIntCurveSurface_TheQuadCurvExactHInter;
ref class OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter;
ref class OCBnd_BoundSortBox;
ref class OCgp_Lin;
ref class OCgp_Circ;
ref class OCgp_Elips;
ref class OCgp_Parab;
ref class OCgp_Hypr;
ref class OCIntAna_IntConicQuad;
ref class OCTColgp_Array2OfPnt;
ref class OCBnd_Box;
ref class OCTColStd_Array1OfReal;



public ref class OCIntCurveSurface_HInter  : public OCIntCurveSurface_Intersection {

protected:
  // dummy constructor;
  OCIntCurveSurface_HInter(OCDummy^) : OCIntCurveSurface_Intersection((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntCurveSurface_HInter(IntCurveSurface_HInter* nativeHandle);

// Methods PUBLIC


OCIntCurveSurface_HInter();


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCAdaptor3d_HSurface^ Surface) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ Polygon, OCNaroWrappers::OCAdaptor3d_HSurface^ Surface) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ ThePolygon, OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ Polyhedron) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ ThePolygon, OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ Polyhedron, OCNaroWrappers::OCBnd_BoundSortBox^ BndBSB) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ Polyhedron) ;

~OCIntCurveSurface_HInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
