// File generated by CPPExt (Transient)
//
#ifndef _GccInt_BLine_OCWrappers_HeaderFile
#define _GccInt_BLine_OCWrappers_HeaderFile

// include the wrapped class
#include <GccInt_BLine.hxx>
#include "../Converter.h"

#include "GccInt_Bisec.h"

#include "../gp/gp_Lin2d.h"
#include "GccInt_IType.h"


namespace OCNaroWrappers
{

ref class OCgp_Lin2d;


//!  Describes a line as a bisecting curve between two 2D <br>
//! geometric objects (such as lines, circles or points). <br>
public ref class OCGccInt_BLine : OCGccInt_Bisec {

protected:
  // dummy constructor;
  OCGccInt_BLine(OCDummy^) : OCGccInt_Bisec((OCDummy^)nullptr) {};

public:

// constructor from native
OCGccInt_BLine(Handle(GccInt_BLine)* nativeHandle);

// Methods PUBLIC

//! Constructs a bisecting line whose geometry is the 2D line Line. <br>
OCGccInt_BLine(OCNaroWrappers::OCgp_Lin2d^ Line);

//! Returns a 2D line which is the geometry of this bisecting line. <br>
virtual /*instead*/  OCgp_Lin2d^ Line() override;

//! Returns GccInt_Lin, which is the type of any GccInt_BLine bisecting line. <br>
 /*instead*/  OCGccInt_IType ArcType() ;

~OCGccInt_BLine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
