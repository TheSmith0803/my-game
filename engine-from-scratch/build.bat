set files="src\glad.c" "src\main.c"
set libs="C:\Repos\my-game\lib\SDL2main.lib" "C:\Repos\my-game\lib\SDL2.lib" "C:\Repos\my-game\lib\freetype.lib"

CL /Zi /I "C:\Repos\my-game\include" %files% /link %libs% /OUT:mygame.exe