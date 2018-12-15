// File generated by CPPExt (Transient)
//
#ifndef _Law_BSpline_OCWrappers_HeaderFile
#define _Law_BSpline_OCWrappers_HeaderFile

// include the wrapped class
#include <Law_BSpline.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../GeomAbs/GeomAbs_BSplKnotDistribution.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfReal;
ref class OCTColStd_HArray1OfInteger;
ref class OCTColStd_Array1OfReal;
ref class OCTColStd_Array1OfInteger;


//! Definition of the 1D B_spline curve. <br>
//! <br>
//!         Uniform  or non-uniform <br>
//!         Rational or non-rational <br>
//!         Periodic or non-periodic <br>
//! <br>
//!  a b-spline curve is defined by : <br>
//! <br>
//!         The Degree (up to 25) <br>
//! <br>
//!         The Poles  (and the weights if it is rational) <br>
//! <br>
//!         The Knots and Multiplicities <br>
//! <br>
//!           The knot vector   is an  increasing  sequence  of <br>
//!           reals without  repetition. The multiplicities are <br>
//!           the repetition of the knots. <br>
//! <br>
//!           If the knots are regularly spaced (the difference <br>
//!           of two  consecutive  knots  is a   constant), the <br>
//!           knots repartition is : <br>
//! <br>
//!              - Uniform if all multiplicities are 1. <br>
//! <br>
//!              -  Quasi-uniform if  all multiplicities are  1 <br>
//!              but the first and the last which are Degree+1. <br>
//! <br>
//!              -   PiecewiseBezier if  all multiplicites  are <br>
//!              Degree but the   first and the  last which are <br>
//!              Degree+1. <br>
//! <br>
//!         The curve may be periodic. <br>
//! <br>
//!              On a periodic curve if there are k knots and p <br>
//!              poles. the period is knot(k) - knot(1) <br>
//! <br>
//!              the poles and knots are infinite vectors with : <br>
//! <br>
//!                knot(i+k) = knot(i) + period <br>
//! <br>
//!                pole(i+p) = pole(i) <br>
//! <br>
//! <br>
//! References : <br>
//!  . A survey of curve and surface methods in CADG Wolfgang BOHM <br>
//!    CAGD 1 (1984) <br>
//!  . On de Boor-like algorithms and blossoming Wolfgang BOEHM <br>
//!    cagd 5 (1988) <br>
//!  . Blossoming and knot insertion algorithms for B-spline curves <br>
//!    Ronald N. GOLDMAN <br>
//!  . Modelisation des surfaces en CAO, Henri GIAUME Peugeot SA <br>
//!  . Curves and Surfaces for Computer Aided Geometric Design, <br>
//!    a practical guide Gerald Farin <br>
public ref class OCLaw_BSpline : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCLaw_BSpline(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCLaw_BSpline(Handle(Law_BSpline)* nativeHandle);

// Methods PUBLIC

//!  Creates a  non-rational B_spline curve   on  the <br>
//!         basis <Knots, Multiplicities> of degree <Degree>. <br>
OCLaw_BSpline(OCNaroWrappers::OCTColStd_Array1OfReal^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Multiplicities, Standard_Integer Degree, System::Boolean Periodic);

//! Creates  a rational B_spline  curve  on the basis <br>
//!         <Knots, Multiplicities> of degree <Degree>. <br>
OCLaw_BSpline(OCNaroWrappers::OCTColStd_Array1OfReal^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights, OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Multiplicities, Standard_Integer Degree, System::Boolean Periodic);

//! Increase the degree to  <Degree>. Nothing is  done <br>
//!          if  <Degree>   is lower or  equal  to the  current <br>
//!          degree. <br>
 /*instead*/  void IncreaseDegree(Standard_Integer Degree) ;

//!Increases the multiplicity  of the knot <Index> to <br>
//!         <M>. <br>
//! <br>
//!         If   <M>   is   lower   or  equal   to  the current <br>
//!         multiplicity nothing is done. If <M> is higher than <br>
//!         the degree the degree is used. <br>//! If <Index> is not in [FirstUKnotIndex, LastUKnotIndex] <br>
 /*instead*/  void IncreaseMultiplicity(Standard_Integer Index, Standard_Integer M) ;

//!Increases  the  multiplicities   of  the knots  in <br>
//!         [I1,I2] to <M>. <br>
//! <br>
//!         For each knot if  <M>  is  lower  or equal  to  the <br>
//!         current multiplicity  nothing  is  done. If <M>  is <br>
//!         higher than the degree the degree is used. <br>//! If <I1,I2> are not in [FirstUKnotIndex, LastUKnotIndex] <br>
 /*instead*/  void IncreaseMultiplicity(Standard_Integer I1, Standard_Integer I2, Standard_Integer M) ;

//!Increment  the  multiplicities   of  the knots  in <br>
//!         [I1,I2] by <M>. <br>
//! <br>
//!         If <M> is not positive nithing is done. <br>
//! <br>
//!         For   each  knot   the resulting   multiplicity  is <br>
//!         limited to the Degree. <br>//! If <I1,I2> are not in [FirstUKnotIndex, LastUKnotIndex] <br>
 /*instead*/  void IncrementMultiplicity(Standard_Integer I1, Standard_Integer I2, Standard_Integer M) ;

//! Inserts a knot value in the sequence of knots.  If <br>
//!          <U>  is an  existing knot     the multiplicity  is <br>
//!          increased by <M>. <br>
//! <br>
//!          If U  is  not  on the parameter  range  nothing is <br>
//!          done. <br>
//! <br>
//!          If the multiplicity is negative or null nothing is <br>
//!          done. The  new   multiplicity  is limited  to  the <br>
//!          degree. <br>
//! <br>
//!          The  tolerance criterion  for  knots  equality  is <br>
//!          the max of Epsilon(U) and ParametricTolerance. <br>
 /*instead*/  void InsertKnot(Standard_Real U, Standard_Integer M, Standard_Real ParametricTolerance, System::Boolean Add) ;

//! Inserts a set of knots  values in  the sequence of <br>
//!          knots. <br>
//! <br>
//!          For each U = Knots(i), M = Mults(i) <br>
//! <br>
//!          If <U>  is an existing  knot  the  multiplicity is <br>
//!          increased by  <M> if  <Add>  is True, increased to <br>
//!          <M> if <Add> is False. <br>
//! <br>
//!          If U  is  not  on the parameter  range  nothing is <br>
//!          done. <br>
//! <br>
//!          If the multiplicity is negative or null nothing is <br>
//!          done. The  new   multiplicity  is limited  to  the <br>
//!          degree. <br>
//! <br>
//!          The  tolerance criterion  for  knots  equality  is <br>
//!          the max of Epsilon(U) and ParametricTolerance. <br>
 /*instead*/  void InsertKnots(OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Mults, Standard_Real ParametricTolerance, System::Boolean Add) ;

//! Decrement the knots multiplicity to <M>. If  M is <br>
//!         0 the knot   is  removed. The  Poles  sequence   is <br>
//!         modified. <br>
//! <br>
//!         As there are two ways to  compute the new poles the <br>
//!         average is  computed if  the distance is lower than <br>
//!         the <Tolerance>, else False is returned. <br>
//! <br>
//!         A low tolerance is used to prevent the modification <br>
//!         of the curve. <br>
//! <br>
//!         A high tolerance is used to "smooth" the curve. <br>
//! <br>
//!  Raised if Index is not in the range <br>
//!  [FirstUKnotIndex, LastUKnotIndex] <br>//! pole insertion and pole removing <br>
//!  this operation is limited to the Uniform or QuasiUniform <br>
//!  BSplineCurve. The knot values are modified . If the BSpline is <br>
//!  NonUniform or Piecewise Bezier an exception Construction error <br>
//!  is raised. <br>
 /*instead*/  System::Boolean RemoveKnot(Standard_Integer Index, Standard_Integer M, Standard_Real Tolerance) ;


//!  Changes the direction of parametrization of <me>. The Knot <br>
//!  sequence is modified, the FirstParameter and the <br>
//!  LastParameter are not modified. The StartPoint of the <br>
//!  initial curve becomes the EndPoint of the reversed curve <br>
//!  and the EndPoint of the initial curve becomes the StartPoint <br>
//!  of the reversed curve. <br>
 /*instead*/  void Reverse() ;

//! Returns the  parameter on the  reversed  curve for <br>
//!          the point of parameter U on <me>. <br>
//! <br>
//!          returns UFirst + ULast - U <br>
 /*instead*/  Standard_Real ReversedParameter(Standard_Real U) ;


//!  Segments the curve between U1 and U2. <br>
//!  The control points are modified, the first and the last point <br>
//!  are not the same. <br>
//! Warnings : <br>
//!  Even if <me> is not closed it can become closed after the <br>
//!  segmentation for example if U1 or U2 are out of the bounds <br>
//!  of the curve <me> or if the curve makes loop. <br>
//!  After the segmentation the length of a curve can be null. <br>//! raises if U2 < U1. <br>
 /*instead*/  void Segment(Standard_Real U1, Standard_Real U2) ;

//!  Changes the knot of range Index. <br>
//!  The multiplicity of the knot is not modified. <br>//! Raised if K >= Knots(Index+1) or K <= Knots(Index-1). <br>//! Raised if Index < 1 || Index > NbKnots <br>
 /*instead*/  void SetKnot(Standard_Integer Index, Standard_Real K) ;

//!  Changes all the knots of the curve <br>
//!  The multiplicity of the knots are not modified. <br>
//!  Raised if there is an index such that K (Index+1) <= K (Index). <br>
//!  Raised if  K.Lower() < 1 or K.Upper() > NbKnots <br>
 /*instead*/  void SetKnots(OCNaroWrappers::OCTColStd_Array1OfReal^ K) ;


//!  Changes the knot of range Index with its multiplicity. <br>
//!  You can increase the multiplicity of a knot but it is <br>
//!  not allowed to decrease the multiplicity of an existing knot. <br>
//!  Raised if K >= Knots(Index+1) or K <= Knots(Index-1). <br>
//!  Raised if M is greater than Degree or lower than the previous <br>
//!  multiplicity of knot of range Index. <br>//! Raised if Index < 1 || Index > NbKnots <br>
 /*instead*/  void SetKnot(Standard_Integer Index, Standard_Real K, Standard_Integer M) ;

//! returns the parameter normalized within <br>
//!         the period if the curve is periodic : otherwise <br>
//!         does not do anything <br>
 /*instead*/  void PeriodicNormalization(Standard_Real& U) ;


//!  Makes a closed B-spline into a periodic curve. The curve is <br>
//!  periodic if the knot sequence is periodic and if the curve is <br>
//!  closed (The tolerance criterion is Resolution from gp). <br>
//!  The period T is equal to Knot(LastUKnotIndex) - <br>
//!   Knot(FirstUKnotIndex). A periodic B-spline can be uniform <br>
//!   or not. <br>//! Raised if the curve is not closed. <br>
 /*instead*/  void SetPeriodic() ;

//! Set the origin of a periodic curve at Knot(index) <br>
//!          KnotVector and poles are modified. <br>//! Raised if the curve is not periodic <br>//! Raised if index not in the range <br>
//!          [FirstUKnotIndex , LastUKnotIndex] <br>
 /*instead*/  void SetOrigin(Standard_Integer Index) ;


//!  Makes a non periodic curve. If the curve was non periodic <br>
//!  the curve is not modified. <br>
 /*instead*/  void SetNotPeriodic() ;

//! Substitutes the Pole of range Index with P. <br>
//!  Raised if Index < 1 || Index > NbPoles <br>
 /*instead*/  void SetPole(Standard_Integer Index, Standard_Real P) ;


//!  Substitutes the pole and the weight of range Index. <br>
//!  If the curve <me> is not rational it can become rational <br>
//!  If the curve was rational it can become non rational <br>
//!  Raised if Index < 1 || Index > NbPoles <br>//! Raised if Weight <= 0.0 <br>
 /*instead*/  void SetPole(Standard_Integer Index, Standard_Real P, Standard_Real Weight) ;


//!  Changes the weight for the pole of range Index. <br>
//!  If the curve was non rational it can become rational. <br>
//!  If the curve was rational it can become non rational. <br>
//!  Raised if Index < 1 || Index > NbPoles <br>//! Raised if Weight <= 0.0 <br>
 /*instead*/  void SetWeight(Standard_Integer Index, Standard_Real Weight) ;


//!  Returns the continuity of the curve, the curve is at least C0. <br>//! Raised if N < 0. <br>
 /*instead*/  System::Boolean IsCN(Standard_Integer N) ;


//!  Returns true if the distance between the first point and the <br>
//!  last point of the curve is lower or equal to Resolution <br>
//!  from package gp. <br>
//! Warnings : <br>
//!  The first and the last point can be different from the first <br>
//!  pole and the last pole of the curve. <br>
 /*instead*/  System::Boolean IsClosed() ;

//! Returns True if the curve is periodic. <br>
 /*instead*/  System::Boolean IsPeriodic() ;


//!  Returns True if the weights are not identical. <br>
//!  The tolerance criterion is Epsilon of the class Real. <br>
 /*instead*/  System::Boolean IsRational() ;


//!  Returns the global continuity of the curve : <br>
//!  C0 : only geometric continuity, <br>
//!  C1 : continuity of the first derivative all along the Curve, <br>
//!  C2 : continuity of the second derivative all along the Curve, <br>
//!  C3 : continuity of the third derivative all along the Curve, <br>
//!  CN : the order of continuity is infinite. <br>
//!  For a B-spline curve of degree d if a knot Ui has a <br>
//!  multiplicity p the B-spline curve is only Cd-p continuous <br>
//!  at Ui. So the global continuity of the curve can't be greater <br>
//!  than Cd-p where p is the maximum multiplicity of the interior <br>
//!  Knots. In the interior of a knot span the curve is infinitely <br>
//!  continuously differentiable. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;

//! Computation of value and derivatives <br>
 /*instead*/  Standard_Integer Degree() ;


 /*instead*/  Standard_Real Value(Standard_Real U) ;


 /*instead*/  void D0(Standard_Real U, Standard_Real& P) ;


 /*instead*/  void D1(Standard_Real U, Standard_Real& P, Standard_Real& V1) ;


 /*instead*/  void D2(Standard_Real U, Standard_Real& P, Standard_Real& V1, Standard_Real& V2) ;


 /*instead*/  void D3(Standard_Real U, Standard_Real& P, Standard_Real& V1, Standard_Real& V2, Standard_Real& V3) ;


//!  The following functions computes the point  of parameter U and <br>
//!  the  derivatives at   this  point on  the  B-spline curve  arc <br>
//!  defined between the knot FromK1  and the knot  ToK2.  U can be <br>
//!  out of bounds   [Knot  (FromK1), Knot   (ToK2)] but   for  the <br>
//!  computation we only  use  the definition of the  curve between <br>
//!  these  two  knots. This  method is  useful  to  compute  local <br>
//!  derivative,  if the order of  continuity of the whole curve is <br>
//!  not   greater  enough.   Inside   the parametric   domain Knot <br>
//!  (FromK1), Knot (ToK2)  the evaluations are the  same as if  we <br>
//!  consider  the whole  definition of the  curve.   Of course the <br>
//!  evaluations are different outside this parametric domain. <br>
 /*instead*/  Standard_Real DN(Standard_Real U, Standard_Integer N) ;


 /*instead*/  Standard_Real LocalValue(Standard_Real U, Standard_Integer FromK1, Standard_Integer ToK2) ;


 /*instead*/  void LocalD0(Standard_Real U, Standard_Integer FromK1, Standard_Integer ToK2, Standard_Real& P) ;


 /*instead*/  void LocalD1(Standard_Real U, Standard_Integer FromK1, Standard_Integer ToK2, Standard_Real& P, Standard_Real& V1) ;


 /*instead*/  void LocalD2(Standard_Real U, Standard_Integer FromK1, Standard_Integer ToK2, Standard_Real& P, Standard_Real& V1, Standard_Real& V2) ;


 /*instead*/  void LocalD3(Standard_Real U, Standard_Integer FromK1, Standard_Integer ToK2, Standard_Real& P, Standard_Real& V1, Standard_Real& V2, Standard_Real& V3) ;


 /*instead*/  Standard_Real LocalDN(Standard_Real U, Standard_Integer FromK1, Standard_Integer ToK2, Standard_Integer N) ;


//!  Returns the last point of the curve. <br>
//! Warnings : <br>
//!  The last point of the curve is different from the last <br>
//!  pole of the curve if the multiplicity of the last knot <br>
//!  is lower than Degree. <br>
 /*instead*/  Standard_Real EndPoint() ;


//!  For a B-spline curve the first parameter (which gives the start <br>
//!  point of the curve) is a knot value but if the multiplicity of <br>
//!  the first knot index is lower than Degree + 1 it is not the <br>
//!  first knot of the curve. This method computes the index of the <br>
//!  knot corresponding to the first parameter. <br>
 /*instead*/  Standard_Integer FirstUKnotIndex() ;


//!  Computes the parametric value of the start point of the curve. <br>
//!  It is a knot value. <br>
 /*instead*/  Standard_Real FirstParameter() ;


//!  Returns the knot of range Index. When there is a knot <br>
//!  with a multiplicity greater than 1 the knot is not repeated. <br>
//!  The method Multiplicity can be used to get the multiplicity <br>
//!  of the Knot. <br>//! Raised if Index < 1 or Index > NbKnots <br>
 /*instead*/  Standard_Real Knot(Standard_Integer Index) ;

//! returns the knot values of the B-spline curve; <br>
//!  Raised if the length of K is not equal to the number of knots. <br>
 /*instead*/  void Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ K) ;

//! Returns the knots sequence. <br>
//!  In this sequence the knots with a multiplicity greater than 1 <br>
//!  are repeated. <br>
//! Example : <br>
//!  K = {k1, k1, k1, k2, k3, k3, k4, k4, k4} <br>
//!  Raised if the length of K is not equal to NbPoles + Degree + 1 <br>
 /*instead*/  void KnotSequence(OCNaroWrappers::OCTColStd_Array1OfReal^ K) ;


//!  Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier. <br>
//!  If all the knots differ by a positive constant from the <br>
//!  preceding knot the BSpline Curve can be : <br>
//!  - Uniform if all the knots are of multiplicity 1, <br>
//!  - QuasiUniform if all the knots are of multiplicity 1 except for <br>
//!    the first and last knot which are of multiplicity Degree + 1, <br>
//!  - PiecewiseBezier if the first and last knots have multiplicity <br>
//!    Degree + 1 and if interior knots have multiplicity Degree <br>
//!    A piecewise Bezier with only two knots is a BezierCurve. <br>
//!  else the curve is non uniform. <br>
//!  The tolerance criterion is Epsilon from class Real. <br>
 /*instead*/  OCGeomAbs_BSplKnotDistribution KnotDistribution() ;


//!  For a BSpline curve the last parameter (which gives the <br>
//!  end point of the curve) is a knot value but if the <br>
//!  multiplicity of the last knot index is lower than <br>
//!  Degree + 1 it is not the last knot of the curve. This <br>
//!  method computes the index of the knot corresponding to <br>
//!  the last parameter. <br>
 /*instead*/  Standard_Integer LastUKnotIndex() ;


//!  Computes the parametric value of the end point of the curve. <br>
//!  It is a knot value. <br>
 /*instead*/  Standard_Real LastParameter() ;


//!  Locates the parametric value U in the sequence of knots. <br>
//!  If "WithKnotRepetition" is True we consider the knot's <br>
//!  representation with repetition of multiple knot value, <br>
//!  otherwise  we consider the knot's representation with <br>
//!  no repetition of multiple knot values. <br>
//!  Knots (I1) <= U <= Knots (I2) <br>
//!  . if I1 = I2  U is a knot value (the tolerance criterion <br>
//!    ParametricTolerance is used). <br>
//!  . if I1 < 1  => U < Knots (1) - Abs(ParametricTolerance) <br>
//!  . if I2 > NbKnots => U > Knots (NbKnots) + Abs(ParametricTolerance) <br>
 /*instead*/  void LocateU(Standard_Real U, Standard_Real ParametricTolerance, Standard_Integer& I1, Standard_Integer& I2, System::Boolean WithKnotRepetition) ;


//!  Returns the multiplicity of the knots of range Index. <br>//! Raised if Index < 1 or Index > NbKnots <br>
 /*instead*/  Standard_Integer Multiplicity(Standard_Integer Index) ;


//!  Returns the multiplicity of the knots of the curve. <br>
//!  Raised if the length of M is not equal to NbKnots. <br>
 /*instead*/  void Multiplicities(OCNaroWrappers::OCTColStd_Array1OfInteger^ M) ;


//!  Returns the number of knots. This method returns the number of <br>
//!  knot without repetition of multiple knots. <br>
 /*instead*/  Standard_Integer NbKnots() ;

//! Returns the number of poles <br>
 /*instead*/  Standard_Integer NbPoles() ;

//! Returns the pole of range Index. <br>//! Raised if Index < 1 or Index > NbPoles. <br>
 /*instead*/  Standard_Real Pole(Standard_Integer Index) ;

//! Returns the poles of the B-spline curve; <br>
//!  Raised if the length of P is not equal to the number of poles. <br>
 /*instead*/  void Poles(OCNaroWrappers::OCTColStd_Array1OfReal^ P) ;


//!  Returns the start point of the curve. <br>
//! Warnings : <br>
//!  This point is different from the first pole of the curve if the <br>
//!  multiplicity of the first knot is lower than Degree. <br>
 /*instead*/  Standard_Real StartPoint() ;

//! Returns the weight of the pole of range Index . <br>//! Raised if Index < 1 or Index > NbPoles. <br>
 /*instead*/  Standard_Real Weight(Standard_Integer Index) ;

//! Returns the weights of the B-spline curve; <br>
//!  Raised if the length of W is not equal to NbPoles. <br>
 /*instead*/  void Weights(OCNaroWrappers::OCTColStd_Array1OfReal^ W) ;


//!  Returns the value of the maximum degree of the normalized <br>
//!  B-spline basis functions in this package. <br>
static /*instead*/  Standard_Integer MaxDegree() ;


//! Changes the value of the Law at parameter U to NewValue. <br>
//! and makes its derivative at U be derivative. <br>
//! StartingCondition = -1 means first can move <br>
//! EndingCondition   = -1 means last point can move <br>
//! StartingCondition = 0 means the first point cannot move <br>
//! EndingCondition   = 0 means the last point cannot move <br>
//! StartingCondition = 1 means the first point and tangent cannot move <br>
//! EndingCondition   = 1 means the last point and tangent cannot move <br>
//! and so forth <br>
//! ErrorStatus != 0 means that there are not enought degree of freedom <br>
//! with the constrain to deform the curve accordingly <br>
//! <br>
 /*instead*/  void MovePointAndTangent(Standard_Real U, Standard_Real NewValue, Standard_Real Derivative, Standard_Real Tolerance, Standard_Integer StartingCondition, Standard_Integer EndingCondition, Standard_Integer& ErrorStatus) ;

//!  given Tolerance3D returns UTolerance <br>
//!           such that if f(t) is the curve we have <br>
//!           | t1 - t0| < Utolerance ===> <br>
//!           |f(t1) - f(t0)| < Tolerance3D <br>
 /*instead*/  void Resolution(Standard_Real Tolerance3D, Standard_Real& UTolerance) ;


 /*instead*/  OCLaw_BSpline^ Copy() ;

~OCLaw_BSpline()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif