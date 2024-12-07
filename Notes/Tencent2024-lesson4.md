## 4. UMG界面

### UE中的UI实现 

#### UI是什么

用户有应用程序交互的界面

#### 游戏中的UI

- 注重沉浸感和视觉冲击力，艺术风格与游戏的风格匹配
- 实时更新

#### SlateUI与UMG

- 两种实现方式

- SlateUI

  UE底层的UI框架，用于构建和管理用户界面，是虚幻引擎中所有UI的基础，使用起来非常复杂，需要编写大量C++代码

- UMG

  虚幻引擎的可视化UI工具，(Unreal Motion Graphics)UMG，基于Slate构建，通过可视化的蓝图系统让开发者和设计师不需要编写C++代码

  UMG本质上就是对Slate进行了易用性封装

### UMG功能简介

#### 设计器

- 画布：用于承载UI元素
- Palette和Library：一些预设的UI元素
- 层级视图：显示UI的层级关系
- 细节面板：调整UI元素的属性
- 绑定控件：显示绑定到C++的控件和动画
- 动画轨道：编辑控件的蓝图动画

#### 图表

控件蓝图与普通蓝图类似，用于给UI赋予逻辑

#### UMG蓝图制作要点

- 元素展现：通过图片、文字直观表达UI需要表达的信息
- 交互体验：通过按钮、输入框、勾选框，获取玩家输入以达成交互功能
- 布局调整及适配：通过合理的布局以美化UI整体效果
- 动画效果：进一步提升UI的艺术效果
- 功能实现：以代码驱动UI的整体运行
  - 以变量的形式来操控UI元素的属性
  - 在UI的细节面板设置`is variable`来使UI控件设置成变量
  - 控制事件绑定：细节面板中的事件一栏进行事件绑定
    - Construct和PreConstruct事件
      - preconstruct：设计时就会进行运行，通过`is Design Time`来决定是否运行在设计时
      - construct：在preconstruct后执行
    - OnInitialized事件：用于进行初始化操作，事件绑定
- 通过c++来操控UI控件
  - 创建基于UserWidget的类
  - 变量绑定：在图表界面中的class setting中的parent class中设置为上述创建的C++类
  - meta=(BindWidget)，UI控件的名称要保持一致，且一定要有对应的UI元素与之对应
  - 如果meta=(BindWidgetOptional)，则不一定要有UI控件与之对应

### 展示UMG

- 通过HUD类来实现
- 在BeginPlay中添加CreateWidget节点，创建上述创建的Widget类
- 然后添加Add to ViewPort节点，使其可见
- 在owning中通过Get Player Controller获取玩家控制器

### UMG进阶技巧

- 容器与slot：边距、锚点、控件填充(scale box)的控制

- 刷新函数的绑定：需要频繁更新的内容，可以通过binding的方式，将函数绑定到刷新的逻辑中

- 主动刷新：通过事件绑定的方式实现主动刷新，相比每帧调用，其性能更高

  

