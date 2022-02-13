
#include <QtCharts>
using namespace QtCharts;
#include <QApplication>
#include <QLineSeries>
#include <QPointF>

#include <QAreaSeries>

#include <QPen>

#include <QChart>

#include <QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLineSeries *series0 =new QLineSeries();
    QLineSeries *series1 =new QLineSeries();
    //添加与点相关的数据
    *series0<<QPointF(0,1)<<QPointF(1,1);
    *series1<<QPointF(0,0)<<QPointF(1,0);
    //生成承载数据的实体QAreaSeries
    QAreaSeries *series = new QAreaSeries(series0,series1);
    series->setName("一季度");
    //QPen 作用未知
    QPen Pen(0x059605);//猜测里面填充的是颜色的十六进制0x059605
    Pen.setWidth(3);
    series->setPen(Pen);
    //QLinearGradient 渐变画笔
//    QLinearGradient gradient(QPointF(0, 0), QPointF(0, 1));
//    gradient.setColorAt(0.0, 0x3cc63c);
//    gradient.setColorAt(1.0, 0x26f626);
//    gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
//    series->setBrush(QBrush(0x059605));

    QChart *chart = new QChart();
    /*添加图表中的内容
        可以是线 QLineSeries
        可以是面 QAreaSeries
        可以不是单个元素
        使用 QPen 为线着色
        使用 QBrush 为面着色
        QBrush 可以纯色 也可以渐变着色 QLinearGradient
    */
    chart->addSeries(series);
    chart->setTitle("表格的名称");
    //创建默认的轴
    chart->createDefaultAxes();
    //设置x,y轴的范围
    chart->axes(Qt::Horizontal).first()->setRange(1, 5);
    chart->axes(Qt::Vertical).first()->setRange(1, 5);
    //使用QChartView加载Charts
    QChartView *chartView = new QChartView(chart);
    //抗锯齿设置
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->show();

    return a.exec();
}
