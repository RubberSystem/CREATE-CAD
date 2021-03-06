// File generated by CPPExt (MPV)
//
#ifndef _GeomLib_DenominatorMultiplier_OCWrappers_HeaderFile
#define _GeomLib_DenominatorMultiplier_OCWrappers_HeaderFile

// include native header
#include <GeomLib_DenominatorMultiplier.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_Array1OfReal.h"


namespace OCNaroWrappers
{

ref class OCGeom_BSplineSurface;
ref class OCTColStd_Array1OfReal;


//! this class is used to  construct the BSpline curve <br>
//!          from an Approximation ( ApproxAFunction from AdvApprox). <br>
public ref class OCGeomLib_DenominatorMultiplier  {

protected:
  GeomLib_DenominatorMultiplier* nativeHandle;
  OCGeomLib_DenominatorMultiplier(OCDummy^) {};

public:
  property GeomLib_DenominatorMultiplier* Handle
  {
    GeomLib_DenominatorMultiplier* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomLib_DenominatorMultiplier(GeomLib_DenominatorMultiplier* nativeHandle);

// Methods PUBLIC

//! if the surface is rational this will define the evaluator <br>
//!          of a real function of 2 variables a(u,v) such that <br>
//!          if we define a new surface by : <br>
//!                       a(u,v) * N(u,v) <br>
//!          NewF(u,v) = ---------------- <br>
//!                       a(u,v) * D(u,v) <br>
OCGeomLib_DenominatorMultiplier(OCNaroWrappers::OCGeom_BSplineSurface^ Surface, OCNaroWrappers::OCTColStd_Array1OfReal^ KnotVector);

//! Returns the value of <br>
//!          a(UParameter,VParameter)= <br>
//! <br>
//!            H0(UParameter)/Denominator(Umin,Vparameter) <br>
//! <br>
//!            D Denominator(Umin,Vparameter) <br>
//!          - ------------------------------[H1(u)]/(Denominator(Umin,Vparameter)^2) <br>
//!            D U <br>
//! <br>
//!          + H3(UParameter)/Denominator(Umax,Vparameter) <br>
//! <br>
//!            D Denominator(Umax,Vparameter) <br>
//!          - ------------------------------[H2(u)]/(Denominator(Umax,Vparameter)^2) <br>
//!            D U <br>
 /*instead*/  Standard_Real Value(Standard_Real UParameter, Standard_Real VParameter) ;

~OCGeomLib_DenominatorMultiplier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
