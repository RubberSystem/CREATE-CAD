// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_SplitShapesPool_OCWrappers_HeaderFile
#define _BOPTools_SplitShapesPool_OCWrappers_HeaderFile

// include native header
#include <BOPTools_SplitShapesPool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_ListOfPaveBlock;



public ref class OCBOPTools_SplitShapesPool  {

protected:
  BOPTools_SplitShapesPool* nativeHandle;
  OCBOPTools_SplitShapesPool(OCDummy^) {};

public:
  property BOPTools_SplitShapesPool* Handle
  {
    BOPTools_SplitShapesPool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_SplitShapesPool(BOPTools_SplitShapesPool* nativeHandle);

// Methods PUBLIC


OCBOPTools_SplitShapesPool(Standard_Integer Length, Standard_Integer BlockLength);


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  Standard_Integer FactLength() ;


 /*instead*/  Standard_Integer Append(OCNaroWrappers::OCBOPTools_ListOfPaveBlock^ Value) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_ListOfPaveBlock^ Value(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_ListOfPaveBlock^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void SetBlockLength(Standard_Integer aBL) ;


 /*instead*/  Standard_Integer BlockLength() ;


 /*instead*/  void Purge() ;

~OCBOPTools_SplitShapesPool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
