// File generated by CPPExt (MPV)
//
#ifndef _ShapeAnalysis_WireOrder_OCWrappers_HeaderFile
#define _ShapeAnalysis_WireOrder_OCWrappers_HeaderFile

// include native header
#include <ShapeAnalysis_WireOrder.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCTColgp_HSequenceOfXYZ;
ref class OCgp_XYZ;
ref class OCgp_XY;


//! This class is intended to control and, if possible, redefine <br>
//!          the order of a list of edges which define a wire <br>
//!          Edges are not given directly, but as their bounds (start,end) <br>
//! <br>
//!          This allows to use this tool, either on existing wire, or on <br>
//!          data just taken from a file (coordinates are easy to get) <br>
//! <br>
//!          It can work, either in 2D, or in 3D, but not miscible <br>
//!          Warning about tolerance : according to the mode (2D/3D), it <br>
//!          must be given as 2D or 3D (i.e. metric) tolerance, uniform <br>
//!          on the whole list <br>
//! <br>
//!          Two phases : firstly add the couples (start,end) <br>
//!          secondly perform then get the result <br>
public ref class OCShapeAnalysis_WireOrder  {

protected:
  ShapeAnalysis_WireOrder* nativeHandle;
  OCShapeAnalysis_WireOrder(OCDummy^) {};

public:
  property ShapeAnalysis_WireOrder* Handle
  {
    ShapeAnalysis_WireOrder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCShapeAnalysis_WireOrder(ShapeAnalysis_WireOrder* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCShapeAnalysis_WireOrder();

//! Creates a WireOrder in 3D (if mode3d is True) or 2D (if False) <br>
//!           with a tolerance <br>
OCShapeAnalysis_WireOrder(System::Boolean mode3d, Standard_Real tol);

//! Sets new values. Clears the connexion list <br>
//!           If <mode3d> changes, also clears the edge list (else, doesnt) <br>
 /*instead*/  void SetMode(System::Boolean mode3d, Standard_Real tol) ;

//! Returns the working tolerance <br>
 /*instead*/  Standard_Real Tolerance() ;

//! Clears the list of edges, but not mode and tol <br>
 /*instead*/  void Clear() ;

//! Adds a couple of points 3D (start,end) <br>
 /*instead*/  void Add(OCNaroWrappers::OCgp_XYZ^ start3d, OCNaroWrappers::OCgp_XYZ^ end3d) ;

//! Adds a couple of points 2D (start,end) <br>
 /*instead*/  void Add(OCNaroWrappers::OCgp_XY^ start2d, OCNaroWrappers::OCgp_XY^ end2d) ;

//! Returns the count of added couples of points (one per edges) <br>
 /*instead*/  Standard_Integer NbEdges() ;

//! If this mode is True method perform does not sort edges of <br>
//!           different loops. The resulting order is first loop, second <br>
//!           one etc... <br>
 /*instead*/  System::Boolean KeepLoopsMode() ;

//! Computes the better order <br>
//!           If <closed> is True (D) considers also closure <br>
//!           Optimised if the couples were already in order <br>
//!           The criterium is : two couples in order if distance between <br>
//!           end-prec and start-cur is less then starting tolerance <tol> <br>
//!           Else, the smallest distance is reached <br>
//!           Gap corresponds to a smallest distance greater than <tol> <br>
 /*instead*/  void Perform(System::Boolean closed) ;

//! Tells if Perform has been done <br>
//!           Else, the following methods returns original values <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the status of the order (0 if not done) : <br>
//!            0 : all edges are direct and in sequence <br>
//!            1 : all edges are direct but some are not in sequence <br>
//!            2 : in addition, unresolved gaps remain <br>
//!           -1 : some edges are reversed, but no gap remain <br>
//!           -2 : some edges are reversed and some gaps remain <br>
//!           -10 : COULD NOT BE RESOLVED, Failure on Reorder <br>
//!           gap : regarding starting <tol> <br>
 /*instead*/  Standard_Integer Status() ;

//! Returns the number of original edge which correspond to the <br>
//!           newly ordered number <n> <br>
//!  Warning : the returned value is NEGATIVE if edge should be reversed <br>
 /*instead*/  Standard_Integer Ordered(Standard_Integer n) ;

//! Returns the values of the couple <num>, as 3D values <br>
 /*instead*/  void XYZ(Standard_Integer num, OCNaroWrappers::OCgp_XYZ^ start3d, OCNaroWrappers::OCgp_XYZ^ end3d) ;

//! Returns the values of the couple <num>, as 2D values <br>
 /*instead*/  void XY(Standard_Integer num, OCNaroWrappers::OCgp_XY^ start2d, OCNaroWrappers::OCgp_XY^ end2d) ;

//! Returns the gap between a couple and its preceeding <br>
//!           <num> is considered ordered <br>
//!           If <num> = 0 (D), returns the greatest gap found <br>
 /*instead*/  Standard_Real Gap(Standard_Integer num) ;

//! Determines the chains inside which successive edges have a gap <br>
//!           less than a given value. Queried by NbChains and Chain <br>
 /*instead*/  void SetChains(Standard_Real gap) ;

//! Returns the count of computed chains <br>
 /*instead*/  Standard_Integer NbChains() ;

//! Returns, for the chain n0 num, starting and ending numbers of <br>
//!           edges. In the list of ordered edges (see Ordered for originals) <br>
 /*instead*/  void Chain(Standard_Integer num, Standard_Integer& n1, Standard_Integer& n2) ;

//! Determines the couples of edges for which end and start fit <br>
//!           inside a given gap. Queried by NbCouples and Couple <br>
 /*instead*/  void SetCouples(Standard_Real gap) ;

//! Returns the count of computed couples <br>
 /*instead*/  Standard_Integer NbCouples() ;

//! Returns, for the couple n0 num, the two implied edges <br>
//!           In the list of ordered edges <br>
 /*instead*/  void Couple(Standard_Integer num, Standard_Integer& n1, Standard_Integer& n2) ;

~OCShapeAnalysis_WireOrder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif