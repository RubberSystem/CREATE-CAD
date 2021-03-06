// File generated by CPPExt (MPV)
//
#ifndef _HLRAlgo_InterferenceList_OCWrappers_HeaderFile
#define _HLRAlgo_InterferenceList_OCWrappers_HeaderFile

// include native header
#include <HLRAlgo_InterferenceList.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCHLRAlgo_ListIteratorOfInterferenceList;
ref class OCHLRAlgo_Interference;
ref class OCHLRAlgo_ListNodeOfInterferenceList;



public ref class OCHLRAlgo_InterferenceList  {

protected:
  HLRAlgo_InterferenceList* nativeHandle;
  OCHLRAlgo_InterferenceList(OCDummy^) {};

public:
  property HLRAlgo_InterferenceList* Handle
  {
    HLRAlgo_InterferenceList* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCHLRAlgo_InterferenceList(HLRAlgo_InterferenceList* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_InterferenceList();


 /*instead*/  void Assign(OCNaroWrappers::OCHLRAlgo_InterferenceList^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCHLRAlgo_Interference^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCHLRAlgo_Interference^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCHLRAlgo_InterferenceList^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCHLRAlgo_Interference^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCHLRAlgo_Interference^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCHLRAlgo_InterferenceList^ Other) ;


 /*instead*/  OCHLRAlgo_Interference^ First() ;


 /*instead*/  OCHLRAlgo_Interference^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCHLRAlgo_Interference^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCHLRAlgo_InterferenceList^ Other, OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCHLRAlgo_Interference^ I, OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCHLRAlgo_InterferenceList^ Other, OCNaroWrappers::OCHLRAlgo_ListIteratorOfInterferenceList^ It) ;

~OCHLRAlgo_InterferenceList()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
