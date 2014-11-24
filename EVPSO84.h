//
// MATLAB Compiler: 5.1 (R2014a)
// Date: Tue Nov 25 00:20:58 2014
// Arguments: "-B" "macro_default" "-W" "cpplib:EVPSO84" "-T" "link:lib" "-d"
// "E:\Research\Collections\1410UgInovation\Simulation\zxb\EVPSO84\for_testing"
// "-v" "E:\Research\Collections\1410UgInovation\Simulation\zxb\EVPSO84.m"
// "class{Class1:E:\Research\Collections\1410UgInovation\Simulation\zxb\EVPSO84.
// m}" 
//

#ifndef __EVPSO84_h
#define __EVPSO84_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_EVPSO84
#define PUBLIC_EVPSO84_C_API __global
#else
#define PUBLIC_EVPSO84_C_API /* No import statement needed. */
#endif

#define LIB_EVPSO84_C_API PUBLIC_EVPSO84_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_EVPSO84
#define PUBLIC_EVPSO84_C_API __declspec(dllexport)
#else
#define PUBLIC_EVPSO84_C_API __declspec(dllimport)
#endif

#define LIB_EVPSO84_C_API PUBLIC_EVPSO84_C_API


#else

#define LIB_EVPSO84_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_EVPSO84_C_API 
#define LIB_EVPSO84_C_API /* No special import/export declaration */
#endif

extern LIB_EVPSO84_C_API 
bool MW_CALL_CONV EVPSO84InitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_EVPSO84_C_API 
bool MW_CALL_CONV EVPSO84Initialize(void);

extern LIB_EVPSO84_C_API 
void MW_CALL_CONV EVPSO84Terminate(void);



extern LIB_EVPSO84_C_API 
void MW_CALL_CONV EVPSO84PrintStackTrace(void);

extern LIB_EVPSO84_C_API 
bool MW_CALL_CONV mlxEVPSO84(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_EVPSO84
#define PUBLIC_EVPSO84_CPP_API __declspec(dllexport)
#else
#define PUBLIC_EVPSO84_CPP_API __declspec(dllimport)
#endif

#define LIB_EVPSO84_CPP_API PUBLIC_EVPSO84_CPP_API

#else

#if !defined(LIB_EVPSO84_CPP_API)
#if defined(LIB_EVPSO84_C_API)
#define LIB_EVPSO84_CPP_API LIB_EVPSO84_C_API
#else
#define LIB_EVPSO84_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_EVPSO84_CPP_API void MW_CALL_CONV EVPSO84(int nargout, mwArray& EVLoad, const mwArray& AverageLoad);

#endif
#endif
