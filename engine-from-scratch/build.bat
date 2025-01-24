set files=src\glad.c src\main.c
set libs=C:\repos\my-game\lib\SDL2main.lib C:\repos\my-game\lib\SDL2.lib C:\repos\my-game\lib\freetype.lib

CL /Zi /I C:\repos\my-game\include %files% /link %libs% /OUT:mygame.exe