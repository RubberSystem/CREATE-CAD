// File generated by CPPExt (MPV)
//
#ifndef _TColgp_Array2OfVec2d_OCWrappers_HeaderFile
#define _TColgp_Array2OfVec2d_OCWrappers_HeaderFile

// include native header
#include <TColgp_Array2OfVec2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Vec2d;



public ref class OCTColgp_Array2OfVec2d  {

protected:
  TColgp_Array2OfVec2d* nativeHandle;
  OCTColgp_Array2OfVec2d(OCDummy^) {};

public:
  property TColgp_Array2OfVec2d* Handle
  {
    TColgp_Array2OfVec2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColgp_Array2OfVec2d(TColgp_Array2OfVec2d* nativeHandle);

// Methods PUBLIC


OCTColgp_Array2OfVec2d(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColgp_Array2OfVec2d(OCNaroWrappers::OCgp_Vec2d^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Vec2d^ V) ;


 /*instead*/  OCTColgp_Array2OfVec2d^ Assign(OCNaroWrappers::OCTColgp_Array2OfVec2d^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_Vec2d^ Value) ;


 /*instead*/  OCgp_Vec2d^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCgp_Vec2d^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCTColgp_Array2OfVec2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif