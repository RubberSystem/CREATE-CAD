// File generated by CPPExt (MPV)
//
#ifndef _BRepBuilderAPI_GTransform_OCWrappers_HeaderFile
#define _BRepBuilderAPI_GTransform_OCWrappers_HeaderFile

// include native header
#include <BRepBuilderAPI_GTransform.hxx>
#include "../Converter.h"

#include "BRepBuilderAPI_ModifyShape.h"

#include "../gp/gp_GTrsf.h"
#include "BRepBuilderAPI_Collect.h"
#include "BRepBuilderAPI_ModifyShape.h"


namespace OCNaroWrappers
{

ref class OCgp_GTrsf;
ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;


//! Geometric transformation on a shape. <br>
//! The transformation to be applied is defined as a gp_GTrsf <br>
//! transformation. It may be: <br>
//! -      a transformation equivalent to a gp_Trsf transformation, the <br>
//!    most common case: you should , however, use a BRepAPI_Transform <br>
//!    object to perform this kind of transformation; or <br>
//! -      an affinity, or <br>
//! -      more generally, any type of point transformation which may <br>
//!  be defined by a three row, four column matrix of transformation. <br>
//! In the last two cases, the underlying geometry of the <br>
//! following shapes may change: <br>
//! -      a curve which supports an edge of the shape, or <br>
//! -      a surface which supports a face of the shape; <br>
//! For example, a circle may be transformed into an ellipse when <br>
//! applying an affinity transformation. <br>
//! The transformation is applied to: <br>
//! -      all the curves which support edges of the shape, and <br>
//! -      all the surfaces which support faces of the shape. <br>
//! A GTransform object provides a framework for: <br>
//! -      defining the geometric transformation to be applied, <br>
//! -      implementing the transformation algorithm, and <br>
//! -      consulting the result. <br>
public ref class OCBRepBuilderAPI_GTransform  : public OCBRepBuilderAPI_ModifyShape {

protected:
  // dummy constructor;
  OCBRepBuilderAPI_GTransform(OCDummy^) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBuilderAPI_GTransform(BRepBuilderAPI_GTransform* nativeHandle);

// Methods PUBLIC

//! Constructs a framework for applying the geometric <br>
//! transformation T to a shape. Use the function <br>
//! Perform to define the shape to transform. <br>
OCBRepBuilderAPI_GTransform(OCNaroWrappers::OCgp_GTrsf^ T);

//! Constructs a framework for applying the geometric <br>
//! transformation T to a shape, and applies it to the shape S. <br>
//! -   If the transformation T is direct and isometric (i.e. if <br>
//!   the determinant of the vectorial part of T is equal to <br>
//!   1.), and if Copy equals false (default value), the <br>
//!   resulting shape is the same as the original but with <br>
//!   a new location assigned to it. <br>
//! -   In all other cases, the transformation is applied to <br>
//!   a duplicate of S. <br>
//! Use the function Shape to access the result. <br>
//! Note: the constructed framework can be reused to <br>
//! apply the same geometric transformation to other <br>
//! shapes: just specify them with the function Perform. <br>
OCBRepBuilderAPI_GTransform(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_GTrsf^ T, System::Boolean Copy);

//! Applies the geometric transformation defined at the <br>
//! time of construction of this framework to the shape S. <br>
//! -   If the transformation T is direct and isometric (i.e. if <br>
//!   the determinant of the vectorial part of T is equal to <br>
//!   1.), and if Copy equals false (default value), the <br>
//!   resulting shape is the same as the original but with <br>
//!   a new location assigned to it. <br>
//! -   In all other cases, the transformation is applied to a duplicate of S. <br>
//!   Use the function Shape to access the result. <br>
//! Note: this framework can be reused to apply the same <br>
//! geometric transformation to other shapes: just specify <br>
//! them by calling the function Perform again. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean Copy) ;

//! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Modified(OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Returns the modified shape corresponding to <S>. <br>
virtual /*instead*/  OCTopoDS_Shape^ ModifiedShape(OCNaroWrappers::OCTopoDS_Shape^ S) override;

~OCBRepBuilderAPI_GTransform()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif