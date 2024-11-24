## 作业二

> 1. 物件规则：
>    1. 射击命中方块后，积分`x`分
>    2. 方块被子弹命中后，缩放`y`倍，再次命中被销毁
>    3. 上述所有参数可配置
> 2. 游戏流程
>    1. 游戏开始时随机`N`个方块成为"重要目标"，射击命中后获得双倍积分
>    2. 游戏开始后限时`T`秒，时间到后游戏结算，打印日志输出每个玩家获得的积分和所有玩家获得的总积分
>    3. 上述参数可配置
> 3. 附加题
>    1. 利用UMG制作结算UI代替日志打印
>    2. 支持多人联机（修复FPP模板缺陷）

### 数据存储设计

- 在UE5中GameMode和GameState都用了单例模式，即只有一个实例，用于存储一些全局的信息
- 我个人的理解来看（可能不太准确），GameMode用于存储静态的游戏信息（比如配置信息，游戏对象，控制器）；而GameState用于存储动态的游戏信息
- 从网络同步角度来看，GameMode仅存在服务器上，因此如果要在客户端进行同步的信息，最好存在GameState上
- 因此对于此作业而言，配置信息`x`、`y`、`N`、`T`存储在GameMode上；当前的得分、游戏对局剩余时间存储在GameState上