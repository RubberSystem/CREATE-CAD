// File generated by CPPExt (MPV)
//
#ifndef _StepVisual_AreaOrView_OCWrappers_HeaderFile
#define _StepVisual_AreaOrView_OCWrappers_HeaderFile

// include native header
#include <StepVisual_AreaOrView.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepVisual_PresentationArea;
ref class OCStepVisual_PresentationView;



public ref class OCStepVisual_AreaOrView  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepVisual_AreaOrView(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_AreaOrView(StepVisual_AreaOrView* nativeHandle);

// Methods PUBLIC

//! Returns a AreaOrView SelectType <br>
OCStepVisual_AreaOrView();

//! Recognizes a AreaOrView Kind Entity that is : <br>
//!        1 -> PresentationArea <br>
//!        2 -> PresentationView <br>
//!        0 else <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! returns Value as a PresentationArea (Null if another type) <br>
 /*instead*/  OCStepVisual_PresentationArea^ PresentationArea() ;

//! returns Value as a PresentationView (Null if another type) <br>
 /*instead*/  OCStepVisual_PresentationView^ PresentationView() ;

~OCStepVisual_AreaOrView()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
