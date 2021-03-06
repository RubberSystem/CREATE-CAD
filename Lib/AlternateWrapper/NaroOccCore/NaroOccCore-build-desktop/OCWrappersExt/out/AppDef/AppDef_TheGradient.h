// File generated by CPPExt (MPV)
//
#ifndef _AppDef_TheGradient_OCWrappers_HeaderFile
#define _AppDef_TheGradient_OCWrappers_HeaderFile

// include native header
#include <AppDef_TheGradient.hxx>
#include "../Converter.h"


#include "../AppParCurves/AppParCurves_MultiCurve.h"
#include "../math/math_Vector.h"


namespace OCNaroWrappers
{

ref class OCAppDef_MultiLine;
ref class OCAppDef_MyLineTool;
ref class OCAppDef_ParLeastSquareOfTheGradient;
ref class OCAppDef_ResConstraintOfTheGradient;
ref class OCAppDef_ParFunctionOfTheGradient;
ref class OCAppDef_Gradient_BFGSOfTheGradient;
ref class OCAppParCurves_HArray1OfConstraintCouple;
ref class OCmath_Vector;
ref class OCAppParCurves_MultiCurve;



public ref class OCAppDef_TheGradient  {

protected:
  AppDef_TheGradient* nativeHandle;
  OCAppDef_TheGradient(OCDummy^) {};

public:
  property AppDef_TheGradient* Handle
  {
    AppDef_TheGradient* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAppDef_TheGradient(AppDef_TheGradient* nativeHandle);

// Methods PUBLIC


OCAppDef_TheGradient(OCNaroWrappers::OCAppDef_MultiLine^ SSP, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Integer Deg, Standard_Real Tol3d, Standard_Real Tol2d, Standard_Integer NbIterations);


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  OCAppParCurves_MultiCurve^ Value() ;


 /*instead*/  Standard_Real Error(Standard_Integer Index) ;


 /*instead*/  Standard_Real MaxError3d() ;


 /*instead*/  Standard_Real MaxError2d() ;


 /*instead*/  Standard_Real AverageError() ;

~OCAppDef_TheGradient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
