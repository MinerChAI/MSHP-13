@echo off
set /p first="Введите первое число"
set /p second="Введите второе число"
set /a res=%first%-%second%
echo Их разность равна %res%
