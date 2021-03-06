// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_Tools2D_OCWrappers_HeaderFile
#define _BOPTools_Tools2D_OCWrappers_HeaderFile

// include native header
#include <BOPTools_Tools2D.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopoDS_Edge;
ref class OCTopoDS_Face;
ref class OCgp_Vec;
ref class OCGeom2d_Curve;
ref class OCGeom_Curve;
ref class OCProjLib_ProjectedCurve;
ref class OCgp_Dir;
ref class OCTopoDS_Vertex;



//!  The class contains handy static functions <br>
//!  dealing with the topology <br>
public ref class OCBOPTools_Tools2D  {

protected:
  BOPTools_Tools2D* nativeHandle;
  OCBOPTools_Tools2D(OCDummy^) {};

public:
  property BOPTools_Tools2D* Handle
  {
    BOPTools_Tools2D* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_Tools2D(BOPTools_Tools2D* nativeHandle);

// Methods PUBLIC


//! Remove P-Curve of the edge <aE> on the face <aF> <br>
static /*instead*/  void RemovePCurveForEdgeOnFace(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF) ;


//! Compute P-Curve for the edge <aE> on the face <aF> <br>
static /*instead*/  void BuildPCurveForEdgeOnFace(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF) ;


//! Compute tangent for the edge  <aE> [in 3D]  at parameter <aT> <br>
static /*instead*/  System::Boolean EdgeTangent(OCNaroWrappers::OCTopoDS_Edge^ anE, Standard_Real aT, OCNaroWrappers::OCgp_Vec^ Tau) ;


//! Compute normal for the face <aF> at parameters <U,V> <br>
//! of the corresp. surface. <br>
static /*instead*/  void FaceNormal(OCNaroWrappers::OCTopoDS_Face^ aF, Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Vec^ aN) ;


//! Compute surface parameters <U,V> of the face <aF> <br>
//! for  the point from the edge <aE> at parameter <aT>. <br>
static /*instead*/  void PointOnSurface(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF, Standard_Real aT, Standard_Real& U, Standard_Real& V) ;


//! Get P-Curve <aC>  for the edge <aE> on surface <aF> . <br>
//! If the P-Curve does not exist, build  it using Make2D(). <br>
//! [aToler] - reached tolerance <br>
//! [aTrim3d] - trimming flag. <br>
static /*instead*/  void CurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aToler, System::Boolean aTrim3d) ;


//! Get P-Curve <aC>  for the edge <aE> on surface <aF> . <br>
//! If the P-Curve does not exist, build  it using Make2D(). <br>
//! [aFirst, aLast] - range of the P-Curve <br>
//! [aToler] - reached tolerance <br>
//! [aTrim3d] - trimming flag. <br>
static /*instead*/  void CurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler, System::Boolean aTrim3d) ;


//! Returns TRUE if the edge <aE>  has  P-Curve <aC> <br>
//! on surface <aF> . <br>
//! [aFirst, aLast] - range of the P-Curve <br>
//! [aToler] - reached tolerance <br>
//! If the P-Curve does not exist, aC.IsNull()=TRUE. <br>
static /*instead*/  System::Boolean HasCurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler) ;


//! Returns TRUE if the edge <aE>  has  P-Curve <aC> <br>
//! on surface <aF> . <br>
//! If the P-Curve does not exist, aC.IsNull()=TRUE. <br>
static /*instead*/  System::Boolean HasCurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF) ;


//! Same  as   Make2D() <br>
static /*instead*/  void MakeCurveOnSurface(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler, System::Boolean aTrim3d) ;


//! Make P-Curve <aC> for the edge <aE> on surface <aF> . <br>
//! [aFirst, aLast] - range of the P-Curve <br>
//! [aToler] - reached tolerance <br>
//! [aTrim3d] - trimming flag. <br>
static /*instead*/  void Make2D(OCNaroWrappers::OCTopoDS_Edge^ aE, OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler, System::Boolean aTrim3d) ;


//! Make P-Curve <aC> for the 3D-curve <C3D> on surface <aF> . <br>
//! [aToler] - reached tolerance <br>
static /*instead*/  void MakePCurveOnFace(OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom_Curve^ C3D, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aToler) ;


//! Make P-Curve <aC> for the 3D-curve <C3D> on surface <aF> . <br>
//! [aT1,  aT2] - range to build <br>
//! [aToler] - reached tolerance <br>
static /*instead*/  void MakePCurveOnFace(OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom_Curve^ C3D, Standard_Real aT1, Standard_Real aT2, OCNaroWrappers::OCGeom2d_Curve^ aC, Standard_Real& aToler) ;


//! Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> . <br>
static /*instead*/  void AdjustPCurveOnFace(OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCGeom_Curve^ C3D, OCNaroWrappers::OCGeom2d_Curve^ aC2D, OCNaroWrappers::OCGeom2d_Curve^ aC2DA) ;


//! Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> . <br>
//! [aT1,  aT2] - range to adjust <br>
static /*instead*/  void AdjustPCurveOnFace(OCNaroWrappers::OCTopoDS_Face^ aF, Standard_Real aT1, Standard_Real aT2, OCNaroWrappers::OCGeom2d_Curve^ aC2D, OCNaroWrappers::OCGeom2d_Curve^ aC2DA) ;


//! Make empty  P-Curve <aC> of relevant to <PC> type <br>
static /*instead*/  void MakePCurveOfType(OCNaroWrappers::OCProjLib_ProjectedCurve^ PC, OCNaroWrappers::OCGeom2d_Curve^ aC) ;


//! Compute tangent for the edge <anE> at parameter <aParm> <br>
static /*instead*/  System::Boolean TangentOnEdge(Standard_Real aParm, OCNaroWrappers::OCTopoDS_Edge^ anE, OCNaroWrappers::OCgp_Vec^ aTang) ;


//! Compute tangent for the edge <anE> at arbitrary intermediate parameter. <br>
static /*instead*/  System::Boolean TangentOnEdge(OCNaroWrappers::OCTopoDS_Edge^ anE, OCNaroWrappers::OCgp_Dir^ aDTang) ;


//! Compute tangent for the vertex point <aVF> for the edge <anE>. <br>
//! <aVL> is opposite vertex of the edge <br>
static /*instead*/  System::Boolean TangentOnVertex(OCNaroWrappers::OCTopoDS_Vertex^ aVF, OCNaroWrappers::OCTopoDS_Vertex^ aVL, OCNaroWrappers::OCTopoDS_Edge^ anE, OCNaroWrappers::OCgp_Vec^ aTang) ;


//! Returns parametric range for the edge <anE>. <br>
static /*instead*/  void EdgeBounds(OCNaroWrappers::OCTopoDS_Edge^ anE, Standard_Real& aFirst, Standard_Real& aLast) ;


//! Compute intermediate  value in  between [aFirst, aLast] . <br>
static /*instead*/  Standard_Real IntermediatePoint(Standard_Real aFirst, Standard_Real aLast) ;


//! Compute intermediate value of parameter for the edge <anE>. <br>
static /*instead*/  Standard_Real IntermediatePoint(OCNaroWrappers::OCTopoDS_Edge^ anE) ;

~OCBOPTools_Tools2D()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
