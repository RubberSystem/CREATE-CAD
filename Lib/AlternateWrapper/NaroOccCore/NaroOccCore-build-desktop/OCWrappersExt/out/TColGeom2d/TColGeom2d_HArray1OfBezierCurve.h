// File generated by CPPExt (Transient)
//
#ifndef _TColGeom2d_HArray1OfBezierCurve_OCWrappers_HeaderFile
#define _TColGeom2d_HArray1OfBezierCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <TColGeom2d_HArray1OfBezierCurve.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColGeom2d_Array1OfBezierCurve.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_BezierCurve;
ref class OCTColGeom2d_Array1OfBezierCurve;



public ref class OCTColGeom2d_HArray1OfBezierCurve : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColGeom2d_HArray1OfBezierCurve(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColGeom2d_HArray1OfBezierCurve(Handle(TColGeom2d_HArray1OfBezierCurve)* nativeHandle);

// Methods PUBLIC


OCTColGeom2d_HArray1OfBezierCurve(Standard_Integer Low, Standard_Integer Up);


OCTColGeom2d_HArray1OfBezierCurve(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCGeom2d_BezierCurve^ V);


 /*instead*/  void Init(OCNaroWrappers::OCGeom2d_BezierCurve^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom2d_BezierCurve^ Value) ;


 /*instead*/  OCGeom2d_BezierCurve^ Value(Standard_Integer Index) ;


 /*instead*/  OCGeom2d_BezierCurve^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCTColGeom2d_Array1OfBezierCurve^ Array1() ;


 /*instead*/  OCTColGeom2d_Array1OfBezierCurve^ ChangeArray1() ;

~OCTColGeom2d_HArray1OfBezierCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif