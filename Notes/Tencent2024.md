# 腾讯2024游戏客户端公开课

## 1. UE入门 

### 游戏引擎简介

##### 市面上的引擎介绍

##### UE

- 渲染品质高
- 开发周期短，有成熟的开发框架（射击类、第一人称、第三人称）
- 跨平台
- 开源

##### Unity

- 最初是面向手游的引擎
- 渲染品质不如UE
- 推出了一系列渲染管线后在一定程度上提升了渲染品质（URP，HDRP）

##### CryEngine V

- 开源引擎
- 手游化转型做的不好
- 代表作（孤岛惊魂(Far Cry)）

##### Open 3D Engine

- 比较新的开源引擎

- 比较新的引擎
- 集成了比较新的技术

##### Source2

- 基于id-software

- 没有开源

- 代表作：Dota2

##### Frostbite Engine寒霜引擎

- EA in house引擎
- 代表作：战地系列、FIFA

#### 游戏引擎定义

- 专门为游戏而设计的工具及科技集合

- 中台，不包含内容，可被复用
- 三大特性
  1. 通用性
  2. 可扩展性
  3. 完善工具链
- 游戏引擎的渲染
  - Deffered Renderer
  - Forward Renderer
  - Mobile Renderer
    - Immediate Mode Rendering
    - Tile Based Rendering：将画面分块，进行渲染
    - Tile Based Deferred Rendering
    - 片上内存（显存）低，处理速度高，如果在主内存和片上内存来回切换，会导致效率低下
- 游戏引擎的物理
  - Havok
    - CPU友好
  - PhysX
    - GPU友好
  - Bullet
  - Chaos
    - UE的物理引擎

### Unreal Engine介绍

>  通过游戏来展示引擎，每一代引擎的发布都伴随着自己开发的游戏的发布

#### 相关资料

- Youtube: Unrea Engine
- B站：虚幻引擎
- 知乎：虚幻引擎

#### 编辑器

- 地图创建（new Level）
- 可视化模式（不同的视图、光照、线框模式）
- 导航
  - F：聚焦物体
  - Ctrl + 数字：相机的标签，记录相机的特定位置
  - G：游戏视角
- 选取
  - 透视选取：ctrl + alt，进行区域选取
- 引擎自带的贴地功能
  - End：包围盒贴地
  - Alt + End：轴心贴地
  - Shift + End：碰撞盒贴地

- Volume
  - 空气墙
  - 触发器
- Content Browser
  - UE的资源的扩展名`.uasset`
  - 资产迁移：`Assets Actions->migration`
  - Derived Data Cache
    - 格式转化
    - 平台兼容性的资源的转换
  - 资产命名规范

#### 项目结构

##### 整体结构

- Project
- Levels
- Sub-Levels
- Actor
  - 可以放入Level中的对象
  - 空壳，不包含任何功能
- Component
  - 给Actor赋予功能

##### 目录结构

- .vs
- Config
- Content
- Source

#### 设置

- WorldSetting
  - 游戏控制器
  - 游戏模式
  - GameRule
  - 默认地图
  - 地图载入方式：Streaming

- 工程设置
  - SDK
- 编辑器设置
  - 语言

#### 源码

##### 源码学习

- 启动部分搞清楚
- 按模块进行学习

##### 生成项目文件(.sln)

- 下载依赖文件
- 运行bat脚本

##### 编译项目源码

- 使用UE自己的构建系统编译

##### 工程目录结构

- DDC文件夹可删
- Intermediate可删（胶水代码）

##### 编译规则

- build.cs中配置
- 类似于Cmake的规则配置

##### 重要模块

- Engine: `Source/Runtime/Engine`，
- UMG：`Source/Runtime/UMG` `Slate`，UI模块
- 渲染：Render, RHI

##### Entry Point

- LaunchEngineLoop.cpp

### UE编程技巧

#### 游戏框架

- Pawn：角色，Actor的子类，游戏中的生命体（人物，车辆）
- Character：玩家角色
- PlayerController：控制玩家，接收input来控制对应的角色

#### Blueprint、Lua、C++

##### 蓝图

- 分类
  - Level Blueprint
  - Blueprint Class
  - Data-Only Blueprint
  - Blueprint Interface
  - Blueprint Macro
- 缺点
  - 容易形成蜘蛛网
  - git不方便
  - 效率没有c++高
  - 需要在UE的虚拟机中编译
- 使用原则
  - 用于数值配置
  - 用于简单的效果展示
  - 特别简单的逻辑

##### Lua

- slua-unreal
- UnLua

##### C++

- 通过c++类向导来创建，会添加反射信息等附加信息

- 基本类型、容器、智能指针不建议用c++原生，而使用UE提供的，`UArray`
- UProperty(globalconfig)，通过配置来设置数值
- 调试
  - #pragma ("optimize", "on")
  - Debug
  - DebugGame
  - Development
  - Shipping

##### Android真机调试

- AGDE

### 引擎工具

#### 日志

- 配置

  - Channel

  - 可见性

- 可视化日志VisualLogger

#### 内置控制台

- 实时修改游戏逻辑,参数
- t.MaxFPS 1000
- Stat FPS：显示帧数
- MemReport -full

#### 运行模式

- 添加参数-game调试游戏

#### 图形工具

##### RenderDoc

- 图形调试
- 对单帧进行分解，截帧分析
- 内置于UE

##### Mobile

- adb

##### Unreal Insight

- UE的性能分析工具

#### 学习资料

- UDN
- Learning Unreal Engine Game Development(book)
- Unreal Ungine4 Game Development

#### 编译UE源码

- clone
- 运行Setup.bat，下载依赖文件



