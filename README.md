This example works on Android, Desktop, and Web.

Click the next link to run it in the browser: https://6604427c5c350c16aa4551c3--clinquant-pastelito-7b506b.netlify.app/

I use free models:
- [House](https://www.turbosquid.com/3d-models/old-house-obj-free/924635)
- [Lava Niva](https://sketchfab.com/3d-models/low-poly-lada-niva-b67df18b55ab497ba30cdbd6be7dee19)

The following information is true for Qt 6.6.3:

`antialiasing` doesn't work with QOpenGLWidget on WebAssembly. See my bug report: https://bugreports.qt.io/browse/QTBUG-123816 It's better to use QOpenGLWindow instead of QOpenGLWidget on WebAssembly: https://github.com/8Observer8/load-3d-models-dae-openglwindow-opengles2-qt6-cpp

But this bug was fixed in Qt 6.7.0: https://661dc1dfca264a523103b225--clinquant-pastelito-7b506b.netlify.app/

<img src="https://private-user-images.githubusercontent.com/3908473/333530928-c87e21d8-d460-4ef0-aa66-5d3030024f4f.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTY1NDI5NzMsIm5iZiI6MTcxNjU0MjY3MywicGF0aCI6Ii8zOTA4NDczLzMzMzUzMDkyOC1jODdlMjFkOC1kNDYwLTRlZjAtYWE2Ni01ZDMwMzAwMjRmNGYucG5nP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI0MDUyNCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNDA1MjRUMDkyNDMzWiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9Mjk3NGYzMGNlYzA5NDc1YjVhNTY5MDRkMzQzMzY4ZDc5N2NkYTM5OGQzOTc0NTEwZWFjYWY2MzMwMDIwMmEyNiZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QmYWN0b3JfaWQ9MCZrZXlfaWQ9MCZyZXBvX2lkPTAifQ.Y12eShLCKXGhwQmPWJsSXN7GpXkvfy6h1DIMNeANMow">

If you want to thank me: https://8observer8.github.io/donate.html
