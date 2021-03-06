// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_CorrectFace2d_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_CorrectFace2d_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_CorrectFace2d.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Face.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopTools/TopTools_IndexedMapOfOrientedShape.h"
#include "../TopTools/TopTools_IndexedDataMapOfShapeShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCTopTools_IndexedMapOfOrientedShape;
ref class OCTopTools_IndexedDataMapOfShapeShape;
ref class OCTopoDS_Edge;
ref class OCgp_Pnt2d;
ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;
ref class OCgp_Vec2d;
ref class OCGeom2d_Curve;
ref class OCTopoDS_Wire;
ref class OCBnd_Box2d;



public ref class OCTopOpeBRepBuild_CorrectFace2d  {

protected:
  TopOpeBRepBuild_CorrectFace2d* nativeHandle;
  OCTopOpeBRepBuild_CorrectFace2d(OCDummy^) {};

public:
  property TopOpeBRepBuild_CorrectFace2d* Handle
  {
    TopOpeBRepBuild_CorrectFace2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_CorrectFace2d(TopOpeBRepBuild_CorrectFace2d* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_CorrectFace2d();


OCTopOpeBRepBuild_CorrectFace2d(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_IndexedMapOfOrientedShape^ anAvoidMap, OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeShape^ aMap);


 /*instead*/  OCTopoDS_Face^ Face() ;


 /*instead*/  void Perform() ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Integer ErrorStatus() ;


 /*instead*/  OCTopoDS_Face^ CorrectedFace() ;


 /*instead*/  void SetMapOfTrans2dInfo(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeShape^ aMap) ;


 /*instead*/  OCTopTools_IndexedDataMapOfShapeShape^ MapOfTrans2dInfo() ;


static /*instead*/  void GetP2dFL(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopoDS_Edge^ anEdge, OCNaroWrappers::OCgp_Pnt2d^ P2dF, OCNaroWrappers::OCgp_Pnt2d^ P2dL) ;


static /*instead*/  void CheckList(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_ListOfShape^ aHeadList) ;

~OCTopOpeBRepBuild_CorrectFace2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
