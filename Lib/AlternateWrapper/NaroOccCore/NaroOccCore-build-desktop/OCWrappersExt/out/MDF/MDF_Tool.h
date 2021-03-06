// File generated by CPPExt (MPV)
//
#ifndef _MDF_Tool_OCWrappers_HeaderFile
#define _MDF_Tool_OCWrappers_HeaderFile

// include native header
#include <MDF_Tool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTDF_Data;
ref class OCPDF_Data;
ref class OCMDF_TypeASDriverMap;
ref class OCMDF_SRelocationTable;
ref class OCTDF_Label;
ref class OCPColStd_HArray1OfInteger;
ref class OCPDF_HAttributeArray1;
ref class OCMDF_TypeARDriverMap;
ref class OCMDF_RRelocationTable;


//! A tool to translate... <br>
public ref class OCMDF_Tool  {

protected:
  MDF_Tool* nativeHandle;
  OCMDF_Tool(OCDummy^) {};

public:
  property MDF_Tool* Handle
  {
    MDF_Tool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMDF_Tool(MDF_Tool* nativeHandle);

// Methods PUBLIC

//! Writes the labels with empty attributes. <br>
static /*instead*/  void WriteLabels(OCNaroWrappers::OCTDF_Data^ aSource, OCNaroWrappers::OCPDF_Data^ aTarget, OCNaroWrappers::OCMDF_TypeASDriverMap^ aDriverMap, OCNaroWrappers::OCMDF_SRelocationTable^ aReloc) ;

//! Used for recursivity. <br>
static /*instead*/  void WriteLabels(OCNaroWrappers::OCTDF_Label^ aSourceLab, OCNaroWrappers::OCPColStd_HArray1OfInteger^ theLabels, OCNaroWrappers::OCPDF_HAttributeArray1^ theAttributes, OCNaroWrappers::OCMDF_TypeASDriverMap^ aDriverMap, OCNaroWrappers::OCMDF_SRelocationTable^ aReloc, Standard_Integer& labAlloc, Standard_Integer& attAlloc) ;

//! Writes attributes content. <br>
static /*instead*/  void WriteAttributes(OCNaroWrappers::OCMDF_TypeASDriverMap^ aDriverMap, OCNaroWrappers::OCMDF_SRelocationTable^ aReloc) ;

//!  Reads the labels abd adds empty attributes to them. <br>
static /*instead*/  void ReadLabels(OCNaroWrappers::OCPDF_Data^ aSource, OCNaroWrappers::OCTDF_Data^ aTarget, OCNaroWrappers::OCMDF_TypeARDriverMap^ aDriverMap, OCNaroWrappers::OCMDF_RRelocationTable^ aReloc) ;

//! Used for recursivity. <br>
static /*instead*/  void ReadLabels(OCNaroWrappers::OCTDF_Label^ anIns, OCNaroWrappers::OCPColStd_HArray1OfInteger^ theLabels, OCNaroWrappers::OCPDF_HAttributeArray1^ theAttributes, OCNaroWrappers::OCMDF_TypeARDriverMap^ aDriverMap, OCNaroWrappers::OCMDF_RRelocationTable^ aReloc, Standard_Integer& labRead, Standard_Integer& attRead) ;

//! Reads attributes content and paste them. <br>
static /*instead*/  void ReadAttributes(OCNaroWrappers::OCMDF_TypeARDriverMap^ aDriverMap, OCNaroWrappers::OCMDF_RRelocationTable^ aReloc) ;

~OCMDF_Tool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
