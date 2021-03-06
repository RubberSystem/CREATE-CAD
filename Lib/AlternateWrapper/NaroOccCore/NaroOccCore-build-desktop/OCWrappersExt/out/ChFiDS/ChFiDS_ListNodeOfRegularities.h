// File generated by CPPExt (Transient)
//
#ifndef _ChFiDS_ListNodeOfRegularities_OCWrappers_HeaderFile
#define _ChFiDS_ListNodeOfRegularities_OCWrappers_HeaderFile

// include the wrapped class
#include <ChFiDS_ListNodeOfRegularities.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "ChFiDS_Regul.h"


namespace OCNaroWrappers
{

ref class OCChFiDS_Regul;
ref class OCChFiDS_Regularities;
ref class OCChFiDS_ListIteratorOfRegularities;



public ref class OCChFiDS_ListNodeOfRegularities : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCChFiDS_ListNodeOfRegularities(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCChFiDS_ListNodeOfRegularities(Handle(ChFiDS_ListNodeOfRegularities)* nativeHandle);

// Methods PUBLIC


OCChFiDS_ListNodeOfRegularities(OCNaroWrappers::OCChFiDS_Regul^ I, TCollection_MapNodePtr n);


 /*instead*/  OCChFiDS_Regul^ Value() ;

~OCChFiDS_ListNodeOfRegularities()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
