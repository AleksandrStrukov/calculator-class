#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculator.cpp"

#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->l_result->setText("0");
    ui->l_memory->setText("");
    ui->l_formula->setText("");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btn_plmi_clicked()
{
    int u = -formula.toInt();
    formula+=QString::number(u);
    ui->l_formula->setText(formula);
}

void MainWindow::output_in_formula (QString numberOperation) {
    formula += numberOperation;
    ui->l_formula->setText(formula);
}
void MainWindow::on_btn_del_clicked()
{
    output_in_formula(" : ");
}


void MainWindow::on_btn_multi_clicked()
{
     output_in_formula(" x ");
}


void MainWindow::on_btn_minus_clicked()
{
    output_in_formula(" - ");
}


void MainWindow::on_btn_plus_clicked()
{
     output_in_formula(" + ");
}


void MainWindow::on_btn_result_clicked()
{
     output_in_formula(" = ");
}


void MainWindow::on_btn_1_clicked()
{
     output_in_formula("1");
}


void MainWindow::on_btn_2_clicked()
{
     output_in_formula("2");
}


void MainWindow::on_btn_3_clicked()
{
     output_in_formula("3");
}


void MainWindow::on_btn_4_clicked()
{
     output_in_formula("4");
}


void MainWindow::on_btn_5_clicked()
{
     output_in_formula("5");
}


void MainWindow::on_btn_6_clicked()
{
     output_in_formula("6");
}


void MainWindow::on_btn_7_clicked()
{
     output_in_formula("7");
}


void MainWindow::on_btn_8_clicked()
{
     output_in_formula("8");
}


void MainWindow::on_btn_9_clicked()
{
     output_in_formula("9");
}


void MainWindow::on_btn_0_clicked()
{
    if (formula.size()==0) {
         output_in_formula("0");
    }
    output_in_formula("");
}


void MainWindow::on_btn_pow_clicked()
{
    output_in_formula(" ^ ");
}

