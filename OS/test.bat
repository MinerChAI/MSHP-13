@echo off

goto start

:bad1
echo �� ������ � Windows Vista. ���� ��� ⠬. ����� ��� ��宬.
goto finish

:bad2
echo �� ������ � Windows ME. �� ���� �㦥 Vista! ����� ��� ��宬.
echo ����� ����� ��⮢. ���쪮 �प��. �⬥��� �몫�祭�� �������� �� 10 ᥪ㭤.
shutdown /s /f /t 10 /c "��� �� �����"
goto finish

:good
echo ����ࠢ���! �� ��ࠫ��� �� Windows
echo ������让 ����ப: �������� �� ����祭�� Wing Pro IDE ��ᯫ�⭮
explorer https://yadi.sk/d/Q42Mr1nLnop3CQ
goto finish

:check
echo %ans% >> %log%
if .%ans% EQU .%ref% (
    set /a score+=1
    echo OK >> %log%
    echo �ࠢ��쭮!
) else (
    echo WA, correct is %ref% >> %log%
    echo � ��� � ���! �ࠢ���� �⢥� - %ref%
)
echo.
goto %next%


:q1
echo ��ࢮ� �������:
echo �������� ��᪠�뢠���
set /p ans="Windows 7 ��-��㣮�� ���뢠���� Windows NT ... "
echo 1) >> %log%
set ref=6.1
set next=q2
goto check

:q2
echo ��஥ �������:
echo �������� ��᪠�뢠���
set /p ans="�⮡� �������஢��� �࠭, �㦭� ������ Win+... "
echo 2) >> %log%
set ref=L
set next=q3
goto check

:q3
echo ���� �������:
set /p ans="� ����� ��६����� �।� ����� ���� � ����譥� ��४�ਨ? ������ �������� ��� ������ %% ����訬� �㪢��� "
echo 3) >> %log%
set ref=HOMEPATH
set next=q4
goto check

:q4
echo ��⢥�⮥ �������:
set /p ans="����쪮 �������஢ ����� ��������� � �� � ��᪮� 255.255.255.0? "
echo 4) >> %log%
set ref=253
set next=q5
goto check

:q5
echo ��⮥ �������:
set /p ans="� ������ RAID ᠬ�� ��᮪�� ᪮����? (�� ��⠢����) "
echo 5) >> %log%
set ref=0
set next=q6
goto check

:q6
echo ���⮥ �������:
set /p ans="����� ���ᨬ���� ࠧ��� 䠩�� � FAT32? (� ��) "
echo 6) >> %log%
set ref=4
set next=q7
goto check

:q7
md temp1
md temp2
md temp1\temp1
md temp1\temp2
md temp2\temp1
md temp2\temp2
cd temp2\temp1
REM �ࠢ���� �⢥� - .
echo ���쬮� �������:
set /p ans="� ����� ��४�ਨ �� ᥩ�� ࠡ�⠥�? (�� �᪫�祭�, �� ��� ���� ����� �㤠-� ��� ��६��⨫) "
echo 7) >> %log%
echo %ans% >> %log%
if "%ans%"" EQU "" (
    echo WA, correct is %ref% >> %log%
    echo � ��� � ���! �ࠢ���� �⢥� - .
set ref=%cd%
cd %ans%
set ans=%cd%
cd %ref%\..\..
rd /s /q temp1
rd /s /q temp2
if .%ans% EQU .%ref% (
    set /a score+=1
    echo OK >> %log%
    echo �ࠢ��쭮!
) else (
    echo WA, correct is %ref% >> %log%
    echo � ��� � ���! �ࠢ���� �⢥� - .
)
echo.
goto q8

:q8
echo ���쬮� �������:
set /p ans="��� ������� ���祭�� ��६����� var? "
echo 8) >> %log%
set ref=%%var%%
set next=q9
goto check

:q9
echo ����⮥ �������:
set /p ans="����� ᨬ��� �ᯮ������, �⮡� �� �뢮���� ᠬ� ������� �� �࠭? "
echo 9) >> %log%
set ref=@
set next=q10
goto check

:q10
echo ����⮥ �������:
set /p ans="����� ���७�� � 䠩��� �த� �⮣�? (���쪮 ���७��, ��� �窨) "
echo 10) >> %log%
set ref=bat
set next=results
goto check

:results
shutdown /a
echo %score% �窮� �� 10
if %score% GTR 6 (
    goto good
) else if %score% GTR 3 (
    goto bad1
) else (
    goto bad2
)

:start
cls
set score=0
set log=%cd%/logging.txt
echo Start >> %log%
echo ���� ���������� � ����� �� Windows!
echo ��� 楫�: ������� ���
echo ��� �⮣� �㦭� �ࠢ��쭮 �⢥��� �� ������
echo (�� ��� ������ �㪢� ����訥, �᫨ �� ᪠���� ����)
echo � ��� 5 �����!
echo.
shutdown /g /f /t 300 /c "5 ����� �� �����"
goto q1

:finish
