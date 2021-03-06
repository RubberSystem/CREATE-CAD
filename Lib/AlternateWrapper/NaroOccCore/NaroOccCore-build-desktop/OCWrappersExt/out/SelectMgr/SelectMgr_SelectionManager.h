// File generated by CPPExt (Transient)
//
#ifndef _SelectMgr_SelectionManager_OCWrappers_HeaderFile
#define _SelectMgr_SelectionManager_OCWrappers_HeaderFile

// include the wrapped class
#include <SelectMgr_SelectionManager.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_MapOfTransient.h"
#include "SelectMgr_DataMapOfObjectSelectors.h"
#include "SelectMgr_TypeOfUpdate.h"


namespace OCNaroWrappers
{

ref class OCSelectMgr_ViewerSelector;
ref class OCSelectMgr_SelectableObject;
ref class OCTCollection_AsciiString;


//! A framework to manage selection from the point of <br>
//! view of viewer selectors. These can be added and <br>
//! removed, and selection modes can be activated and <br>
//! deactivated. In addition, objects may be known to all <br>
//! selectors or only to some. <br>
public ref class OCSelectMgr_SelectionManager : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCSelectMgr_SelectionManager(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_SelectionManager(Handle(SelectMgr_SelectionManager)* nativeHandle);

// Methods PUBLIC

//! Constructs an empty selection manager object. <br>
OCSelectMgr_SelectionManager();

//! Adds the viewer selector aSelector to this framework. <br>
 /*instead*/  void Add(OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;


 /*instead*/  void Remove(OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;


//! Returns true if this framework contains the viewer selector aSelector. <br>
 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;

//! Returns true if this framework contains the <br>
//! selectable object aSelectableObject. <br>
 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCSelectMgr_SelectableObject^ aSelectableObject) ;

//!  Loads and computes one  mode of <br>
//!        selection if  <aMode> notequal -1 ; <br>
//!         if  <anObject> already has a <br>
//!        selection with this mode, it's emptied and the sensitive <br>
//!        entities are computed  for this mode else one  Selection <br>
//!        is created with this mode before computing. <br>
 /*instead*/  void Load(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aMode) ;

//!   Local    object  available for <br>
//!        <aSelector> Only.  the sensitive entities for  selection <br>
//!        of mode <aMode> are computed if <aMode> not equal -1. <br>
//!        if <aMode> =-1 oc compute is done <br>
 /*instead*/  void Load(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector, Standard_Integer aMode) ;

//! removes the object from All the ViewerSelectors where it was; <br>
 /*instead*/  void Remove(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject) ;

//! removes the object from aSelector; <br>
 /*instead*/  void Remove(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;

//! Activates the selection mode aMode in a selector <br>
//! for the selectable object anObject. <br>
 /*instead*/  void Activate(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aMode, System::Boolean AutomaticProj) ;

//! Activates the selection mode aMode in the selector <br>
//! aSelector for the selectable object anObject. <br>
 /*instead*/  void Activate(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aMode, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector, System::Boolean AutomaticProj) ;

//! Deactivate all the activated modes in any <br>
//!          Selector for <anObject> <br>
 /*instead*/  void Deactivate(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject) ;

//! Deactivates the Mode <aMode> in every Selector where <br>
//!          it was activated <br>
 /*instead*/  void Deactivate(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aMode) ;

//! Deactivates the selection mode aMode in the <br>
//! selector aSelector for the selectable object anObject. <br>
 /*instead*/  void Deactivate(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aMode, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;

//! Deactivates all selection modes in the selector <br>
//!  aSelector for the selectable object anObject. <br>
 /*instead*/  void Deactivate(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;

//! Ensures that no object in the selector aSelector will be active. <br>
 /*instead*/  void Sleep(OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;

//! the objet is temporarily deactivated everywhere it was activated. <br>
 /*instead*/  void Sleep(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject) ;

//! Different from Deactivate; this method <br>
//!          deactivates the activated modes of an object, <br>
//!          but just for a time; when the Awake Method is called <br>
//!          the sleeping modes are reactivated. <br>
 /*instead*/  void Sleep(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector) ;

//! activates all the deactivated objects in a selector. <br>
 /*instead*/  void Awake(OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector, System::Boolean AutomaticProj) ;


 /*instead*/  void Awake(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, System::Boolean AutomaticProj) ;

//! activates all the deactivated modes <br>
//!          of an object in a selector <br>
 /*instead*/  void Awake(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector, System::Boolean AutomaticProj) ;

//! Returns true if the selection is active for the selectable object anObject. <br>
 /*instead*/  System::Boolean IsActivated(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject) ;

//! Returns true if the selection mode aMode is active for the selectable object anObject. <br>
 /*instead*/  System::Boolean IsActivated(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aMode) ;

//! Returns true if the selection mode aMode is active for the selectable <br>
//!          object anObject in the viewer selector aSelector. <br>
 /*instead*/  System::Boolean IsActivated(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector, Standard_Integer aMode) ;

//! computes Selections in <anIObj> if they are <br>
//!          activated in at least one Selector. <br>
//!          puts a recompute flag in each selection which is not active. <br>
//!          if <aMode>=-1 all the selection modes will have to be <br>
//!          recomputed. <br>
//!          if <ForceUpdate>  = True, all selections are recomputed, <br>
//!          even if they are not active. <br>
 /*instead*/  void RecomputeSelection(OCNaroWrappers::OCSelectMgr_SelectableObject^ anIObj, System::Boolean ForceUpdate, Standard_Integer aMode) ;

//! updates the selectionModes of <anObject> <br>
//!          According to <br>
//!          . the stored type of update in each selection <br>
//!          mode, <br>
//!          . the activation status of each selection mode <br>
//!          if <ForceUpdate> == True Recompute <br>
 /*instead*/  void Update(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, System::Boolean ForceUpdate) ;


 /*instead*/  void Update(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCNaroWrappers::OCSelectMgr_ViewerSelector^ aSelector, System::Boolean ForceUpdate) ;


 /*instead*/  void SetUpdateMode(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, OCSelectMgr_TypeOfUpdate aType) ;


 /*instead*/  void SetUpdateMode(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject, Standard_Integer aSelMode, OCSelectMgr_TypeOfUpdate aType) ;


 /*instead*/  OCTCollection_AsciiString^ Status() ;


 /*instead*/  OCTCollection_AsciiString^ Status(OCNaroWrappers::OCSelectMgr_SelectableObject^ anObject) ;

~OCSelectMgr_SelectionManager()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
