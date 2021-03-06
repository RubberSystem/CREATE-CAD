// File generated by CPPExt (MPV)
//
#ifndef _TShort_Array1OfShortReal_OCWrappers_HeaderFile
#define _TShort_Array1OfShortReal_OCWrappers_HeaderFile

// include native header
#include <TShort_Array1OfShortReal.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCTShort_Array1OfShortReal  {

protected:
  TShort_Array1OfShortReal* nativeHandle;
  OCTShort_Array1OfShortReal(OCDummy^) {};

public:
  property TShort_Array1OfShortReal* Handle
  {
    TShort_Array1OfShortReal* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTShort_Array1OfShortReal(TShort_Array1OfShortReal* nativeHandle);

// Methods PUBLIC


OCTShort_Array1OfShortReal(Standard_Integer Low, Standard_Integer Up);


OCTShort_Array1OfShortReal(Standard_ShortReal Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(Standard_ShortReal V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTShort_Array1OfShortReal^ Assign(OCNaroWrappers::OCTShort_Array1OfShortReal^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, Standard_ShortReal Value) ;


 /*instead*/  Standard_ShortReal Value(Standard_Integer Index) ;


 /*instead*/  Standard_ShortReal ChangeValue(Standard_Integer Index) ;

~OCTShort_Array1OfShortReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
