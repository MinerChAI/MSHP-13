@echo off

set counter=7

:A
echo I'm the best!
set /a counter=%counter%-1
if %counter% NEQ 0 goto A

pause
