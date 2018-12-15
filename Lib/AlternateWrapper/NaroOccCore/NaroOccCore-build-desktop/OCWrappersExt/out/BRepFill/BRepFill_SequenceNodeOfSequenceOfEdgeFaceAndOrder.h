// File generated by CPPExt (Transient)
//
#ifndef _BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder_OCWrappers_HeaderFile
#define _BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "BRepFill_EdgeFaceAndOrder.h"


namespace OCNaroWrappers
{

ref class OCBRepFill_EdgeFaceAndOrder;
ref class OCBRepFill_SequenceOfEdgeFaceAndOrder;



public ref class OCBRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCBRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder(Handle(BRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder)* nativeHandle);

// Methods PUBLIC


OCBRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder(OCNaroWrappers::OCBRepFill_EdgeFaceAndOrder^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCBRepFill_EdgeFaceAndOrder^ Value() ;

~OCBRepFill_SequenceNodeOfSequenceOfEdgeFaceAndOrder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif