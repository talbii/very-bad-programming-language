#ifndef _VBPL_P_stdlib_H
#define _VBPL_P_stdlib_H

#include <stdlib.h>

/* stdlib C->VBPL */

// String to Number conversions

#define Atof atof
#define Atoi atoi
#define Atol atol
#define Atoll atoll
#define Atoi64 _atoi64


#define Malloc malloc
#define Realloc realloc
#define Free free

#define Exit exit

#endif // _VBPL_P_stdlib_H