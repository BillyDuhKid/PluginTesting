rmdir /s /q .vs
rmdir /s /q Binaries
rmdir /s /q Intermediate
rmdir /s /q Saved
del /s .vsconfig
del /s *.sln
cd Plugins\TAB_Game\
!cleanup.bat
