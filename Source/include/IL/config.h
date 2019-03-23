/* include/IL/config.h.  Generated by configure.  */
/* include/IL/config.h.in.  Generated from configure.in by autoheader.  */
#ifndef __CONFIG_H__
#define __CONFIG_H__

/* Supported images formats (il) */

#define IL_NO_EXR
/* #undef IL_NO_BMP */
/* #undef IL_NO_CUT */
/* #undef IL_NO_CHEAD */
/* #undef IL_NO_DCX */
/* #undef IL_NO_DDS */
/* #undef IL_NO_DOOM */
/* #undef IL_NO_GIF */
/* #undef IL_NO_HDR */
/* #undef IL_NO_ICO */
/* #undef IL_NO_ICNS */
/* #undef IL_NO_JP2 */
/* #undef IL_NO_JPG */
/* #undef IL_NO_LCMS */
/* #undef IL_NO_LIF */
/* #undef IL_NO_MDL */
#define IL_NO_MNG
/* #undef IL_NO_PCD */
/* #undef IL_NO_PCX */
/* #undef IL_NO_PIC */
/* #undef IL_NO_PIX */
/* #undef IL_NO_PNG */
/* #undef IL_NO_PNM */
/* #undef IL_NO_PSD */
/* #undef IL_NO_PSP */
/* #undef IL_NO_PXR */
/* #undef IL_NO_RAW */
/* #undef IL_NO_SGI */
/* #undef IL_NO_TGA */
/* #undef IL_NO_TIF */
/* #undef IL_NO_WAL */
/* #undef IL_NO_XPM */
#define IL_USE_JPEGLIB_UNMODIFIED 1

/* Supported api (ilut) */


//
// sorry just
// cant get this one to work under windows
// have disabled for the now
//
// will look at it some more later
//
// Kriss
//
#undef ILUT_USE_ALLEGRO

#undef ILUT_USE_DIRECTX8
#define ILUT_USE_DIRECTX9
#define ILUT_USE_OPENGL
#undef ILUT_USE_SDL
#define ILUT_USE_WIN32


/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
//#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
//#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
//#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 1

/* Name of package */
#define IL_PACKAGE "DevIL"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define IL_PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define IL_PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define IL_PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define IL_PACKAGE_VERSION ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
//#define IL_VERSION "1.7.2"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* If using Mac OS X uncomment this line */
/* #include "macconfig.h" */

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */
#endif /* __CONFIG_H__ */