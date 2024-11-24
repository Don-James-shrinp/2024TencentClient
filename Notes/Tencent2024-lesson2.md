## 2. 游戏模式

- 了解UE游戏模式框架和游戏运行流程
- 了解UE游戏模式框架下常用对象

### 好游戏的定义

精品游戏=仿真（模拟真实世界）+抽象（对现实世界中进行抽象）

### 游戏模式

- 游戏世界里组织数据和运作规则的方式
  - 物体的共同点、不同点、抽象的方式
  - 以和规则运行游戏世界
  - 数据组织的方式以及描述的方式

### UE游戏模式框架

#### 万物之源：UObject

- 元数据、反射生成（用于动态获取、修改属性）、GC垃圾回收、序列化
- 通用的接口和属性（Equals、Clone、GetHashCode、ToString、GetName、GetMetaData）

#### 物体的表达：Actor+ActorComponent

- EC架构（Entity-Component Framework）：一个实体和多种能力（组件）组合的设计模式
- SceneComponent赋予Actor空间变化的信息
  - Ftransform：Location、Rotation、Scale
- Actor即为游戏角色，而Actor的功能就由Component来定义

#### 世界的表达：UWorld+ULevel

- **平行世界**

  GameWorld、PIEWorld、PreviewWorld

- **关卡构成**

  主关卡PersistenLevel+子关卡

- **关卡加载**

  LevelStreaming流式异步加载

  1. WorldPartition（UE5）
  2. WorldComposition（UE4）
  3. LoadByLogic：有程序逻辑来加载，比如触发某个条件才能加载

- **关卡大小和加载距离**

  LevelBounds + StreamingDistance分层

- 关卡蓝图LevelScriptActor

  定义关卡规则

#### 世界之上：UGameInstance + UEngine

- **UGameInstance**
  - 信息存在与整个游戏声明周期，不随着地图切换销毁
  - 适合全局管理操作，如全局UI、设置、预加载
- UGameEgine
  - 管理UGameInstance

### UE游戏模式中重要对象

#### AActor：游戏中最重要的实体

- 根组件提供世界变化信息
- 作为网络同步的基础单位
  - Actor值同步\RPC + 组件值同步\RPC
- 标志所有权的Owner指针
  - 比如子弹和玩家的关系，子弹的Owner指针就是玩家，来追溯玩家，可以用来给玩家记分
- 标志本地权限的Role枚举
  - 用于网络同步
    - 权威端
    - 主控端
    - 模拟端

##### Actor生命周期

- 分类
  - 关卡内摆放的静态Actor
  - SpawnActor创建的动态Actor
- 生成方式
  - 本地Spawn
  - 网络序列化
- 重要的生命周期函数
  - BeginPlay：初始化
  - EndPlay：终止，重置数据
  - Tick：一帧的步进，用于实现动态逻辑，如果一帧的计算量过大，会导致卡顿
- GC完成Actor`EndPlay`后的收尾工作，将Actor加入PendingKill
- `IsValid`的判断要判断指针非空和不在`PendingKill`队列中

#### APawn：可操控的棋子

- 载具、游戏角色

##### APawn架构

- 可以被Controller控制
- 基础的输入、移动框架支持（生产者-消费者模式实现输入）

##### APawn常用派生类

- ADefaultPawn

  - 简单球形碰撞
  - 简单外显

- ASpectatorPawn：观察者Pawn

  - 去掉外显

- ACharacter人形角色

  - 近似人形的胶囊体碰撞盒UCapsuleComponent

    - 在保证一定真实性的同时，节约性能

  - 骨骼模型USkeletalMeshComponent

    - 结合动画蓝图赋予人物生动表现

  - 人物移动组件UCharaterMovementComponent

    - 配合胶囊体完成仿真移动计算

    - 提供Custom自定义移动模式的扩展

    - 网络游戏移动同步架构

      1. 主控端表现

      2. 服务器端校验

      3. 模拟段预测：观察别的玩家的视角

#### AController和APawn双向奔赴

- Possess与PossessBy，用来指定Controller
- APawn`PossessBy`某个Controller
- AController`Possess`APawn

#### APlayeController：操纵玩家

- UInputComponent
  - 绑定输入
- APlayerCameraManager
  - 通过ViewTarget上相机臂作用后的UCamaraComponent计算相机位置
- AHUD (heads-up display)
  - 逐渐被UMG替换
- 可以解释网络连接所有权

#### AGameMode

- 定义游戏模式的基础类型
- 仅服务器拥有，掌控整体游戏流程
- 纯服务器游戏的运作，如AI
- AGameMode和AGameModeBase区别
  - AGameMode是AGameModeBase子类
  - AGameMode适合对抗类游戏

#### 游戏状态

- AGameState游戏状态
  - 所有端共享同步的游戏数据
- APlayerState玩家状态
- 游戏数据的设置，应该存放在哪，是否需要同步给玩家
  - 玩家血量
  - 玩家得分
  - 队友位置
  - 毒圈、空投信息

### 示例及课程作业

- FPP模板缺陷
  - 网络同步缺陷，子弹逻辑没有被同步，其他玩家子弹的射击的效果不会作用到其他玩家的视角
- 课程作业要求
  - 基于ue5官方的FPP示例，实现游戏demo
    1. 物件规则：
       1. 射击命中方块，后的积分`x`分
       2. 方块被子弹命中后，缩放`y`倍，再次命中被销毁
    2. 游戏流程
       1. 游戏开始时随机N个方块成为"重要目标"，射击命中后获得双倍积分
       2. 游戏开始后限时T秒，时间到后游戏结算，打印日志输出每个玩家获得的积分和所有玩家获得的总积分
       3. 上述参数可配置
    3. 附加题
       1. 利用UMG制作结算UI代替日志打印
       2. 支持多人联机（修复FPP模板缺陷）
- Q&A
  - 将属性外显到Panel设置
    - UPROPERPTY(EditAnyWhere, BlueprintReadOnly, Category=Input)
  - UE学习
    - 知乎源码分析文章
  - 数据应该存在哪
    - 应该尽量避免过多同步，比如说玩家较多时，在多个玩家进行同步开销很大

​	
