// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_Tool_OCWrappers_HeaderFile
#define _MeshVS_Tool_OCWrappers_HeaderFile

// include native header
#include <MeshVS_Tool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic3d_AspectFillArea3d;
ref class OCMeshVS_Drawer;
ref class OCGraphic3d_MaterialAspect;
ref class OCGraphic3d_AspectLine3d;
ref class OCGraphic3d_AspectMarker3d;
ref class OCGraphic3d_AspectText3d;
ref class OCTColStd_Array1OfReal;
ref class OCgp_Vec;


//! This class provides auxiliary methods to create differents aspects <br>
public ref class OCMeshVS_Tool  {

protected:
  MeshVS_Tool* nativeHandle;
  OCMeshVS_Tool(OCDummy^) {};

public:
  property MeshVS_Tool* Handle
  {
    MeshVS_Tool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMeshVS_Tool(MeshVS_Tool* nativeHandle);

// Methods PUBLIC

//! Creates fill area aspect with values from Drawer according to keys from DrawerAttribute <br>
static /*instead*/  OCGraphic3d_AspectFillArea3d^ CreateAspectFillArea3d(OCNaroWrappers::OCMeshVS_Drawer^ theDr, System::Boolean UseDefaults) ;

//! Creates fill aspect with values from Drawer according to keys from DrawerAttribute <br>
//! and specific material aspect <br>
static /*instead*/  OCGraphic3d_AspectFillArea3d^ CreateAspectFillArea3d(OCNaroWrappers::OCMeshVS_Drawer^ theDr, OCNaroWrappers::OCGraphic3d_MaterialAspect^ Mat, System::Boolean UseDefaults) ;

//! Creates line aspect with values from Drawer according to keys from DrawerAttribute <br>
static /*instead*/  OCGraphic3d_AspectLine3d^ CreateAspectLine3d(OCNaroWrappers::OCMeshVS_Drawer^ theDr, System::Boolean UseDefaults) ;

//! Creates marker aspect with values from Drawer according to keys from DrawerAttribute <br>
static /*instead*/  OCGraphic3d_AspectMarker3d^ CreateAspectMarker3d(OCNaroWrappers::OCMeshVS_Drawer^ theDr, System::Boolean UseDefaults) ;

//! Creates text aspect with values from Drawer according to keys from DrawerAttribute <br>
static /*instead*/  OCGraphic3d_AspectText3d^ CreateAspectText3d(OCNaroWrappers::OCMeshVS_Drawer^ theDr, System::Boolean UseDefaults) ;

//! Get one of normals to polygon described by these points. <br>
//!          If the polygon isn't planar, function returns false <br>
static /*instead*/  System::Boolean GetNormal(OCNaroWrappers::OCTColStd_Array1OfReal^ Nodes, OCNaroWrappers::OCgp_Vec^ Norm) ;

//! Get an average of normals to non-planar polygon described by these points or compute <br>
//!          normal of planar polygon. If the polygon isn't planar, function returns false <br>
static /*instead*/  System::Boolean GetAverageNormal(OCNaroWrappers::OCTColStd_Array1OfReal^ Nodes, OCNaroWrappers::OCgp_Vec^ Norm) ;

~OCMeshVS_Tool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
