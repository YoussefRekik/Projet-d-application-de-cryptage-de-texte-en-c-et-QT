#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QString>
#include <QTextBlock>
#include <QTextStream>
#include <QTextDocument>
#include <QTextEdit>
#include <QTextDocumentWriter>
#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsView>
#include <qgraphicsview.h>
#include <string.h>
#include <iostream>
#include <QGraphicsScene>
#include <classes.h>
#include <string.h>
#include <strings.h>
#include <chiffre_de_vernam.h>
#include <chiffrement_RSA.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;




chiffredevernam algoVERNAM;
RSA algoRSA ;
int ppp=503;
int qqq=563;




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*QPixmap bkgnd("C:/1.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui->tabWidget->setPalette(*(new QPalette(Qt::green)));*/
    //ui->toolButton_3->setStyleSheet("background-color:cyan ");
    //ui->tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 60);"));
    //ui->tabWidget->setStyleSheet("background-color: Lightsteelblue");
    ui->tabWidget->setPalette(*(new QPalette(Qt::lightGray)));




}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_toolButton_6_clicked()
{
    QString doc = ui->plainTextEdit->toPlainText();
    QString filename = QFileDialog::getSaveFileName(this, tr("Enregistrer le fichier"),"C://",tr("Text File (*.txt)"));
    QFile file(filename) ;
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<doc<<endl;
    file.close();
}

void MainWindow::on_toolButton_7_clicked()
{
    QString doc = ui->plainTextEdit_2->toPlainText();
    QString filename = QFileDialog::getSaveFileName(this, tr("Enregistrer le fichier"),"C://",tr("Text File (*.txt)"));
    QFile file(filename) ;
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<doc<<endl;
    file.close();
}

void MainWindow::on_toolButton_15_clicked()
{
    QString doc = ui->plainTextEdit_3->toPlainText();
    QString filename = QFileDialog::getSaveFileName(this,tr("Enregistrer le fichier"),"C://",tr("Text File (*.txt)"));
    QFile file(filename) ;
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<doc<<endl;
    file.close();
}

void MainWindow::on_toolButton_22_clicked()
{
    QString doc = ui->plainTextEdit_4->toPlainText();
    QString filename = QFileDialog::getSaveFileName(this,tr("Enregistrer le fichier"),"C://",tr("Text File (*.txt)"));
    QFile file(filename) ;
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<doc<<endl;
    file.close();
}

void MainWindow::on_toolButton_29_clicked()
{
    QString doc = ui->plainTextEdit_5->toPlainText();
    QString filename = QFileDialog::getSaveFileName(this, tr("Enregistrer le fichier"),"C://",tr("Text File (*.txt)"));
    QFile file(filename) ;
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<doc<<endl;
    file.close();
}

void MainWindow::on_toolButton_36_clicked()
{
    QString doc = ui->plainTextEdit_6->toPlainText();
    QString filename = QFileDialog::getSaveFileName(this, tr("Enregistrer le fichier"),"C://",tr("Text File (*.txt)"));
    QFile file(filename) ;
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out<<doc<<endl;
    file.close();
}

void MainWindow::on_toolButton_clicked()
{
    QString filename1=QFileDialog::getOpenFileName(this,tr("ouvrir fichier"),"C://","Text File (*.txt)");
    QFile file(filename1);

    if(!file.open(QIODevice::ReadOnly))
                  QMessageBox::information(0,"info",file.errorString());
    else QMessageBox::information(this,tr("Nom du fichier ouvert"),filename1);
    QTextStream in(&file);
    ui->textEdit->setText(in.readAll());
}

void MainWindow::on_toolButton_13_clicked()
{
    QString filename1=QFileDialog::getOpenFileName(this,tr("ouvrir fichier"),"C://","Text File (*.txt)");
    QFile file(filename1);

    if(!file.open(QIODevice::ReadOnly))
                  QMessageBox::information(0,"info",file.errorString());
    else QMessageBox::information(this,tr("Nom du fichier ouvert"),filename1);
    QTextStream in(&file);
    ui->textEdit_2->setText(in.readAll());
}

void MainWindow::on_toolButton_20_clicked()
{
    QString filename1=QFileDialog::getOpenFileName(this,tr("ouvrir fichier"),"C://","Text File (*.txt)");
    QFile file(filename1);

    if(!file.open(QIODevice::ReadOnly))
                  QMessageBox::information(0,"info",file.errorString());
    else QMessageBox::information(this,tr("Nom du fichier ouvert"),filename1);
    QTextStream in(&file);
    ui->textEdit_3->setText(in.readAll());
}

void MainWindow::on_toolButton_27_clicked()
{
    QString filename1=QFileDialog::getOpenFileName(this,tr("ouvrir fichier"),"C://","Text File (*.txt)");
    QFile file(filename1);

    if(!file.open(QIODevice::ReadOnly))
                  QMessageBox::information(0,"info",file.errorString());
    else QMessageBox::information(this,tr("Nom du fichier ouvert"),filename1);
    QTextStream in(&file);
    ui->textEdit_4->setText(in.readAll());
}

void MainWindow::on_toolButton_34_clicked()
{
    QString filename1=QFileDialog::getOpenFileName(this,tr("ouvrir fichier"),"C://","Text File (*.txt)");
    QFile file(filename1);

    if(!file.open(QIODevice::ReadOnly))
                  QMessageBox::information(0,"info",file.errorString());
    else QMessageBox::information(this,tr("Nom du fichier ouvert"),filename1);
    QTextStream in(&file);
    ui->textEdit_5->setText(in.readAll());
}

void MainWindow::on_toolButton_41_clicked()
{
    QString filename1=QFileDialog::getOpenFileName(this,tr("ouvrir fichier"),"C://","Text File (*.txt)");
    QFile file(filename1);

    if(!file.open(QIODevice::ReadOnly))
                  QMessageBox::information(0,"info",file.errorString());
    else QMessageBox::information(this,tr("Nom du fichier ouvert"),filename1);
    QTextStream in(&file);
    ui->textEdit_6->setText(in.readAll());
}

void MainWindow::on_toolButton_3_clicked()
{
    ui->plainTextEdit->clear();
    ROT13 algo ;
    QString texte=ui->textEdit->toPlainText();
    QString fileName ;
    std::string text = texte.toUtf8().constData();
    algo.settexte(text);
    algo.cryptertexte();
    text=algo.gettexte();
    ui->plainTextEdit->appendPlainText(QString(text.c_str()));
}

void MainWindow::on_toolButton_5_clicked()
{
    ui->textEdit->clear();
    ui->plainTextEdit->clear();
}

void MainWindow::on_toolButton_8_clicked()
{
    ui->plainTextEdit_2->clear();

    QString k=ui->lineEdit_2->text();
    std::string clefstring = k.toUtf8().constData();

    int clef = atoi(clefstring.c_str());
    chiffredecesar algo(clef) ;

    stringstream ss;
    ss << clef;
    string str = ss.str();
    QString a = QString(str.c_str()) ;

    ui->lineEdit_2->setText(a);
    QString texte=ui->textEdit_2->toPlainText();
    QString fileName ;
    std::string text = texte.toUtf8().constData();
    algo.settexte(text);
    algo.cryptertexte();
    text=algo.gettexte();
    ui->plainTextEdit_2->appendPlainText(QString(text.c_str()));
}

void MainWindow::on_toolButton_9_clicked()
{
    ui->textEdit_2->clear();
    ui->plainTextEdit_2->clear();
}

void MainWindow::on_toolButton_10_clicked()
{
    QTextCursor my_text_cursor = ui->plainTextEdit->textCursor();
    ui->plainTextEdit->selectAll();
    ui->plainTextEdit->copy();
    my_text_cursor.clearSelection();
    ui->plainTextEdit->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_11_clicked()
{
    QTextCursor my_text_cursor = ui->plainTextEdit_2->textCursor();
    ui->plainTextEdit_2->selectAll();
    ui->plainTextEdit_2->copy();
    my_text_cursor.clearSelection();
    ui->plainTextEdit_2->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_16_clicked()
{
    QTextCursor my_text_cursor = ui->plainTextEdit_3->textCursor();
    ui->plainTextEdit_3->selectAll();
    ui->plainTextEdit_3->copy();
    my_text_cursor.clearSelection();
    ui->plainTextEdit_3->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_23_clicked()
{
    QTextCursor my_text_cursor = ui->plainTextEdit_4->textCursor();
    ui->plainTextEdit_4->selectAll();
    ui->plainTextEdit_4->copy();
    my_text_cursor.clearSelection();
    ui->plainTextEdit_4->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_30_clicked()
{
    QTextCursor my_text_cursor = ui->plainTextEdit_5->textCursor();
    ui->plainTextEdit_5->selectAll();
    ui->plainTextEdit_5->copy();
    my_text_cursor.clearSelection();
    ui->plainTextEdit_5->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_37_clicked()
{
    QTextCursor my_text_cursor = ui->plainTextEdit_6->textCursor();
    ui->plainTextEdit_6->selectAll();
    ui->plainTextEdit_6->copy();
    my_text_cursor.clearSelection();
    ui->plainTextEdit_6->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_2_clicked()
{
    ui->textEdit->clear();
    ui->textEdit->paste();
}

void MainWindow::on_toolButton_14_clicked()
{
    ui->textEdit_2->clear();
    ui->textEdit_2->paste();
}

void MainWindow::on_toolButton_21_clicked()
{
    ui->textEdit_3->clear();
    ui->textEdit_3->paste();
}

void MainWindow::on_toolButton_28_clicked()
{
    ui->textEdit_4->clear();
    ui->textEdit_4->paste();
}

void MainWindow::on_toolButton_35_clicked()
{
    ui->textEdit_5->clear();
    ui->textEdit_5->paste();
}

void MainWindow::on_toolButton_42_clicked()
{
    ui->textEdit_6->clear();
    ui->textEdit_6->paste();
}

void MainWindow::on_toolButton_12_clicked()
{

    QTextCursor my_text_cursor = ui->textEdit_5->textCursor();
    ui->textEdit_5->selectAll();
    ui->textEdit_5->copy();
    my_text_cursor.clearSelection();
    ui->textEdit_5->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_26_clicked()
{
    QTextCursor my_text_cursor = ui->textEdit_6->textCursor();
    ui->textEdit_6->selectAll();
    ui->textEdit_6->copy();
    my_text_cursor.clearSelection();
    ui->textEdit_6->setTextCursor(my_text_cursor);
}

void MainWindow::on_toolButton_4_clicked()
{
    ui->plainTextEdit_5->clear();
    ui->plainTextEdit_5->paste();
}

void MainWindow::on_toolButton_19_clicked()
{
    ui->plainTextEdit_6->clear();
    ui->plainTextEdit_6->paste();
}

void MainWindow::on_toolButton_18_clicked()
{
    ui->textEdit_3->clear();
    ui->plainTextEdit_3->clear();
}

void MainWindow::on_toolButton_25_clicked()
{
    ui->textEdit_4->clear();
    ui->plainTextEdit_4->clear();
}

void MainWindow::on_toolButton_32_clicked()
{
    ui->textEdit_5->clear();
    ui->plainTextEdit_5->clear();

}

void MainWindow::on_toolButton_39_clicked()
{
    ui->textEdit_6->clear();
    ui->plainTextEdit_6->clear();
}



void MainWindow::on_toolButton_17_clicked()
{
    ui->plainTextEdit_3->clear();
    QString k=ui->lineEdit_3->text();
    if ((k.length()>99999)||(k.length()<10000)) k="12345" ;

    std::string clefstring = k.toUtf8().constData();

    int clef = atoi(clefstring.c_str());
    chiffreduche algo(clef) ;

    stringstream ss;
    ss << clef;
    string str = ss.str();
    //QString a = QString(str.c_str()) ;

    ui->lineEdit_3->setText(k);
    QString texte=ui->textEdit_3->toPlainText();
    QString fileName ;
    std::string text = texte.toUtf8().constData();
    algo.settexte(text);
    algo.cryptertexte();
    text=algo.gettexte();

    ui->plainTextEdit_3->appendPlainText(QString(text.c_str()));

}





void MainWindow::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    ui->lineEdit_2->setValidator( new QIntValidator(0, 26, this) );
}

void MainWindow::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{

    ui->lineEdit_3->setValidator( new QIntValidator(9999,99999, this) );
}


void MainWindow::on_toolButton_24_clicked()
{
    ui->plainTextEdit_4->clear();




    QString clef=ui->lineEdit_4->text();
    std::string cle = clef.toUtf8().constData();
    QString texte=ui->textEdit_4->toPlainText();
    std::string text = texte.toUtf8().constData();
    chiffredevigenere algo(text,cle) ;
    algo.cryptertexte();
    text=algo.gettexte();

    ui->plainTextEdit_4->appendPlainText(QString(text.c_str()));

}

void MainWindow::on_toolButton_31_clicked()
{
    ui->plainTextEdit_5->clear();
    QString texte=ui->textEdit_5->toPlainText();
    std::string text = texte.toUtf8().constData();


    algoVERNAM.settexte(text);
    algoVERNAM.setcle();
    algoVERNAM.cryptertexte();
    text=algoVERNAM.gettexte();
    ui->plainTextEdit_5->appendPlainText(QString(text.c_str()));

}

void MainWindow::on_toolButton_33_clicked()
{
    ui->textEdit_5->clear();

    QString texte=ui->plainTextEdit_5->toPlainText();
    std::string text = texte.toUtf8().constData();


    algoVERNAM.settexte(text);
    algoVERNAM.decryptertexte();
    text=algoVERNAM.gettexte();



    ui->textEdit_5->setText(QString::fromStdString (text));

}


void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString p = ui->comboBox->currentText();
    std::string pp = p.toUtf8().constData();
    ppp = atoi(pp.c_str());
    algoRSA.cle_public(ppp,qqq);
    int e=algoRSA.gete();
    QString s = QString::number(e);
    int phi=algoRSA.getphi();
    QString ss = QString::number(phi);
    ui->label_39->setText(s);
    ui->label_38->setText(ss);

}

void MainWindow::on_comboBox_3_currentIndexChanged(const QString &arg1)
{
    QString q = ui->comboBox_3->currentText();
    std::string qq = q.toUtf8().constData();
    qqq = atoi(qq.c_str());
    algoRSA.cle_public(ppp,qqq);
    int e=algoRSA.gete();
    QString s = QString::number(e);
    int phi=algoRSA.getphi();
    QString ss = QString::number(phi);
    ui->label_39->setText(s);
    ui->label_38->setText(ss);
}

void MainWindow::on_toolButton_38_clicked()
{
    ui->plainTextEdit_6->clear();
    QString texte=ui->textEdit_6->toPlainText();
    std::string text = texte.toUtf8().constData();

    algoRSA.cle_public(ppp,qqq);
    algoRSA.cle_privee();
    //algoRSA.getcle();
    algoRSA.settexte(text);
    algoRSA.transformertexte();
    algoRSA.chiffrertexte();
    text=algoRSA.gettexte();
    ui->plainTextEdit_6->appendPlainText(QString(text.c_str()));


}

void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    ui->textEdit_6->clear();
    QString texte=ui->plainTextEdit_6->toPlainText();
    std::string text = texte.toUtf8().constData();

    algoRSA.cle_public(ppp,qqq);
    algoRSA.cle_privee();
    //algoRSA.getcle();
    algoRSA.settexte(text);
    algoRSA.transformertexte();
    algoRSA.chiffrertexte();
    text=algoRSA.gettexte();
    ui->plainTextEdit_6->appendPlainText(QString(text.c_str()));
}

void MainWindow::on_toolButton_40_clicked()
{
    ui->textEdit_6->clear();
    QString texte=ui->plainTextEdit_6->toPlainText();
    std::string text = texte.toUtf8().constData();
    algoRSA.cle_public(ppp,qqq);
    algoRSA.cle_privee();
    //algoRSA.getcle();
    algoRSA.settexte(text);
    //algoRSA.transformertexte();

    algoRSA.dechiffrertexte();
    text=algoRSA.gettexte();
    ui->textEdit_6->setText(QString(text.c_str()));
}
