// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SelectRootComps_OCWrappers_HeaderFile
#define _IFSelect_SelectRootComps_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SelectRootComps.hxx>
#include "../Converter.h"

#include "IFSelect_SelectExtract.h"



namespace OCNaroWrappers
{

ref class OCInterface_EntityIterator;
ref class OCInterface_Graph;
ref class OCStandard_Transient;
ref class OCInterface_InterfaceModel;
ref class OCTCollection_AsciiString;


//! A SelectRootComps sorts the Entities which are part of Strong <br>
//!           Componants, local roots of a set of Entities : they can be <br>
//!           Single Componants (containing one Entity) or Cycles <br>
//!           This class gives a more secure result than SelectRoots (which <br>
//!           considers only Single Componants) but is longer to work : it <br>
//!           can be used when there can be or there are cycles in a Model <br>
//!           For each cycle, one Entity is given arbitrarily <br>
//!           Reject works as for SelectRoots : Strong Componants defined in <br>
//!           the input list which are not local roots are given <br>
public ref class OCIFSelect_SelectRootComps : OCIFSelect_SelectExtract {

protected:
  // dummy constructor;
  OCIFSelect_SelectRootComps(OCDummy^) : OCIFSelect_SelectExtract((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SelectRootComps(Handle(IFSelect_SelectRootComps)* nativeHandle);

// Methods PUBLIC

//! Creates a SelectRootComps <br>
OCIFSelect_SelectRootComps();

//! Returns the list of local root strong componants, by one <br>
//!           Entity par componant. It is redefined for a purpose of <br>
//!           effeciency : calling a Sort routine for each Entity would <br>
//!           cost more ressource than to work in once using a Map <br>
//!           RootResult takes in account the Direct status <br>
virtual /*instead*/  OCInterface_EntityIterator^ RootResult(OCNaroWrappers::OCInterface_Graph^ G) override;

//! Returns always True, because RootResult has done work <br>
 /*instead*/  System::Boolean Sort(Standard_Integer rank, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Returns a text defining the criterium : "Local Root Componants" <br>
 /*instead*/  OCTCollection_AsciiString^ ExtractLabel() ;

~OCIFSelect_SelectRootComps()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif