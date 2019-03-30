@echo off

goto start

:bad1
echo Вы попали в Windows Vista. Удачи вам там. Земля вам пухом.
goto finish

:bad2
echo Вы попали в Windows ME. Это даже хуже Vista! Земля вам пухом.
echo Хватит глупых тестов. Только хардкор. Отмените выключение компьютера за 10 секунд.
shutdown /s /f /t 10 /c "Лох по жизни"
goto finish

:good
echo Поздравляю! Вы выбрались из Windows
echo Небольшой подарок: инструкция по получению Wing Pro IDE бесплатно
explorer https://yadi.sk/d/Q42Mr1nLnop3CQ
goto finish

:check
echo %ans% >> %log%
if .%ans% EQU .%ref% (
    set /a score+=1
    echo OK >> %log%
    echo Правильно!
) else (
    echo WA, correct is %ref% >> %log%
    echo А вот и нет! Правильный ответ - %ref%
)
echo.
goto %next%


:q1
echo Первое задание:
echo Дополните высказывание
set /p ans="Windows 7 по-другому называется Windows NT ... "
echo 1) >> %log%
set ref=6.1
set next=q2
goto check

:q2
echo Второе задание:
echo Дополните высказывание
set /p ans="Чтобы заблокировать экран, нужно нажать Win+... "
echo 2) >> %log%
set ref=L
set next=q3
goto check

:q3
echo Третье задание:
set /p ans="В какой переменной среды лежит путь к домашней директории? Напишите название без знаков %% большими буквами "
echo 3) >> %log%
set ref=HOMEPATH
set next=q4
goto check

:q4
echo Четвертое задание:
set /p ans="Сколько компьютеров можно подключить к сети с маской 255.255.255.0? "
echo 4) >> %log%
set ref=253
set next=q5
goto check

:q5
echo Пятое задание:
set /p ans="У какого RAID самая высокая скорость? (Не составного) "
echo 5) >> %log%
set ref=0
set next=q6
goto check

:q6
echo Шестое задание:
set /p ans="Какой максимальный размер файла в FAT32? (В ГБ) "
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
REM Правильный ответ - .
echo Седьмое задание:
set /p ans="В какой директории вы сейчас работаете? (Не исключено, что этот хитрый квест куда-то вас переместил) "
echo 7) >> %log%
echo %ans% >> %log%
if "%ans%"" EQU "" (
    echo WA, correct is %ref% >> %log%
    echo А вот и нет! Правильный ответ - .
set ref=%cd%
cd %ans%
set ans=%cd%
cd %ref%\..\..
rd /s /q temp1
rd /s /q temp2
if .%ans% EQU .%ref% (
    set /a score+=1
    echo OK >> %log%
    echo Правильно!
) else (
    echo WA, correct is %ref% >> %log%
    echo А вот и нет! Правильный ответ - .
)
echo.
goto q8

:q8
echo Восьмое задание:
set /p ans="Как получить значение переменной var? "
echo 8) >> %log%
set ref=%%var%%
set next=q9
goto check

:q9
echo Девятое задание:
set /p ans="Какой символ используется, чтобы не выводить саму команду на экран? "
echo 9) >> %log%
set ref=@
set next=q10
goto check

:q10
echo Десятое задание:
set /p ans="Какое расширение у файлов вроде этого? (Только расширение, без точки) "
echo 10) >> %log%
set ref=bat
set next=results
goto check

:results
shutdown /a
echo %score% очков из 10
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
echo Добро пожаловать в квест по Windows!
echo Ваша цель: выбраться отсюда
echo Для этого нужно правильно отвечать на вопросы
echo (Во всех вопросах буквы большие, если не сказано иное)
echo У вас 5 минут!
echo.
shutdown /g /f /t 300 /c "5 минут на квест"
goto q1

:finish
