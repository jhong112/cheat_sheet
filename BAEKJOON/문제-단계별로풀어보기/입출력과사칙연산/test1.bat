@echo off
:repeat
test.exe
echo [return_value] : %errorlevel%
if %errorlevel% EQU 3 goto repeat
echo exit loop
pause
