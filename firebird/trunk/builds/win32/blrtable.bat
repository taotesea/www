cl -Ob2iytp -Gs -DWIN95 -D__STDC__ -W3 -G4 -Gd -MD -I..\..\src\include -I..\..\src\include\gen -DSERVER_SHUTDOWN -DSUPERSERVER -DGOVERNOR -DNOMSG -D_X86_=1 -DWIN32 -DI386 -DEXACT_NUMERICS ..\..\src\jrd\blrtable.cpp
if errorlevel 1 goto :ERROR
blrtable.exe > blrtable.h
copy blrtable.h ..\..\src\include\gen\blrtable.h
del blrtable.exe
del blrtable.obj
del blrtable.h

goto :EOF


:ERROR
@echo.
@echo A compiler error occurred.
@echo.
goto :EOF

