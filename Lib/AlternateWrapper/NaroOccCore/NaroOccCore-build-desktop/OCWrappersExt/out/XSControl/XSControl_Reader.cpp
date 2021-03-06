// File generated by CPPExt (CPP file)
//

#include "XSControl_Reader.h"
#include "../Converter.h"
#include "XSControl_WorkSession.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "../Standard/Standard_Transient.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCXSControl_Reader::OCXSControl_Reader(XSControl_Reader* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCXSControl_Reader::OCXSControl_Reader() 
{
  nativeHandle = new XSControl_Reader();
}

OCXSControl_Reader::OCXSControl_Reader(System::String^ norm) 
{
  nativeHandle = new XSControl_Reader(OCConverter::StringToStandardCString(norm));
}

OCXSControl_Reader::OCXSControl_Reader(OCNaroWrappers::OCXSControl_WorkSession^ WS, System::Boolean scratch) 
{
  nativeHandle = new XSControl_Reader(*((Handle_XSControl_WorkSession*)WS->Handle), OCConverter::BooleanToStandardBoolean(scratch));
}

 System::Boolean OCXSControl_Reader::SetNorm(System::String^ norm)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Reader*)nativeHandle)->SetNorm(OCConverter::StringToStandardCString(norm)));
}

 void OCXSControl_Reader::SetWS(OCNaroWrappers::OCXSControl_WorkSession^ WS, System::Boolean scratch)
{
  ((XSControl_Reader*)nativeHandle)->SetWS(*((Handle_XSControl_WorkSession*)WS->Handle), OCConverter::BooleanToStandardBoolean(scratch));
}

OCXSControl_WorkSession^ OCXSControl_Reader::WS()
{
  Handle(XSControl_WorkSession) tmp = ((XSControl_Reader*)nativeHandle)->WS();
  return gcnew OCXSControl_WorkSession(&tmp);
}

 OCIFSelect_ReturnStatus OCXSControl_Reader::ReadFile(System::String^ filename)
{
  return (OCIFSelect_ReturnStatus)(((XSControl_Reader*)nativeHandle)->ReadFile(OCConverter::StringToStandardCString(filename)));
}

OCInterface_InterfaceModel^ OCXSControl_Reader::Model()
{
  Handle(Interface_InterfaceModel) tmp = ((XSControl_Reader*)nativeHandle)->Model();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

OCTColStd_HSequenceOfTransient^ OCXSControl_Reader::GiveList(System::String^ first, System::String^ second)
{
  Handle(TColStd_HSequenceOfTransient) tmp = ((XSControl_Reader*)nativeHandle)->GiveList(OCConverter::StringToStandardCString(first), OCConverter::StringToStandardCString(second));
  return gcnew OCTColStd_HSequenceOfTransient(&tmp);
}

OCTColStd_HSequenceOfTransient^ OCXSControl_Reader::GiveList(System::String^ first, OCNaroWrappers::OCStandard_Transient^ ent)
{
  Handle(TColStd_HSequenceOfTransient) tmp = ((XSControl_Reader*)nativeHandle)->GiveList(OCConverter::StringToStandardCString(first), *((Handle_Standard_Transient*)ent->Handle));
  return gcnew OCTColStd_HSequenceOfTransient(&tmp);
}

 Standard_Integer OCXSControl_Reader::NbRootsForTransfer()
{
  return ((XSControl_Reader*)nativeHandle)->NbRootsForTransfer();
}

OCStandard_Transient^ OCXSControl_Reader::RootForTransfer(Standard_Integer num)
{
  Handle(Standard_Transient) tmp = ((XSControl_Reader*)nativeHandle)->RootForTransfer(num);
  return gcnew OCStandard_Transient(&tmp);
}

 System::Boolean OCXSControl_Reader::TransferOneRoot(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Reader*)nativeHandle)->TransferOneRoot(num));
}

 System::Boolean OCXSControl_Reader::TransferOne(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Reader*)nativeHandle)->TransferOne(num));
}

 System::Boolean OCXSControl_Reader::TransferEntity(OCNaroWrappers::OCStandard_Transient^ start)
{
  return OCConverter::StandardBooleanToBoolean(((XSControl_Reader*)nativeHandle)->TransferEntity(*((Handle_Standard_Transient*)start->Handle)));
}

 Standard_Integer OCXSControl_Reader::TransferList(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list)
{
  return ((XSControl_Reader*)nativeHandle)->TransferList(*((Handle_TColStd_HSequenceOfTransient*)list->Handle));
}

 Standard_Integer OCXSControl_Reader::TransferRoots()
{
  return ((XSControl_Reader*)nativeHandle)->TransferRoots();
}

 void OCXSControl_Reader::ClearShapes()
{
  ((XSControl_Reader*)nativeHandle)->ClearShapes();
}

 Standard_Integer OCXSControl_Reader::NbShapes()
{
  return ((XSControl_Reader*)nativeHandle)->NbShapes();
}

OCTopoDS_Shape^ OCXSControl_Reader::Shape(Standard_Integer num)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Reader*)nativeHandle)->Shape(num);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCXSControl_Reader::OneShape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((XSControl_Reader*)nativeHandle)->OneShape();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCXSControl_Reader::PrintCheckLoad(System::Boolean failsonly, OCIFSelect_PrintCount mode)
{
  ((XSControl_Reader*)nativeHandle)->PrintCheckLoad(OCConverter::BooleanToStandardBoolean(failsonly), (IFSelect_PrintCount)mode);
}

 void OCXSControl_Reader::PrintCheckTransfer(System::Boolean failsonly, OCIFSelect_PrintCount mode)
{
  ((XSControl_Reader*)nativeHandle)->PrintCheckTransfer(OCConverter::BooleanToStandardBoolean(failsonly), (IFSelect_PrintCount)mode);
}

 void OCXSControl_Reader::PrintStatsTransfer(Standard_Integer what, Standard_Integer mode)
{
  ((XSControl_Reader*)nativeHandle)->PrintStatsTransfer(what, mode);
}

 void OCXSControl_Reader::GetStatsTransfer(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list, Standard_Integer& nbMapped, Standard_Integer& nbWithResult, Standard_Integer& nbWithFail)
{
  ((XSControl_Reader*)nativeHandle)->GetStatsTransfer(*((Handle_TColStd_HSequenceOfTransient*)list->Handle), nbMapped, nbWithResult, nbWithFail);
}


