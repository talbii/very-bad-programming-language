#ifndef _VBPL_Loops_H
#define _VBPL_Loops_H

/* stuff for all loops */

#define Condition (
#define Endcondition )

/* Branch control (if) */

#define If if
#define Beginif {
#define Endif }

/* For Loop */

#define For for
#define Beginfor (
#define Endforcondition ; // (you should use Endcondition instead)
#define Endfor )

#define Beginloop {
#define Endloop }

/* While Loop */

#define While while
#define Endwhile }

#endif // _VBPL_Loops_H