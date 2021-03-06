// File generated by CPPExt (Transient)
//
#ifndef _Interface_GTool_OCWrappers_HeaderFile
#define _Interface_GTool_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_GTool.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Interface_GeneralLib.h"
#include "Interface_DataMapOfTransientInteger.h"
#include "../TColStd/TColStd_IndexedDataMapOfTransientTransient.h"


namespace OCNaroWrappers
{

ref class OCInterface_Protocol;
ref class OCInterface_SignType;
ref class OCStandard_Transient;
ref class OCInterface_InterfaceModel;
ref class OCInterface_GeneralLib;
ref class OCInterface_GeneralModule;


//! GTool - General Tool for a Model <br>
//!           Provides the functions performed by Protocol/GeneralModule for <br>
//!           entities of a Model, and recorded in a GeneralLib <br>
//!           Optimized : once an entity has been queried, the GeneralLib is <br>
//!           not longer queried <br>
//!           Shareable between several users : as a Handle <br>
public ref class OCInterface_GTool : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCInterface_GTool(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_GTool(Handle(Interface_GTool)* nativeHandle);

// Methods PUBLIC

//! Creates an empty, not set, GTool <br>
OCInterface_GTool();

//! Creates a GTool from a Protocol <br>
//!           Optional starting count of entities <br>
OCInterface_GTool(OCNaroWrappers::OCInterface_Protocol^ proto, Standard_Integer nbent);

//! Sets a new SignType <br>
 /*instead*/  void SetSignType(OCNaroWrappers::OCInterface_SignType^ sign) ;

//! Returns the SignType. Can be null <br>
 /*instead*/  OCInterface_SignType^ SignType() ;

//! Returns the Signature for a Transient Object in a Model <br>
//!           It calls SignType to do that <br>
//!           If SignType is not defined, return ClassName of <ent> <br>
 /*instead*/  System::String^ SignValue(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Returns the Name of the SignType, or "Class Name" <br>
 /*instead*/  System::String^ SignName() ;

//! Sets a new Protocol <br>
//!           if <enforce> is False and the new Protocol equates the old one <br>
//!           then nothing is done <br>
 /*instead*/  void SetProtocol(OCNaroWrappers::OCInterface_Protocol^ proto, System::Boolean enforce) ;

//! Returns the Protocol.  Warning : it can be Null <br>
 /*instead*/  OCInterface_Protocol^ Protocol() ;

//! Returns the GeneralLib itself <br>
 /*instead*/  OCInterface_GeneralLib^ Lib() ;

//! Reservates maps for a count of entities <br>
//!           <enforce> False : minimum count <br>
//!           <enforce> True  : clears former reservations <br>
//!           Does not clear the maps <br>
 /*instead*/  void Reservate(Standard_Integer nb, System::Boolean enforce) ;

//! Clears the maps which record, for each already recorded entity <br>
//!           its Module and Case Number <br>
 /*instead*/  void ClearEntities() ;

//! Selects for an entity, its Module and Case Number <br>
//!           It is optimised : once done for each entity, the result is <br>
//!           mapped and the GeneralLib is not longer queried <br>
//!           <enforce> True overpasses this optimisation <br>
 /*instead*/  System::Boolean Select(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_GeneralModule^ gmod, Standard_Integer& CN, System::Boolean enforce) ;

~OCInterface_GTool()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
