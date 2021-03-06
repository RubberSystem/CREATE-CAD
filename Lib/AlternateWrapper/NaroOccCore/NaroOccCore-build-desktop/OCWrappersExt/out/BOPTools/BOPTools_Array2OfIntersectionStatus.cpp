// File generated by CPPExt (CPP file)
//

#include "BOPTools_Array2OfIntersectionStatus.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCBOPTools_Array2OfIntersectionStatus::OCBOPTools_Array2OfIntersectionStatus(BOPTools_Array2OfIntersectionStatus* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_Array2OfIntersectionStatus::OCBOPTools_Array2OfIntersectionStatus(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new BOPTools_Array2OfIntersectionStatus(R1, R2, C1, C2);
}

OCBOPTools_Array2OfIntersectionStatus::OCBOPTools_Array2OfIntersectionStatus(OCBOPTools_IntersectionStatus Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new BOPTools_Array2OfIntersectionStatus((BOPTools_IntersectionStatus)Item, R1, R2, C1, C2);
}

 void OCBOPTools_Array2OfIntersectionStatus::Init(OCBOPTools_IntersectionStatus V)
{
  ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->Init((BOPTools_IntersectionStatus)V);
}

OCBOPTools_Array2OfIntersectionStatus^ OCBOPTools_Array2OfIntersectionStatus::Assign(OCNaroWrappers::OCBOPTools_Array2OfIntersectionStatus^ Other)
{
  BOPTools_Array2OfIntersectionStatus* tmp = new BOPTools_Array2OfIntersectionStatus(0, 0, 0, 0);
  *tmp = ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->Assign(*((BOPTools_Array2OfIntersectionStatus*)Other->Handle));
  return gcnew OCBOPTools_Array2OfIntersectionStatus(tmp);
}

 Standard_Integer OCBOPTools_Array2OfIntersectionStatus::ColLength()
{
  return ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->ColLength();
}

 Standard_Integer OCBOPTools_Array2OfIntersectionStatus::RowLength()
{
  return ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->RowLength();
}

 Standard_Integer OCBOPTools_Array2OfIntersectionStatus::LowerCol()
{
  return ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->LowerCol();
}

 Standard_Integer OCBOPTools_Array2OfIntersectionStatus::LowerRow()
{
  return ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->LowerRow();
}

 Standard_Integer OCBOPTools_Array2OfIntersectionStatus::UpperCol()
{
  return ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->UpperCol();
}

 Standard_Integer OCBOPTools_Array2OfIntersectionStatus::UpperRow()
{
  return ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->UpperRow();
}

 void OCBOPTools_Array2OfIntersectionStatus::SetValue(Standard_Integer Row, Standard_Integer Col, OCBOPTools_IntersectionStatus Value)
{
  ((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->SetValue(Row, Col, (BOPTools_IntersectionStatus)Value);
}

 OCBOPTools_IntersectionStatus OCBOPTools_Array2OfIntersectionStatus::Value(Standard_Integer Row, Standard_Integer Col)
{
  return (OCBOPTools_IntersectionStatus)(((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->Value(Row, Col));
}

 OCBOPTools_IntersectionStatus OCBOPTools_Array2OfIntersectionStatus::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return (OCBOPTools_IntersectionStatus)(((BOPTools_Array2OfIntersectionStatus*)nativeHandle)->ChangeValue(Row, Col));
}


