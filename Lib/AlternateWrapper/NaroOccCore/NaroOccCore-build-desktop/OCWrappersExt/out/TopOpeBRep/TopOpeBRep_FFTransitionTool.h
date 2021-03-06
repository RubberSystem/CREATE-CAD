// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_FFTransitionTool_OCWrappers_HeaderFile
#define _TopOpeBRep_FFTransitionTool_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_FFTransitionTool.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_Transition;
ref class OCTopOpeBRep_VPointInter;
ref class OCTopOpeBRep_LineInter;
ref class OCTopoDS_Shape;



public ref class OCTopOpeBRep_FFTransitionTool  {

protected:
  TopOpeBRep_FFTransitionTool* nativeHandle;
  OCTopOpeBRep_FFTransitionTool(OCDummy^) {};

public:
  property TopOpeBRep_FFTransitionTool* Handle
  {
    TopOpeBRep_FFTransitionTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_FFTransitionTool(TopOpeBRep_FFTransitionTool* nativeHandle);

// Methods PUBLIC


static /*instead*/  OCTopOpeBRepDS_Transition^ ProcessLineTransition(OCNaroWrappers::OCTopOpeBRep_VPointInter^ P, Standard_Integer Index, OCTopAbs_Orientation EdgeOrientation) ;


static /*instead*/  OCTopOpeBRepDS_Transition^ ProcessLineTransition(OCNaroWrappers::OCTopOpeBRep_VPointInter^ P, OCNaroWrappers::OCTopOpeBRep_LineInter^ L) ;


static /*instead*/  OCTopOpeBRepDS_Transition^ ProcessEdgeTransition(OCNaroWrappers::OCTopOpeBRep_VPointInter^ P, Standard_Integer Index, OCTopAbs_Orientation LineOrientation) ;


static /*instead*/  OCTopOpeBRepDS_Transition^ ProcessFaceTransition(OCNaroWrappers::OCTopOpeBRep_LineInter^ L, Standard_Integer Index, OCTopAbs_Orientation FaceOrientation) ;

//! compute transition on "IntPatch_Restriction line" edge <R> <br>
//! when crossing edge <E> of face <F> at point <VP>. <br>
//! VP is given on edge <E> of face <F> of index <Index> (1 or 2). <br>
//! <VP> has been classified by FacesFiller as TopAbs_ON an edge <R> <br>
//! of the other face than <F> of current (face/face) intersection. <br>
//! Transition depends on the orientation of E in F. <br>
//! This method should be provided by IntPatch_Line (NYI) <br>
static /*instead*/  OCTopOpeBRepDS_Transition^ ProcessEdgeONTransition(OCNaroWrappers::OCTopOpeBRep_VPointInter^ VP, Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ R, OCNaroWrappers::OCTopoDS_Shape^ E, OCNaroWrappers::OCTopoDS_Shape^ F) ;

~OCTopOpeBRep_FFTransitionTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
