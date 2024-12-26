## 5. 骨骼动画

### 序列帧动画

将一帧一帧的静态图片逐帧播放

### 模型动画

**顶点动画**vs**骨骼动画**

- 顶点数据规模大，迭代缓慢
- 骨骼动画，将顶点中抽离出一个大致的框架

### 骨骼动画

1. 骨骼

   互相连接的骨骼组成的骨骼结构，通过改变骨骼的朝向和位置来生成动画

2. 蒙皮

   将Mesh的顶点附在骨骼上

### 基础资产类型

- Skeleton：骨架，定义了骨骼的层级结构
- Skeleton：骨骼网格体，主要的渲染资源
- PhysicsAsset：物理资产，关联各骨骼和物理世界的交互

### 动画蓝图

#### 动画蓝图创建

- Add->Animation->Animation Blueprint

#### 简介

**Event Graph**

与普通蓝图类似，在Begin、Tick中添加逻辑

**Anim Graph**

逐帧生成Pose

### 重要动画资产

#### Animation Sequence

由一系列关键帧组成的动画序列，由相邻两个关键帧融合(插值)出当前Pose

**Local Space & Mesh Space**

- Local Space下，Pose中保存的每个骨骼的变换数据为相对父骨骼的变换
- Mesh Space下，Pose中保存的每个骨骼的变换数据为相对骨骼模型组件的变换，即相对骨骼的root点

**Blend Space**

- 由若干个Animation Sequence构成

- 提供多动画的融合功能，通过传入参数动态来设置各动画的权重，来动态计算融合的结果

**Aim Offset**

- Blend Space的子集
- 引擎封装好用于武器瞄准的动画类型

**Montage**

- 蒙太奇动画，由若干Animation Sequence组成
- 通过Section和Slot，实现特殊的动画控制，如动画的智能循环、基于逻辑的动画切换
- 一个Montage可以设置若干Slot，具体哪个slot生效，由运行时刻的AnimGraph决定
- 每个Slot可以拖入若干个AnimSequence
- Montage可以有若干个Section，Section把整个Montage拆分成若干块，这些块可以自由地衔接和跳转
- Montage的属性可以设置此Montage在播放时的淡入和淡出融合，使动作不会显得突兀
- 如果在属性中勾选了RootMotion，则动画在播放过程中根骨骼的位移会使角色产生移动，此功能要与CharacterMovement组件配合。

### 常用动画节点

- **混合节点 Blend Nodes**

  用于动画的融合

- **空间转换 Convert Space Nodes**

  将Pose中存储的骨骼的变换信息，全部按新的空间进行计算

- **状态机 State Machine**

  提供了图形化的方式来控制动画的切换，状态之间可以设置转换的条件及转换的融合相关数据

### IK(Inverse Kinematics)

逆向动力学（由结果来生成动画），比如结果是踩在台阶上，然后反向生成中间的过程动画

- **Two Bone IK**

  原理就是通过两根骨骼之间的关系，利用设置的JointPoint来缺点第三个点的位置，通过余弦定理来求解

- **FABRIK(Forward and Backward Reaching Inverse Kinematics)**

### 资源获取

- Epic商城FAB
- www.mixamo.com