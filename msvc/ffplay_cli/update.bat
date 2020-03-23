@ECHO OFF

if "%1" == "x64_debug" (
  copy "%~dp0..\..\libs\Win32\ffmpeg-4.2.2-win64-dev\bin\*.dll" "%~dp0target\x64\Debug\"
  copy "%~dp0..\..\libs\Win32\SDL2-2.0.10\lib\x64\*.dll" "%~dp0target\x64\Debug\"
)


if "%1" == "x64_release" (
  copy "%~dp0..\..\libs\Win32\ffmpeg-4.2.2-win64-dev\bin\*.dll" "%~dp0target\x64\Release\"
  copy "%~dp0..\..\libs\Win32\SDL2-2.0.10\lib\x64\*.dll" "%~dp0target\x64\Release\"
)


if "%1" == "x86_debug" (
  copy "%~dp0..\..\libs\Win32\ffmpeg-4.2.2-win64-dev\bin\*.dll" "%~dp0target\x86\Debug\"
  copy "%~dp0..\..\libs\Win32\SDL2-2.0.10\lib\x64\*.dll" "%~dp0target\x86\Debug\"
)


if "%1" == "x86_release" (
  copy "%~dp0..\..\libs\Win32\ffmpeg-4.2.2-win64-dev\bin\*.dll" "%~dp0target\x86\Release\"
  copy "%~dp0..\..\libs\Win32\SDL2-2.0.10\lib\x64\*.dll" "%~dp0target\x86\Release\"
)
