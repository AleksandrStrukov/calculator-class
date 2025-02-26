#pragma once

#include "calculator.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_plmi_clicked();

    void on_btn_del_clicked();

    void on_btn_multi_clicked();

    void on_btn_minus_clicked();

    void on_btn_plus_clicked();

    void on_btn_result_clicked();
    void output_in_formula (QString numberOperation) ;

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_0_clicked();

    void on_btn_pow_clicked();

private:
    Ui::MainWindow* ui;
    Calculator calc;
    QString formula;
};
