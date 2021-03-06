// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_MiniPath_OCWrappers_HeaderFile
#define _MAT2d_MiniPath_OCWrappers_HeaderFile

// include native header
#include <MAT2d_MiniPath.hxx>
#include "../Converter.h"


#include "MAT2d_DataMapOfIntegerSequenceOfConnexion.h"
#include "MAT2d_DataMapOfIntegerConnexion.h"
#include "MAT2d_SequenceOfConnexion.h"


namespace OCNaroWrappers
{

ref class OCMAT2d_SequenceOfSequenceOfGeometry;
ref class OCMAT2d_SequenceOfConnexion;
ref class OCMAT2d_Connexion;


//! MiniPath computes a path to link all the  lines in <br>
//!          a set of lines. The path is described as a  set of <br>
//!          connexions. <br>
//! <br>
//!          The set of connexions can be  seen as an arbitrary Tree. <br>
//!          The node of the  tree are the  lines.  The arcs of the <br>
//!          tree are the connexions.  The ancestror  of  a line is <br>
//!          the connexion which ends on it. The children of a line <br>
//!          are the connexions which start on it. <br>
//! <br>
//!          The children of a line are ordered by the relation <br>
//!          <IsAfter> defined on the connexions. <br>
//!          (See MAT2s_Connexion.cdl). <br>
public ref class OCMAT2d_MiniPath  {

protected:
  MAT2d_MiniPath* nativeHandle;
  OCMAT2d_MiniPath(OCDummy^) {};

public:
  property MAT2d_MiniPath* Handle
  {
    MAT2d_MiniPath* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMAT2d_MiniPath(MAT2d_MiniPath* nativeHandle);

// Methods PUBLIC


OCMAT2d_MiniPath();

//! Computes the path  to link the  lines in <Figure>. <br>
//!          the path   starts on the  line  of index <IndStart> <br>
//!          <Sense>  = True    if  the Circuit turns in the <br>
//!          trigonometric  sense. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ Figure, Standard_Integer IndStart, System::Boolean Sense) ;

//! Run on the set of connexions to compute the path. <br>
//!          the path is an exploration of the tree which contains <br>
//!          the connexions and their reverses. <br>
//!          if the tree of connexions is <br>
//!                  A <br>
//!                 / \ <br>
//!                B   E <br>
//!               / \   \ <br>
//!              C   D   F <br>
//! <br>
//!          the path is A->B, B->C, C->B, B->D, D->B, B->A, A->E, <br>
//!                      E->F, F->E, E->A. <br>
 /*instead*/  void RunOnConnexions() ;

//! Returns  the  sequence of  connexions corresponding to <br>
//!          the  path. <br>
 /*instead*/  OCMAT2d_SequenceOfConnexion^ Path() ;

//! Returns <True> if there is one Connexion which starts <br>
//!          on line designed by <Index>. <br>
 /*instead*/  System::Boolean IsConnexionsFrom(Standard_Integer Index) ;

//! Returns    the  connexions  which   start  on line <br>
//!          designed  by <Index>. <br>
//! <br>
 /*instead*/  OCMAT2d_SequenceOfConnexion^ ConnexionsFrom(Standard_Integer Index) ;

//! Returns <True> if the line designed by <Index> is <br>
//!          the root. <br>
 /*instead*/  System::Boolean IsRoot(Standard_Integer Index) ;

//! Returns    the  connexion  which ends  on line <br>
//!          designed  by <Index>. <br>
 /*instead*/  OCMAT2d_Connexion^ Father(Standard_Integer Index) ;

~OCMAT2d_MiniPath()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
