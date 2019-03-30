@echo off
if "%1"=="" (Echo Перетащите .bat/.cmd файл на этот сценарий& Goto :ext)
Setlocal
set Src=%~dpnx1
chcp 1251> nul
for /f "UseBackQ delims=" %%a in ("%Src%") do (
  if not defined cpReady (
    chcp 866> nul
    set CpReady=True
  )
  call :convert "%%a"
)
Echo Файл %~nx1 перекодирован.
:ext
pause>nul
goto :eof

:convert
if Defined Write (
    echo %~1>>"%Src%.src.bat"
) else (
    Set Write=True
    echo %~1>"%Src%.src.bat"
)
