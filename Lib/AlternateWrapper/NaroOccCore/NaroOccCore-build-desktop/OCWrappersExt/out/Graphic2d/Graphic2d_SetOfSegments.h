// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_SetOfSegments_OCWrappers_HeaderFile
#define _Graphic2d_SetOfSegments_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_SetOfSegments.hxx>
#include "../Converter.h"

#include "Graphic2d_Line.h"

#include "../TShort/TShort_SequenceOfShortReal.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;


//! The primitive SetOfSegments <br>
//!  Warning: This primitive must be use as possible for performance <br>
//!         improvment but is drawn with a global line attributes <br>
//!         for all the set. <br>
//!	    But when the set contains a lot of contigous segments <br>
//!	   with a line attrib different to the default,it's <br>
//!	   more preferable to use a SetOfPolylines for to insure <br>
//!	   a better quality. <br>
//!         NOTE: than the method PickedIndex() permits to known <br>
//!              the last picked segment in the set. <br>
public ref class OCGraphic2d_SetOfSegments : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCGraphic2d_SetOfSegments(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_SetOfSegments(Handle(Graphic2d_SetOfSegments)* nativeHandle);

// Methods PUBLIC

//! Creates an empty set of segments in the graphic <br>
//!         object <aGraphicObject>. <br>
OCGraphic2d_SetOfSegments(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject);

//! Add a segment in the set <br>
//!	    The first point is <X1>, <Y1>. <br>
//!	    The second point is <X2>, <Y2>. <br>
//!  Trigger: Raises SegmentDefinitionError if the <br>
//!          first point and the second point are identical. <br>
 /*instead*/  void Add(Quantity_Length X1, Quantity_Length Y1, Quantity_Length X2, Quantity_Length Y2) ;

//! Returns the number of segments in the set. <br>
 /*instead*/  Standard_Integer Length() ;

//! Returns the segment of rank <aRank> from the set. <br>
//!  Trigger: Raises OutOfRange if <aRank> is <1 or >Length() <br>
 /*instead*/  void Values(Standard_Integer aRank, Quantity_Length& X1, Quantity_Length& Y1, Quantity_Length& X2, Quantity_Length& Y2) ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;

~OCGraphic2d_SetOfSegments()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
