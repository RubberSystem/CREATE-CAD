// File generated by CPPExt (CPP file)
//

#include "AIS2D_LocalContext.h"
#include "../Converter.h"
#include "AIS2D_InteractiveContext.h"
#include "AIS2D_InteractiveObject.h"
#include "../Graphic2d/Graphic2d_Primitive.h"
#include "../TColStd/TColStd_MapOfTransient.h"
#include "../V2d/V2d_View.h"
#include "AIS2D_LocalStatus.h"


using namespace OCNaroWrappers;

OCAIS2D_LocalContext::OCAIS2D_LocalContext(Handle(AIS2D_LocalContext)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS2D_LocalContext(*nativeHandle);
}

OCAIS2D_LocalContext::OCAIS2D_LocalContext() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_LocalContext(new AIS2D_LocalContext());
}

OCAIS2D_LocalContext::OCAIS2D_LocalContext(OCNaroWrappers::OCAIS2D_InteractiveContext^ aCtx, Standard_Integer anIndex, System::Boolean LoadDisplayed, System::Boolean AcceptStdModes, System::Boolean AcceptErase) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_LocalContext(new AIS2D_LocalContext(*((Handle_AIS2D_InteractiveContext*)aCtx->Handle), anIndex, OCConverter::BooleanToStandardBoolean(LoadDisplayed), OCConverter::BooleanToStandardBoolean(AcceptStdModes), OCConverter::BooleanToStandardBoolean(AcceptErase)));
}

 System::Boolean OCAIS2D_LocalContext::Display(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer DisplayMode, System::Boolean AllowDecomp, Standard_Integer ActivationMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->Display(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), DisplayMode, OCConverter::BooleanToStandardBoolean(AllowDecomp), ActivationMode));
}

 System::Boolean OCAIS2D_LocalContext::Load(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean AllowDecomp, Standard_Integer ActivationMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->Load(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(AllowDecomp), ActivationMode));
}

 System::Boolean OCAIS2D_LocalContext::Erase(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->Erase(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 System::Boolean OCAIS2D_LocalContext::Remove(OCNaroWrappers::OCAIS2D_InteractiveObject^ aSelObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->Remove(*((Handle_AIS2D_InteractiveObject*)aSelObj->Handle)));
}

 void OCAIS2D_LocalContext::LoadContextObjects()
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->LoadContextObjects();
}

 void OCAIS2D_LocalContext::UnloadContextObjects()
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->UnloadContextObjects();
}

 void OCAIS2D_LocalContext::Terminate()
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->Terminate();
}

 void OCAIS2D_LocalContext::Clear(OCAIS2D_ClearMode aType)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->Clear((AIS2D_ClearMode)aType);
}

 void OCAIS2D_LocalContext::HighlightPicked(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->HighlightPicked(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_LocalContext::UnhighlightPicked(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->UnhighlightPicked(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_LocalContext::UpdateSelected(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->UpdateSelected(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_LocalContext::SetSelected(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->SetSelected(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_LocalContext::AddOrRemoveSelected(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->AddOrRemoveSelected(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 System::Boolean OCAIS2D_LocalContext::IsSelected(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->IsSelected(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

OCAIS2D_InteractiveObject^ OCAIS2D_LocalContext::SelectedIO()
{
  Handle(AIS2D_InteractiveObject) tmp = (*((Handle_AIS2D_LocalContext*)nativeHandle))->SelectedIO();
  return gcnew OCAIS2D_InteractiveObject(&tmp);
}

 void OCAIS2D_LocalContext::SetDisplayPriority(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer Prior)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->SetDisplayPriority(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), Prior);
}

 Standard_Integer OCAIS2D_LocalContext::DisplayedObjects(OCNaroWrappers::OCTColStd_MapOfTransient^ theMapToFill)
{
  return (*((Handle_AIS2D_LocalContext*)nativeHandle))->DisplayedObjects(*((TColStd_MapOfTransient*)theMapToFill->Handle));
}

 System::Boolean OCAIS2D_LocalContext::IsDisplayed(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->IsDisplayed(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 System::Boolean OCAIS2D_LocalContext::IsDisplayed(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer aMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->IsDisplayed(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), aMode));
}

 void OCAIS2D_LocalContext::Unhighlight(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->Unhighlight(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle));
}

 System::Boolean OCAIS2D_LocalContext::IsHighlight(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->IsHighlight(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 System::Boolean OCAIS2D_LocalContext::IsHighlight(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean& WithColor, OCQuantity_NameOfColor& HiCol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->IsHighlight(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), (Standard_Boolean&)(WithColor), (Quantity_NameOfColor&)HiCol));
}

 System::Boolean OCAIS2D_LocalContext::IsIn(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->IsIn(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 void OCAIS2D_LocalContext::SubIntensityOn(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->SubIntensityOn(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle));
}

 void OCAIS2D_LocalContext::SubIntensityOff(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->SubIntensityOff(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle));
}

 System::Boolean OCAIS2D_LocalContext::UnhighLastDetect(OCNaroWrappers::OCV2d_View^ aView)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_LocalContext*)nativeHandle))->UnhighLastDetect(*((Handle_V2d_View*)aView->Handle)));
}

 OCAIS2D_StatusOfDetection OCAIS2D_LocalContext::MoveTo(Standard_Integer Xpix, Standard_Integer Ypix, OCNaroWrappers::OCV2d_View^ aView)
{
  return (OCAIS2D_StatusOfDetection)((*((Handle_AIS2D_LocalContext*)nativeHandle))->MoveTo(Xpix, Ypix, *((Handle_V2d_View*)aView->Handle)));
}

 OCAIS2D_StatusOfPick OCAIS2D_LocalContext::Select(System::Boolean UpdateVwr)
{
  return (OCAIS2D_StatusOfPick)((*((Handle_AIS2D_LocalContext*)nativeHandle))->Select(OCConverter::BooleanToStandardBoolean(UpdateVwr)));
}

 OCAIS2D_StatusOfPick OCAIS2D_LocalContext::ShiftSelect(System::Boolean UpdateVwr)
{
  return (OCAIS2D_StatusOfPick)((*((Handle_AIS2D_LocalContext*)nativeHandle))->ShiftSelect(OCConverter::BooleanToStandardBoolean(UpdateVwr)));
}

 void OCAIS2D_LocalContext::ClearSelected(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_LocalContext*)nativeHandle))->ClearSelected(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}


