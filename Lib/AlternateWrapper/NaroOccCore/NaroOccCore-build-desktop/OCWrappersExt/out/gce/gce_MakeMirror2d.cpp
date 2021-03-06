// File generated by CPPExt (CPP file)
//

#include "gce_MakeMirror2d.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Ax2d.h"
#include "../gp/gp_Lin2d.h"
#include "../gp/gp_Dir2d.h"
#include "../gp/gp_Trsf2d.h"


using namespace OCNaroWrappers;

OCgce_MakeMirror2d::OCgce_MakeMirror2d(gce_MakeMirror2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgce_MakeMirror2d::OCgce_MakeMirror2d(OCNaroWrappers::OCgp_Pnt2d^ Point) 
{
  nativeHandle = new gce_MakeMirror2d(*((gp_Pnt2d*)Point->Handle));
}

OCgce_MakeMirror2d::OCgce_MakeMirror2d(OCNaroWrappers::OCgp_Ax2d^ Axis) 
{
  nativeHandle = new gce_MakeMirror2d(*((gp_Ax2d*)Axis->Handle));
}

OCgce_MakeMirror2d::OCgce_MakeMirror2d(OCNaroWrappers::OCgp_Lin2d^ Line) 
{
  nativeHandle = new gce_MakeMirror2d(*((gp_Lin2d*)Line->Handle));
}

OCgce_MakeMirror2d::OCgce_MakeMirror2d(OCNaroWrappers::OCgp_Pnt2d^ Point, OCNaroWrappers::OCgp_Dir2d^ Direc) 
{
  nativeHandle = new gce_MakeMirror2d(*((gp_Pnt2d*)Point->Handle), *((gp_Dir2d*)Direc->Handle));
}

OCgp_Trsf2d^ OCgce_MakeMirror2d::Value()
{
  gp_Trsf2d* tmp = new gp_Trsf2d();
  *tmp = ((gce_MakeMirror2d*)nativeHandle)->Value();
  return gcnew OCgp_Trsf2d(tmp);
}

OCgp_Trsf2d^ OCgce_MakeMirror2d::Operator()
{
  gp_Trsf2d* tmp = new gp_Trsf2d();
  *tmp = ((gce_MakeMirror2d*)nativeHandle)->Operator();
  return gcnew OCgp_Trsf2d(tmp);
}


