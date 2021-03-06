// File generated by CPPExt (Transient)
//
#ifndef _Xw_Driver_OCWrappers_HeaderFile
#define _Xw_Driver_OCWrappers_HeaderFile

// include the wrapped class
#include <Xw_Driver.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_WindowDriver.h"

#include "Xw_TypeOfVisual.h"
#include "../Aspect/Aspect_TypeOfPrimitive.h"
#include "../Aspect/Aspect_TypeOfResize.h"
#include "../Aspect/Aspect_TypeOfDrawMode.h"
#include "../Aspect/Aspect_TypeOfText.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCXw_HListOfMFTFonts;
ref class OCTShort_HArray1OfShortReal;
ref class OCXw_TextManager;
ref class OCXw_Window;
ref class OCAspect_ColorMap;
ref class OCAspect_TypeMap;
ref class OCAspect_WidthMap;
ref class OCAspect_FontMap;
ref class OCAspect_MarkMap;
ref class OCStandard_Transient;
ref class OCTShort_Array1OfShortReal;
ref class OCTCollection_ExtendedString;


//! This class defines a X window Driver. <br>
//!  Warning: A Driver is associated with one window and lets you <br>
//! draw any primitives with any attributes you choose <br>
//! inside that window. All Values and coordinates are <br>
//! defined in Device Window Unit (DWU) space, which is <br>
//! the Normalized Floating Pixel space limited by the size <br>
//! of the window. The Maps Driver must be initialized <br>
//! with Aspect_Driver::SetXXXXMap(aMap) where XXXX <br>
//! may correspond to Color, Mark, Type, Width and Font. <br>
public ref class OCXw_Driver : OCAspect_WindowDriver {

protected:
  // dummy constructor;
  OCXw_Driver(OCDummy^) : OCAspect_WindowDriver((OCDummy^)nullptr) {};

public:

// constructor from native
OCXw_Driver(Handle(Xw_Driver)* nativeHandle);

// Methods PUBLIC

//! Creates the X Window Driver associated to the X window <br>
//!	    <aWindow>. <br>
//!	    Default values : <br>
//!		- DrawMode : TODM_REPLACE <br>
OCXw_Driver(OCNaroWrappers::OCXw_Window^ aWindow);

//! Begin graphics and drawn directly to the Window or Pixmap if <br>
virtual /*instead*/  void BeginDraw(System::Boolean DoubleBuffer, Standard_Integer aRetainBuffer) ;

//! Called by the method Graphic2d_View::Update, this <br>
//!	    method manages the buffer flushing and Wait after up to date <br>
//!	    display when Synchronize is TRUE. <br>
virtual /*instead*/  void EndDraw(System::Boolean Synchronize) ;

//! Resizes the WorkSpace depending of the Window size <br>
//!	    MUST be call after a Resize or Move WindowDriver Event <br>
//!	    Returns the TypeOfResize gravity mode . <br>
//!  Trigger: Raises if the type of resizing is unknown. <br>
virtual /*instead*/  OCAspect_TypeOfResize ResizeSpace() ;

//! Defines the draw mode for all primitives drawing. <br>
//!	TypeOfDrawMode is <br>
//!		TODM_REPLACE <br>
//!		TODM_ERASE <br>
//!		TODM_XOR <br>
//!		TODM_XORLIGHT <br>
virtual /*instead*/  void SetDrawMode(OCAspect_TypeOfDrawMode aMode) ;

//! Sets the line attributes. <br>
//!  Category: Methods to set the line attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
virtual /*instead*/  void SetLineAttrib(Standard_Integer ColorIndex, Standard_Integer TypeIndex, Standard_Integer WidthIndex) ;

//! Sets the text attributes. <br>
//!  Category: Methods to set the text attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
virtual /*instead*/  void SetTextAttrib(Standard_Integer ColorIndex, Standard_Integer FontIndex) ;

//! Sets the Extended text attributes. <br>
//!  Category: Methods to set the text attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
virtual /*instead*/  void SetTextAttrib(Standard_Integer ColorIndex, Standard_Integer FontIndex, Quantity_PlaneAngle aSlant, Quantity_Factor aHScale, Quantity_Factor aWScale, System::Boolean isUnderlined) ;

//! Sets the polygon attributes. <br>
//!  Warning: <br>
//! <ColorIndex> is the background poly color index. <br>
//! <TileIndex> is the background poly fill rule index. <br>
//! If <DrawEdgeFlag> is TRUE the edge of the poly is drawn with the <br>
//!  current line attributes. <br>
//!  Category: Methods to set the poly attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
virtual /*instead*/  void SetPolyAttrib(Standard_Integer ColorIndex, Standard_Integer TileIndex, System::Boolean DrawEdgeFlag) ;

//! Sets the marker attributes. <br>
//!  Warning: <br>
//! <ColorIndex> is the edge or fill marker color index. <br>
//! <EdgeWidthIndex> is the edge marker thickness index. <br>
//! If <FillMarker> is TRUE the marker is filled on the first set <br>
//!  of consecutive drawn points. <br>
//!  Category: Methods to set the marker attributes <br>
//!  Trigger: Raises if one of the index is out of range. <br>
virtual /*instead*/  void SetMarkerAttrib(Standard_Integer ColorIndex, Standard_Integer EdgeWidthIndex, System::Boolean FillMarker) ;

//! Returns Standard_True if the associated driver <br>
//!	    have stored the image and Standard_False if not. <br>
virtual /*instead*/  System::Boolean IsKnownImage(OCNaroWrappers::OCStandard_Transient^ anImage) ;

//! Returns Standard_True and the Image Size in PIXEL <br>
//!          if the image file exist and can be computed by the driver, <br>
//!          NOTE that only XWD image file type are recognized today. <br>
virtual /*instead*/  System::Boolean SizeOfImageFile(System::String^ anImageFile, Standard_Integer& aWidth, Standard_Integer& aHeight) ;

//! Clears the image in <me>. <br>
virtual /*instead*/  void ClearImage(OCNaroWrappers::OCStandard_Transient^ anImageId) ;

//! Clears the image associated with the image file . <br>
virtual /*instead*/  void ClearImageFile(System::String^ anImageFile) ;

//! Draws the image in <me>. <br>
//!	    <aX>, <aY> is the center of the image. <br>
//!	    Image center must be defined in DWU space. <br>
virtual /*instead*/  void DrawImage(OCNaroWrappers::OCStandard_Transient^ anImageId, Standard_ShortReal aX, Standard_ShortReal aY) ;

//! Draws the image file in <me>. <br>
//!	    <aX>, <aY> is the center of the image. <br>
//!	    <aScale> the scale factor which is apply on this image <br>
//!	    Image center must be defined in DWU space. <br>
//!	    anImageFile must be defined with the full pathname <br>
//!          of the form /..../xxxxx.ext or $DIR/xxxxxx.ext <br>
//!          with DIR defined in a setenv variable. <br>
//!               xxxxxx the image file name. <br>
//!               ext the image file extension. <br>
virtual /*instead*/  void DrawImageFile(System::String^ anImageFile, Standard_ShortReal aX, Standard_ShortReal aY, Quantity_Factor aScale) ;

//! Stores a complete image and draws it in <me>. <br>
//!	    Image size must be defined in DWU space> <br>
//!  Category: Methods to manage the images <br>
//!  Trigger: Raises if the creation of the image failed. <br>
virtual /*instead*/  void FillAndDrawImage(OCNaroWrappers::OCStandard_Transient^ anImageId, Standard_ShortReal aX, Standard_ShortReal aY, Standard_Integer Width, Standard_Integer Height, Standard_Address anArrayOfPixels) ;

//! Stores a line of an image and draws it in <me>. <br>
//!  Warning: 0<= anIndexOfLine < aHeight <br>
//!	    anIndexOfLine = 0 must be the first call <br>
//!  Category: Methods to manage the images <br>
//!  Trigger: Raises if the creation of the image failed. <br>
virtual /*instead*/  void FillAndDrawImage(OCNaroWrappers::OCStandard_Transient^ anImageId, Standard_ShortReal aX, Standard_ShortReal aY, Standard_Integer anIndexOfLine, Standard_Integer Width, Standard_Integer Height, Standard_Address anArrayOfPixels) ;

//! Draws the polyline depending of SetLineAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!  Trigger: Raises if Polyline has too many points (> 1024) <br>
//!	    Raises if the length of <ListX> is not equal to <br>
//!	    the length of <ListY>. <br>
virtual /*instead*/  void DrawPolyline(OCNaroWrappers::OCTShort_Array1OfShortReal^ ListX, OCNaroWrappers::OCTShort_Array1OfShortReal^ ListY) ;

//! Draws the polygone depending of SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!  Trigger:  Raises if Polygone has too many points (> 1024) <br>
//!	    Raises if the length of <ListX> is not equal to <br>
//!	    the length of <ListY>. <br>
virtual /*instead*/  void DrawPolygon(OCNaroWrappers::OCTShort_Array1OfShortReal^ ListX, OCNaroWrappers::OCTShort_Array1OfShortReal^ ListY) ;

//! Draws the segment depending of SetLineAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
virtual /*instead*/  void DrawSegment(Standard_ShortReal X1, Standard_ShortReal Y1, Standard_ShortReal X2, Standard_ShortReal Y2) ;

//! Draws the text depending of SetTextAttrib() attributes. <br>
//!  Category: Methods to draw primitives <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!  Trigger: Raises if Text has too many chars (> 1024) <br>
virtual /*instead*/  void DrawText(OCNaroWrappers::OCTCollection_ExtendedString^ Text, Standard_ShortReal Xpos, Standard_ShortReal Ypos, Standard_ShortReal anAngle, OCAspect_TypeOfText aType) ;

//! Draws the text depending of SetTextAttrib() attributes. <br>
//!  Category: Methods to draw primitives <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!	    Angle must be defined in RADIAN. <br>
//!  Trigger: Raises if Text has too many chars (> 1024) <br>
virtual /*instead*/  void DrawText(System::String^ Text, Standard_ShortReal Xpos, Standard_ShortReal Ypos, Standard_ShortReal anAngle, OCAspect_TypeOfText aType) ;

//! Draws an framed text depending of the <br>
//! SetTextAttrib() and SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!          <aMarge> defines the ratio of the space between the <br>
//!          polygon borders and the bounding box of the text and <br>
//!	    depending of the height of the text. <br>
virtual /*instead*/  void DrawPolyText(OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_ShortReal Xpos, Standard_ShortReal Ypos, Quantity_Ratio aMarge, Standard_ShortReal anAngle, OCAspect_TypeOfText aType) ;

//! Draws an framed text depending of the <br>
//! SetTextAttrib() and SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!          <aMarge> defines the ratio of the space between the <br>
//!          polygon borders and the bounding box of the text and <br>
//!	    depending of the height of the text. <br>
virtual /*instead*/  void DrawPolyText(System::String^ aText, Standard_ShortReal Xpos, Standard_ShortReal Ypos, Quantity_Ratio aMarge, Standard_ShortReal anAngle, OCAspect_TypeOfText aType) ;

//! Draws a 1 PIXEL point depending of the SetMarkerAttrib() <br>
virtual /*instead*/  void DrawPoint(Standard_ShortReal X, Standard_ShortReal Y) ;

//! Draws the previously defined marker depending of <br>
//! the SetMarkerAttrib() attributes. <br>
//!  Warning: Coordinates and sizes must be defined in DWU space. <br>
//!	    Angle must be defined in RADIAN. <br>
//!	    A one pixel marker is drawn when aMarker index is undefined. <br>
virtual /*instead*/  void DrawMarker(Standard_Integer aMarker, Standard_ShortReal Xpos, Standard_ShortReal Ypos, Standard_ShortReal Width, Standard_ShortReal Height, Standard_ShortReal Angle) ;

//! Draws an Ellipsoid arc of center <X,Y> and Radius <br>
//!  <aXradius,aYradius> of relative angle <anOpenAngle> from <br>
//!  the base angle <aStartAngle> <br>
//!  Warning: Returns FALSE if the hardware can't drawing this <br>
//!  primitive properly,application must to simulate it. <br>
virtual /*instead*/  System::Boolean DrawArc(Standard_ShortReal X, Standard_ShortReal Y, Standard_ShortReal aXradius, Standard_ShortReal aYradius, Standard_ShortReal aStartAngle, Standard_ShortReal anOpenAngle) ;

//! Draws an filled Ellipsoid arc of center <X,Y> and Radius <br>
//!  <anXradius,anYradius> of relative angle <anOpenAngle> from <br>
//!  the base angle <aStartAngle> and  depending of the SetPolyAttrib() <br>
//! attributes. <br>
//!  Warning: Returns FALSE if the hardware can't drawing this <br>
//!  primitive properly,application must to simulate it. <br>
virtual /*instead*/  System::Boolean DrawPolyArc(Standard_ShortReal X, Standard_ShortReal Y, Standard_ShortReal anXradius, Standard_ShortReal anYradius, Standard_ShortReal aStartAngle, Standard_ShortReal anOpenAngle) ;

//! Begin a polyline primitive of <aNumber> of points . <br>
//!  Warning: Points must be added by the DrawPoint() method. <br>
virtual /*instead*/  void BeginPolyline(Standard_Integer aNumber) ;

//! Begin a polygon primitive of <aNumber> of points . <br>
//!  Warning: Points must be added by the DrawPoint() method. <br>
virtual /*instead*/  void BeginPolygon(Standard_Integer aNumber) ;

//! Begin a set of segments . <br>
//!  Warning: Segments must be added by DrawSegment() method. <br>
virtual /*instead*/  void BeginSegments() ;

//! Begin a set of circles or ellips . <br>
//!  Warning: Arcs must be added by the DrawArc() method. <br>
virtual /*instead*/  void BeginArcs() ;

//! Begin a set of polygon circles or ellips . <br>
//!  Warning: Arcs must be added by the DrawPolyArc() method. <br>
virtual /*instead*/  void BeginPolyArcs() ;

//! Begin a set of markers . <br>
//!  Warning: Markers must be added by the DrawMarker() method. <br>
virtual /*instead*/  void BeginMarkers() ;

//! Begin a set of points . <br>
//!  Warning: Points must be added by the DrawPoint() method. <br>
virtual /*instead*/  void BeginPoints() ;

//! Close the last Begining primitive <br>
virtual /*instead*/  void ClosePrimitive() ;

//! Allocate the retain buffer <aRetainBuffer> , <br>
//! Defines the DWU coordinates of the pivot point for all primitives <br>
//!  contains inside. <br>
//! Defines the buffer color, line width and font index : <br>
//!  the default color is the highlight color of the colormap. <br>
//!  the default font is the default system font of the fontmap. <br>
//! The other attributes are fixed : <br>
//!  line type is Solid, <br>
//!  line width is 1 Pixel, <br>
//!  polygon fill mode is Solid, <br>
//!  Warning: The number of allocated buffers is limited,it's <br>
//!  recommended to close unused buffers some time! <br>
//!          The TypeOfDrawMode REPLACE is enabled only if the <br>
//!          background drawing has been drawn with the DoubleBuffer <br>
//!          flag set to ENABLE at the last BeginDraw time. <br>
//!          The TypeOfDrawMode XOR is enabled in any case. <br>
//!          The other TypeOfDrawMode are not authorized. <br>
//! Returns TRUE if the buffer is allocated and enabled for drawing. <br>
virtual /*instead*/  System::Boolean OpenBuffer(Standard_Integer aRetainBuffer, Standard_ShortReal aPivotX, Standard_ShortReal aPivotY, Standard_Integer aWidthIndex, Standard_Integer aColorIndex, Standard_Integer aFontIndex, OCAspect_TypeOfDrawMode aDrawMode) ;

//! Clear & Deallocate the retain buffer <aRetainBuffer>. <br>
virtual /*instead*/  void CloseBuffer(Standard_Integer aRetainBuffer) ;

//! Erase & Clear ALL primitives retains in the buffer <aRetainBuffer>. <br>
virtual /*instead*/  void ClearBuffer(Standard_Integer aRetainBuffer) ;

//! Draw ALL primitives retains in the buffer <aRetainBuffer>. <br>
//!  Warning: Note that the aspect of a retain buffer drawing is mono-colored <br>
//! with the current buffer attributes and <br>
//! depending of the DoubleBuffer state flag at the BeginDraw() buffer time, <br>
//! when DB is TRUE,an XOR method is use for drawing and erasing buffers in the <br>
//! same way.In this case,some color side effect can occurs depending of the <br>
//! traversal primitive colors and the supported hardware. <br>
//! when DB is FALSE and the background drawing has been generated with <br>
//! DB at TRUE,no color side effect occurs because the DB is used for restoring <br>
//! the drawing context at EraseBuffer() time,this is more powerfull for the <br>
//! drawing quality excepted for large buffers (flicking) . <br>
virtual /*instead*/  void DrawBuffer(Standard_Integer aRetainBuffer) ;

//! Erase ALL primitives retains in the buffer <aRetainBuffer>. <br>
virtual /*instead*/  void EraseBuffer(Standard_Integer aRetainBuffer) ;

//! Erase , Translate and reDraw ALL primitives retains in the buffer <br>
virtual /*instead*/  void MoveBuffer(Standard_Integer aRetainBuffer, Standard_ShortReal aPivotX, Standard_ShortReal aPivotY) ;

//! Erase , Scale the buffer from the Pivot point and reDraw ALL primitives <br>
virtual /*instead*/  void ScaleBuffer(Standard_Integer aRetainBuffer, Quantity_Factor aScaleX, Quantity_Factor aScaleY) ;

//! Erase , Rotate the buffer from the Pivot point and reDraw ALL primitives <br>
//!  retains in the buffer <aRetainBuffer>. <br>
//! The transformation is relative since the creation time of the buffer. <br>
//!  <anAngle> is the relative counter-clockwise rotation angle from the <br>
//!  Horizontal axis. <br>
virtual /*instead*/  void RotateBuffer(Standard_Integer aRetainBuffer, Quantity_PlaneAngle anAngle) ;

//! Returns the Available WorkSpace in DWU coordinates <br>
//!  Category: Inquire methods <br>
virtual /*instead*/  void WorkSpace(Quantity_Length& Width, Quantity_Length& Heigth) ;

//! Returns the TEXT size in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
virtual /*instead*/  void TextSize(OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_ShortReal& aWidth, Standard_ShortReal& aHeight, Standard_Integer aFontIndex) ;

//! Returns the extended TEXT size and offsets <br>
//!	    in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
//!          NOTE that the text offsets defines the relative position of the <br>
//!         of the text string origin from the lower left corner of the text <br>
//!         boundary limits. <br>
virtual /*instead*/  void TextSize(OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_ShortReal& aWidth, Standard_ShortReal& aHeight, Standard_ShortReal& anXoffset, Standard_ShortReal& anYoffset, Standard_Integer aFontIndex) ;

//! Returns the ascii TEXT size and offsets <br>
//!	    in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
//!          NOTE that the text offsets defines the relative position of the <br>
//!         of the text string origin from the lower left corner of the text <br>
//!         boundary limits. <br>
virtual /*instead*/  void TextSize(System::String^ aText, Standard_ShortReal& aWidth, Standard_ShortReal& aHeight, Standard_ShortReal& anXoffset, Standard_ShortReal& anYoffset, Standard_Integer aFontIndex) ;

//! Returns the font string,slant,size and <br>
//!  baseline height in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
virtual /*instead*/  System::String^ FontSize(Quantity_PlaneAngle& aSlant, Standard_ShortReal& aSize, Standard_ShortReal& aBheight, Standard_Integer aFontIndex) ;

//! Returns the DWU value depending of <br>
//!	    the PIXEL value. <br>
virtual /*instead*/  Quantity_Length Convert(Standard_Integer PV) ;

//! Returns the PIXEL value depending of <br>
//!	    the DWU value. <br>
virtual /*instead*/  Standard_Integer Convert(Quantity_Length DV) ;

//! Returns the DWU position depending of <br>
//!	    the PIXEL position . <br>
virtual /*instead*/  void Convert(Standard_Integer PX, Standard_Integer PY, Quantity_Length& DX, Quantity_Length& DY) ;

//! Returns the PIXEL position depending of <br>
//!	    the DWU position . <br>
virtual /*instead*/  void Convert(Quantity_Length DX, Quantity_Length DY, Standard_Integer& PX, Standard_Integer& PY) ;

//! Returns TRUE if the retain buffer <aRetainBuffer> is enabled <br>
virtual /*instead*/  System::Boolean BufferIsOpen(Standard_Integer aRetainBuffer) ;

//! Returns TRUE if the retain buffer has not been opened or empty. <br>
//!         Returns FALSE if a lot of primitives have been stored inside <br>
//!         because a BeginDraw(..,<aRetainBuffer>) has been done previously. <br>
virtual /*instead*/  System::Boolean BufferIsEmpty(Standard_Integer aRetainBuffer) ;

//! Returns TRUE if the retain buffer s actually displayed at screen. <br>
virtual /*instead*/  System::Boolean BufferIsDrawn(Standard_Integer aRetainBuffer) ;

//! Returns the current buffer rotate angle from the X axis. <br>
virtual /*instead*/  void AngleOfBuffer(Standard_Integer aRetainBuffer, Quantity_PlaneAngle& anAngle) ;

//! Returns the current buffer scale factors. <br>
virtual /*instead*/  void ScaleOfBuffer(Standard_Integer aRetainBuffer, Quantity_Factor& aScaleX, Quantity_Factor& aScaleY) ;

//! Returns the current buffer position. <br>
virtual /*instead*/  void PositionOfBuffer(Standard_Integer aRetainBuffer, Standard_ShortReal& aPivotX, Standard_ShortReal& aPivotY) ;


//! Returns the min and max driver virtual color indexs. <br>
virtual /*instead*/  void ColorBoundIndexs(Standard_Integer& aMinIndex, Standard_Integer& aMaxIndex) ;


//! Returns the local colormap hardware index from a virtual driver color <br>
//! index or returns -1 if the index is not defined. <br>
virtual /*instead*/  Standard_Integer LocalColorIndex(Standard_Integer anIndex) ;


//! Returns the min and max driver virtual font indexs. <br>
virtual /*instead*/  void FontBoundIndexs(Standard_Integer& aMinIndex, Standard_Integer& aMaxIndex) ;


//! Returns the associated fontmap hardware index from a virtual driver font <br>
//! index or returns -1 if the index is not defined. <br>
virtual /*instead*/  Standard_Integer LocalFontIndex(Standard_Integer anIndex) ;


//! Returns the min and max driver virtual type indexs. <br>
virtual /*instead*/  void TypeBoundIndexs(Standard_Integer& aMinIndex, Standard_Integer& aMaxIndex) ;


//! Returns the associated typemap hardware index from a virtual driver type <br>
//! index or returns -1 if the index is not defined. <br>
virtual /*instead*/  Standard_Integer LocalTypeIndex(Standard_Integer anIndex) ;


//! Returns the min and max driver virtual width indexs. <br>
virtual /*instead*/  void WidthBoundIndexs(Standard_Integer& aMinIndex, Standard_Integer& aMaxIndex) ;


//! Returns the associated widthmap hardware index from a virtual driver width <br>
//! index or returns -1 if the index is not defined. <br>
virtual /*instead*/  Standard_Integer LocalWidthIndex(Standard_Integer anIndex) ;


//! Returns the min and max driver virtual marker indexs. <br>
virtual /*instead*/  void MarkBoundIndexs(Standard_Integer& aMinIndex, Standard_Integer& aMaxIndex) ;


//! Returns the local markmap hardware index from a virtual driver marker        -- index or returns -1 if the index is not defined. <br>
virtual /*instead*/  Standard_Integer LocalMarkIndex(Standard_Integer anIndex) ;

~OCXw_Driver()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
