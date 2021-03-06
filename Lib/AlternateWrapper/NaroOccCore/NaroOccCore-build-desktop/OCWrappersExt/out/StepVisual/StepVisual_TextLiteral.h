// File generated by CPPExt (MPV)
//
#ifndef _StepVisual_TextLiteral_OCWrappers_HeaderFile
#define _StepVisual_TextLiteral_OCWrappers_HeaderFile

// include native header
#include <StepVisual_TextLiteral.hxx>
#include "../Converter.h"

#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"

#include "../StepGeom/StepGeom_Axis2Placement.h"
#include "StepVisual_TextPath.h"
#include "StepVisual_FontSelect.h"
#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Axis2Placement;
ref class OCStepVisual_FontSelect;



public ref class OCStepVisual_TextLiteral  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepVisual_TextLiteral(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_TextLiteral(StepVisual_TextLiteral* nativeHandle);

// Methods PUBLIC

//! Returns a TextLiteral <br>
OCStepVisual_TextLiteral();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aLiteral, OCNaroWrappers::OCStepGeom_Axis2Placement^ aPlacement, OCNaroWrappers::OCTCollection_HAsciiString^ aAlignment, OCStepVisual_TextPath aPath, OCNaroWrappers::OCStepVisual_FontSelect^ aFont) ;


 /*instead*/  void SetLiteral(OCNaroWrappers::OCTCollection_HAsciiString^ aLiteral) ;


 /*instead*/  OCTCollection_HAsciiString^ Literal() ;


 /*instead*/  void SetPlacement(OCNaroWrappers::OCStepGeom_Axis2Placement^ aPlacement) ;


 /*instead*/  OCStepGeom_Axis2Placement^ Placement() ;


 /*instead*/  void SetAlignment(OCNaroWrappers::OCTCollection_HAsciiString^ aAlignment) ;


 /*instead*/  OCTCollection_HAsciiString^ Alignment() ;


 /*instead*/  void SetPath(OCStepVisual_TextPath aPath) ;


 /*instead*/  OCStepVisual_TextPath Path() ;


 /*instead*/  void SetFont(OCNaroWrappers::OCStepVisual_FontSelect^ aFont) ;


 /*instead*/  OCStepVisual_FontSelect^ Font() ;

~OCStepVisual_TextLiteral()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
