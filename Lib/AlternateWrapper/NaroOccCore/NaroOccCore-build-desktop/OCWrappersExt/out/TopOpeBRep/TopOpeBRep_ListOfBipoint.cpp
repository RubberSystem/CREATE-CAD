// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_ListOfBipoint.h"
#include "../Converter.h"
#include "TopOpeBRep_ListIteratorOfListOfBipoint.h"
#include "TopOpeBRep_Bipoint.h"
#include "TopOpeBRep_ListNodeOfListOfBipoint.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_ListOfBipoint::OCTopOpeBRep_ListOfBipoint(TopOpeBRep_ListOfBipoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_ListOfBipoint::OCTopOpeBRep_ListOfBipoint() 
{
  nativeHandle = new TopOpeBRep_ListOfBipoint();
}

 void OCTopOpeBRep_ListOfBipoint::Assign(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ Other)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Assign(*((TopOpeBRep_ListOfBipoint*)Other->Handle));
}

 Standard_Integer OCTopOpeBRep_ListOfBipoint::Extent()
{
  return ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Extent();
}

 System::Boolean OCTopOpeBRep_ListOfBipoint::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_ListOfBipoint*)nativeHandle)->IsEmpty());
}

 void OCTopOpeBRep_ListOfBipoint::Prepend(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Prepend(*((TopOpeBRep_Bipoint*)I->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::Prepend(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I, OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ theIt)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Prepend(*((TopOpeBRep_Bipoint*)I->Handle), *((TopOpeBRep_ListIteratorOfListOfBipoint*)theIt->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::Prepend(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ Other)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Prepend(*((TopOpeBRep_ListOfBipoint*)Other->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::Append(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Append(*((TopOpeBRep_Bipoint*)I->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::Append(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I, OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ theIt)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Append(*((TopOpeBRep_Bipoint*)I->Handle), *((TopOpeBRep_ListIteratorOfListOfBipoint*)theIt->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::Append(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ Other)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Append(*((TopOpeBRep_ListOfBipoint*)Other->Handle));
}

OCTopOpeBRep_Bipoint^ OCTopOpeBRep_ListOfBipoint::First()
{
  TopOpeBRep_Bipoint* tmp = new TopOpeBRep_Bipoint();
  *tmp = ((TopOpeBRep_ListOfBipoint*)nativeHandle)->First();
  return gcnew OCTopOpeBRep_Bipoint(tmp);
}

OCTopOpeBRep_Bipoint^ OCTopOpeBRep_ListOfBipoint::Last()
{
  TopOpeBRep_Bipoint* tmp = new TopOpeBRep_Bipoint();
  *tmp = ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Last();
  return gcnew OCTopOpeBRep_Bipoint(tmp);
}

 void OCTopOpeBRep_ListOfBipoint::RemoveFirst()
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->RemoveFirst();
}

 void OCTopOpeBRep_ListOfBipoint::Remove(OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ It)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->Remove(*((TopOpeBRep_ListIteratorOfListOfBipoint*)It->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::InsertBefore(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I, OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ It)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->InsertBefore(*((TopOpeBRep_Bipoint*)I->Handle), *((TopOpeBRep_ListIteratorOfListOfBipoint*)It->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::InsertBefore(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ Other, OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ It)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->InsertBefore(*((TopOpeBRep_ListOfBipoint*)Other->Handle), *((TopOpeBRep_ListIteratorOfListOfBipoint*)It->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::InsertAfter(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I, OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ It)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->InsertAfter(*((TopOpeBRep_Bipoint*)I->Handle), *((TopOpeBRep_ListIteratorOfListOfBipoint*)It->Handle));
}

 void OCTopOpeBRep_ListOfBipoint::InsertAfter(OCNaroWrappers::OCTopOpeBRep_ListOfBipoint^ Other, OCNaroWrappers::OCTopOpeBRep_ListIteratorOfListOfBipoint^ It)
{
  ((TopOpeBRep_ListOfBipoint*)nativeHandle)->InsertAfter(*((TopOpeBRep_ListOfBipoint*)Other->Handle), *((TopOpeBRep_ListIteratorOfListOfBipoint*)It->Handle));
}


