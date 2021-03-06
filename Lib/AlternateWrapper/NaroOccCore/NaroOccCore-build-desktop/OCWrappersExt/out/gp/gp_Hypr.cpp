// File generated by CPPExt (CPP file)
//

#include "gp_Hypr.h"
#include "../Converter.h"
#include "gp_Ax2.h"
#include "gp_Ax1.h"
#include "gp_Pnt.h"
#include "gp_Trsf.h"
#include "gp_Vec.h"


using namespace OCNaroWrappers;

OCgp_Hypr::OCgp_Hypr(gp_Hypr* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Hypr::OCgp_Hypr() 
{
  nativeHandle = new gp_Hypr();
}

OCgp_Hypr::OCgp_Hypr(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real MajorRadius, Standard_Real MinorRadius) 
{
  nativeHandle = new gp_Hypr(*((gp_Ax2*)A2->Handle), MajorRadius, MinorRadius);
}

 void OCgp_Hypr::SetAxis(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Hypr*)nativeHandle)->SetAxis(*((gp_Ax1*)A1->Handle));
}

 void OCgp_Hypr::SetLocation(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Hypr*)nativeHandle)->SetLocation(*((gp_Pnt*)P->Handle));
}

 void OCgp_Hypr::SetMajorRadius(Standard_Real MajorRadius)
{
  ((gp_Hypr*)nativeHandle)->SetMajorRadius(MajorRadius);
}

 void OCgp_Hypr::SetMinorRadius(Standard_Real MinorRadius)
{
  ((gp_Hypr*)nativeHandle)->SetMinorRadius(MinorRadius);
}

 void OCgp_Hypr::SetPosition(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Hypr*)nativeHandle)->SetPosition(*((gp_Ax2*)A2->Handle));
}

OCgp_Ax1^ OCgp_Hypr::Asymptote1()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->Asymptote1();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCgp_Hypr::Asymptote2()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->Asymptote2();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCgp_Hypr::Axis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->Axis();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Hypr^ OCgp_Hypr::ConjugateBranch1()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->ConjugateBranch1();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Hypr^ OCgp_Hypr::ConjugateBranch2()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->ConjugateBranch2();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Ax1^ OCgp_Hypr::Directrix1()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->Directrix1();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCgp_Hypr::Directrix2()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->Directrix2();
  return gcnew OCgp_Ax1(tmp);
}

 Standard_Real OCgp_Hypr::Eccentricity()
{
  return ((gp_Hypr*)nativeHandle)->Eccentricity();
}

 Standard_Real OCgp_Hypr::Focal()
{
  return ((gp_Hypr*)nativeHandle)->Focal();
}

OCgp_Pnt^ OCgp_Hypr::Focus1()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Hypr*)nativeHandle)->Focus1();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCgp_Hypr::Focus2()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Hypr*)nativeHandle)->Focus2();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCgp_Hypr::Location()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Hypr*)nativeHandle)->Location();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCgp_Hypr::MajorRadius()
{
  return ((gp_Hypr*)nativeHandle)->MajorRadius();
}

 Standard_Real OCgp_Hypr::MinorRadius()
{
  return ((gp_Hypr*)nativeHandle)->MinorRadius();
}

OCgp_Hypr^ OCgp_Hypr::OtherBranch()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->OtherBranch();
  return gcnew OCgp_Hypr(tmp);
}

 Standard_Real OCgp_Hypr::Parameter()
{
  return ((gp_Hypr*)nativeHandle)->Parameter();
}

OCgp_Ax2^ OCgp_Hypr::Position()
{
  gp_Ax2* tmp = new gp_Ax2();
  *tmp = ((gp_Hypr*)nativeHandle)->Position();
  return gcnew OCgp_Ax2(tmp);
}

OCgp_Ax1^ OCgp_Hypr::XAxis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->XAxis();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCgp_Hypr::YAxis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Hypr*)nativeHandle)->YAxis();
  return gcnew OCgp_Ax1(tmp);
}

 void OCgp_Hypr::Mirror(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Hypr*)nativeHandle)->Mirror(*((gp_Pnt*)P->Handle));
}

OCgp_Hypr^ OCgp_Hypr::Mirrored(OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Mirrored(*((gp_Pnt*)P->Handle));
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Mirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Hypr*)nativeHandle)->Mirror(*((gp_Ax1*)A1->Handle));
}

OCgp_Hypr^ OCgp_Hypr::Mirrored(OCNaroWrappers::OCgp_Ax1^ A1)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Mirrored(*((gp_Ax1*)A1->Handle));
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Mirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Hypr*)nativeHandle)->Mirror(*((gp_Ax2*)A2->Handle));
}

OCgp_Hypr^ OCgp_Hypr::Mirrored(OCNaroWrappers::OCgp_Ax2^ A2)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Mirrored(*((gp_Ax2*)A2->Handle));
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Hypr*)nativeHandle)->Rotate(*((gp_Ax1*)A1->Handle), Ang);
}

OCgp_Hypr^ OCgp_Hypr::Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Rotated(*((gp_Ax1*)A1->Handle), Ang);
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  ((gp_Hypr*)nativeHandle)->Scale(*((gp_Pnt*)P->Handle), S);
}

OCgp_Hypr^ OCgp_Hypr::Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Scaled(*((gp_Pnt*)P->Handle), S);
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Hypr*)nativeHandle)->Transform(*((gp_Trsf*)T->Handle));
}

OCgp_Hypr^ OCgp_Hypr::Transformed(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Transformed(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Translate(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Hypr*)nativeHandle)->Translate(*((gp_Vec*)V->Handle));
}

OCgp_Hypr^ OCgp_Hypr::Translated(OCNaroWrappers::OCgp_Vec^ V)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Translated(*((gp_Vec*)V->Handle));
  return gcnew OCgp_Hypr(tmp);
}

 void OCgp_Hypr::Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((gp_Hypr*)nativeHandle)->Translate(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCgp_Hypr^ OCgp_Hypr::Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gp_Hypr*)nativeHandle)->Translated(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
  return gcnew OCgp_Hypr(tmp);
}


