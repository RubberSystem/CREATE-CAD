// File generated by CPPExt (MPV)
//
#ifndef _Graphic2d_Array1OfVertex_OCWrappers_HeaderFile
#define _Graphic2d_Array1OfVertex_OCWrappers_HeaderFile

// include native header
#include <Graphic2d_Array1OfVertex.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic2d_Vertex;



public ref class OCGraphic2d_Array1OfVertex  {

protected:
  Graphic2d_Array1OfVertex* nativeHandle;
  OCGraphic2d_Array1OfVertex(OCDummy^) {};

public:
  property Graphic2d_Array1OfVertex* Handle
  {
    Graphic2d_Array1OfVertex* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic2d_Array1OfVertex(Graphic2d_Array1OfVertex* nativeHandle);

// Methods PUBLIC


OCGraphic2d_Array1OfVertex(Standard_Integer Low, Standard_Integer Up);


OCGraphic2d_Array1OfVertex(OCNaroWrappers::OCGraphic2d_Vertex^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCGraphic2d_Vertex^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGraphic2d_Array1OfVertex^ Assign(OCNaroWrappers::OCGraphic2d_Array1OfVertex^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic2d_Vertex^ Value) ;


 /*instead*/  OCGraphic2d_Vertex^ Value(Standard_Integer Index) ;


 /*instead*/  OCGraphic2d_Vertex^ ChangeValue(Standard_Integer Index) ;

~OCGraphic2d_Array1OfVertex()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif