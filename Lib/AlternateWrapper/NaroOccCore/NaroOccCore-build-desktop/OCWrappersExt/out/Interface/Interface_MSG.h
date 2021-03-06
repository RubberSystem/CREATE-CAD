// File generated by CPPExt (MPV)
//
#ifndef _Interface_MSG_OCWrappers_HeaderFile
#define _Interface_MSG_OCWrappers_HeaderFile

// include native header
#include <Interface_MSG.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! This class gives a set of functions to manage and use a list <br>
//!           of translated messages (messagery) <br>
//! <br>
//!           Keys are strings, their corresponding (i.e. translated) items <br>
//!           are strings, managed by a dictionary (a global one). <br>
//! <br>
//!           If the dictionary is not set, or if a key is not recorded, <br>
//!           the key is returned as item, and it is possible to : <br>
//!           - trace or not this fail, record or not it for further trace <br>
//! <br>
//!           It is also possible to suspend the translation (keys are then <br>
//!           always returned as items) <br>
//! <br>
//!           This class also provides a file format for loading : <br>
//!           It is made of couples of lines, the first one begins by '@' <br>
//!           the following is the key, the second one is the message <br>
//!           Lines which are empty or which begin by '@@' are skipped <br>
public ref class OCInterface_MSG  {

protected:
  Interface_MSG* nativeHandle;
  OCInterface_MSG(OCDummy^) {};

public:
  property Interface_MSG* Handle
  {
    Interface_MSG* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCInterface_MSG(Interface_MSG* nativeHandle);

// Methods PUBLIC

//! A MSG is created to write a "functional code" in conjunction <br>
//!           with operator () attached to Value <br>
//!           Then, to have a translated message, write in C++ : <br>
//! <br>
//!           Interface_MSG("...mykey...")  which returns a CString <br>
//!           See also some help which follow <br>
OCInterface_MSG(System::String^ key);

//! Translates a message which contains one integer variable <br>
//!           It is just a help which avoid the following : <br>
//!             char mess[100];  sprintf(mess,Interface_MSG("code"),ival); <br>
//!             then  AddFail(mess); <br>
//!           replaced by  AddFail (Interface_MSG("code",ival)); <br>
//! <br>
//!           The basic message is intended to be in  C-sprintf  format, <br>
//!           with one %d form in it <br>
OCInterface_MSG(System::String^ key, Standard_Integer i1);

//! Translates a message which contains two integer variables <br>
//!           As for one integer, it is just a writing help <br>
//! <br>
//!           The basic message is intended to be in  C-sprintf  format <br>
//!           with two %d forms in it <br>
OCInterface_MSG(System::String^ key, Standard_Integer i1, Standard_Integer i2);

//! Translates a message which contains one real variable <br>
//!           <intervals> if set, commands the variable to be rounded to an <br>
//!           interval (see below, method Intervals) <br>
//!           As for one integer, it is just a writing help <br>
//! <br>
//!           The basic message is intended to be in  C-sprintf  format <br>
//!           with one %f form (or equivalent : %e etc) in it <br>
OCInterface_MSG(System::String^ key, Standard_Real r1, Standard_Integer intervals);

//! Translates a message which contains one string variable <br>
//!           As for one integer, it is just a writing help <br>
//! <br>
//!           The basic message is intended to be in  C-sprintf  format <br>
//!           with one %s form in it <br>
OCInterface_MSG(System::String^ key, System::String^ str);

//! Translates a message which contains one integer and one <br>
//!           string variables <br>
//!           As for one integer, it is just a writing help <br>
//!           Used for instance to say "Param n0.<ival> i.e. <str> is not.." <br>
//! <br>
//!           The basic message is intended to be in  C-sprintf  format <br>
//!           with one %d then one %s forms in it <br>
OCInterface_MSG(System::String^ key, Standard_Integer ival, System::String^ str);

//! Returns the translated message, in a functional form with <br>
//!           operator () <br>
//! was C++ : return const <br>
 /*instead*/  System::String^ Value() ;

//! Reads a list of messages from a stream, returns read count <br>
//!           0 means empty file, -1 means error <br>
static /*instead*/  Standard_Integer Read(Standard_IStream& S) ;

//! Reads a list of messages from a file defined by its name <br>
static /*instead*/  Standard_Integer Read(System::String^ file) ;

//! Writes the list of messages recorded to be translated, to a <br>
//!           stream. Writes all the list (Default) or only keys which begin <br>
//!           by <rootkey>. Returns the count of written messages <br>
static /*instead*/  Standard_Integer Write(Standard_OStream& S, System::String^ rootkey) ;

//! Returns True if a given message is surely a key <br>
//!           (according to the form adopted for keys) <br>
//!           (before activating messages, answer is false) <br>
static /*instead*/  System::Boolean IsKey(System::String^ mess) ;

//! Returns the item recorded for a key. <br>
//!           Returns the key itself if : <br>
//!           - it is not recorded (then, the trace system is activated) <br>
//!           - MSG has been required to be hung on <br>
static /*instead*/  System::String^ Translated(System::String^ key) ;

//! Fills the dictionary with a couple (key-item) <br>
//!           If a key is already recorded, it is possible to : <br>
//!           - keep the last definition, and activate the trace system <br>
static /*instead*/  void Record(System::String^ key, System::String^ item) ;

//! Sets the trace system to work when activated, as follow : <br>
//!           - if <toprint>  is True, print immediately on standard output <br>
//!           - if <torecord> is True, record it for further print <br>
static /*instead*/  void SetTrace(System::Boolean toprint, System::Boolean torecord) ;

//! Sets the main modes for MSG : <br>
//!           - if <running> is True, translation works normally <br>
//!           - if <running> is False, translated item equate keys <br>
//!           - if <raising> is True, errors (from Record or Translate) <br>
//!             cause MSG to raise an exception <br>
//!           - if <raising> is False, MSG runs without exception, then <br>
//!             see also Trace Modes above <br>
static /*instead*/  void SetMode(System::Boolean running, System::Boolean raising) ;

//! Prints the recorded errors (without title; can be empty, this <br>
//!           is the normally expected case) <br>
static /*instead*/  void PrintTrace(Standard_OStream& S) ;

//! Returns an "intervalled" value from a starting real <val> : <br>
//!           i.e. a value which is rounded on an interval limit <br>
//!           Interval limits are defined to be in a coarsely "geometric" <br>
//!           progression (two successive intervals are inside a limit ratio) <br>
//! <br>
//!           <order> gives the count of desired intervals in a range <1-10> <br>
//!           <upper> False, returns the first lower interval (D) <br>
//!           <upper> True,  returns the first upper interval <br>
//!           Values of Intervals according <order> : <br>
//!           0,1 : 1 10 100 ... <br>
//!           2   : 1 3 10 30 100 ... <br>
//!           3(D): 1 2 5 10 20 50 100 ... <br>
//!           4   : 1 2 3 6 10 20 30 60 100 ... <br>
//!           6   : 1 1.5 2 3 5 7 10 15 20 ... <br>
//!           10  : 1 1.2 1.5 2 2.5 3 4 5 6 8 10 12 15 20 25 ... <br>
static /*instead*/  Standard_Real Intervalled(Standard_Real val, Standard_Integer order, System::Boolean upper) ;

//! Codes a date as a text, from its numeric value (-> seconds) : <br>
//!           YYYY-MM-DD:HH-MN-SS  fixed format, completed by leading zeros <br>
//!           Another format can be provided, as follows : <br>
//!           C:%d ...   C like format, preceeded by  C: <br>
//!           S:...      format to call system (not yet implemented) <br>
static /*instead*/  void TDate(System::String^ text, Standard_Integer yy, Standard_Integer mm, Standard_Integer dd, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, System::String^ format) ;

//! Decodes a date to numeric integer values <br>
//!           Returns True if OK, False if text does not fit with required <br>
//!           format. Incomplete forms are allowed (for instance, for only <br>
//!           YYYY-MM-DD, hour is zero) <br>
static /*instead*/  System::Boolean NDate(System::String^ text, Standard_Integer& yy, Standard_Integer& mm, Standard_Integer& dd, Standard_Integer& hh, Standard_Integer& mn, Standard_Integer& ss) ;

//! Returns a value about comparison of two dates <br>
//!           0 : equal. <0 text1 anterior. >0 text1 posterior <br>
static /*instead*/  Standard_Integer CDate(System::String^ text1, System::String^ text2) ;

//! Returns a blank string, of length between 0 and <max>, to fill <br>
//!           the printing of a numeric value <val>, i.e. : <br>
//!           If val < 10 , max-1 blanks <br>
//!           If val between 10 and 99, max-2 blanks  ...   etc... <br>
static /*instead*/  System::String^ Blanks(Standard_Integer val, Standard_Integer max) ;

//! Returns a blank string, to complete a given string <val> up to <br>
//!           <max> characters : <br>
//!           If strlen(val) is 0, max blanks <br>
//!           If strlen(val) is 5, max-5 blanks    etc... <br>
static /*instead*/  System::String^ Blanks(System::String^ val, Standard_Integer max) ;

//! Returns a blank string of <count> blanks (mini 0, maxi 76) <br>
static /*instead*/  System::String^ Blanks(Standard_Integer count) ;

//! Prints a String on an Output Stream, as follows : <br>
//!           Accompagned with blanks, to give up to <max> charis at all, <br>
//!           justified according just : <br>
//!           -1 (D) : left     0 : center    1 : right <br>
//!           Maximum 76 characters <br>
static /*instead*/  void Print(Standard_OStream& S, System::String^ val, Standard_Integer max, Standard_Integer just) ;

~OCInterface_MSG()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
