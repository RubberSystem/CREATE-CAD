// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute_OCWrappers_HeaderFile
#define _BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCBRepMesh_FaceAttribute;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapOfFaceAttribute;
ref class OCBRepMesh_DataMapNodeOfDataMapOfFaceAttribute;



public ref class OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute(BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute();


OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute(OCNaroWrappers::OCBRepMesh_DataMapOfFaceAttribute^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfFaceAttribute^ aMap) ;


 /*instead*/  OCTopoDS_Face^ Key() ;


 /*instead*/  OCBRepMesh_FaceAttribute^ Value() ;

~OCBRepMesh_DataMapIteratorOfDataMapOfFaceAttribute()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
