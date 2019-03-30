@echo off

set /p n="Enter the count of catalogs: "
set c=0
set home=%cd%
:loop
mkdir Dir%c%
cd Dir%c%
set /a c=%c%+1
if %c% NEQ %n% goto loop
cd %home%
