// File generated by CPPExt (CPP file)
//

#include "IntCurveSurface_TheInterferenceOfHInter.h"
#include "../Converter.h"
#include "IntCurveSurface_ThePolygonOfHInter.h"
#include "IntCurveSurface_ThePolygonToolOfHInter.h"
#include "IntCurveSurface_ThePolyhedronOfHInter.h"
#include "IntCurveSurface_ThePolyhedronToolOfHInter.h"
#include "../gp/gp_Lin.h"
#include "../Intf/Intf_Array1OfLin.h"
#include "../Bnd/Bnd_BoundSortBox.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_XYZ.h"


using namespace OCNaroWrappers;

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(IntCurveSurface_TheInterferenceOfHInter* nativeHandle) : OCIntf_Interference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter() : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter();
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter(*((IntCurveSurface_ThePolygonOfHInter*)thePolyg->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter(*((gp_Lin*)theLin->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter(*((Intf_Array1OfLin*)theLins->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Perform(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Perform(*((IntCurveSurface_ThePolygonOfHInter*)thePolyg->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Perform(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Perform(*((gp_Lin*)theLin->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Perform(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Perform(*((Intf_Array1OfLin*)theLins->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter(*((IntCurveSurface_ThePolygonOfHInter*)thePolyg->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter(*((gp_Lin*)theLin->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

OCIntCurveSurface_TheInterferenceOfHInter::OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntCurveSurface_TheInterferenceOfHInter(*((Intf_Array1OfLin*)theLins->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Perform(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Perform(*((IntCurveSurface_ThePolygonOfHInter*)thePolyg->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Perform(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Perform(*((gp_Lin*)theLin->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Perform(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Perform(*((Intf_Array1OfLin*)theLins->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Interference(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Interference(*((IntCurveSurface_ThePolygonOfHInter*)thePolyg->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle), *((Bnd_BoundSortBox*)theBoundSB->Handle));
}

 void OCIntCurveSurface_TheInterferenceOfHInter::Interference(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh)
{
  ((IntCurveSurface_TheInterferenceOfHInter*)nativeHandle)->Interference(*((IntCurveSurface_ThePolygonOfHInter*)thePolyg->Handle), *((IntCurveSurface_ThePolyhedronOfHInter*)thePolyh->Handle));
}


