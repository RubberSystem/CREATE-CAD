// File generated by CPPExt (CPP file)
//

#include "GCPnts_AbscissaPoint.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"


using namespace OCNaroWrappers;

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(GCPnts_AbscissaPoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor3d_Curve^ C)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor3d_Curve*)C->Handle));
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor2d_Curve2d^ C)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor2d_Curve2d*)C->Handle));
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Tol)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor3d_Curve*)C->Handle), Tol);
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Tol)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor2d_Curve2d*)C->Handle), Tol);
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real U1, Standard_Real U2)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor3d_Curve*)C->Handle), U1, U2);
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real U1, Standard_Real U2)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor2d_Curve2d*)C->Handle), U1, U2);
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real U1, Standard_Real U2, Standard_Real Tol)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor3d_Curve*)C->Handle), U1, U2, Tol);
}

 Standard_Real OCGCPnts_AbscissaPoint::Length(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real U1, Standard_Real U2, Standard_Real Tol)
{
  return GCPnts_AbscissaPoint::Length(*((Adaptor2d_Curve2d*)C->Handle), U1, U2, Tol);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint() 
{
  nativeHandle = new GCPnts_AbscissaPoint();
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Abscissa, Standard_Real U0) 
{
  nativeHandle = new GCPnts_AbscissaPoint(*((Adaptor3d_Curve*)C->Handle), Abscissa, U0);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Abscissa, Standard_Real U0) 
{
  nativeHandle = new GCPnts_AbscissaPoint(Tol, *((Adaptor3d_Curve*)C->Handle), Abscissa, U0);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Abscissa, Standard_Real U0) 
{
  nativeHandle = new GCPnts_AbscissaPoint(Tol, *((Adaptor2d_Curve2d*)C->Handle), Abscissa, U0);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Abscissa, Standard_Real U0) 
{
  nativeHandle = new GCPnts_AbscissaPoint(*((Adaptor2d_Curve2d*)C->Handle), Abscissa, U0);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Abscissa, Standard_Real U0, Standard_Real Ui) 
{
  nativeHandle = new GCPnts_AbscissaPoint(*((Adaptor3d_Curve*)C->Handle), Abscissa, U0, Ui);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Abscissa, Standard_Real U0, Standard_Real Ui) 
{
  nativeHandle = new GCPnts_AbscissaPoint(*((Adaptor2d_Curve2d*)C->Handle), Abscissa, U0, Ui);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Abscissa, Standard_Real U0, Standard_Real Ui, Standard_Real Tol) 
{
  nativeHandle = new GCPnts_AbscissaPoint(*((Adaptor3d_Curve*)C->Handle), Abscissa, U0, Ui, Tol);
}

OCGCPnts_AbscissaPoint::OCGCPnts_AbscissaPoint(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Abscissa, Standard_Real U0, Standard_Real Ui, Standard_Real Tol) 
{
  nativeHandle = new GCPnts_AbscissaPoint(*((Adaptor2d_Curve2d*)C->Handle), Abscissa, U0, Ui, Tol);
}

 System::Boolean OCGCPnts_AbscissaPoint::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((GCPnts_AbscissaPoint*)nativeHandle)->IsDone());
}

 Standard_Real OCGCPnts_AbscissaPoint::Parameter()
{
  return ((GCPnts_AbscissaPoint*)nativeHandle)->Parameter();
}


