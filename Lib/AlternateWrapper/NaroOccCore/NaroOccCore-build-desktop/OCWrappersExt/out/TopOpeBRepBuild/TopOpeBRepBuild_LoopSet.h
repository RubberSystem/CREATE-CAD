// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_LoopSet_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_LoopSet_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_LoopSet.hxx>
#include "../Converter.h"


#include "TopOpeBRepBuild_ListOfLoop.h"
#include "TopOpeBRepBuild_ListIteratorOfListOfLoop.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_ListOfLoop;
ref class OCTopOpeBRepBuild_Loop;



public ref class OCTopOpeBRepBuild_LoopSet  {

protected:
  TopOpeBRepBuild_LoopSet* nativeHandle;
  OCTopOpeBRepBuild_LoopSet(OCDummy^) {};

public:
  property TopOpeBRepBuild_LoopSet* Handle
  {
    TopOpeBRepBuild_LoopSet* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_LoopSet(TopOpeBRepBuild_LoopSet* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_LoopSet();


virtual /*instead*/  void Delete() ;


 /*instead*/  OCTopOpeBRepBuild_ListOfLoop^ ChangeListOfLoop() ;


virtual /*instead*/  void InitLoop() ;


virtual /*instead*/  System::Boolean MoreLoop() ;


virtual /*instead*/  void NextLoop() ;


virtual /*instead*/  OCTopOpeBRepBuild_Loop^ Loop() ;

~OCTopOpeBRepBuild_LoopSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
