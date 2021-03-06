// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_FacesIntersector_OCWrappers_HeaderFile
#define _TopOpeBRep_FacesIntersector_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_FacesIntersector.hxx>
#include "../Converter.h"


#include "../IntPatch/IntPatch_Intersection.h"
#include "TopOpeBRep_LineInter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../GeomAbs/GeomAbs_SurfaceType.h"
#include "../TopTools/TopTools_IndexedMapOfShape.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRep_HArray1OfLineInter;
ref class OCBRepAdaptor_HSurface;
ref class OCBRepTopAdaptor_TopolTool;
ref class OCTopoDS_Shape;
ref class OCBnd_Box;
ref class OCTopTools_IndexedMapOfShape;
ref class OCTopOpeBRep_LineInter;



public ref class OCTopOpeBRep_FacesIntersector  {

protected:
  TopOpeBRep_FacesIntersector* nativeHandle;
  OCTopOpeBRep_FacesIntersector(OCDummy^) {};

public:
  property TopOpeBRep_FacesIntersector* Handle
  {
    TopOpeBRep_FacesIntersector* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_FacesIntersector(TopOpeBRep_FacesIntersector* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_FacesIntersector();

//! Computes the intersection of faces S1 and S2. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) ;

//! Computes the intersection of faces S1 and S2. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBnd_Box^ B1, OCNaroWrappers::OCBnd_Box^ B2) ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  System::Boolean IsDone() ;

//! Returns True if Perform() arguments are two faces with the <br>
//!          same surface. <br>
 /*instead*/  System::Boolean SameDomain() ;

//! returns first or second intersected face. <br>
 /*instead*/  OCTopoDS_Shape^ Face(Standard_Integer Index) ;

//! Returns True if Perform() arguments are two faces <br>
//!          SameDomain() and normals on both side. <br>
//!          Raise if SameDomain is False <br>
 /*instead*/  System::Boolean SurfacesSameOriented() ;

//! returns true if edge <E> is found as same as the edge <br>
//!          associated with a RESTRICTION line. <br>
 /*instead*/  System::Boolean IsRestriction(OCNaroWrappers::OCTopoDS_Shape^ E) ;

//! returns the map of edges found as TopeBRepBRep_RESTRICTION <br>
 /*instead*/  OCTopTools_IndexedMapOfShape^ Restrictions() ;


 /*instead*/  void PrepareLines() ;


 /*instead*/  OCTopOpeBRep_HArray1OfLineInter^ Lines() ;


 /*instead*/  Standard_Integer NbLines() ;


 /*instead*/  void InitLine() ;


 /*instead*/  System::Boolean MoreLine() ;


 /*instead*/  void NextLine() ;


 /*instead*/  OCTopOpeBRep_LineInter^ CurrentLine() ;


 /*instead*/  Standard_Integer CurrentLineIndex() ;


 /*instead*/  OCTopOpeBRep_LineInter^ ChangeLine(Standard_Integer IL) ;


//! Force the tolerance values used by the next Perform(S1,S2) call. <br>
 /*instead*/  void ForceTolerances(Standard_Real tolarc, Standard_Real toltang) ;


//! Return the tolerance values used in the last Perform() call <br>
//! If ForceTolerances() has been called, return the given values. <br>
//! If not, return values extracted from shapes. <br>
 /*instead*/  void GetTolerances(Standard_Real& tolarc, Standard_Real& toltang) ;

~OCTopOpeBRep_FacesIntersector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
