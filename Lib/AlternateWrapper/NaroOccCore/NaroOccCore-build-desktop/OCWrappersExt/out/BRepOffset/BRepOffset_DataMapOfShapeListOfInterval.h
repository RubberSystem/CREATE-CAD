// File generated by CPPExt (MPV)
//
#ifndef _BRepOffset_DataMapOfShapeListOfInterval_OCWrappers_HeaderFile
#define _BRepOffset_DataMapOfShapeListOfInterval_OCWrappers_HeaderFile

// include native header
#include <BRepOffset_DataMapOfShapeListOfInterval.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepOffset_ListOfInterval;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval;
ref class OCBRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval;



public ref class OCBRepOffset_DataMapOfShapeListOfInterval  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepOffset_DataMapOfShapeListOfInterval(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepOffset_DataMapOfShapeListOfInterval(BRepOffset_DataMapOfShapeListOfInterval* nativeHandle);

// Methods PUBLIC


OCBRepOffset_DataMapOfShapeListOfInterval(Standard_Integer NbBuckets);


 /*instead*/  OCBRepOffset_DataMapOfShapeListOfInterval^ Assign(OCNaroWrappers::OCBRepOffset_DataMapOfShapeListOfInterval^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepOffset_ListOfInterval^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepOffset_ListOfInterval^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepOffset_ListOfInterval^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBRepOffset_DataMapOfShapeListOfInterval()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
