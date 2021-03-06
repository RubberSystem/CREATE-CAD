// File generated by CPPExt (Transient)
//
#ifndef _MeshShape_DataMapNodeOfDataMapOfIntegerPnt_OCWrappers_HeaderFile
#define _MeshShape_DataMapNodeOfDataMapOfIntegerPnt_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshShape_DataMapNodeOfDataMapOfIntegerPnt.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshShape_DataMapOfIntegerPnt;
ref class OCMeshShape_DataMapIteratorOfDataMapOfIntegerPnt;



public ref class OCMeshShape_DataMapNodeOfDataMapOfIntegerPnt : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCMeshShape_DataMapNodeOfDataMapOfIntegerPnt(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshShape_DataMapNodeOfDataMapOfIntegerPnt(Handle(MeshShape_DataMapNodeOfDataMapOfIntegerPnt)* nativeHandle);

// Methods PUBLIC


OCMeshShape_DataMapNodeOfDataMapOfIntegerPnt(Standard_Integer K, OCNaroWrappers::OCgp_Pnt^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCgp_Pnt^ Value() ;

~OCMeshShape_DataMapNodeOfDataMapOfIntegerPnt()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
