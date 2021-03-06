// File generated by CPPExt (Transient)
//
#ifndef _MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_OCWrappers_HeaderFile
#define _MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../TColGeom2d/TColGeom2d_SequenceOfCurve.h"


namespace OCNaroWrappers
{

ref class OCTColGeom2d_SequenceOfCurve;
ref class OCMAT2d_SequenceOfSequenceOfCurve;



public ref class OCMAT2d_SequenceNodeOfSequenceOfSequenceOfCurve : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCMAT2d_SequenceNodeOfSequenceOfSequenceOfCurve(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_SequenceNodeOfSequenceOfSequenceOfCurve(Handle(MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve)* nativeHandle);

// Methods PUBLIC


OCMAT2d_SequenceNodeOfSequenceOfSequenceOfCurve(OCNaroWrappers::OCTColGeom2d_SequenceOfCurve^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTColGeom2d_SequenceOfCurve^ Value() ;

~OCMAT2d_SequenceNodeOfSequenceOfSequenceOfCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
