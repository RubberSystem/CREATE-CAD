// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepTool_connexity_OCWrappers_HeaderFile
#define _TopOpeBRepTool_connexity_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepTool_connexity.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_Array1OfListOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;



public ref class OCTopOpeBRepTool_connexity  {

protected:
  TopOpeBRepTool_connexity* nativeHandle;
  OCTopOpeBRepTool_connexity(OCDummy^) {};

public:
  property TopOpeBRepTool_connexity* Handle
  {
    TopOpeBRepTool_connexity* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepTool_connexity(TopOpeBRepTool_connexity* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepTool_connexity();


OCTopOpeBRepTool_connexity(OCNaroWrappers::OCTopoDS_Shape^ Key);


 /*instead*/  void SetKey(OCNaroWrappers::OCTopoDS_Shape^ Key) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Integer Item(Standard_Integer OriKey, OCNaroWrappers::OCTopTools_ListOfShape^ Item) ;


 /*instead*/  Standard_Integer AllItems(OCNaroWrappers::OCTopTools_ListOfShape^ Item) ;


 /*instead*/  void AddItem(Standard_Integer OriKey, OCNaroWrappers::OCTopTools_ListOfShape^ Item) ;


 /*instead*/  void AddItem(Standard_Integer OriKey, OCNaroWrappers::OCTopoDS_Shape^ Item) ;


 /*instead*/  System::Boolean RemoveItem(Standard_Integer OriKey, OCNaroWrappers::OCTopoDS_Shape^ Item) ;


 /*instead*/  System::Boolean RemoveItem(OCNaroWrappers::OCTopoDS_Shape^ Item) ;


 /*instead*/  OCTopTools_ListOfShape^ ChangeItem(Standard_Integer OriKey) ;


 /*instead*/  System::Boolean IsMultiple() ;


 /*instead*/  System::Boolean IsFaulty() ;


 /*instead*/  Standard_Integer IsInternal(OCNaroWrappers::OCTopTools_ListOfShape^ Item) ;

~OCTopOpeBRepTool_connexity()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
