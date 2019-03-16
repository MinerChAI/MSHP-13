cd %HOMEPATH% && mkdir first && mkdir second && cd first && tasklist > tasks.txt && copy tasks.txt ..\second && cd ..\second && more tasks.txt && cd .. && rd first /s /q && rd second /s /q
