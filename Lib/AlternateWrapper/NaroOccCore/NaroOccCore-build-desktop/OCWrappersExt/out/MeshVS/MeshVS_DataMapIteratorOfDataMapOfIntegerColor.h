// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_OCWrappers_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_OCWrappers_HeaderFile

// include native header
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerColor.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshVS_DataMapOfIntegerColor;
ref class OCMeshVS_DataMapNodeOfDataMapOfIntegerColor;



public ref class OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor(MeshVS_DataMapIteratorOfDataMapOfIntegerColor* nativeHandle);

// Methods PUBLIC


OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor();


OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor(OCNaroWrappers::OCMeshVS_DataMapOfIntegerColor^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMeshVS_DataMapOfIntegerColor^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCQuantity_Color^ Value() ;

~OCMeshVS_DataMapIteratorOfDataMapOfIntegerColor()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
