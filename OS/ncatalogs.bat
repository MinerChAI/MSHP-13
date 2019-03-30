@echo off

set /p n="Enter the count of catalogs: "
:loop
mkdir "cat %n%"
set /a n=%n%-1
if %n% NEQ 0 goto loop
