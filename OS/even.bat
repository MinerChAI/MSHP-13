@echo off
set /p a="Enter the first number: "
set /p b="Enter the second number: "
set /a aodd=%a% %% 2
set /a bodd=%b% %% 2
if %aodd% EQU 0 (
    echo %a%
)
if %bodd% EQU 0 (
    echo %b%
)

pause
