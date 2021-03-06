// File generated by CPPExt (CPP file)
//

#include "Resource_Manager.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "Resource_DataMapOfAsciiStringAsciiString.h"


using namespace OCNaroWrappers;

OCResource_Manager::OCResource_Manager(Handle(Resource_Manager)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Resource_Manager(*nativeHandle);
}

OCResource_Manager::OCResource_Manager(System::String^ aName, System::Boolean Verbose) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Resource_Manager(new Resource_Manager(OCConverter::StringToStandardCString(aName), OCConverter::BooleanToStandardBoolean(Verbose)));
}

OCResource_Manager::OCResource_Manager(System::String^ aName, OCNaroWrappers::OCTCollection_AsciiString^ aDefaultsDirectory, OCNaroWrappers::OCTCollection_AsciiString^ anUserDefaultsDirectory, System::Boolean Verbose) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Resource_Manager(new Resource_Manager(OCConverter::StringToStandardCString(aName), *((TCollection_AsciiString*)aDefaultsDirectory->Handle), *((TCollection_AsciiString*)anUserDefaultsDirectory->Handle), OCConverter::BooleanToStandardBoolean(Verbose)));
}

 System::Boolean OCResource_Manager::Save()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Resource_Manager*)nativeHandle))->Save());
}

 System::Boolean OCResource_Manager::Find(System::String^ aResource)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Resource_Manager*)nativeHandle))->Find(OCConverter::StringToStandardCString(aResource)));
}

 Standard_Integer OCResource_Manager::Integer(System::String^ aResourceName)
{
  return (*((Handle_Resource_Manager*)nativeHandle))->Integer(OCConverter::StringToStandardCString(aResourceName));
}

 Standard_Real OCResource_Manager::Real(System::String^ aResourceName)
{
  return (*((Handle_Resource_Manager*)nativeHandle))->Real(OCConverter::StringToStandardCString(aResourceName));
}

 System::String^ OCResource_Manager::Value(System::String^ aResourceName)
{
  return OCConverter::StandardCStringToString((*((Handle_Resource_Manager*)nativeHandle))->Value(OCConverter::StringToStandardCString(aResourceName)));
}

 System::String^ OCResource_Manager::ExtValue(System::String^ aResourceName)
{
  return OCConverter::StandardExtStringToString((*((Handle_Resource_Manager*)nativeHandle))->ExtValue(OCConverter::StringToStandardCString(aResourceName)));
}

 void OCResource_Manager::SetResource(System::String^ aResourceName, Standard_Integer aValue)
{
  (*((Handle_Resource_Manager*)nativeHandle))->SetResource(OCConverter::StringToStandardCString(aResourceName), aValue);
}

 void OCResource_Manager::SetResource(System::String^ aResourceName, Standard_Real aValue)
{
  (*((Handle_Resource_Manager*)nativeHandle))->SetResource(OCConverter::StringToStandardCString(aResourceName), aValue);
}

 void OCResource_Manager::SetResource(System::String^ aResourceName, System::String^ aValue)
{
  (*((Handle_Resource_Manager*)nativeHandle))->SetResource(OCConverter::StringToStandardCString(aResourceName), OCConverter::StringToStandardCString(aValue));
}

 void OCResource_Manager::SetResource(System::String^ aResourceName, System::String^ aValue)
{
  (*((Handle_Resource_Manager*)nativeHandle))->SetResource(OCConverter::StringToStandardCString(aResourceName), OCConverter::StringToStandardExtString(aValue));
}


