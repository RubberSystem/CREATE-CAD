// File generated by CPPExt (MPV)
//
#ifndef _AppParCurves_Array1OfMultiPoint_OCWrappers_HeaderFile
#define _AppParCurves_Array1OfMultiPoint_OCWrappers_HeaderFile

// include native header
#include <AppParCurves_Array1OfMultiPoint.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAppParCurves_MultiPoint;



public ref class OCAppParCurves_Array1OfMultiPoint  {

protected:
  AppParCurves_Array1OfMultiPoint* nativeHandle;
  OCAppParCurves_Array1OfMultiPoint(OCDummy^) {};

public:
  property AppParCurves_Array1OfMultiPoint* Handle
  {
    AppParCurves_Array1OfMultiPoint* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCAppParCurves_Array1OfMultiPoint(AppParCurves_Array1OfMultiPoint* nativeHandle);

// Methods PUBLIC


OCAppParCurves_Array1OfMultiPoint(Standard_Integer Low, Standard_Integer Up);


OCAppParCurves_Array1OfMultiPoint(OCNaroWrappers::OCAppParCurves_MultiPoint^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCAppParCurves_MultiPoint^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCAppParCurves_Array1OfMultiPoint^ Assign(OCNaroWrappers::OCAppParCurves_Array1OfMultiPoint^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAppParCurves_MultiPoint^ Value) ;


 /*instead*/  OCAppParCurves_MultiPoint^ Value(Standard_Integer Index) ;


 /*instead*/  OCAppParCurves_MultiPoint^ ChangeValue(Standard_Integer Index) ;

~OCAppParCurves_Array1OfMultiPoint()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
