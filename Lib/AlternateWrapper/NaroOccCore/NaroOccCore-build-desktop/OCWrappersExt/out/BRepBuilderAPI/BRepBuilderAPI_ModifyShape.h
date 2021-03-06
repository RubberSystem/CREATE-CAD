// File generated by CPPExt (MPV)
//
#ifndef _BRepBuilderAPI_ModifyShape_OCWrappers_HeaderFile
#define _BRepBuilderAPI_ModifyShape_OCWrappers_HeaderFile

// include native header
#include <BRepBuilderAPI_ModifyShape.hxx>
#include "../Converter.h"

#include "BRepBuilderAPI_MakeShape.h"

#include "../BRepTools/BRepTools_Modifier.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepBuilderAPI_MakeShape.h"


namespace OCNaroWrappers
{

ref class OCBRepTools_Modification;
ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;


//! Implements   the  methods   of MakeShape for   the <br>
//!          constant  topology modifications.  The methods are <br>
//!          implemented  when the modification uses a Modifier <br>
//!          from BRepTools. Some of  them have to be redefined <br>
//!          if  the  modification is  implemented with another <br>
//!          tool (see Transform from BRepBuilderAPI for example). <br>
//! The BRepBuilderAPI package provides the following <br>
//! frameworks to perform modifications of this sort: <br>
//! -   BRepBuilderAPI_Copy to produce the copy of a shape, <br>
//! -   BRepBuilderAPI_Transform and <br>
//!   BRepBuilderAPI_GTransform to apply a geometric <br>
//!   transformation to a shape, <br>
//! -   BRepBuilderAPI_NurbsConvert to convert the <br>
//!   whole geometry of a shape into NURBS geometry, <br>
//! -   BRepOffsetAPI_DraftAngle to build a tapered shape. <br>
public ref class OCBRepBuilderAPI_ModifyShape  : public OCBRepBuilderAPI_MakeShape {

protected:
  // dummy constructor;
  OCBRepBuilderAPI_ModifyShape(OCDummy^) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBuilderAPI_ModifyShape(BRepBuilderAPI_ModifyShape* nativeHandle);

// Methods PUBLIC

//! Empty constructor. <br>
OCBRepBuilderAPI_ModifyShape();

//! Initializes the modifier with  the Shape  <S>, and <br>
//!          set the field <myInitialShape> to <S>. <br>
OCBRepBuilderAPI_ModifyShape(OCNaroWrappers::OCTopoDS_Shape^ S);

//! Set the field <myModification> with <M>. <br>
OCBRepBuilderAPI_ModifyShape(OCNaroWrappers::OCBRepTools_Modification^ M);

//! Initializes the modifier with  the Shape  <S>, and <br>
//!          set the field <myInitialShape> to <S>, and set the <br>
//!          field <myModification> with  <M>, the performs the <br>
//!          modification. <br>
OCBRepBuilderAPI_ModifyShape(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCBRepTools_Modification^ M);

//! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Modified(OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Returns the modified shape corresponding to <S>. <br>
//! S can correspond to the entire initial shape or to its subshape. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if S is not the initial shape or <br>
//! a subshape of the initial shape to which the <br>
//! transformation has been applied. Raises NoSuchObject from Standard <br>
//! if S is not the initial shape or a sub-shape <br>
//! of the initial shape. <br>
virtual /*instead*/  OCTopoDS_Shape^ ModifiedShape(OCNaroWrappers::OCTopoDS_Shape^ S) ;

~OCBRepBuilderAPI_ModifyShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
