#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_toolButton_6_clicked();

    void on_toolButton_7_clicked();

    void on_toolButton_15_clicked();

    void on_toolButton_22_clicked();

    void on_toolButton_29_clicked();

    void on_toolButton_36_clicked();

    void on_toolButton_clicked();

    void on_toolButton_13_clicked();

    void on_toolButton_20_clicked();

    void on_toolButton_27_clicked();

    void on_toolButton_34_clicked();

    void on_toolButton_41_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_9_clicked();

    void on_toolButton_10_clicked();

    void on_toolButton_11_clicked();

    void on_toolButton_16_clicked();

    void on_toolButton_23_clicked();

    void on_toolButton_30_clicked();

    void on_toolButton_37_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_14_clicked();

    void on_toolButton_21_clicked();

    void on_toolButton_28_clicked();

    void on_toolButton_35_clicked();

    void on_toolButton_42_clicked();

    void on_toolButton_12_clicked();

    void on_toolButton_26_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_19_clicked();

    void on_toolButton_18_clicked();

    void on_toolButton_25_clicked();

    void on_toolButton_32_clicked();

    void on_toolButton_39_clicked();



    void on_toolButton_17_clicked();


    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);


    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_toolButton_24_clicked();

    void on_toolButton_31_clicked();

    void on_toolButton_33_clicked();



    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_3_currentIndexChanged(const QString &arg1);

    void on_toolButton_38_clicked();

    void on_toolButton_40_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
