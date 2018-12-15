// File generated by CPPExt (CPP file)
//

#include "OSD_Real2String.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCOSD_Real2String::OCOSD_Real2String(OSD_Real2String* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCOSD_Real2String::OCOSD_Real2String() 
{
  nativeHandle = new OSD_Real2String();
}

 System::Boolean OCOSD_Real2String::RealToCString(Standard_Real aReal, Standard_PCharacter& aString)
{
  return OCConverter::StandardBooleanToBoolean(((OSD_Real2String*)nativeHandle)->RealToCString(aReal, aString));
}

 System::Boolean OCOSD_Real2String::CStringToReal(System::String^ aString, Standard_Real& aReal)
{
  return OCConverter::StandardBooleanToBoolean(((OSD_Real2String*)nativeHandle)->CStringToReal(OCConverter::StringToStandardCString(aString), aReal));
}

