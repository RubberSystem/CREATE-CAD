// File generated by CPPExt (Transient)
//
#ifndef _BRepCheck_DataMapNodeOfDataMapOfShapeResult_OCWrappers_HeaderFile
#define _BRepCheck_DataMapNodeOfDataMapOfShapeResult_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepCheck_DataMapNodeOfDataMapOfShapeResult.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCBRepCheck_Result;
ref class OCTopoDS_Shape;
ref class OCTopTools_OrientedShapeMapHasher;
ref class OCBRepCheck_DataMapOfShapeResult;
ref class OCBRepCheck_DataMapIteratorOfDataMapOfShapeResult;



public ref class OCBRepCheck_DataMapNodeOfDataMapOfShapeResult : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepCheck_DataMapNodeOfDataMapOfShapeResult(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepCheck_DataMapNodeOfDataMapOfShapeResult(Handle(BRepCheck_DataMapNodeOfDataMapOfShapeResult)* nativeHandle);

// Methods PUBLIC


OCBRepCheck_DataMapNodeOfDataMapOfShapeResult(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepCheck_Result^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCBRepCheck_Result^ Value() ;

~OCBRepCheck_DataMapNodeOfDataMapOfShapeResult()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif