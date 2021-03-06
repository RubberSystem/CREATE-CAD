// File generated by CPPExt (CPP file)
//

#include "AdvApprox_PrefCutting.h"
#include "../Converter.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCAdvApprox_PrefCutting::OCAdvApprox_PrefCutting(AdvApprox_PrefCutting* nativeHandle) : OCAdvApprox_Cutting((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAdvApprox_PrefCutting::OCAdvApprox_PrefCutting(OCNaroWrappers::OCTColStd_Array1OfReal^ CutPnts) : OCAdvApprox_Cutting((OCDummy^)nullptr)

{
  nativeHandle = new AdvApprox_PrefCutting(*((TColStd_Array1OfReal*)CutPnts->Handle));
}

 System::Boolean OCAdvApprox_PrefCutting::Value(Standard_Real a, Standard_Real b, Standard_Real& cuttingvalue)
{
  return OCConverter::StandardBooleanToBoolean(((AdvApprox_PrefCutting*)nativeHandle)->Value(a, b, cuttingvalue));
}


