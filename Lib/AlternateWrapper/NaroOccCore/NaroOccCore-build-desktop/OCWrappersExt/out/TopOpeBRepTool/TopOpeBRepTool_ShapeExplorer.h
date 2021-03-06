// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepTool_ShapeExplorer_OCWrappers_HeaderFile
#define _TopOpeBRepTool_ShapeExplorer_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include "../Converter.h"


#include "../TopExp/TopExp_Explorer.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;



public ref class OCTopOpeBRepTool_ShapeExplorer  {

protected:
  TopOpeBRepTool_ShapeExplorer* nativeHandle;
  OCTopOpeBRepTool_ShapeExplorer(OCDummy^) {};

public:
  property TopOpeBRepTool_ShapeExplorer* Handle
  {
    TopOpeBRepTool_ShapeExplorer* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepTool_ShapeExplorer(TopOpeBRepTool_ShapeExplorer* nativeHandle);

// Methods PUBLIC

//! Creates an empty explorer, becomes usefull after Init. <br>
OCTopOpeBRepTool_ShapeExplorer();

//! Creates an Explorer on the Shape <S>. <br>
//! <br>
//!          <ToFind> is the type of shapes to search. <br>
//!              TopAbs_VERTEX, TopAbs_EDGE, ... <br>
//! <br>
//!          <ToAvoid>   is the type   of shape to  skip in the <br>
//!          exploration.   If   <ToAvoid>  is  equal  or  less <br>
//!          complex than <ToFind> or if  <ToAVoid> is SHAPE it <br>
//!          has no effect on the exploration. <br>
//! <br>
OCTopOpeBRepTool_ShapeExplorer(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum ToFind, OCTopAbs_ShapeEnum ToAvoid);


 /*instead*/  void Init(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum ToFind, OCTopAbs_ShapeEnum ToAvoid) ;

//! Returns  True if  there are   more  shapes in  the <br>
//!          exploration. <br>
 /*instead*/  System::Boolean More() ;

//! Moves to the next Shape in the exploration. <br>
 /*instead*/  void Next() ;

//! Returns the current shape in the exploration. <br>
 /*instead*/  OCTopoDS_Shape^ Current() ;


 /*instead*/  Standard_Integer NbShapes() ;


 /*instead*/  Standard_Integer Index() ;


 /*instead*/  Standard_OStream& DumpCurrent(Standard_OStream& OS) ;

~OCTopOpeBRepTool_ShapeExplorer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
