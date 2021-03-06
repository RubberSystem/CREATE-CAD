// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopOpeBRepBuild_ListOfShapeListOfShape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape;
ref class OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape;



public ref class OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape(TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape(Standard_Integer NbBuckets);


 /*instead*/  OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape^ Assign(OCNaroWrappers::OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepBuild_ListOfShapeListOfShape^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopOpeBRepBuild_ListOfShapeListOfShape^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopOpeBRepBuild_ListOfShapeListOfShape^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
