// File generated by CPPExt (CPP file)
//

#include "Graphic3d_ListIteratorOfSetListOfSetOfGroup.h"
#include "../Converter.h"
#include "Graphic3d_SetListOfSetOfGroup.h"
#include "Graphic3d_Group.h"
#include "Graphic3d_ListNodeOfSetListOfSetOfGroup.h"


using namespace OCNaroWrappers;

OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::OCGraphic3d_ListIteratorOfSetListOfSetOfGroup(Graphic3d_ListIteratorOfSetListOfSetOfGroup* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::OCGraphic3d_ListIteratorOfSetListOfSetOfGroup() 
{
  nativeHandle = new Graphic3d_ListIteratorOfSetListOfSetOfGroup();
}

OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::OCGraphic3d_ListIteratorOfSetListOfSetOfGroup(OCNaroWrappers::OCGraphic3d_SetListOfSetOfGroup^ L) 
{
  nativeHandle = new Graphic3d_ListIteratorOfSetListOfSetOfGroup(*((Graphic3d_SetListOfSetOfGroup*)L->Handle));
}

 void OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::Initialize(OCNaroWrappers::OCGraphic3d_SetListOfSetOfGroup^ L)
{
  ((Graphic3d_ListIteratorOfSetListOfSetOfGroup*)nativeHandle)->Initialize(*((Graphic3d_SetListOfSetOfGroup*)L->Handle));
}

 System::Boolean OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::More()
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_ListIteratorOfSetListOfSetOfGroup*)nativeHandle)->More());
}

 void OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::Next()
{
  ((Graphic3d_ListIteratorOfSetListOfSetOfGroup*)nativeHandle)->Next();
}

OCGraphic3d_Group^ OCGraphic3d_ListIteratorOfSetListOfSetOfGroup::Value()
{
  Handle(Graphic3d_Group) tmp = ((Graphic3d_ListIteratorOfSetListOfSetOfGroup*)nativeHandle)->Value();
  return gcnew OCGraphic3d_Group(&tmp);
}


