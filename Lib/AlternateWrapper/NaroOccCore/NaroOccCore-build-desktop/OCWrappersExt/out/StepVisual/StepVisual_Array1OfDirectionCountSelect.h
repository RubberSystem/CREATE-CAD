// File generated by CPPExt (MPV)
//
#ifndef _StepVisual_Array1OfDirectionCountSelect_OCWrappers_HeaderFile
#define _StepVisual_Array1OfDirectionCountSelect_OCWrappers_HeaderFile

// include native header
#include <StepVisual_Array1OfDirectionCountSelect.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepVisual_DirectionCountSelect;



public ref class OCStepVisual_Array1OfDirectionCountSelect  {

protected:
  StepVisual_Array1OfDirectionCountSelect* nativeHandle;
  OCStepVisual_Array1OfDirectionCountSelect(OCDummy^) {};

public:
  property StepVisual_Array1OfDirectionCountSelect* Handle
  {
    StepVisual_Array1OfDirectionCountSelect* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepVisual_Array1OfDirectionCountSelect(StepVisual_Array1OfDirectionCountSelect* nativeHandle);

// Methods PUBLIC


OCStepVisual_Array1OfDirectionCountSelect(Standard_Integer Low, Standard_Integer Up);


OCStepVisual_Array1OfDirectionCountSelect(OCNaroWrappers::OCStepVisual_DirectionCountSelect^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_DirectionCountSelect^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepVisual_Array1OfDirectionCountSelect^ Assign(OCNaroWrappers::OCStepVisual_Array1OfDirectionCountSelect^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_DirectionCountSelect^ Value) ;


 /*instead*/  OCStepVisual_DirectionCountSelect^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_DirectionCountSelect^ ChangeValue(Standard_Integer Index) ;

~OCStepVisual_Array1OfDirectionCountSelect()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
