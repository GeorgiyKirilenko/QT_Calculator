#include "mainwindow.h"
#include "ui_mainwindow.h"

double first_num;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_plus_minus,SIGNAL(clicked()), this, SLOT(plus_minus()));
    connect(ui->pushButton_percent,SIGNAL(clicked()), this, SLOT(percent()));
    connect(ui->pushButton_divide,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_multiply,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus,SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
 void MainWindow::digits_numbers()
 {
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if (ui->label->text().contains(".") && button->text() == "0")
    {
        new_label = ui->label->text() + button->text();
    }
    else {
    all_numbers = (ui->label->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 10);
    }
    ui->label->setText(new_label);
 }

void MainWindow::on_pushButton_point_clicked()
{
    if(!(ui->label->text().contains('.')))
    ui->label->setText(ui->label->text() + ".");
}
void MainWindow::plus_minus()
{
   QPushButton *button = (QPushButton *)sender();
   double all_numbers;
   QString new_label;

   if(button->text() == "+/-"){
   all_numbers = (ui->label->text()).toDouble();
   all_numbers = all_numbers * -1;
   new_label = QString::number(all_numbers, 'g', 10);

   ui->label->setText(new_label);
}
}
void MainWindow::percent()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;

    if(button->text() == "%"){
       all_numbers = (ui->label->text()).toDouble();
       all_numbers = all_numbers * 0.01;
       new_label = QString::number(all_numbers, 'g', 10);

       ui->label->setText(new_label);
    }
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();
    first_num = ui->label->text().toDouble();
    ui->label->setText(" ");
    button->setChecked(true);
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_divide->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_plus->setChecked(false);
    ui->label->setText("0");
}

void MainWindow::on_pushButton_equal_clicked()
{
    double labelNumber, second_num;
    QString new_label;
    second_num = ui->label->text().toDouble();

    if(ui->pushButton_divide->isChecked()) {
        if(second_num == 0){
            ui->label->setText("0");
        }
        else {
        labelNumber = first_num / second_num;
        new_label = QString::number(labelNumber, 'g', 10);

        ui->label->setText((new_label));
        ui->pushButton_divide->setChecked(false);
    }}
    else if(ui->pushButton_multiply->isChecked()) {
        labelNumber = first_num * second_num;
        new_label = QString::number(labelNumber, 'g', 10);

        ui->label->setText((new_label));
        ui->pushButton_multiply->setChecked(false);
    }
    else if(ui->pushButton_minus->isChecked()) {
        labelNumber = first_num - second_num;
        new_label = QString::number(labelNumber, 'g', 10);

        ui->label->setText((new_label));
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_plus->isChecked()) {
        labelNumber = first_num + second_num;
        new_label = QString::number(labelNumber, 'g', 10);

        ui->label->setText((new_label));
        ui->pushButton_plus->setChecked(false);}
}

