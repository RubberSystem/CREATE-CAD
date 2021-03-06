// File generated by CPPExt (Transient)
//
#ifndef _TransferBRep_OrientedShapeMapper_OCWrappers_HeaderFile
#define _TransferBRep_OrientedShapeMapper_OCWrappers_HeaderFile

// include the wrapped class
#include <TransferBRep_OrientedShapeMapper.hxx>
#include "../Converter.h"

#include "../Transfer/Transfer_Finder.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_OrientedShapeMapHasher;
ref class OCTransferBRep_ShapeInfo;
ref class OCTransfer_Finder;
ref class OCStandard_Type;



public ref class OCTransferBRep_OrientedShapeMapper : OCTransfer_Finder {

protected:
  // dummy constructor;
  OCTransferBRep_OrientedShapeMapper(OCDummy^) : OCTransfer_Finder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransferBRep_OrientedShapeMapper(Handle(TransferBRep_OrientedShapeMapper)* nativeHandle);

// Methods PUBLIC


OCTransferBRep_OrientedShapeMapper(OCNaroWrappers::OCTopoDS_Shape^ akey);


 /*instead*/  OCTopoDS_Shape^ Value() ;


 /*instead*/  System::Boolean Equates(OCNaroWrappers::OCTransfer_Finder^ other) ;


virtual /*instead*/  OCStandard_Type^ ValueType() override;


virtual /*instead*/  System::String^ ValueTypeName() override;

~OCTransferBRep_OrientedShapeMapper()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
