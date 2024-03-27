This example works on Android, Desktop, and Web.

Click the next link to run it in the browser: https://6604427c5c350c16aa4551c3--clinquant-pastelito-7b506b.netlify.app/

I use free models:
- [House](https://www.turbosquid.com/3d-models/old-house-obj-free/924635)
- [Lava Niva](https://sketchfab.com/3d-models/low-poly-lada-niva-b67df18b55ab497ba30cdbd6be7dee19)

`antialiasing` doesn't work with QOpenGLWidget on WebAssembly. See my bug report: https://bugreports.qt.io/browse/QTBUG-123816 It's better to use QOpenGLWindow instead of QOpenGLWidget on WebAssembly: https://github.com/8Observer8/load-3d-models-dae-openglwindow-opengles2-qt6-cpp

![image](https://github.com/8Observer8/load-3d-models-dae-openglwidget-opengles2-qt6-cpp/assets/3908473/0698ed4c-8822-4897-bea9-44cc7da65b37)

If you want to thank me: https://8observer8.github.io/donate.html
