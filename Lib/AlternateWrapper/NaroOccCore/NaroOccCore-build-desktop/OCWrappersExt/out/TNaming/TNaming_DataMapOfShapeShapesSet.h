// File generated by CPPExt (MPV)
//
#ifndef _TNaming_DataMapOfShapeShapesSet_OCWrappers_HeaderFile
#define _TNaming_DataMapOfShapeShapesSet_OCWrappers_HeaderFile

// include native header
#include <TNaming_DataMapOfShapeShapesSet.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTNaming_ShapesSet;
ref class OCTopTools_ShapeMapHasher;
ref class OCTNaming_DataMapNodeOfDataMapOfShapeShapesSet;
ref class OCTNaming_DataMapIteratorOfDataMapOfShapeShapesSet;



public ref class OCTNaming_DataMapOfShapeShapesSet  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTNaming_DataMapOfShapeShapesSet(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTNaming_DataMapOfShapeShapesSet(TNaming_DataMapOfShapeShapesSet* nativeHandle);

// Methods PUBLIC


OCTNaming_DataMapOfShapeShapesSet(Standard_Integer NbBuckets);


 /*instead*/  OCTNaming_DataMapOfShapeShapesSet^ Assign(OCNaroWrappers::OCTNaming_DataMapOfShapeShapesSet^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTNaming_ShapesSet^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTNaming_ShapesSet^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTNaming_ShapesSet^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTNaming_DataMapOfShapeShapesSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
