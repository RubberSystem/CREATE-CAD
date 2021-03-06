// File generated by CPPExt (CPP file)
//

#include "BRepMesh_ListOfSurfaceGrid.h"
#include "../Converter.h"
#include "BRepMesh_ListIteratorOfListOfSurfaceGrid.h"
#include "BRepMesh_SurfaceGrid.h"
#include "BRepMesh_ListNodeOfListOfSurfaceGrid.h"


using namespace OCNaroWrappers;

OCBRepMesh_ListOfSurfaceGrid::OCBRepMesh_ListOfSurfaceGrid(BRepMesh_ListOfSurfaceGrid* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_ListOfSurfaceGrid::OCBRepMesh_ListOfSurfaceGrid() 
{
  nativeHandle = new BRepMesh_ListOfSurfaceGrid();
}

 void OCBRepMesh_ListOfSurfaceGrid::Assign(OCNaroWrappers::OCBRepMesh_ListOfSurfaceGrid^ Other)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Assign(*((BRepMesh_ListOfSurfaceGrid*)Other->Handle));
}

 Standard_Integer OCBRepMesh_ListOfSurfaceGrid::Extent()
{
  return ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Extent();
}

 System::Boolean OCBRepMesh_ListOfSurfaceGrid::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->IsEmpty());
}

 void OCBRepMesh_ListOfSurfaceGrid::Prepend(OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Prepend(*((Handle_BRepMesh_SurfaceGrid*)I->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::Prepend(OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I, OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ theIt)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Prepend(*((Handle_BRepMesh_SurfaceGrid*)I->Handle), *((BRepMesh_ListIteratorOfListOfSurfaceGrid*)theIt->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::Prepend(OCNaroWrappers::OCBRepMesh_ListOfSurfaceGrid^ Other)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Prepend(*((BRepMesh_ListOfSurfaceGrid*)Other->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::Append(OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Append(*((Handle_BRepMesh_SurfaceGrid*)I->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::Append(OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I, OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ theIt)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Append(*((Handle_BRepMesh_SurfaceGrid*)I->Handle), *((BRepMesh_ListIteratorOfListOfSurfaceGrid*)theIt->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::Append(OCNaroWrappers::OCBRepMesh_ListOfSurfaceGrid^ Other)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Append(*((BRepMesh_ListOfSurfaceGrid*)Other->Handle));
}

OCBRepMesh_SurfaceGrid^ OCBRepMesh_ListOfSurfaceGrid::First()
{
  Handle(BRepMesh_SurfaceGrid) tmp = ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->First();
  return gcnew OCBRepMesh_SurfaceGrid(&tmp);
}

OCBRepMesh_SurfaceGrid^ OCBRepMesh_ListOfSurfaceGrid::Last()
{
  Handle(BRepMesh_SurfaceGrid) tmp = ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Last();
  return gcnew OCBRepMesh_SurfaceGrid(&tmp);
}

 void OCBRepMesh_ListOfSurfaceGrid::RemoveFirst()
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->RemoveFirst();
}

 void OCBRepMesh_ListOfSurfaceGrid::Remove(OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ It)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->Remove(*((BRepMesh_ListIteratorOfListOfSurfaceGrid*)It->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::InsertBefore(OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I, OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ It)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->InsertBefore(*((Handle_BRepMesh_SurfaceGrid*)I->Handle), *((BRepMesh_ListIteratorOfListOfSurfaceGrid*)It->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::InsertBefore(OCNaroWrappers::OCBRepMesh_ListOfSurfaceGrid^ Other, OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ It)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->InsertBefore(*((BRepMesh_ListOfSurfaceGrid*)Other->Handle), *((BRepMesh_ListIteratorOfListOfSurfaceGrid*)It->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::InsertAfter(OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I, OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ It)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->InsertAfter(*((Handle_BRepMesh_SurfaceGrid*)I->Handle), *((BRepMesh_ListIteratorOfListOfSurfaceGrid*)It->Handle));
}

 void OCBRepMesh_ListOfSurfaceGrid::InsertAfter(OCNaroWrappers::OCBRepMesh_ListOfSurfaceGrid^ Other, OCNaroWrappers::OCBRepMesh_ListIteratorOfListOfSurfaceGrid^ It)
{
  ((BRepMesh_ListOfSurfaceGrid*)nativeHandle)->InsertAfter(*((BRepMesh_ListOfSurfaceGrid*)Other->Handle), *((BRepMesh_ListIteratorOfListOfSurfaceGrid*)It->Handle));
}


