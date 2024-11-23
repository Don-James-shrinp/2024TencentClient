## 第一周作业

> 1. 源码编译UE5，新建一个C++工程，进行简单场景编辑和工程设置
> 2. 编译并构建安装包，确保能够将游戏工程安装到手机上正常运行

### 源码编译UE5

- 源码下载参考官方文档[UE源码获取](https://dev.epicgames.com/documentation/zh-cn/unreal-engine/downloading-unreal-engine-source-code)

- 按照项目中的`README.md`提供的步骤

  - 运行`Setup.bat`下载依赖
  - 运行`GenerateProjectFiles.bat`构建vs项目
  - 然后进入`UE5.sln`进行编译

- 编译完成后在`Engine\Binary\Win64`下找到`UnrealEditor.exe`即可启动

- 编译后结果如下

  <img src="E:\gamedev\TencentClient2024\Images\Assignment1\CompileResult.png" width="50%">

### 安装包构建

- 构建安卓安装包，结果如下

  <img src="E:\gamedev\TencentClient2024\Images\Assignment1\AndroidBuildResult.jpg" width="70%">

- 遇到的问题及解决方案见[TroubleShoot](../Notes/TroubleShoot.md#Android打包问题)