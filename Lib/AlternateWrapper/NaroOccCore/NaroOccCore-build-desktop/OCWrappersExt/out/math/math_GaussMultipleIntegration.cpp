// File generated by CPPExt (CPP file)
//

#include "math_GaussMultipleIntegration.h"
#include "../Converter.h"
#include "math_MultipleVarFunction.h"
#include "math_Vector.h"
#include "math_IntegerVector.h"


using namespace OCNaroWrappers;

OCmath_GaussMultipleIntegration::OCmath_GaussMultipleIntegration(math_GaussMultipleIntegration* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_GaussMultipleIntegration::OCmath_GaussMultipleIntegration(OCNaroWrappers::OCmath_MultipleVarFunction^ F, OCNaroWrappers::OCmath_Vector^ Lower, OCNaroWrappers::OCmath_Vector^ Upper, OCNaroWrappers::OCmath_IntegerVector^ Order) 
{
  nativeHandle = new math_GaussMultipleIntegration(*((math_MultipleVarFunction*)F->Handle), *((math_Vector*)Lower->Handle), *((math_Vector*)Upper->Handle), *((math_IntegerVector*)Order->Handle));
}

 System::Boolean OCmath_GaussMultipleIntegration::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((math_GaussMultipleIntegration*)nativeHandle)->IsDone());
}

 Standard_Real OCmath_GaussMultipleIntegration::Value()
{
  return ((math_GaussMultipleIntegration*)nativeHandle)->Value();
}

 void OCmath_GaussMultipleIntegration::Dump(Standard_OStream& o)
{
  ((math_GaussMultipleIntegration*)nativeHandle)->Dump(o);
}


