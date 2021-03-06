// File generated by CPPExt (Transient)
//
#ifndef _MoniTool_CaseData_OCWrappers_HeaderFile
#define _MoniTool_CaseData_OCWrappers_HeaderFile

// include the wrapped class
#include <MoniTool_CaseData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TCollection/TCollection_AsciiString.h"
#include "../TColStd/TColStd_SequenceOfTransient.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../TColStd/TColStd_SequenceOfAsciiString.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTopoDS_Shape;
ref class OCgp_XYZ;
ref class OCgp_XY;
ref class OCStandard_Type;
ref class OCTCollection_AsciiString;
ref class OCMessage_Msg;


//! This class is intended to record data attached to a case to be <br>
//!           exploited. <br>
//!           Cases can be : <br>
//!           * internal, i.e. for immediate debug <br>
//!             for instance, on an abnormal exception, fill a CaseData <br>
//!             in a DB (see class DB) then look at its content by XSDRAW <br>
//!           * to record abnormal situation, which cause a warning or fail <br>
//!             message, for instance during a transfer <br>
//!             This will allow, firstly to build a more comprehensive <br>
//!             message (with associated data), secondly to help seeing <br>
//!             "what happened" <br>
//!           * to record data in order to fix a problem <br>
//!             If a CASE is well defined and its fix is well known too, <br>
//!             recording a CaseData which identifies the CASE will allow <br>
//!             to furstherly call the appropriate fix routine <br>
//! <br>
//!           A CaseData is defined by <br>
//!           * an optional CASE identifier <br>
//!             If it is defined, this will allow systematic exploitation <br>
//!             such as calling a fix routine <br>
//!           * an optional Check Status, Warning or Fail, else it is Info <br>
//!           * a NAME : it just allows to identify where this CaseData was <br>
//!             created (help to debug) <br>
//!           * a LIST OF DATA <br>
//! <br>
//!           Each Data has a type (integer, real etc...) and can have a name <br>
//!           Hence, each data may be identified by : <br>
//!           * its absolute rank (from 1 to NbData) <br>
//!           * its name if it has one (exact matching) <br>
//!           * else, an interpreted identifier, which gives the type and <br>
//!             the rank in the type (for instance, first integer; etc) <br>
//!             (See NameRank) <br>
public ref class OCMoniTool_CaseData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMoniTool_CaseData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_CaseData(Handle(MoniTool_CaseData)* nativeHandle);

// Methods PUBLIC

//! Creates a CaseData with a CaseId and a Name <br>
//!           (by default not defined) <br>
OCMoniTool_CaseData(System::String^ caseid, System::String^ name);

//! Sets a CaseId <br>
 /*instead*/  void SetCaseId(System::String^ caseid) ;

//! Sets a Name <br>
 /*instead*/  void SetName(System::String^ name) ;

//! Returns the CaseId <br>
 /*instead*/  System::String^ CaseId() ;

//! Returns the Name <br>
 /*instead*/  System::String^ Name() ;

//! Tells if <me> is Check (Warning or Fail), else it is Info <br>
 /*instead*/  System::Boolean IsCheck() ;

//! Tells if <me> is Warning <br>
 /*instead*/  System::Boolean IsWarning() ;

//! Tells if <me> is Fail <br>
 /*instead*/  System::Boolean IsFail() ;

//! Resets Check Status, i.e. sets <me> as Info <br>
 /*instead*/  void ResetCheck() ;

//! Sets <me> as Warning <br>
 /*instead*/  void SetWarning() ;

//! Sets <me> as Fail <br>
 /*instead*/  void SetFail() ;

//! Sets the next Add... not to add but to change the data item <br>
//!           designated by its name. <br>
//!           If next Add... is not called with a name, SetChange is ignored <br>
//!           Reset by next Add... , whatever <num> is correct or not <br>
 /*instead*/  void SetChange() ;

//! Sets the next Add... not to add but to replace the data item <br>
//!           <num>, if <num> is between 1 and NbData. <br>
//!           Reset by next Add... , whatever <num> is correct or not <br>
 /*instead*/  void SetReplace(Standard_Integer num) ;

//! Unitary adding a data; rather internal <br>
 /*instead*/  void AddData(OCNaroWrappers::OCStandard_Transient^ val, Standard_Integer kind, System::String^ name) ;

//! Adds the currently caught exception <br>
 /*instead*/  void AddRaised(System::String^ name) ;

//! Adds a Shape (recorded as a HShape) <br>
 /*instead*/  void AddShape(OCNaroWrappers::OCTopoDS_Shape^ sh, System::String^ name) ;

//! Adds a XYZ <br>
 /*instead*/  void AddXYZ(OCNaroWrappers::OCgp_XYZ^ aXYZ, System::String^ name) ;

//! Adds a XY <br>
 /*instead*/  void AddXY(OCNaroWrappers::OCgp_XY^ aXY, System::String^ name) ;

//! Adds a Real <br>
 /*instead*/  void AddReal(Standard_Real val, System::String^ name) ;

//! Adds two reals (for instance, two parameters) <br>
 /*instead*/  void AddReals(Standard_Real v1, Standard_Real v2, System::String^ name) ;

//! Adds the CPU time between lastCPU and now <br>
//!           if <curCPU> is given, the CPU amount is  curCPU-lastCPU <br>
//!           else it is currently measured CPU - lastCPU <br>
//!           lastCPU has been read by call to GetCPU <br>
//!           See GetCPU to get amount, and LargeCPU to test large amount <br>
 /*instead*/  void AddCPU(Standard_Real lastCPU, Standard_Real curCPU, System::String^ name) ;

//! Returns the current amount of CPU <br>
//!           This allows to laterly test and record CPU amount <br>
//!           Its value has to be given to LargeCPU and AddCPU <br>
 /*instead*/  Standard_Real GetCPU() ;

//! Tells if a CPU time amount is large <br>
//!           <maxCPU>  gives the amount over which an amount is large <br>
//!           <lastCPU> gives the start CPU amount <br>
//!           if <curCPU> is given, the tested CPU amount is curCPU-lastCPU <br>
//!           else it is currently measured CPU - lastCPU <br>
 /*instead*/  System::Boolean LargeCPU(Standard_Real maxCPU, Standard_Real lastCPU, Standard_Real curCPU) ;

//! Adds a Geometric as a Transient (Curve, Surface ...) <br>
 /*instead*/  void AddGeom(OCNaroWrappers::OCStandard_Transient^ geom, System::String^ name) ;

//! Adds a Transient, as an Entity from an InterfaceModel for <br>
//!           instance : it will then be printed with the help of a DBPE <br>
 /*instead*/  void AddEntity(OCNaroWrappers::OCStandard_Transient^ ent, System::String^ name) ;

//! Adds a Text (as HAsciiString) <br>
 /*instead*/  void AddText(System::String^ text, System::String^ name) ;

//! Adds an Integer <br>
 /*instead*/  void AddInteger(Standard_Integer val, System::String^ name) ;

//! Adds a Transient, with no more meaning <br>
 /*instead*/  void AddAny(OCNaroWrappers::OCStandard_Transient^ val, System::String^ name) ;

//! Removes a Data from its rank. Does nothing if out of range <br>
 /*instead*/  void RemoveData(Standard_Integer num) ;

//! Returns the count of data recorded to a set <br>
 /*instead*/  Standard_Integer NbData() ;

//! Returns a data item (n0 <nd> in the set <num>) <br>
 /*instead*/  OCStandard_Transient^ Data(Standard_Integer nd) ;

//! Returns a data item, under control of a Type <br>
//!           If the data item is kind of this type, it is returned in <val> <br>
//!           and the returned value is True <br>
//!           Else, <val> is unchanged and the returned value is False <br>
 /*instead*/  System::Boolean GetData(Standard_Integer nd, OCNaroWrappers::OCStandard_Type^ type, OCNaroWrappers::OCStandard_Transient^ val) ;

//! Returns the kind of a data : <br>
//!         KIND TYPE      MEANING <br>
//!           0  ANY       any (not one of the followings) <br>
//!           1  EX        raised exception <br>
//!           2  EN        entity <br>
//!           3  G         geom <br>
//!           4  SH        shape <br>
//!           5  XYZ       XYZ <br>
//!           6  XY or UV  XY <br>
//!           7  RR        2 reals <br>
//!           8  R         1 real <br>
//!           9  CPU       CPU (1 real) <br>
//!           10 T         text <br>
//!           11 I         integer <br>
//! <br>
//!           For NameNum, these codes for TYPE must be given exact <br>
//!           i.e. SH for a Shape, not S nor SHAPE nor SOLID etc <br>
 /*instead*/  Standard_Integer Kind(Standard_Integer nd) ;

//! Returns the name of a data. If it has no name, the string is <br>
//!           empty (length = 0) <br>
 /*instead*/  OCTCollection_AsciiString^ Name(Standard_Integer nd) ;

//! Returns the first suitable data rank for a given name <br>
//!           Exact maching (exact case, no completion) is required <br>
//!           Firstly checks the recorded names <br>
//!           If not found, considers the name as follows : <br>
//!           Name = "TYPE" : search for the first item with this TYPE <br>
//!           Name = "TYPE:nn" : search for the nn.th item with this TYPE <br>
//!           See allowed values in method Kind <br>
 /*instead*/  Standard_Integer NameNum(System::String^ name) ;

//! Returns a data as a shape, Null if not a shape <br>
 /*instead*/  OCTopoDS_Shape^ Shape(Standard_Integer nd) ;

//! Returns a data as a XYZ (i.e. Geom_CartesianPoint) <br>
//!           Returns False if not the good type <br>
 /*instead*/  System::Boolean XYZ(Standard_Integer nd, OCNaroWrappers::OCgp_XYZ^ val) ;

//! Returns a data as a XY  (i.e. Geom2d_CartesianPoint) <br>
//!           Returns False if not the good type <br>
 /*instead*/  System::Boolean XY(Standard_Integer nd, OCNaroWrappers::OCgp_XY^ val) ;

//! Returns a couple of reals  (stored in Geom2d_CartesianPoint) <br>
 /*instead*/  System::Boolean Reals(Standard_Integer nd, Standard_Real& v1, Standard_Real& v2) ;

//! Returns a real or CPU amount (stored in Geom2d_CartesianPoint) <br>
//!           (allows an Integer converted to a Real) <br>
 /*instead*/  System::Boolean Real(Standard_Integer nd, Standard_Real& val) ;

//! Returns a text (stored in TCollection_HAsciiString) <br>
 /*instead*/  System::Boolean Text(Standard_Integer nd, System::String^& text) ;

//! Returns an Integer <br>
 /*instead*/  System::Boolean Integer(Standard_Integer nd, Standard_Integer& val) ;

//! Returns a Msg from a CaseData : it is build from DefMsg, which <br>
//!           gives the message code plus the designation of items of the <br>
//!           CaseData to be added to the Msg <br>
//!           Empty if no message attached <br>
//! <br>
//!           Remains to be implemented <br>
 /*instead*/  OCMessage_Msg^ Msg() ;

//! Sets a Code to give a Warning <br>
static /*instead*/  void SetDefWarning(System::String^ acode) ;

//! Sets a Code to give a Fail <br>
static /*instead*/  void SetDefFail(System::String^ acode) ;

//! Returns Check Status for a Code : 0 non/info (default), <br>
//!           1 warning, 2 fail <br>
//! <br>
//!           Remark : DefCheck is used to set the check status of a <br>
//!           CaseData when it is attached to a case code, it can be changed <br>
//!           later (by SetFail, SetWarning, ResetCheck) <br>
static /*instead*/  Standard_Integer DefCheck(System::String^ acode) ;

//! Attaches a message definition to a case code <br>
//!           This definition includes the message code plus designation of <br>
//!           items of the CaseData to be added to the message (this part <br>
//!           not yet implemented) <br>
static /*instead*/  void SetDefMsg(System::String^ casecode, System::String^ mesdef) ;

//! Returns the message definition for a case code <br>
//!           Empty if no message attached <br>
static /*instead*/  System::String^ DefMsg(System::String^ casecode) ;

~OCMoniTool_CaseData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
