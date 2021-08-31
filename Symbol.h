#ifndef _VBPL_Symbol_H
#define _VBPL_Symbol_H

#define Setvalue =
#define Equal    =

#define Increment      ++
#define IncrementValue ++
#define Decrement      --
#define DecrementValue --

#define Add      +
#define Plus     +
#define Minus    -
#define Subtract -
#define Multiply *
#define Divide   /
#define Modulus  %
#define Percent  %
#define Mod      % 

#define And     &&
#define Or      ||
#define Not     !

#define EqualTo            ==
#define BiggerThen         >
#define BiggerThenQ        >=
#define BiggerThenOrEqual  >=
#define BiggerOrEqualThen  >=
#define SmallerThen        <
#define LesserThen         <
#define SmallerThenQ       <=
#define SmallerThenOrEqual <=
#define SmallerOrEqualThen <=
#define LesserThenQ        <=
#define LesserThenOrEqual  <=
#define LesserOrEqualThen  <=
#define NotEqualTo         !=


#define Bitwiseand     &
#define Bitwiseor      |
#define Bitwisexor     ^
#define Bitwisenot     ~
#define Bitwiseinverse ~
#define Leftshift      <<
#define Rightshift     >>

/* operator= */
/* All <op>= have a suffix of "By" */

#define IncrementBy    +=
#define AddBy          +=
#define PlusBy         +=
#define DecrementBy    -=
#define MinusBy        -=
#define MultiplyBy     *=
#define DivideBy       /=
#define ModulusBy      %=

#define BitwiseandBy   &=
#define BitwiseorBy    |=
#define BitwisexorBy   ^=
#define LeftshiftBy    <<=
#define RightshiftBy   >>=

/* Strings */

#define Beginchar   '
#define Endchar     '
#define Beginstring "
#define Endstring   "
#define Beginstr    "
#define Endstr      "

/* Arrays & Pointers */

#define Beginarray {
#define Endarray }

#define Setsize [
#define Endsize ]

#define Index [
#define Endindex ]

#define Deref *
#define Ref &

#endif // _VBPL_Symbol_H
