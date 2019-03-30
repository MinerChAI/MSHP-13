@echo off
set /p a="Enter the first number: "
set /p b="Enter the second number: "
if %a% GTR %b% (
    echo %a%
) else (
    echo %b%
)

pause
