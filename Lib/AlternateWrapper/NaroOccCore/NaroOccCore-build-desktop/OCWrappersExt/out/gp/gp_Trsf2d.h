// File generated by CPPExt (MPV)
//
#ifndef _gp_Trsf2d_OCWrappers_HeaderFile
#define _gp_Trsf2d_OCWrappers_HeaderFile

// include native header
#include <gp_Trsf2d.hxx>
#include "../Converter.h"


#include "gp_TrsfForm.h"
#include "gp_Mat2d.h"
#include "gp_XY.h"
#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCgp_GTrsf2d;
ref class OCgp_Trsf;
ref class OCgp_Pnt2d;
ref class OCgp_Ax2d;
ref class OCgp_Vec2d;
ref class OCgp_XY;
ref class OCgp_Mat2d;



//!  Defines a non-persistent transformation in 2D space. <br>
//!  The following transformations are implemented : <br>
//!  . Translation, Rotation, Scale <br>
//!  . Symmetry with respect to a point and a line. <br>
//!  Complex transformations can be obtained by combining the <br>
//!  previous elementary transformations using the method Multiply. <br>
//!  The transformations can be represented as follow : <br>
//! <br>
//!       V1   V2   T       XY        XY <br>
//!    | a11  a12  a13 |   | x |     | x'| <br>
//!    | a21  a22  a23 |   | y |     | y'| <br>
//!    |  0    0    1  |   | 1 |     | 1 | <br>
public ref class OCgp_Trsf2d  {

protected:
  gp_Trsf2d* nativeHandle;
  OCgp_Trsf2d(OCDummy^) {};

public:
  property gp_Trsf2d* Handle
  {
    gp_Trsf2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_Trsf2d(gp_Trsf2d* nativeHandle);

// Methods PUBLIC

//! Returns identity transformation. <br>
OCgp_Trsf2d();

//! Creates a 2d transformation in the XY plane from a <br>
//!          3d transformation . <br>
OCgp_Trsf2d(OCNaroWrappers::OCgp_Trsf^ T);


//!  Changes the transformation into a symmetrical transformation. <br>
//!  P is the center of the symmetry. <br>
 /*instead*/  void SetMirror(OCNaroWrappers::OCgp_Pnt2d^ P) ;


//!  Changes the transformation into a symmetrical transformation. <br>
//!  A is the center of the axial symmetry. <br>
 /*instead*/  void SetMirror(OCNaroWrappers::OCgp_Ax2d^ A) ;


//!  Changes the transformation into a rotation. <br>
//!  P is the rotation's center and Ang is the angular value of the <br>
//!  rotation in radian. <br>
 /*instead*/  void SetRotation(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang) ;


//!  Changes the transformation into a scale. <br>
//!  P is the center of the scale and S is the scaling value. <br>
 /*instead*/  void SetScale(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S) ;


//!  Changes a transformation allowing passage from the coordinate <br>
//!  system "FromSystem1" to the coordinate system "ToSystem2". <br>
 /*instead*/  void SetTransformation(OCNaroWrappers::OCgp_Ax2d^ FromSystem1, OCNaroWrappers::OCgp_Ax2d^ ToSystem2) ;


//!  Changes the transformation allowing passage from the basic <br>
//!  coordinate system <br>
//!  {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.)} <br>
//!  to the local coordinate system defined with the Ax2d ToSystem. <br>
 /*instead*/  void SetTransformation(OCNaroWrappers::OCgp_Ax2d^ ToSystem) ;


//!  Changes the transformation into a translation. <br>
//!  V is the vector of the translation. <br>
 /*instead*/  void SetTranslation(OCNaroWrappers::OCgp_Vec2d^ V) ;


//!  Makes the transformation into a translation from <br>
//!  the point P1 to the point P2. <br>
 /*instead*/  void SetTranslation(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) ;

//!  Replaces the translation vector with V. <br>
 /*instead*/  void SetTranslationPart(OCNaroWrappers::OCgp_Vec2d^ V) ;

//!  Modifies the scale factor. <br>
 /*instead*/  void SetScaleFactor(Standard_Real S) ;

//! Returns true if the determinant of the vectorial part of <br>
//! this transformation is negative.. <br>
 /*instead*/  System::Boolean IsNegative() ;


//!  Returns the nature of the transformation. It can be  an <br>
//! identity transformation, a rotation, a translation, a mirror <br>
//! (relative to a point or an axis), a scaling transformation, <br>
//! or a compound transformation. <br>
 /*instead*/  OCgp_TrsfForm Form() ;

//! Returns the scale factor. <br>
 /*instead*/  Standard_Real ScaleFactor() ;


//!  Returns the translation part of the transformation's matrix <br>
 /*instead*/  OCgp_XY^ TranslationPart() ;


//!  Returns the vectorial part of the transformation. It is a <br>
//!  2*2 matrix which includes the scale factor. <br>
 /*instead*/  OCgp_Mat2d^ VectorialPart() ;


//!  Returns the homogeneous vectorial part of the transformation. <br>
//!  It is a 2*2 matrix which doesn't include the scale factor. <br>
//!  The coefficients of this matrix must be multiplied by the <br>
//!  scale factor to obtain the coefficients of the transformation. <br>
 /*instead*/  OCgp_Mat2d^ HVectorialPart() ;


//!  Returns the angle corresponding to the rotational component <br>
//!  of the transformation matrix (operation opposite to SetRotation()). <br>
 /*instead*/  Standard_Real RotationPart() ;


//!  Returns the coefficients of the transformation's matrix. <br>
//!  It is a 2 rows * 3 columns matrix. <br>
//! Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3 <br>
 /*instead*/  Standard_Real Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  void Invert() ;


//!  Computes the reverse transformation. <br>
//!  Raises an exception if the matrix of the transformation <br>
//!  is not inversible, it means that the scale factor is lower <br>
//!  or equal to Resolution from package gp. <br>
 /*instead*/  OCgp_Trsf2d^ Inverted() ;


 /*instead*/  OCgp_Trsf2d^ Multiplied(OCNaroWrappers::OCgp_Trsf2d^ T) ;


//!  Computes the transformation composed from <T> and  <me>. <br>
//!  In a C++ implementation you can also write Tcomposed = <me> * T. <br>
//!  Example : <br>
//!      Trsf2d T1, T2, Tcomp; ............... <br>
//!      //composition : <br>
//!        Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1) <br>
//!      // transformation of a point <br>
//!        Pnt2d P1(10.,3.,4.); <br>
//!        Pnt2d P2 = P1.Transformed(Tcomp);  //using Tcomp <br>
//!        Pnt2d P3 = P1.Transformed(T1);     //using T1 then T2 <br>
//!        P3.Transform(T2);                  // P3 = P2 !!! <br>
 /*instead*/  void Multiply(OCNaroWrappers::OCgp_Trsf2d^ T) ;


//!  Computes the transformation composed from <me> and T. <br>
//!  <me> = T * <me> <br>
 /*instead*/  void PreMultiply(OCNaroWrappers::OCgp_Trsf2d^ T) ;


 /*instead*/  void Power(Standard_Integer N) ;


//!  Computes the following composition of transformations <br>
//!  <me> * <me> * .......* <me>,  N time. <br>
//!  if N = 0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse(). <br>
 /*instead*/  OCgp_Trsf2d^ Powered(Standard_Integer N) ;


 /*instead*/  void Transforms(Standard_Real& X, Standard_Real& Y) ;

//! Transforms  a doublet XY with a Trsf2d <br>
 /*instead*/  void Transforms(OCNaroWrappers::OCgp_XY^ Coord) ;

~OCgp_Trsf2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif