// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_BlockIterator_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_BlockIterator_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! Iterator on the elements of a block. <br>
public ref class OCTopOpeBRepBuild_BlockIterator  {

protected:
  TopOpeBRepBuild_BlockIterator* nativeHandle;
  OCTopOpeBRepBuild_BlockIterator(OCDummy^) {};

public:
  property TopOpeBRepBuild_BlockIterator* Handle
  {
    TopOpeBRepBuild_BlockIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_BlockIterator(TopOpeBRepBuild_BlockIterator* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_BlockIterator();


OCTopOpeBRepBuild_BlockIterator(Standard_Integer Lower, Standard_Integer Upper);


 /*instead*/  void Initialize() ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  Standard_Integer Value() ;


 /*instead*/  Standard_Integer Extent() ;

~OCTopOpeBRepBuild_BlockIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
