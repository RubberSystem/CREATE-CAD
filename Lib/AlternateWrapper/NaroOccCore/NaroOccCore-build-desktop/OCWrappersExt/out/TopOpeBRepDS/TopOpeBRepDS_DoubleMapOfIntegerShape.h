// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_DoubleMapOfIntegerShape_OCWrappers_HeaderFile
#define _TopOpeBRepDS_DoubleMapOfIntegerShape_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_DoubleMapOfIntegerShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTColStd_MapIntegerHasher;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape;
ref class OCTopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape;



public ref class OCTopOpeBRepDS_DoubleMapOfIntegerShape  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_DoubleMapOfIntegerShape(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_DoubleMapOfIntegerShape(TopOpeBRepDS_DoubleMapOfIntegerShape* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_DoubleMapOfIntegerShape(Standard_Integer NbBuckets);


 /*instead*/  OCTopOpeBRepDS_DoubleMapOfIntegerShape^ Assign(OCNaroWrappers::OCTopOpeBRepDS_DoubleMapOfIntegerShape^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  void Bind(Standard_Integer K1, OCNaroWrappers::OCTopoDS_Shape^ K2) ;


 /*instead*/  System::Boolean AreBound(Standard_Integer K1, OCNaroWrappers::OCTopoDS_Shape^ K2) ;


 /*instead*/  System::Boolean IsBound1(Standard_Integer K) ;


 /*instead*/  System::Boolean IsBound2(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopoDS_Shape^ Find1(Standard_Integer K) ;


 /*instead*/  Standard_Integer Find2(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind1(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind2(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopOpeBRepDS_DoubleMapOfIntegerShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
