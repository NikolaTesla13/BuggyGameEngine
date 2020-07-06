@ECHO OFF

REM Path to g++
SET G="g++"

SET OBJECTS=
REM Recursive every .cpp file in ./src
FOR /R "buggy/src/" %%a IN (*.cpp) DO (
    CALL SET OBJECTS=%%OBJECTS%% "%%a"
)

@ECHO ON
REM echo %OBJECTS%
%G% -c buggy/src/triangle.cpp -o lib/triangle.o lib/glad.o -Iinclude -Llib -lmingw32 -lglfw3 -lopengl32 -lgdi32 -luser32 
%G% -c buggy/src/texture.cpp -o lib/texture.o lib/glad.o -Iinclude -Llib -lmingw32 -lglfw3 -lopengl32 -lgdi32 -luser32 
%G% -c buggy/src/window.cpp -o lib/window.o lib/glad.o -Iinclude -Llib -lmingw32 -lglfw3 -lopengl32 -lgdi32 -luser32
%G% main.cpp lib/triangle.o lib/window.o lib/texture.o lib/glad.o -o playground.exe -Iinclude -Llib -lmingw32 -lglfw3 -lopengl32 -lgdi32 -luser32