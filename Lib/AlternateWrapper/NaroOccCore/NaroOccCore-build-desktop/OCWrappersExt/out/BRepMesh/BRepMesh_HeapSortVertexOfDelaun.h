// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_HeapSortVertexOfDelaun_OCWrappers_HeaderFile
#define _BRepMesh_HeapSortVertexOfDelaun_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_HeapSortVertexOfDelaun.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepMesh_Vertex;
ref class OCBRepMesh_Array1OfVertexOfDelaun;
ref class OCBRepMesh_ComparatorOfVertexOfDelaun;



public ref class OCBRepMesh_HeapSortVertexOfDelaun  {

protected:
  BRepMesh_HeapSortVertexOfDelaun* nativeHandle;
  OCBRepMesh_HeapSortVertexOfDelaun(OCDummy^) {};

public:
  property BRepMesh_HeapSortVertexOfDelaun* Handle
  {
    BRepMesh_HeapSortVertexOfDelaun* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_HeapSortVertexOfDelaun(BRepMesh_HeapSortVertexOfDelaun* nativeHandle);

// Methods PUBLIC


static /*instead*/  void Sort(OCNaroWrappers::OCBRepMesh_Array1OfVertexOfDelaun^ TheArray, OCNaroWrappers::OCBRepMesh_ComparatorOfVertexOfDelaun^ Comp) ;

~OCBRepMesh_HeapSortVertexOfDelaun()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
