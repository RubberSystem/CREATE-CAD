// File generated by CPPExt (MPV)
//
#ifndef _Interface_Graph_OCWrappers_HeaderFile
#define _Interface_Graph_OCWrappers_HeaderFile

// include native header
#include <Interface_Graph.hxx>
#include "../Converter.h"


#include "../TCollection/TCollection_AsciiString.h"
#include "Interface_BitMap.h"


namespace OCNaroWrappers
{

ref class OCInterface_InterfaceModel;
ref class OCTColStd_HArray1OfInteger;
ref class OCTColStd_HArray1OfListOfInteger;
ref class OCInterface_GeneralLib;
ref class OCInterface_Protocol;
ref class OCInterface_GTool;
ref class OCStandard_Transient;
ref class OCInterface_BitMap;
ref class OCInterface_EntityIterator;
ref class OCTColStd_HSequenceOfTransient;
ref class OCStandard_Type;
ref class OCTCollection_HAsciiString;


//! Gives basic data structure for operating and storing <br>
//!           graph results (usage is normally internal) <br>
//!           Entities are Mapped according their Number in the Model <br>
//! <br>
//!           Each Entity from the Model can be known as "Present" or <br>
//!           not; if it is, it is Mapped with a Status : an Integer <br>
//!           which can be used according to needs of each algorithm <br>
//!           In addition, the Graph brings a BitMap which can be used <br>
//!           by any caller <br>
//! <br>
//!           Also, it is bound with two lists : a list of Shared <br>
//!           Entities (in fact, their Numbers in the Model) which is <br>
//!           filled by a ShareTool, and a list of Sharing Entities, <br>
//!           computed by deduction from the Shared Lists <br>
//! <br>
//!           Moreover, it is possible to redefine the list of Entities <br>
//!           Shared by an Entity (instead of standard answer by general <br>
//!           service Shareds) : this new list can be empty; it can <br>
//!           be changed or reset (i.e. to come back to standard answer) <br>
public ref class OCInterface_Graph  {

protected:
  Interface_Graph* nativeHandle;
  OCInterface_Graph(OCDummy^) {};

public:
  property Interface_Graph* Handle
  {
    Interface_Graph* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCInterface_Graph(Interface_Graph* nativeHandle);

// Methods PUBLIC

//! Creates an empty graph, ready to receive Entities from amodel <br>
//!           Note that this way of Creation allows <me> to verify that <br>
//!           Entities to work with are contained in <amodel> <br>
//!           Basic Shared and Sharing lists are obtained from a General <br>
//!           Services Library, given directly as an argument <br>
OCInterface_Graph(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GeneralLib^ lib, System::Boolean theModeStats);

//! Same as above, but the Library is defined through a Protocol <br>
OCInterface_Graph(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_Protocol^ protocol, System::Boolean theModeStats);

//! Same as above, but the Library is defined through a Protocol <br>
OCInterface_Graph(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GTool^ gtool, System::Boolean theModeStats);

//! Same a above but works with the Protocol recorded in the Model <br>
OCInterface_Graph(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, System::Boolean theModeStats);

//! Creates a Graph from another one, getting all its data <br>
//!           Remark that status are copied from <agraph>, but the other <br>
//!           lists (sharing/shared) are copied only if <copied> = True <br>
OCInterface_Graph(OCNaroWrappers::OCInterface_Graph^ agraph, System::Boolean copied);

//! Erases data, making graph ready to rebegin from void <br>
//!           (also resets Shared lists redefinitions) <br>
 /*instead*/  void Reset() ;

//! Erases Status (Values and Flags of Presence), making graph <br>
//!           ready to rebegin from void. Does not concerns Shared lists <br>
 /*instead*/  void ResetStatus() ;

//! Returns size (max nb of entities, i.e. Model's nb of entities) <br>
 /*instead*/  Standard_Integer Size() ;

//! Returns size of array of statuses <br>
 /*instead*/  Standard_Integer NbStatuses() ;

//! Returns the Number of the entity in the Map, computed at <br>
//!           creation time (Entities loaded from the Model) <br>
//!           Returns 0 if <ent> not contained by Model used to create <me> <br>
//!           (that is, <ent> is unknown from <me>) <br>
 /*instead*/  Standard_Integer EntityNumber(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns True if an Entity is noted as present in the graph <br>
//!           (See methods Get... which determine this status) <br>
//!           Returns False if <num> is out of range too <br>
 /*instead*/  System::Boolean IsPresent(Standard_Integer num) ;

//! Same as above but directly on an Entity <ent> : if it is not <br>
//!           contained in the Model, returns False. Else calls <br>
//!            IsPresent(num)  with <num> given by EntityNumber <br>
 /*instead*/  System::Boolean IsPresent(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns mapped Entity given its no (if it is present) <br>
 /*instead*/  OCStandard_Transient^ Entity(Standard_Integer num) ;

//! Returns Status associated to a numero (only to read it) <br>
 /*instead*/  Standard_Integer Status(Standard_Integer num) ;

//! Modifies Status associated to a numero <br>
 /*instead*/  void SetStatus(Standard_Integer num, Standard_Integer stat) ;

//! Clears Entity and sets Status to 0, for a numero <br>
 /*instead*/  void RemoveItem(Standard_Integer num) ;

//! Changes all status which value is oldstat to new value newstat <br>
 /*instead*/  void ChangeStatus(Standard_Integer oldstat, Standard_Integer newstat) ;

//! Removes all items of which status has a given value stat <br>
 /*instead*/  void RemoveStatus(Standard_Integer stat) ;

//! Returns the Bit Map in order to read or edit flag values <br>
 /*instead*/  OCInterface_BitMap^ BitMap() ;

//! Returns the Bit Map in order to edit it (add new flags) <br>
 /*instead*/  OCInterface_BitMap^ CBitMap() ;

//! Returns the Model with which this Graph was created <br>
 /*instead*/  OCInterface_InterfaceModel^ Model() ;

//! Loads Graph with all Entities contained in the Model <br>
 /*instead*/  void GetFromModel() ;

//! Gets an Entity, plus its shared ones (at every level) if <br>
//!           "shared" is True. New items are set to status "newstat" <br>
//!           Items already present in graph remain unchanged <br>
//!           Of course, redefinitions of Shared lists are taken into <br>
//!           account if there are some <br>
 /*instead*/  void GetFromEntity(OCNaroWrappers::OCStandard_Transient^ ent, System::Boolean shared, Standard_Integer newstat) ;

//! Gets an Entity, plus its shared ones (at every level) if <br>
//!           "shared" is True. New items are set to status "newstat". <br>
//!           Items already present in graph are processed as follows : <br>
//!           - if they already have status "newstat", they remain unchanged <br>
//!           - if they have another status, this one is modified : <br>
//!             if cumul is True,  to former status + overlapstat (cumul) <br>
//!             if cumul is False, to overlapstat (enforce) <br>
 /*instead*/  void GetFromEntity(OCNaroWrappers::OCStandard_Transient^ ent, System::Boolean shared, Standard_Integer newstat, Standard_Integer overlapstat, System::Boolean cumul) ;

//! Gets Entities given by an EntityIterator. Entities which were <br>
//!           not yet present in the graph are mapped with status "newstat" <br>
//!           Entities already present remain unchanged <br>
 /*instead*/  void GetFromIter(OCNaroWrappers::OCInterface_EntityIterator^ iter, Standard_Integer newstat) ;

//! Gets Entities given by an EntityIterator and distinguishes <br>
//!           those already present in the Graph : <br>
//!           - new entities added to the Graph with status "newstst" <br>
//!           - entities already present with status = "newstat" remain <br>
//!             unchanged <br>
//!           - entities already present with status different form <br>
//!             "newstat" have their status modified : <br>
//!             if cumul is True,  to former status + overlapstat (cumul) <br>
//!             if cumul is False, to overlapstat (enforce) <br>
//!             (Note : works as GetEntity, shared = False, for each entity) <br>
 /*instead*/  void GetFromIter(OCNaroWrappers::OCInterface_EntityIterator^ iter, Standard_Integer newstat, Standard_Integer overlapstat, System::Boolean cumul) ;

//! Gets all present items from another graph <br>
 /*instead*/  void GetFromGraph(OCNaroWrappers::OCInterface_Graph^ agraph) ;

//! Gets items from another graph which have a specific Status <br>
 /*instead*/  void GetFromGraph(OCNaroWrappers::OCInterface_Graph^ agraph, Standard_Integer stat) ;

//! Returns True if <ent> or the list of entities shared by <ent> <br>
//!           (not redefined) contains items unknown from this Graph <br>
//!           Remark : apart from the status HasShareError, these items <br>
//!           are ignored <br>
 /*instead*/  System::Boolean HasShareErrors(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns the sequence of Entities Shared by an Entity <br>
 /*instead*/  OCTColStd_HSequenceOfTransient^ GetShareds(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns the list of Entities Shared by an Entity, as recorded <br>
//!           by the Graph. That is, by default Basic Shared List, else it <br>
//!           can be redefined by methods SetShare, SetNoShare ... see below <br>
 /*instead*/  OCInterface_EntityIterator^ Shareds(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns the list of Entities which Share an Entity, computed <br>
//!           from the Basic or Redefined Shared Lists <br>
 /*instead*/  OCInterface_EntityIterator^ Sharings(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns the sequence of Entities Sharings by an Entity <br>
 /*instead*/  OCTColStd_HSequenceOfTransient^ GetSharings(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns the list of sharings entities, AT ANY LEVEL, which are <br>
//!           kind of a given type. A sharing entity kind of this type <br>
//!           ends the exploration of its branch <br>
 /*instead*/  OCInterface_EntityIterator^ TypedSharings(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCStandard_Type^ type) ;

//! Returns the Entities which are not Shared (their Sharing List <br>
//!           is empty) in the Model <br>
 /*instead*/  OCInterface_EntityIterator^ RootEntities() ;

//! Determines the name attached to an entity, by using the <br>
//!           general service Name in GeneralModule <br>
//!           Returns a null handle if no name could be computed or if <br>
//!           the entity is not in the model <br>
 /*instead*/  OCTCollection_HAsciiString^ Name(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Returns the Table of Sharing lists. Used to Create <br>
//!           another Graph from <me> <br>
 /*instead*/  OCTColStd_HArray1OfListOfInteger^ SharingTable() ;

//! Returns mode resposible for computation of statuses; <br>
 /*instead*/  System::Boolean ModeStat() ;

~OCInterface_Graph()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif