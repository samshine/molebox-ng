
/*

  Copyright (c) 2005-2009, Alexey Sudachen, alexey@sudachen.name

*/

#include "detect_compiler.h"
#if CXX_COMPILER_IS_MSVC_COMPATIBLE
#pragma code_seg(".text$classes")
//#pragma data_seg(".data$classes")
#endif

#define _TEGGO_COMDYNAMIC_HERE
#include "com_dynamic.inl"

extern "C" _TEGGO_EXPORTABLE void __teggo_classes_com_dynamic_module() {};