#ifndef _UTILS_H_
#define _UTILS_H_

#include <JGE.h>

#if defined (WIN32) || defined (LINUX)

#else
#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspctrl.h>
#include <pspiofilemgr.h>
#include <pspdebug.h>
#include <psputility.h>
#include <pspgu.h>
#include <psprtc.h>

#endif


#include <math.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdlib.h>


using std::string;


int lowercase(string  source);

int filesize(const char * filename);
int readfile_to_ints(const char * filename, int * out_buffer);
int fileExists(const char * filename);
#endif
