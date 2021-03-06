// File generated by CPPExt (MPV)
//
#ifndef _ProjLib_Sphere_OCWrappers_HeaderFile
#define _ProjLib_Sphere_OCWrappers_HeaderFile

// include native header
#include <ProjLib_Sphere.hxx>
#include "../Converter.h"

#include "ProjLib_Projector.h"

#include "../gp/gp_Sphere.h"
#include "ProjLib_Projector.h"


namespace OCNaroWrappers
{

ref class OCgp_Sphere;
ref class OCgp_Circ;
ref class OCgp_Lin;
ref class OCgp_Elips;
ref class OCgp_Parab;
ref class OCgp_Hypr;


//! Projects elementary curves on a sphere. <br>
public ref class OCProjLib_Sphere  : public OCProjLib_Projector {

protected:
  // dummy constructor;
  OCProjLib_Sphere(OCDummy^) : OCProjLib_Projector((OCDummy^)nullptr) {};

public:

// constructor from native
OCProjLib_Sphere(ProjLib_Sphere* nativeHandle);

// Methods PUBLIC

//! Undefined projection. <br>
OCProjLib_Sphere();

//! Projection on the sphere <Sp>. <br>
OCProjLib_Sphere(OCNaroWrappers::OCgp_Sphere^ Sp);

//! Projection of the circle <C> on the sphere <Sp>. <br>
OCProjLib_Sphere(OCNaroWrappers::OCgp_Sphere^ Sp, OCNaroWrappers::OCgp_Circ^ C);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Sphere^ Sp) ;


virtual /*instead*/  void Project(OCNaroWrappers::OCgp_Lin^ L) override;


virtual /*instead*/  void Project(OCNaroWrappers::OCgp_Circ^ C) override;


virtual /*instead*/  void Project(OCNaroWrappers::OCgp_Elips^ E) override;


virtual /*instead*/  void Project(OCNaroWrappers::OCgp_Parab^ P) override;


virtual /*instead*/  void Project(OCNaroWrappers::OCgp_Hypr^ H) override;

//! Set the point of parameter U on C in the natural <br>
//!          restrictions of the sphere. <br>
 /*instead*/  void SetInBounds(Standard_Real U) ;

~OCProjLib_Sphere()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
