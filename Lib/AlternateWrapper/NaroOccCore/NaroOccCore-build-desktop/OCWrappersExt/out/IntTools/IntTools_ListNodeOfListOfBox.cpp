// File generated by CPPExt (CPP file)
//

#include "IntTools_ListNodeOfListOfBox.h"
#include "../Converter.h"
#include "../Bnd/Bnd_Box.h"
#include "IntTools_ListOfBox.h"
#include "IntTools_ListIteratorOfListOfBox.h"


using namespace OCNaroWrappers;

OCIntTools_ListNodeOfListOfBox::OCIntTools_ListNodeOfListOfBox(Handle(IntTools_ListNodeOfListOfBox)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntTools_ListNodeOfListOfBox(*nativeHandle);
}

OCIntTools_ListNodeOfListOfBox::OCIntTools_ListNodeOfListOfBox(OCNaroWrappers::OCBnd_Box^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntTools_ListNodeOfListOfBox(new IntTools_ListNodeOfListOfBox(*((Bnd_Box*)I->Handle), n));
}

OCBnd_Box^ OCIntTools_ListNodeOfListOfBox::Value()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = (*((Handle_IntTools_ListNodeOfListOfBox*)nativeHandle))->Value();
  return gcnew OCBnd_Box(tmp);
}


