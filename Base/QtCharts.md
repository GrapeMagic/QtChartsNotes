[TOC]
#  Qt Charts

Qt Charts 模块提供了一系列方便使用的表格成分。其使用了Qt 的几何视图框架，因此表格可以很轻松的加入到用户界面。Qt Charts可以当成QWidgets，QGraphicsWidget，或者QML类型使用。用户可以通过选择表格主题轻松创建令人印象深刻的图表.

## Getting Started （开始）

如果你打算在你的应用程序中使用Qt Charts c++类，使用下面的include和using指令:

```c++
#include <QtCharts>
using namespace QtCharts;
```

要链接Qt Charts模块，请将这一行添加到qmake项目文件中

```c++
QT +=charts
```

## Examples 

### AreaChart Examples

