/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <qcustomplot.h>

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QPushButton *ButtonAc;
  QPushButton *ButtonMod;
  QPushButton *ButtonPlus;
  QPushButton *ButtonMult;
  QPushButton *ButtonMinus;
  QPushButton *ButtonDiv;
  QPushButton *PushButtonEq;
  QPushButton *ButtonCos;
  QPushButton *ButtonSqrt;
  QPushButton *ButtonSin;
  QPushButton *ButtonLn;
  QPushButton *ButtonTan;
  QPushButton *ButtonAcos;
  QPushButton *ButtonLog;
  QPushButton *ButtonAsin;
  QPushButton *ButtonMulX;
  QPushButton *ButtonAtan;
  QPushButton *Button0;
  QPushButton *ButtonDot;
  QPushButton *Button2;
  QPushButton *Button7;
  QPushButton *Button6;
  QPushButton *Button5;
  QPushButton *Button8;
  QPushButton *Button4;
  QPushButton *Button3;
  QPushButton *Button9;
  QPushButton *Button1;
  QPushButton *ButtonX;
  QPushButton *ButtonBreacketsL;
  QPushButton *ButtonBreacketsR;
  QCustomPlot *Graph;
  QDoubleSpinBox *GraphX;
  QDoubleSpinBox *GraphY;
  QLabel *label;
  QLabel *label_2;
  QPushButton *OnGraphicDoClicked;
  QDoubleSpinBox *DoubleSpinBoxX;
  QLineEdit *ResultWindow;
  QPushButton *ButtonE;
  QRadioButton *RadioButtonPlus;
  QRadioButton *RadioButtonMinus;
  QSpinBox *DoubleSpinBoxNumber;
  QSpinBox *DoubleSpinBoxDegree;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName("MainWindow");
    MainWindow->resize(791, 465);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName("centralwidget");
    ButtonAc = new QPushButton(centralwidget);
    ButtonAc->setObjectName("ButtonAc");
    ButtonAc->setGeometry(QRect(0, 170, 111, 51));
    QFont font;
    font.setPointSize(20);
    ButtonAc->setFont(font);
    ButtonAc->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonMod = new QPushButton(centralwidget);
    ButtonMod->setObjectName("ButtonMod");
    ButtonMod->setGeometry(QRect(120, 170, 51, 51));
    ButtonMod->setFont(font);
    ButtonMod->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonPlus = new QPushButton(centralwidget);
    ButtonPlus->setObjectName("ButtonPlus");
    ButtonPlus->setGeometry(QRect(180, 170, 55, 55));
    ButtonPlus->setFont(font);
    ButtonPlus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonMult = new QPushButton(centralwidget);
    ButtonMult->setObjectName("ButtonMult");
    ButtonMult->setGeometry(QRect(180, 230, 55, 55));
    ButtonMult->setFont(font);
    ButtonMult->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonMinus = new QPushButton(centralwidget);
    ButtonMinus->setObjectName("ButtonMinus");
    ButtonMinus->setGeometry(QRect(180, 290, 55, 55));
    ButtonMinus->setFont(font);
    ButtonMinus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonDiv = new QPushButton(centralwidget);
    ButtonDiv->setObjectName("ButtonDiv");
    ButtonDiv->setGeometry(QRect(180, 350, 55, 55));
    ButtonDiv->setFont(font);
    ButtonDiv->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    PushButtonEq = new QPushButton(centralwidget);
    PushButtonEq->setObjectName("PushButtonEq");
    PushButtonEq->setGeometry(QRect(180, 410, 55, 51));
    PushButtonEq->setFont(font);
    PushButtonEq->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonCos = new QPushButton(centralwidget);
    ButtonCos->setObjectName("ButtonCos");
    ButtonCos->setGeometry(QRect(240, 220, 60, 40));
    QFont font1;
    font1.setPointSize(18);
    ButtonCos->setFont(font1);
    ButtonCos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonSqrt = new QPushButton(centralwidget);
    ButtonSqrt->setObjectName("ButtonSqrt");
    ButtonSqrt->setGeometry(QRect(240, 420, 60, 40));
    ButtonSqrt->setFont(font1);
    ButtonSqrt->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonSin = new QPushButton(centralwidget);
    ButtonSin->setObjectName("ButtonSin");
    ButtonSin->setGeometry(QRect(240, 270, 60, 40));
    ButtonSin->setFont(font1);
    ButtonSin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonLn = new QPushButton(centralwidget);
    ButtonLn->setObjectName("ButtonLn");
    ButtonLn->setGeometry(QRect(240, 370, 61, 41));
    ButtonLn->setFont(font1);
    ButtonLn->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonTan = new QPushButton(centralwidget);
    ButtonTan->setObjectName("ButtonTan");
    ButtonTan->setGeometry(QRect(240, 320, 60, 40));
    ButtonTan->setFont(font1);
    ButtonTan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonAcos = new QPushButton(centralwidget);
    ButtonAcos->setObjectName("ButtonAcos");
    ButtonAcos->setGeometry(QRect(310, 220, 60, 40));
    ButtonAcos->setFont(font1);
    ButtonAcos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonLog = new QPushButton(centralwidget);
    ButtonLog->setObjectName("ButtonLog");
    ButtonLog->setGeometry(QRect(310, 370, 61, 41));
    ButtonLog->setFont(font1);
    ButtonLog->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonAsin = new QPushButton(centralwidget);
    ButtonAsin->setObjectName("ButtonAsin");
    ButtonAsin->setGeometry(QRect(310, 270, 60, 40));
    ButtonAsin->setFont(font1);
    ButtonAsin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonMulX = new QPushButton(centralwidget);
    ButtonMulX->setObjectName("ButtonMulX");
    ButtonMulX->setGeometry(QRect(310, 420, 61, 40));
    QFont font2;
    font2.setPointSize(24);
    ButtonMulX->setFont(font2);
    ButtonMulX->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonAtan = new QPushButton(centralwidget);
    ButtonAtan->setObjectName("ButtonAtan");
    ButtonAtan->setGeometry(QRect(310, 320, 60, 40));
    ButtonAtan->setFont(font1);
    ButtonAtan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button0 = new QPushButton(centralwidget);
    Button0->setObjectName("Button0");
    Button0->setGeometry(QRect(0, 410, 111, 51));
    QFont font3;
    font3.setPointSize(25);
    Button0->setFont(font3);
    Button0->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonDot = new QPushButton(centralwidget);
    ButtonDot->setObjectName("ButtonDot");
    ButtonDot->setGeometry(QRect(120, 410, 51, 51));
    QFont font4;
    font4.setPointSize(18);
    font4.setBold(true);
    ButtonDot->setFont(font4);
    ButtonDot->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button2 = new QPushButton(centralwidget);
    Button2->setObjectName("Button2");
    Button2->setGeometry(QRect(60, 230, 51, 51));
    Button2->setFont(font3);
    Button2->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button7 = new QPushButton(centralwidget);
    Button7->setObjectName("Button7");
    Button7->setGeometry(QRect(0, 350, 51, 51));
    Button7->setFont(font3);
    Button7->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button6 = new QPushButton(centralwidget);
    Button6->setObjectName("Button6");
    Button6->setGeometry(QRect(120, 290, 51, 51));
    Button6->setFont(font3);
    Button6->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button5 = new QPushButton(centralwidget);
    Button5->setObjectName("Button5");
    Button5->setGeometry(QRect(60, 290, 51, 51));
    Button5->setFont(font3);
    Button5->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button8 = new QPushButton(centralwidget);
    Button8->setObjectName("Button8");
    Button8->setGeometry(QRect(60, 350, 51, 51));
    Button8->setFont(font3);
    Button8->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button4 = new QPushButton(centralwidget);
    Button4->setObjectName("Button4");
    Button4->setGeometry(QRect(0, 290, 51, 51));
    Button4->setFont(font3);
    Button4->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button3 = new QPushButton(centralwidget);
    Button3->setObjectName("Button3");
    Button3->setGeometry(QRect(120, 230, 51, 51));
    Button3->setFont(font3);
    Button3->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button9 = new QPushButton(centralwidget);
    Button9->setObjectName("Button9");
    Button9->setGeometry(QRect(120, 350, 51, 51));
    Button9->setFont(font3);
    Button9->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    Button1 = new QPushButton(centralwidget);
    Button1->setObjectName("Button1");
    Button1->setGeometry(QRect(0, 230, 51, 51));
    Button1->setFont(font3);
    Button1->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 20px;\n"
        "}"));
    ButtonX = new QPushButton(centralwidget);
    ButtonX->setObjectName("ButtonX");
    ButtonX->setGeometry(QRect(310, 120, 51, 31));
    ButtonX->setFont(font1);
    ButtonX->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 15px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 15px;\n"
        "}"));
    ButtonBreacketsL = new QPushButton(centralwidget);
    ButtonBreacketsL->setObjectName("ButtonBreacketsL");
    ButtonBreacketsL->setGeometry(QRect(240, 170, 61, 41));
    QFont font5;
    font5.setPointSize(18);
    font5.setBold(false);
    ButtonBreacketsL->setFont(font5);
    ButtonBreacketsL->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius:20px;\n"
        "}"));
    ButtonBreacketsR = new QPushButton(centralwidget);
    ButtonBreacketsR->setObjectName("ButtonBreacketsR");
    ButtonBreacketsR->setGeometry(QRect(310, 170, 61, 41));
    ButtonBreacketsR->setFont(font5);
    ButtonBreacketsR->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 20px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius:20px;\n"
        "}"));
    Graph = new QCustomPlot(centralwidget);
    Graph->setObjectName("Graph");
    Graph->setGeometry(QRect(380, 0, 401, 381));
    Graph->setStyleSheet(QString::fromUtf8("border-radius: 20px;"));
    GraphX = new QDoubleSpinBox(centralwidget);
    GraphX->setObjectName("GraphX");
    GraphX->setGeometry(QRect(410, 410, 101, 21));
    GraphX->setDecimals(7);
    GraphX->setMinimum(-1000000.000000000000000);
    GraphX->setMaximum(1000000.000000000000000);
    GraphX->setValue(-10.000000000000000);
    GraphY = new QDoubleSpinBox(centralwidget);
    GraphY->setObjectName("GraphY");
    GraphY->setGeometry(QRect(550, 410, 91, 21));
    GraphY->setDecimals(7);
    GraphY->setMinimum(-1000000.000000000000000);
    GraphY->setMaximum(1000000.000000000000000);
    GraphY->setValue(10.000000000000000);
    label = new QLabel(centralwidget);
    label->setObjectName("label");
    label->setGeometry(QRect(520, 410, 31, 20));
    label_2 = new QLabel(centralwidget);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(379, 410, 31, 20));
    OnGraphicDoClicked = new QPushButton(centralwidget);
    OnGraphicDoClicked->setObjectName("OnGraphicDoClicked");
    OnGraphicDoClicked->setGeometry(QRect(390, 440, 241, 21));
    QFont font6;
    font6.setPointSize(14);
    OnGraphicDoClicked->setFont(font6);
    OnGraphicDoClicked->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 10px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 10px;\n"
        "}"));
    DoubleSpinBoxX = new QDoubleSpinBox(centralwidget);
    DoubleSpinBoxX->setObjectName("DoubleSpinBoxX");
    DoubleSpinBoxX->setGeometry(QRect(190, 120, 111, 31));
    DoubleSpinBoxX->setDecimals(7);
    DoubleSpinBoxX->setMinimum(-1000000.000000000000000);
    DoubleSpinBoxX->setMaximum(1000000.000000000000000);
    ResultWindow = new QLineEdit(centralwidget);
    ResultWindow->setObjectName("ResultWindow");
    ResultWindow->setGeometry(QRect(0, 0, 371, 101));
    ResultWindow->setFont(font1);
    ResultWindow->setReadOnly(true);
    ButtonE = new QPushButton(centralwidget);
    ButtonE->setObjectName("ButtonE");
    ButtonE->setGeometry(QRect(10, 110, 31, 31));
    ButtonE->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(100, 100, 100);\n"
        "  border: 1px solid gray;\n"
        "border-radius: 15px;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "border-radius: 15px;\n"
        "}"));
    RadioButtonPlus = new QRadioButton(centralwidget);
    RadioButtonPlus->setObjectName("RadioButtonPlus");
    RadioButtonPlus->setGeometry(QRect(120, 140, 51, 20));
    RadioButtonMinus = new QRadioButton(centralwidget);
    RadioButtonMinus->setObjectName("RadioButtonMinus");
    RadioButtonMinus->setGeometry(QRect(120, 110, 61, 20));
    DoubleSpinBoxNumber = new QSpinBox(centralwidget);
    DoubleSpinBoxNumber->setObjectName("DoubleSpinBoxNumber");
    DoubleSpinBoxNumber->setGeometry(QRect(60, 110, 42, 22));
    DoubleSpinBoxDegree = new QSpinBox(centralwidget);
    DoubleSpinBoxDegree->setObjectName("DoubleSpinBoxDegree");
    DoubleSpinBoxDegree->setGeometry(QRect(60, 140, 42, 22));
    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    ButtonAc->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
    ButtonMod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
    ButtonPlus->setText(
        QCoreApplication::translate("MainWindow", "+", nullptr));
    ButtonMult->setText(
        QCoreApplication::translate("MainWindow", "*", nullptr));
    ButtonMinus->setText(
        QCoreApplication::translate("MainWindow", "-", nullptr));
    ButtonDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    PushButtonEq->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
    ButtonCos->setText(
        QCoreApplication::translate("MainWindow", "cos", nullptr));
    ButtonSqrt->setText(
        QCoreApplication::translate("MainWindow", "sqrt", nullptr));
    ButtonSin->setText(
        QCoreApplication::translate("MainWindow", "sin", nullptr));
    ButtonLn->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
    ButtonTan->setText(
        QCoreApplication::translate("MainWindow", "tan", nullptr));
    ButtonAcos->setText(
        QCoreApplication::translate("MainWindow", "acos", nullptr));
    ButtonLog->setText(
        QCoreApplication::translate("MainWindow", "log", nullptr));
    ButtonAsin->setText(
        QCoreApplication::translate("MainWindow", "asin", nullptr));
    ButtonMulX->setText(
        QCoreApplication::translate("MainWindow", "^", nullptr));
    ButtonAtan->setText(
        QCoreApplication::translate("MainWindow", "atan", nullptr));
    Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    ButtonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
    Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
    Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    ButtonX->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
    ButtonBreacketsL->setText(
        QCoreApplication::translate("MainWindow", "(", nullptr));
    ButtonBreacketsR->setText(
        QCoreApplication::translate("MainWindow", ")", nullptr));
    label->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
    label_2->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
    OnGraphicDoClicked->setText(
        QCoreApplication::translate("MainWindow", "Graphic", nullptr));
    ButtonE->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
    RadioButtonPlus->setText(
        QCoreApplication::translate("MainWindow", "plus", nullptr));
    RadioButtonMinus->setText(
        QCoreApplication::translate("MainWindow", "minus", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
