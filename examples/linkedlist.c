#include "language.h"
#include "packages/vbpl_stdio.h"
#include "packages/vbpl_stdlib.h"

Struct Integerlist Beginstruct
    Int data Endfield
    Struct Integerlist Pointer next Endfield
Endstruct Endln

Struct Integerlist Pointer Filllist Arguments 
           Int                 Endarguments
                               Endln

Void Printlist Arguments
    Struct Integerlist Pointer Endarguments 
                               Endln

Void Freelist Arguments
    Struct Integerlist Pointer Endarguments
                               Endln

Mainvoid Do

Struct Integerlist Pointer list Setvalue Filllist Arguments 5 Endarguments Endln

Printlist Arguments list Endarguments Endln

Freelist Arguments list Endarguments Endln

Return 0 Endln

Endmain

Struct Integerlist Pointer Filllist Arguments
    Int count                       Endarguments Beginfunction

If Condition count EqualTo 0 Endcondition Beginif

    Return NULL Endln

Endif

Struct Integerlist Pointer node Setvalue 
                                Malloc Arguments Sizeof node Endarguments Endln

If Condition node EqualTo NULL Endcondition Beginif

    Exit Arguments Minus 1 Endarguments Endln

Endif

node Getfield data Setvalue count Endln

node Getfield next Setvalue Filllist Arguments DecrementValue count Endarguments Endln

Return node Endln

Endfunction

Void Printlist Arguments
    Struct Integerlist Pointer list Endarguments Beginfunction

If Condition list EqualTo NULL Endcondition Beginif

Return Endln

Endif

Print Arguments
    Beginstr %d Endstr Endarg
    list Getfield data
Endarguments Endln

Printlist Arguments list Getfield next Endarguments Endln

Endfunction

Void Freelist Arguments
    Struct Integerlist Pointer list Endarguments Beginfunction

If Condition list EqualTo NULL Endcondition Beginif
    Return Endln
Endif

If Condition list Getfield next EqualTo NULL Endcondition Beginif

    Free Arguments list Endarguments Endln
    Return Endln

Endif

Freelist Arguments list Getfield next Endarguments Endln
Free Arguments list Endarguments Endln

Endfunction