// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_Curve_OCWrappers_HeaderFile
#define _BOPTools_Curve_OCWrappers_HeaderFile

// include native header
#include <BOPTools_Curve.hxx>
#include "../Converter.h"


#include "../IntTools/IntTools_Curve.h"
#include "BOPTools_PaveSet.h"
#include "BOPTools_ListOfPaveBlock.h"
#include "../TColStd/TColStd_ListOfInteger.h"


namespace OCNaroWrappers
{

ref class OCIntTools_Curve;
ref class OCBOPTools_PaveSet;
ref class OCBOPTools_PaveBlock;
ref class OCBOPTools_ListOfPaveBlock;
ref class OCTColStd_ListOfInteger;



//!  Class holds the  structure for storing information about <br>
//! intersection curve and set of paves on it <br>
//! <br>
public ref class OCBOPTools_Curve  {

protected:
  BOPTools_Curve* nativeHandle;
  OCBOPTools_Curve(OCDummy^) {};

public:
  property BOPTools_Curve* Handle
  {
    BOPTools_Curve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_Curve(BOPTools_Curve* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCBOPTools_Curve();


//! Constructor <br>
OCBOPTools_Curve(OCNaroWrappers::OCIntTools_Curve^ aIC);


//! Modifier <br>
 /*instead*/  void SetCurve(OCNaroWrappers::OCIntTools_Curve^ aIC) ;


//! Selector <br>
 /*instead*/  OCIntTools_Curve^ Curve() ;


//! Selector <br>
//! <br>
 /*instead*/  OCBOPTools_PaveSet^ Set() ;


//! Adds the PaveBlock  <aPB> to the pave set <br>
 /*instead*/  void AppendNewBlock(OCNaroWrappers::OCBOPTools_PaveBlock^ aPB) ;


//! Returns the PaveBlock-s attached to the curve <br>
 /*instead*/  OCBOPTools_ListOfPaveBlock^ NewPaveBlocks() ;


//! Returns indices TechnoVertices attached to the curve <br>
 /*instead*/  OCTColStd_ListOfInteger^ TechnoVertices() ;

~OCBOPTools_Curve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif