// File generated by CPPExt (CPP file)
//

#include "OSD_Host.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCOSD_Host::OCOSD_Host(OSD_Host* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCOSD_Host::OCOSD_Host() 
{
  nativeHandle = new OSD_Host();
}

OCTCollection_AsciiString^ OCOSD_Host::SystemVersion()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((OSD_Host*)nativeHandle)->SystemVersion();
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCOSD_SysType OCOSD_Host::SystemId()
{
  return (OCOSD_SysType)(((OSD_Host*)nativeHandle)->SystemId());
}

OCTCollection_AsciiString^ OCOSD_Host::HostName()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((OSD_Host*)nativeHandle)->HostName();
  return gcnew OCTCollection_AsciiString(tmp);
}

 Standard_Integer OCOSD_Host::AvailableMemory()
{
  return ((OSD_Host*)nativeHandle)->AvailableMemory();
}

OCTCollection_AsciiString^ OCOSD_Host::InternetAddress()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((OSD_Host*)nativeHandle)->InternetAddress();
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCOSD_OEMType OCOSD_Host::MachineType()
{
  return (OCOSD_OEMType)(((OSD_Host*)nativeHandle)->MachineType());
}

 System::Boolean OCOSD_Host::Failed()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_Host*)nativeHandle)->Failed());
}

 void OCOSD_Host::Reset()
{
  ((OSD_Host*)nativeHandle)->Reset();
}

 void OCOSD_Host::Perror()
{
  ((OSD_Host*)nativeHandle)->Perror();
}

 Standard_Integer OCOSD_Host::Error()
{
  return ((OSD_Host*)nativeHandle)->Error();
}


