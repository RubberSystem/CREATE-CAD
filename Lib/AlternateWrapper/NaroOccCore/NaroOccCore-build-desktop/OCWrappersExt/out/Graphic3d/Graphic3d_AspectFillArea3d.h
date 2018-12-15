// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_AspectFillArea3d_OCWrappers_HeaderFile
#define _Graphic3d_AspectFillArea3d_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_AspectFillArea3d.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_AspectFillArea.h"

#include "Graphic3d_MaterialAspect.h"
#include "../Aspect/Aspect_TypeOfDegenerateModel.h"
#include "../Aspect/Aspect_InteriorStyle.h"
#include "../Aspect/Aspect_TypeOfLine.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_TextureMap;
ref class OCQuantity_Color;
ref class OCGraphic3d_MaterialAspect;


//! This class permits the creation and updating of <br>
//!          a graphic attribute context for opaque 3d <br>
//!          primitives (polygons, triangles, quadrilaterals) <br>
//!  Keywords: Face, FillArea, Triangle, Quadrangle, Polygon, <br>
//!           TriangleMesh, QuadrangleMesh, Edge, Border, Interior, <br>
//!           Color, Type, Width, Style, Hatch, Material, <br>
//!           BackFaceRemoval, DistinguishMode <br>
public ref class OCGraphic3d_AspectFillArea3d : OCAspect_AspectFillArea {

protected:
  // dummy constructor;
  OCGraphic3d_AspectFillArea3d(OCDummy^) : OCAspect_AspectFillArea((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_AspectFillArea3d(Handle(Graphic3d_AspectFillArea3d)* nativeHandle);

// Methods PUBLIC

//! Creates a context table for fill area primitives <br>
//!          defined with the following default values: <br>
OCGraphic3d_AspectFillArea3d();

//! Creates a context table for fill area primitives <br>
//!          defined with the specified values. <br>
OCGraphic3d_AspectFillArea3d(OCAspect_InteriorStyle Interior, OCNaroWrappers::OCQuantity_Color^ InteriorColor, OCNaroWrappers::OCQuantity_Color^ EdgeColor, OCAspect_TypeOfLine EdgeLineType, Standard_Real EdgeWidth, OCNaroWrappers::OCGraphic3d_MaterialAspect^ FrontMaterial, OCNaroWrappers::OCGraphic3d_MaterialAspect^ BackMaterial);

//! Allows the display of back-facing filled <br>
//!          polygons. <br>
 /*instead*/  void AllowBackFace() ;

//! Modifies the surface material of internal faces <br>
 /*instead*/  void SetBackMaterial(OCNaroWrappers::OCGraphic3d_MaterialAspect^ AMaterial) ;

//! Allows distinction between external and internal <br>
//!          faces of FillAreas. <br>
 /*instead*/  void SetDistinguishOn() ;

//! Forbids distinction between external and internal <br>
//!          faces of FillAreas. <br>
 /*instead*/  void SetDistinguishOff() ;

//! The edges of FillAreas are drawn. <br>
 /*instead*/  void SetEdgeOn() ;

//! The edges of FillAreas are not drawn. <br>
 /*instead*/  void SetEdgeOff() ;

//! Modifies the surface material of external faces <br>
 /*instead*/  void SetFrontMaterial(OCNaroWrappers::OCGraphic3d_MaterialAspect^ AMaterial) ;

//! Suppress the display of back-facing filled <br>
//!          polygons. <br>
//!          A back-facing polygon is defined as a polygon whose <br>
//!          vertices are in a clockwise order with respect <br>
//!          to screen coordinates. <br>
 /*instead*/  void SuppressBackFace() ;


 /*instead*/  void SetTextureMap(OCNaroWrappers::OCGraphic3d_TextureMap^ ATexture) ;


 /*instead*/  void SetTextureMapOn() ;


 /*instead*/  void SetTextureMapOff() ;

//! Sets the default model of degeneration for the polygons <br>
//!      which is taking in account at creation time of any <br>
//!      graphic structure until the model is change using <br>
//!      SetDegenerateModel() method. <br>
static /*instead*/  void SetDefaultDegenerateModel(OCAspect_TypeOfDegenerateModel aModel, Quantity_Ratio aRatio) ;

//! Sets the model of degeneration for the polygons <br>
//!   according to the degenerate ratio >= 0. & <= 1. where : <br>
//!   <aRatio> = 0. indicate that all polygons of the graphic structure <br>
//!      are displayed. <br>
//!   <aRatio> = 1. indicate that nothing is displayed in the graphic <br>
//!      structure. <br>
//!   When <ARatio> is > 0 & < 1. the corresponding amount <br>
//!   of polygons are displayed in the graphic structure with a <br>
//!   random method. <br>
//!  Warning: the degenerate structure is shown only when <br>
//! the animation and degenerate flags are set to TRUE <br>
//! in V3d_View::SetAnimationMode(..) <br>
 /*instead*/  void SetDegenerateModel(OCAspect_TypeOfDegenerateModel aModel, Quantity_Ratio aRatio) ;

//! Sets up OpenGL polygon offsets mechanism. <br>
//!          <aMode> parameter can contain various combinations of <br>
//!          Aspect_PolygonOffsetMode enumeration elements (Aspect_POM_None means <br>
//!          that polygon offsets are not changed). <br>
//!          If <aMode> is different from Aspect_POM_Off and Aspect_POM_None, then <aFactor> and <aUnits> <br>
//!          arguments are used by graphic renderer to calculate a depth offset value: <br>
//! <br>
//!          offset = <aFactor> * m + <aUnits> * r, where <br>
//!          m - maximum depth slope for the polygon currently being displayed, <br>
//!          r - minimum window coordinates depth resolution (implementation-specific) <br>
 /*instead*/  void SetPolygonOffsets(Standard_Integer aMode, Standard_ShortReal aFactor, Standard_ShortReal aUnits) ;

//! Returns the Back Face Removal status. <br>
//!          Standard_True if SuppressBackFace is activated. <br>
 /*instead*/  System::Boolean BackFace() ;

//! Returns the Distinguish Mode status. <br>
 /*instead*/  System::Boolean Distinguish() ;

//! Returns Standard_True if the edges are drawn and <br>
//!          Standard_False if the edges are not drawn. <br>
 /*instead*/  System::Boolean Edge() ;

//! Returns the surface material of internal faces <br>
 /*instead*/  OCGraphic3d_MaterialAspect^ BackMaterial() ;

//! Returns the surface material of external faces <br>
 /*instead*/  OCGraphic3d_MaterialAspect^ FrontMaterial() ;


 /*instead*/  OCGraphic3d_TextureMap^ TextureMap() ;


 /*instead*/  System::Boolean TextureMapState() ;

//! returns the current degeneration model and ratio <br>
//!  for the polygons <br>
 /*instead*/  OCAspect_TypeOfDegenerateModel DegenerateModel(Quantity_Ratio& aRatio) ;

//! returns the default degeneration model and ratio <br>
//!  for the polygons <br>
static /*instead*/  OCAspect_TypeOfDegenerateModel DefaultDegenerateModel(Quantity_Ratio& aRatio) ;

//! Returns current polygon offsets settings. <br>
 /*instead*/  void PolygonOffsets(Standard_Integer& aMode, Standard_ShortReal& aFactor, Standard_ShortReal& aUnits) ;

~OCGraphic3d_AspectFillArea3d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif