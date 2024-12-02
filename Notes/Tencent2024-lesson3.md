## 3. UE5的C++ 代码规范

### 通用代码规范

#### what

- 一系列语言编写的指导方针
- 缩进、注释、命名、空格、换行
- 由公司/团队制定

#### why

- 维护方便
- 可读性，更快容易上手新的代码
- 降低复杂度
  - 搜索便利(通过IDE的模糊匹配来快速找到目标代码)
- 对个人而言，书写高效
- 一致风格降低团队其他成员阅读成本

#### 具体规范

- 命名
  - 对于成员变量，尽量保证其可读性
  - 尽量使用完整的拼写，不要使用缩写
- 格式
  - 缩进，4空格
  - 换行
    - 用空行将代码片段分开
- 代码书写
  - 关键逻辑添加注释
  - 书写直白，避免连等，和不直观的运算符优先级

### UE5的C++代码规范

#### 命名

- 变量名：大驼峰式命名，bool类型加前缀b
- 清晰、明确、避免过渡缩写
- 类型名：类型+单词
- UE中的类命名：需要以特定的单词开头，否则会在UHT就出错
- 引用传入可能修改的函数变量：加Out前缀

#### 数据类型

| bool         | 布尔值               |
| ------------ | -------------------- |
| TCHAR        | 字符                 |
| int8/uint8   |                      |
| int16/uint16 |                      |
| int64/uint64 |                      |
| float        |                      |
| double       |                      |
| PTRINT       | 与指针同样大小的整数 |

- 成员变量中通过，`type name:1`，来表示其只占用一个比特
- 字符串类：FString,FText,FName,TCHAR
- 容器类：避免使用stl，使用TArray/TMap
  - 会导致内存分配器的不匹配，导致崩溃

#### 代码风格

- 大括号换行
- if-else对齐
- 使用Tab缩进
- switch-case语句对齐

#### 命名空间

- UHT仅支持全局命名空间的类型
- 不要在全局命名空间使用using声明
- 一些宏在命名空间内可能会失效，可以尝试使用UE_前缀的版本

#### C++11

- 使用nullptr来表示空指针，类型安全
- lamba函数须明确指出返回类型
- 不要使用auto，除了lambda函数、迭代器声明、模板中类型推导

#### etc

- UE官方文档

#### 如何写符合规范的代码

- 熟悉代码规范
- 使用辅助工具
  - Resharper for C++

### UE5中的标识符

#### Meta Data标签

`UCLASS`,`UENUM`,`UINTERFACE`,`USTRUCT`,`UFUNCTION`,`UPROPERTY`,`UPARAM`

参考大钊的标识符文章

#### UPROPERTY使用

- EditAnywhere：可以在编辑器中修改
- VisibleAnywhere：在编辑器只读，只能在代码中修改
- Category：分类栏，二级分类，通过`|`来标识
- DisplayName：变量在编辑器中展示的名称
- DisplayPriority：变量在编辑器中展示的优先级，默认按照代码顺序展示
- AdvancedDisplay：使变量在编辑器中折叠
- Clamp Min/Max：在编辑器中设置时有上下限
- BlueprintReadOnly：在蓝图中没法set，只能get
- BlueprintReadWrite：在蓝图中set和get

#### UFUNCTION使用

- BluuprintCallable：可以在蓝图中调用函数
- Meta函数默认值：可以自定义修改参数的默认值，不需要符合C++的默认参数规范，可以给中间某个变量默认值

#### UCLASS

- 需要include`X.generated.h`，且在最后
- 加GENERATED_BODY()
- 有默认构造函数
- 有ObjectInitializer
- 尽量不要在构造函数中做太多初始化工作(特别对于一些运行时的变量)，可以在生命周期进行，如PostLoad，BeginPlay中进行

#### USTRUCT

- 类似UCLASS
- 在class和struct加模块文件夹名（全大写，如`ENGINE_API`），用于支持跨模块访问

#### UENUM

- 尽量用枚举类，避免冲突，`enum class`
- 通过`enum class name:type`来表示enum的数据类型