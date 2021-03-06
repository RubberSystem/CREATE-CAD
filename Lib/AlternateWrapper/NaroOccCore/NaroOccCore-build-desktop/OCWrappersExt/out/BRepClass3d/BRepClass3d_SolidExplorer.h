// File generated by CPPExt (MPV)
//
#ifndef _BRepClass3d_SolidExplorer_OCWrappers_HeaderFile
#define _BRepClass3d_SolidExplorer_OCWrappers_HeaderFile

// include native header
#include <BRepClass3d_SolidExplorer.hxx>
#include "../Converter.h"


#include "../Bnd/Bnd_Box.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopExp/TopExp_Explorer.h"
#include "BRepClass3d_MapOfInter.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Pnt;
ref class OCTopoDS_Face;
ref class OCgp_Vec;
ref class OCBRepAdaptor_HSurface;
ref class OCTopoDS_Shell;
ref class OCgp_Lin;
ref class OCBnd_Box;
ref class OCIntCurvesFace_Intersector;


//! Provide an   exploration of a  BRep Shape   for the <br>
//!          classification. <br>
public ref class OCBRepClass3d_SolidExplorer  {

protected:
  BRepClass3d_SolidExplorer* nativeHandle;
  OCBRepClass3d_SolidExplorer(OCDummy^) {};

public:
  property BRepClass3d_SolidExplorer* Handle
  {
    BRepClass3d_SolidExplorer* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepClass3d_SolidExplorer(BRepClass3d_SolidExplorer* nativeHandle);

// Methods PUBLIC


OCBRepClass3d_SolidExplorer();

//! Raise if called. <br>
OCBRepClass3d_SolidExplorer(OCNaroWrappers::OCBRepClass3d_SolidExplorer^ Oth);


OCBRepClass3d_SolidExplorer(OCNaroWrappers::OCTopoDS_Shape^ S);


virtual /*instead*/  void Delete() ;


 /*instead*/  void InitShape(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Should return True if P outside of bounding vol. of the shape <br>
virtual /*instead*/  System::Boolean Reject(OCNaroWrappers::OCgp_Pnt^ P) ;

//! compute a point P in the face  F. Param is a Real in <br>
//!         ]0,1[ and   is  used to  initialise  the algorithm. For <br>
//!         different values , different points are returned. <br>
static /*instead*/  System::Boolean FindAPointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& Param) ;


static /*instead*/  System::Boolean FindAPointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& u, Standard_Real& v, Standard_Real& Param) ;


static /*instead*/  System::Boolean FindAPointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& u, Standard_Real& v, Standard_Real& Param, OCNaroWrappers::OCgp_Vec^ theVecD1U, OCNaroWrappers::OCgp_Vec^ theVecD1V) ;


static /*instead*/  System::Boolean FindAPointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& u, Standard_Real& v) ;


static /*instead*/  System::Boolean FindAPointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P) ;


static /*instead*/  System::Boolean FindAPointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real& u, Standard_Real& v) ;


 /*instead*/  System::Boolean PointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& u, Standard_Real& v, Standard_Real& Param, Standard_Integer& Index) ;


 /*instead*/  System::Boolean PointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& u, Standard_Real& v, Standard_Real& Param, Standard_Integer& Index, OCNaroWrappers::OCBRepAdaptor_HSurface^ surf, Standard_Real u1, Standard_Real v1, Standard_Real u2, Standard_Real v2) ;

//! <Index> gives point index  to  search from and returns <br>
//!          point index of succeseful search <br>
 /*instead*/  System::Boolean PointInTheFace(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& u, Standard_Real& v, Standard_Real& Param, Standard_Integer& Index, OCNaroWrappers::OCBRepAdaptor_HSurface^ surf, Standard_Real u1, Standard_Real v1, Standard_Real u2, Standard_Real v2, OCNaroWrappers::OCgp_Vec^ theVecD1U, OCNaroWrappers::OCgp_Vec^ theVecD1V) ;

//! Starts an exploration of the shells. <br>
 /*instead*/  void InitShell() ;

//! Returns True if there is a current shell. <br>
 /*instead*/  System::Boolean MoreShell() ;

//! Sets the explorer to the next shell. <br>
 /*instead*/  void NextShell() ;

//! Returns the current shell. <br>
 /*instead*/  OCTopoDS_Shell^ CurrentShell() ;

//! Returns True if the Shell is rejected. <br>
virtual /*instead*/  System::Boolean RejectShell(OCNaroWrappers::OCgp_Lin^ L) ;

//! Starts an exploration of the faces of the current shell. <br>
 /*instead*/  void InitFace() ;

//! Returns True if current face in current shell. <br>
 /*instead*/  System::Boolean MoreFace() ;

//! Sets the explorer to the next Face of the current shell. <br>
 /*instead*/  void NextFace() ;

//! Returns the current face. <br>
 /*instead*/  OCTopoDS_Face^ CurrentFace() ;

//! returns True if the face is rejected. <br>
virtual /*instead*/  System::Boolean RejectFace(OCNaroWrappers::OCgp_Lin^ L) ;

//! Returns  in <L>, <Par>  a segment having at least <br>
//!          one  intersection  with  the  shape  boundary  to <br>
//!          compute  intersections. <br>
//! <br>
 /*instead*/  Standard_Integer Segment(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Lin^ L, Standard_Real& Par) ;

//! Returns  in <L>, <Par>  a segment having at least <br>
//!          one  intersection  with  the  shape  boundary  to <br>
//!          compute  intersections. <br>
//! <br>
//!          The First Call to this method returns a line which <br>
//!          point to a point of the first face of the shape. <br>
//!          The Second Call provide a line to the second face <br>
//!          and so on. <br>
//! <br>
 /*instead*/  Standard_Integer OtherSegment(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Lin^ L, Standard_Real& Par) ;

//! Returns the index of face for which <br>
//!          last segment is calculated. <br>
 /*instead*/  Standard_Integer GetFaceSegmentIndex() ;


virtual /*instead*/  void DumpSegment(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Lin^ L, Standard_Real Par, OCTopAbs_State S) ;


 /*instead*/  OCBnd_Box^ Box() ;


 /*instead*/  OCIntCurvesFace_Intersector^ Intersector(OCNaroWrappers::OCTopoDS_Face^ F) ;


 /*instead*/  void Destroy() ;

~OCBRepClass3d_SolidExplorer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
