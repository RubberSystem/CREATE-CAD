// File generated by CPPExt (Transient)
//
#ifndef _AIS_GlobalStatus_OCWrappers_HeaderFile
#define _AIS_GlobalStatus_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_GlobalStatus.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "AIS_DisplayStatus.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{

ref class OCTColStd_ListOfInteger;


//! Stores  information  about objects in graphic context: <br>
//!          - Status Of Display : in the main viewer <br>
//!                                in the  collector <br>
//!                                fully Erased <br>
//!          - Displayed Modes <br>
//!          - Active Selection Modes <br>
//!          - is the Interactive Object Current ? <br>
//!          - Layer Index <br>
public ref class OCAIS_GlobalStatus : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAIS_GlobalStatus(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_GlobalStatus(Handle(AIS_GlobalStatus)* nativeHandle);

// Methods PUBLIC


OCAIS_GlobalStatus();


OCAIS_GlobalStatus(OCAIS_DisplayStatus aStat, Standard_Integer aDispMode, Standard_Integer aSelMode, System::Boolean ishilighted, OCQuantity_NameOfColor TheHiCol, Standard_Integer aLayerIndex);


 /*instead*/  void SetGraphicStatus(OCAIS_DisplayStatus aStat) ;


 /*instead*/  void AddDisplayMode(Standard_Integer aMode) ;


 /*instead*/  void AddSelectionMode(Standard_Integer aMode) ;


 /*instead*/  void SetLayerIndex(Standard_Integer AnIndex) ;


 /*instead*/  void SetHilightStatus(System::Boolean aStat) ;


 /*instead*/  void SetHilightColor(OCQuantity_NameOfColor aHiCol) ;


 /*instead*/  System::Boolean IsSubIntensityOn() ;


 /*instead*/  void SubIntensityOn() ;


 /*instead*/  void SubIntensityOff() ;


 /*instead*/  void RemoveDisplayMode(Standard_Integer aMode) ;


 /*instead*/  void RemoveSelectionMode(Standard_Integer aMode) ;


 /*instead*/  void ClearSelectionModes() ;


 /*instead*/  OCAIS_DisplayStatus GraphicStatus() ;

//! keeps the information of displayed modes in the <br>
//!          main viewer. <br>
//!          (The convention is that the object is displayed <br>
//!          with the mode 0 in the collector...) <br>
 /*instead*/  OCTColStd_ListOfInteger^ DisplayedModes() ;

//! keeps the active selection modes of the object <br>
//!          in the main viewer. <br>
//!          (The convention is that the active selection mode <br>
//!          for an object in the collector is the mode 0). <br>
 /*instead*/  OCTColStd_ListOfInteger^ SelectionModes() ;


 /*instead*/  System::Boolean IsHilighted() ;


 /*instead*/  OCQuantity_NameOfColor HilightColor() ;


 /*instead*/  System::Boolean IsDModeIn(Standard_Integer aMode) ;


 /*instead*/  System::Boolean IsSModeIn(Standard_Integer aMode) ;

~OCAIS_GlobalStatus()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif