echo off

:: NOTE: This doesn't deal with additional arguments . . . yet

IF %1.==. GOTO NoSourceFile

setlocal EnableExtensions

set SourceFile=%1.c
set CurrDirectory_ofile="%~dp0%1.exe"

:: Gets a unique file name (temporary file):
:uniqLoop
set "uniqueFileName=%tmp%\bat~%RANDOM%.c"
if exist "%uniqueFileName%" goto :uniqLoop

:: for some reason, code with strings (Beginstr/Endstr) only work if I run the preprocessor seperately.
gcc -E %SourceFile% > %uniqueFileName%

gcc %uniqueFileName% -o %CurrDirectory_ofile%

exit /b 0

:NoSourceFile
    echo ^[91mfatal error:[0m no input files
    echo compilation terminated.
    exit /b 1