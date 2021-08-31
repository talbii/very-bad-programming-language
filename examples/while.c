#include "language.h"                // <-- good luck getting that one 
#include "packages/vbpl_stdio.h"     // <-- and this one

Main Do

Int x Setvalue 5 Endarg
    y Setvalue 3 Endln

While 
    Condition
        Cell
            x Plus y
        Endcell BiggerThen 5
    Endcondition 
                                Do
    
    Print Arguments

    Beginstr x: %d, y: %d\n Endstr Endarg
    x                  Endarg
    y                  Endarguments Endln

    x IncrementBy 2 Endln
    y DecrementBy 3 Endln
Endwhile

Return 0 Endln

Endmain