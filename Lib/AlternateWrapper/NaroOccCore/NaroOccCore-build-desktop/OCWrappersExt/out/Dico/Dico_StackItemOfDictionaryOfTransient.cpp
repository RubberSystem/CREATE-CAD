// File generated by CPPExt (CPP file)
//

#include "Dico_StackItemOfDictionaryOfTransient.h"
#include "../Converter.h"
#include "Dico_DictionaryOfTransient.h"
#include "../Standard/Standard_Transient.h"
#include "Dico_IteratorOfDictionaryOfTransient.h"


using namespace OCNaroWrappers;

OCDico_StackItemOfDictionaryOfTransient::OCDico_StackItemOfDictionaryOfTransient(Handle(Dico_StackItemOfDictionaryOfTransient)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Dico_StackItemOfDictionaryOfTransient(*nativeHandle);
}

OCDico_StackItemOfDictionaryOfTransient::OCDico_StackItemOfDictionaryOfTransient() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Dico_StackItemOfDictionaryOfTransient(new Dico_StackItemOfDictionaryOfTransient());
}

OCDico_StackItemOfDictionaryOfTransient::OCDico_StackItemOfDictionaryOfTransient(OCNaroWrappers::OCDico_StackItemOfDictionaryOfTransient^ previous) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Dico_StackItemOfDictionaryOfTransient(new Dico_StackItemOfDictionaryOfTransient(*((Handle_Dico_StackItemOfDictionaryOfTransient*)previous->Handle)));
}

OCDico_StackItemOfDictionaryOfTransient^ OCDico_StackItemOfDictionaryOfTransient::Previous()
{
  Handle(Dico_StackItemOfDictionaryOfTransient) tmp = (*((Handle_Dico_StackItemOfDictionaryOfTransient*)nativeHandle))->Previous();
  return gcnew OCDico_StackItemOfDictionaryOfTransient(&tmp);
}

OCDico_DictionaryOfTransient^ OCDico_StackItemOfDictionaryOfTransient::Value()
{
  Handle(Dico_DictionaryOfTransient) tmp = (*((Handle_Dico_StackItemOfDictionaryOfTransient*)nativeHandle))->Value();
  return gcnew OCDico_DictionaryOfTransient(&tmp);
}

 void OCDico_StackItemOfDictionaryOfTransient::SetValue(OCNaroWrappers::OCDico_DictionaryOfTransient^ cval)
{
  (*((Handle_Dico_StackItemOfDictionaryOfTransient*)nativeHandle))->SetValue(*((Handle_Dico_DictionaryOfTransient*)cval->Handle));
}

