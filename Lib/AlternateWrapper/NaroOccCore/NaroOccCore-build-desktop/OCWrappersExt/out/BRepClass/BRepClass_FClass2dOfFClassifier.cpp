// File generated by CPPExt (CPP file)
//

#include "BRepClass_FClass2dOfFClassifier.h"
#include "../Converter.h"
#include "BRepClass_Edge.h"
#include "BRepClass_Intersector.h"
#include "../gp/gp_Lin2d.h"


using namespace OCNaroWrappers;

OCBRepClass_FClass2dOfFClassifier::OCBRepClass_FClass2dOfFClassifier(BRepClass_FClass2dOfFClassifier* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepClass_FClass2dOfFClassifier::OCBRepClass_FClass2dOfFClassifier() 
{
  nativeHandle = new BRepClass_FClass2dOfFClassifier();
}

 void OCBRepClass_FClass2dOfFClassifier::Reset(OCNaroWrappers::OCgp_Lin2d^ L, Standard_Real P, Standard_Real Tol)
{
  ((BRepClass_FClass2dOfFClassifier*)nativeHandle)->Reset(*((gp_Lin2d*)L->Handle), P, Tol);
}

 void OCBRepClass_FClass2dOfFClassifier::Compare(OCNaroWrappers::OCBRepClass_Edge^ E, OCTopAbs_Orientation Or)
{
  ((BRepClass_FClass2dOfFClassifier*)nativeHandle)->Compare(*((BRepClass_Edge*)E->Handle), (TopAbs_Orientation)Or);
}

 Standard_Real OCBRepClass_FClass2dOfFClassifier::Parameter()
{
  return ((BRepClass_FClass2dOfFClassifier*)nativeHandle)->Parameter();
}

OCBRepClass_Intersector^ OCBRepClass_FClass2dOfFClassifier::Intersector()
{
  BRepClass_Intersector* tmp = new BRepClass_Intersector();
  *tmp = ((BRepClass_FClass2dOfFClassifier*)nativeHandle)->Intersector();
  return gcnew OCBRepClass_Intersector(tmp);
}

 Standard_Integer OCBRepClass_FClass2dOfFClassifier::ClosestIntersection()
{
  return ((BRepClass_FClass2dOfFClassifier*)nativeHandle)->ClosestIntersection();
}

 OCTopAbs_State OCBRepClass_FClass2dOfFClassifier::State()
{
  return (OCTopAbs_State)(((BRepClass_FClass2dOfFClassifier*)nativeHandle)->State());
}

 System::Boolean OCBRepClass_FClass2dOfFClassifier::IsHeadOrEnd()
{
  return OCConverter::StandardBooleanToBoolean(((BRepClass_FClass2dOfFClassifier*)nativeHandle)->IsHeadOrEnd());
}

