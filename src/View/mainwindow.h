#ifndef CPP3_SMARTCALC_V2_FRONT_MAINWINDOW_H
#define CPP3_SMARTCALC_V2_FRONT_MAINWINDOW_H

#include <qcustomplot.h>

#include <QMainWindow>
#include <QVector>

#include "../Controller/Controller.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr, s21::Controller *controller = nullptr);
  ~MainWindow();

 private slots:
  void Numbers();
  void Operators();
  void EqButton();
  void ClearWindow();
  void Dot();
  void Trigonometry();
  void on_OnGraphicDoClicked_clicked();
  void on_ButtonE_clicked();

 private:
  Ui::MainWindow *ui_;
  s21::Controller *controller_;
  QButtonGroup *buttongroup_;
};

#endif  // CPP3_SMARTCALC_V2_FRONT_MAINWINDOW_H
