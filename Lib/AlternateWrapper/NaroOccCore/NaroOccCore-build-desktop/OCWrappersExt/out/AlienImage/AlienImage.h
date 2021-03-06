// File generated by CPPExt (Package)
//

#ifndef _AlienImage_OCWrappers_HeaderFile
#define _AlienImage_OCWrappers_HeaderFile

// Include the wrapped header
#include <AlienImage.hxx>

#include "AlienImage_AlienImage.h"
#include "AlienImage_AlienImageData.h"
#include "AlienImage_AlienUserImage.h"
#include "AlienImage_SunRFAlienData.h"
#include "AlienImage_SunRFAlienImage.h"
#include "AlienImage_EuclidAlienData.h"
#include "AlienImage_EuclidAlienImage.h"
#include "AlienImage_SGIRGBAlienData.h"
#include "AlienImage_SGIRGBAlienImage.h"
#include "AlienImage_X11XWDAlienData.h"
#include "AlienImage_XAlienImage.h"
#include "AlienImage_AidaAlienData.h"
#include "AlienImage_AidaAlienImage.h"
#include "AlienImage_MemoryOperations.h"
#include "AlienImage_BMPAlienData.h"
#include "AlienImage_GIFAlienData.h"
#include "AlienImage_BMPAlienImage.h"
#include "AlienImage_GIFAlienImage.h"


namespace OCNaroWrappers
{
//! This package allows importation of images <br>
//!          from some other format into CAS.CADE format. <br>
public ref class OCAlienImage abstract sealed
{

public:
// Methods


static /*instead*/  System::Boolean CreateImage(OCNaroWrappers::OCTCollection_AsciiString^ theFileName, OCNaroWrappers::OCImage_Image^ theImage) ;


static /*instead*/  System::Boolean CreateImage(System::String^ theFileName, OCNaroWrappers::OCImage_Image^ theImage) ;


static /*instead*/  System::Boolean CreateImage(OCNaroWrappers::OCOSD_File^ theFile, OCNaroWrappers::OCImage_Image^ theImage) ;

//! Used by plotter drivers <br>
static /*instead*/  System::Boolean LoadImageFile(System::String^ anImageFile, OCNaroWrappers::OCImage_Image^ anImage, Standard_Integer& aWidth, Standard_Integer& aHeight) ;


};

}; // OCNaroWrappers

#endif
