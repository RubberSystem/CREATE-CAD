// File generated by CPPExt (Transient)
//
#ifndef _Approx_HArray1OfGTrsf2d_OCWrappers_HeaderFile
#define _Approx_HArray1OfGTrsf2d_OCWrappers_HeaderFile

// include the wrapped class
#include <Approx_HArray1OfGTrsf2d.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Approx_Array1OfGTrsf2d.h"


namespace OCNaroWrappers
{

ref class OCgp_GTrsf2d;
ref class OCApprox_Array1OfGTrsf2d;



public ref class OCApprox_HArray1OfGTrsf2d : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCApprox_HArray1OfGTrsf2d(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCApprox_HArray1OfGTrsf2d(Handle(Approx_HArray1OfGTrsf2d)* nativeHandle);

// Methods PUBLIC


OCApprox_HArray1OfGTrsf2d(Standard_Integer Low, Standard_Integer Up);


OCApprox_HArray1OfGTrsf2d(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_GTrsf2d^ V);


 /*instead*/  void Init(OCNaroWrappers::OCgp_GTrsf2d^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_GTrsf2d^ Value) ;


 /*instead*/  OCgp_GTrsf2d^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_GTrsf2d^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCApprox_Array1OfGTrsf2d^ Array1() ;


 /*instead*/  OCApprox_Array1OfGTrsf2d^ ChangeArray1() ;

~OCApprox_HArray1OfGTrsf2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif