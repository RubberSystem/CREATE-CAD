// File generated by CPPExt (MPV)
//
#ifndef _Storage_MapIteratorOfMapOfAsciiString_OCWrappers_HeaderFile
#define _Storage_MapIteratorOfMapOfAsciiString_OCWrappers_HeaderFile

// include native header
#include <Storage_MapIteratorOfMapOfAsciiString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCStorage_MapOfAsciiString;
ref class OCStorage_StdMapNodeOfMapOfAsciiString;



public ref class OCStorage_MapIteratorOfMapOfAsciiString  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCStorage_MapIteratorOfMapOfAsciiString(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_MapIteratorOfMapOfAsciiString(Storage_MapIteratorOfMapOfAsciiString* nativeHandle);

// Methods PUBLIC


OCStorage_MapIteratorOfMapOfAsciiString();


OCStorage_MapIteratorOfMapOfAsciiString(OCNaroWrappers::OCStorage_MapOfAsciiString^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCStorage_MapOfAsciiString^ aMap) ;


 /*instead*/  OCTCollection_AsciiString^ Key() ;

~OCStorage_MapIteratorOfMapOfAsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
