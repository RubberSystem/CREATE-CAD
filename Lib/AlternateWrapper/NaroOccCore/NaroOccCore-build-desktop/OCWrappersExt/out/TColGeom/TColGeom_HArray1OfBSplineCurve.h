// File generated by CPPExt (Transient)
//
#ifndef _TColGeom_HArray1OfBSplineCurve_OCWrappers_HeaderFile
#define _TColGeom_HArray1OfBSplineCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <TColGeom_HArray1OfBSplineCurve.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColGeom_Array1OfBSplineCurve.h"


namespace OCNaroWrappers
{

ref class OCGeom_BSplineCurve;
ref class OCTColGeom_Array1OfBSplineCurve;



public ref class OCTColGeom_HArray1OfBSplineCurve : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColGeom_HArray1OfBSplineCurve(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColGeom_HArray1OfBSplineCurve(Handle(TColGeom_HArray1OfBSplineCurve)* nativeHandle);

// Methods PUBLIC


OCTColGeom_HArray1OfBSplineCurve(Standard_Integer Low, Standard_Integer Up);


OCTColGeom_HArray1OfBSplineCurve(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCGeom_BSplineCurve^ V);


 /*instead*/  void Init(OCNaroWrappers::OCGeom_BSplineCurve^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_BSplineCurve^ Value) ;


 /*instead*/  OCGeom_BSplineCurve^ Value(Standard_Integer Index) ;


 /*instead*/  OCGeom_BSplineCurve^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCTColGeom_Array1OfBSplineCurve^ Array1() ;


 /*instead*/  OCTColGeom_Array1OfBSplineCurve^ ChangeArray1() ;

~OCTColGeom_HArray1OfBSplineCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
