rmdir /s /q .vs
rmdir /s /q Binaries
rmdir /s /q Intermediate
rmdir /s /q Saved
del /s .vsconfig
del /s *.sln
cd Plugins\TAB_Game\
call !cleanup.bat
cd /d "%~dp0"

REM Below are plugins from Lyra, ideally can be updated as Lyra updates for new Unreal Engine versions.

REM rmdir /s /q Plugins\CommonGame\Binaries
REM rmdir /s /q Plugins\CommonGame\Intermediate

rmdir /s /q Plugins\CommonLoadingScreen\Binaries
rmdir /s /q Plugins\CommonLoadingScreen\Intermediate

REM rmdir /s /q Plugins\CommonUser\Binaries
REM rmdir /s /q Plugins\CommonUser\Intermediate

REM rmdir /s /q Plugins\ModularGameplayActors\Binaries
REM rmdir /s /q Plugins\ModularGameplayActors\Intermediate