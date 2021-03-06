// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_SurfaceIterator_OCWrappers_HeaderFile
#define _TopOpeBRepDS_SurfaceIterator_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include "../Converter.h"

#include "TopOpeBRepDS_InterferenceIterator.h"

#include "TopOpeBRepDS_InterferenceIterator.h"
#include "../TopAbs/TopAbs_Orientation.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_ListOfInterference;



public ref class OCTopOpeBRepDS_SurfaceIterator  : public OCTopOpeBRepDS_InterferenceIterator {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_SurfaceIterator(OCDummy^) : OCTopOpeBRepDS_InterferenceIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_SurfaceIterator(TopOpeBRepDS_SurfaceIterator* nativeHandle);

// Methods PUBLIC

//! Creates an  iterator on the  Surfaces on solid <br>
//!          described by the interferences in <L>. <br>
OCTopOpeBRepDS_SurfaceIterator(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L);

//! Index of the surface in the data structure. <br>
 /*instead*/  Standard_Integer Current() ;


 /*instead*/  OCTopAbs_Orientation Orientation(OCTopAbs_State S) ;

~OCTopOpeBRepDS_SurfaceIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
