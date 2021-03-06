// File generated by CPPExt (MPV)
//
#ifndef _Geom2dHatch_ElementOfHatcher_OCWrappers_HeaderFile
#define _Geom2dHatch_ElementOfHatcher_OCWrappers_HeaderFile

// include native header
#include <Geom2dHatch_ElementOfHatcher.hxx>
#include "../Converter.h"


#include "../Geom2dAdaptor/Geom2dAdaptor_Curve.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCGeom2dAdaptor_Curve;



public ref class OCGeom2dHatch_ElementOfHatcher  {

protected:
  Geom2dHatch_ElementOfHatcher* nativeHandle;
  OCGeom2dHatch_ElementOfHatcher(OCDummy^) {};

public:
  property Geom2dHatch_ElementOfHatcher* Handle
  {
    Geom2dHatch_ElementOfHatcher* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeom2dHatch_ElementOfHatcher(Geom2dHatch_ElementOfHatcher* nativeHandle);

// Methods PUBLIC


OCGeom2dHatch_ElementOfHatcher();


OCGeom2dHatch_ElementOfHatcher(OCNaroWrappers::OCGeom2dHatch_ElementOfHatcher^ Other);


OCGeom2dHatch_ElementOfHatcher(OCNaroWrappers::OCGeom2dAdaptor_Curve^ Curve, OCTopAbs_Orientation Orientation);


 /*instead*/  OCGeom2dAdaptor_Curve^ Curve() ;


 /*instead*/  OCGeom2dAdaptor_Curve^ ChangeCurve() ;


 /*instead*/  void Orientation(OCTopAbs_Orientation Orientation) ;


 /*instead*/  OCTopAbs_Orientation Orientation() ;

~OCGeom2dHatch_ElementOfHatcher()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
