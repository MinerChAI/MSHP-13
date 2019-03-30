@echo off
set /p a="Enter the first number: "
set /p b="Enter the second number: "
set /a sum=%a% + %b%
if %sum% GTR 40 (
    echo %a%
) else (
    echo %b%
)

pause
