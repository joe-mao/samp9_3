#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QtCharts>
using namespace QtCharts;




#define fixedColumnCount 5  //数据模型的列数
#define iniDataRowCount 6   //学生个数
#define colNoName 0    //姓名的列编号
#define colNoMath 1    //数学的列编号
#define colNoChinese 2   //语文的列编号
#define colNoEnglish 3    //英语的列编号
#define colNoAverage 4   //平均分的列编号


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QStandardItemModel * theModel;//数据模型
    void iniData();//初始化数据
   // void surveyData();//统计数据

    void iniBarChart();//柱状图初始化
    void buildBarChart();//构建柱状图

//    void iniPiewChart();//饼图初始化
//    void buildPieChart();//构建饼图

//    void iniStackedBar();//堆叠图初始化
//    void buildStackedBar();//构建堆叠图

//    void iniPercentBar();//百分比柱状图初始化
//    void buildPercentBar();//构建百分比柱状图

//    void iniScatterChart();//散点图初始化
//    void buildScatterChart();//构建散点图

private slots:
    //三个分数列的数据发生变化，重新计算平均分
    void on_itemChanged(QStandardItem * item);



    void on_btn_iniBarChart_clicked();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
