// File generated by CPPExt (MPV)
//
#ifndef _BRepOffsetAPI_MakePipe_OCWrappers_HeaderFile
#define _BRepOffsetAPI_MakePipe_OCWrappers_HeaderFile

// include native header
#include <BRepOffsetAPI_MakePipe.hxx>
#include "../Converter.h"

#include "../BRepPrimAPI/BRepPrimAPI_MakeSweep.h"

#include "../BRepFill/BRepFill_Pipe.h"
#include "../BRepPrimAPI/BRepPrimAPI_MakeSweep.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Wire;
ref class OCTopoDS_Shape;
ref class OCBRepFill_Pipe;


//! Describes functions to build pipes. <br>
//! A pipe is built a basis shape (called the profile) along <br>
//! a wire (called the spine) by sweeping. <br>
//! The profile must not contain solids. <br>
//! A MakePipe object provides a framework for: <br>
//! - defining the construction of a pipe, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the result. <br>
//! Warning <br>
//! The MakePipe class implements pipe constructions <br>
//! with G1 continuous spines only. <br>
public ref class OCBRepOffsetAPI_MakePipe  : public OCBRepPrimAPI_MakeSweep {

protected:
  // dummy constructor;
  OCBRepOffsetAPI_MakePipe(OCDummy^) : OCBRepPrimAPI_MakeSweep((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepOffsetAPI_MakePipe(BRepOffsetAPI_MakePipe* nativeHandle);

// Methods PUBLIC

//! Constructs a pipe by sweeping the shape Profile along <br>
//! the wire Spine.The angle made by the spine with the profile is <br>
//! maintained along the length of the pipe. <br>
//! Warning <br>
//! Spine must be G1 continuous; that is, on the connection <br>
//! vertex of two edges of the wire, the tangent vectors on <br>
//! the left and on the right must have the same direction, <br>
//! though not necessarily the same magnitude. <br>
//! Exceptions <br>
//! Standard_DomainError if the profile is a solid or a <br>
//! composite solid. <br>
OCBRepOffsetAPI_MakePipe(OCNaroWrappers::OCTopoDS_Wire^ Spine, OCNaroWrappers::OCTopoDS_Shape^ Profile);


 /*instead*/  OCBRepFill_Pipe^ Pipe() ;

//! Builds the resulting shape (redefined from MakeShape). <br>
virtual /*instead*/  void Build() override;

//! Returns the  TopoDS  Shape of the bottom of the prism. <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape() ;

//! Returns the TopoDS Shape of the top of the prism. <br>
 /*instead*/  OCTopoDS_Shape^ LastShape() ;


 /*instead*/  OCTopoDS_Shape^ Generated(OCNaroWrappers::OCTopoDS_Shape^ SSpine, OCNaroWrappers::OCTopoDS_Shape^ SProfile) ;

~OCBRepOffsetAPI_MakePipe()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
