#include "language.h"
#include "packages/vbpl_stdio.h"

Main Do

Int arr Setsize 5 Endsize Setvalue Beginarray 
                                    1 Endarg
                                    2 Endarg
                                    3 Endarg
                                    1 Endarg
                                     Minus 2  Endarray Endln

For Beginfor Sizet i Setvalue 0 Endforcondition
             i LesserThen 5     Endforcondition
             IncrementValue i   Endfor Beginloop

    Print Arguments
        Beginstr %d Endstr Endarg
        arr Index i Endindex
    Endarguments Endln

Endloop

Return 0 Endln

Endmain