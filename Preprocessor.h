#ifndef _VBPL_Preprocessor_H
#define _VBPL_Preprocessor_H

/* Preprocessor-Preprocessor... thingies */

#define Include #include
#define PrepStringify(x, y, z) #x ## #y ## #z
#define IncludeLeft "<"
#define IncludeRight ">"


/* Main */

#define Main     int main(int argc, char *argv[])
#define Mainvoid int main(void)
#define Endmain }

/* Line control */

#define Do {
#define Enddo }
#define Endln ;
#define Endline Endln
#define Cell (
#define Endcell )

/* Reserved Keywords */

#define Return return

/* Built-in Types */

#define Char char
#define Short short
#define Int int
#define Long long
#define Float float
#define Double double

#define Signed signed
#define Unsigned unsigned

#define UChar unsigned char
#define SChar signed char
#define UShort unsigned short
#define SShort signed short
#define UInt unsigned int
#define SInt signed int
#define ULong unsigned long
#define SLong signed long

#endif // _VBPL_Preprocessor_H