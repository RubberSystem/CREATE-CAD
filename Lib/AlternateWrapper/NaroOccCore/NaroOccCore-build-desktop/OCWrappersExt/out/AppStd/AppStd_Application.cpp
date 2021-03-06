// File generated by CPPExt (CPP file)
//

#include "AppStd_Application.h"
#include "../Converter.h"
#include "../CDM/CDM_MessageDriver.h"
#include "../TColStd/TColStd_SequenceOfExtendedString.h"


using namespace OCNaroWrappers;

OCAppStd_Application::OCAppStd_Application(Handle(AppStd_Application)* nativeHandle) : OCTDocStd_Application((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AppStd_Application(*nativeHandle);
}

OCAppStd_Application::OCAppStd_Application() : OCTDocStd_Application((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AppStd_Application(new AppStd_Application());
}

OCCDM_MessageDriver^ OCAppStd_Application::MessageDriver()
{
  Handle(CDM_MessageDriver) tmp = (*((Handle_AppStd_Application*)nativeHandle))->MessageDriver();
  return gcnew OCCDM_MessageDriver(&tmp);
}

 void OCAppStd_Application::Formats(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ theFormats)
{
  (*((Handle_AppStd_Application*)nativeHandle))->Formats(*((TColStd_SequenceOfExtendedString*)theFormats->Handle));
}

 System::String^ OCAppStd_Application::ResourcesName()
{
  return OCConverter::StandardCStringToString((*((Handle_AppStd_Application*)nativeHandle))->ResourcesName());
}


