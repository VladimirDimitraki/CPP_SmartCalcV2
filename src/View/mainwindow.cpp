#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, s21::Controller *controller)
    : QMainWindow(parent), ui_(new Ui::MainWindow), controller_(controller) {
  ui_->setupUi(this);
  ui_->ResultWindow->setText("");

  // DIGITS
  connect(ui_->Button0, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button1, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button2, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button3, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button4, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button5, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button6, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button7, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button8, SIGNAL(clicked()), this, SLOT(Numbers()));
  connect(ui_->Button9, SIGNAL(clicked()), this, SLOT(Numbers()));

  // OPERATIONS
  connect(ui_->ButtonPlus, SIGNAL(clicked()), this, SLOT(Operators()));
  connect(ui_->ButtonMinus, SIGNAL(clicked()), this, SLOT(Operators()));
  connect(ui_->ButtonDiv, SIGNAL(clicked()), this, SLOT(Operators()));
  connect(ui_->ButtonMult, SIGNAL(clicked()), this, SLOT(Operators()));
  connect(ui_->ButtonMulX, SIGNAL(clicked()), this, SLOT(Operators()));
  connect(ui_->ButtonMod, SIGNAL(clicked()), this, SLOT(Operators()));

  // TRIGONOMETRY
  connect(ui_->ButtonCos, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonSin, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonTan, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonAcos, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonAsin, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonAtan, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonSqrt, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonLn, SIGNAL(clicked()), this, SLOT(Trigonometry()));
  connect(ui_->ButtonLog, SIGNAL(clicked()), this, SLOT(Trigonometry()));

  // EQ
  connect(ui_->PushButtonEq, SIGNAL(clicked()), this, SLOT(EqButton()));

  // AC
  connect(ui_->ButtonAc, SIGNAL(clicked()), this, SLOT(ClearWindow()));

  // Dot
  connect(ui_->ButtonDot, SIGNAL(clicked()), this, SLOT(Dot()));

  // Brackets
  connect(ui_->ButtonBreacketsL, SIGNAL(clicked()), this, SLOT(Operators()));
  connect(ui_->ButtonBreacketsR, SIGNAL(clicked()), this, SLOT(Operators()));

  // X_Value
  connect(ui_->ButtonX, SIGNAL(clicked()), this, SLOT(Operators()));

  // Exponent
  buttongroup_ = new QButtonGroup(this);
  buttongroup_->addButton(ui_->RadioButtonMinus);
  buttongroup_->addButton(ui_->RadioButtonPlus);

  ui_->RadioButtonPlus->setText("+");
  ui_->RadioButtonMinus->setText("-");
  ui_->RadioButtonMinus->setChecked(true);
}

MainWindow::~MainWindow() { delete ui_; }

// Обработка цифр
void MainWindow::Numbers() {
  QPushButton *button = (QPushButton *)sender();
  ui_->ResultWindow->setText(ui_->ResultWindow->text() + button->text());
}

// Dot_Func
void MainWindow::Dot() {
  ui_->ResultWindow->setText(ui_->ResultWindow->text() + ".");
}

// EQ_Button
void MainWindow::EqButton() {
  QString str = ui_->ResultWindow->text();
  std::string convert_string = str.toStdString();
  QString result = "";
  int is_valid = 0;
  double x_value = ui_->DoubleSpinBoxX->value();
  long double answer = 0;
  answer = controller_->GetCalculate(convert_string, is_valid, x_value);
  if (!is_valid) {
    ClearWindow();
  } else {
    result = QString::number(answer, 'g', 15);
    ui_->ResultWindow->setText(result);
  }
}

// Операторы
void MainWindow::Operators() {
  QPushButton *button = (QPushButton *)sender();
  if (button->text() == "%") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "%");
  } else if (button->text() == "+") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "+");
  } else if (button->text() == "*") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "*");
  } else if (button->text() == "-") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "-");
  } else if (button->text() == "/") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "/");
  } else if (button->text() == "^") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "^");
  } else if (button->text() == "(") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "(");
  } else if (button->text() == ")") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + ")");
  } else if (button->text() == "x") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "x");
  } else if (button->text() == "e") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "e");
  }
}

// Triginimetry
void MainWindow::Trigonometry() {
  QPushButton *button = (QPushButton *)sender();

  QString string = ui_->ResultWindow->text();
  std::string convert_string = string.toStdString();

  if (button->text() == "cos") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "cos(");
  } else if (button->text() == "sin") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "sin(");
  } else if (button->text() == "tan") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "tan(");
  } else if (button->text() == "acos") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "acos(");
  } else if (button->text() == "asin") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "asin(");
  } else if (button->text() == "atan") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "atan(");
  } else if (button->text() == "sqrt") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "sqrt(");
  } else if (button->text() == "ln") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "ln(");
  } else if (button->text() == "log") {
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "log(");
  }
}

// Clear Window
void MainWindow::ClearWindow() {
  ui_->ResultWindow->clear();
  ui_->Graph->clearGraphs();
}

// Graphic
void MainWindow::on_OnGraphicDoClicked_clicked() {
  double x_begin = ui_->GraphX->value();
  double x_end = ui_->GraphY->value();
  int is_valid = 0;
  QString str = ui_->ResultWindow->text();
  std::string string = str.toStdString();
  controller_->GetCalculateGraphValue(x_begin, x_end, string, is_valid);
  if (!is_valid) {
    ClearWindow();
    return;
  }
  controller_->ConvertToQVector();

  ui_->Graph->xAxis->setRange(x_begin, x_end);
  ui_->Graph->yAxis->setRange(x_begin, x_end);

  ui_->Graph->clearGraphs();
  ui_->Graph->addGraph();
  ui_->Graph->graph(0)->addData(controller_->GetQVectorX(),
                                controller_->GetQVectorY());
  ui_->Graph->replot();
}

void MainWindow::on_ButtonE_clicked() {
  QPushButton *button = (QPushButton *)sender();
  if (button->text() == "e") {
    QString number_value = QString::number(ui_->DoubleSpinBoxNumber->value());
    QString degree_value = QString::number(ui_->DoubleSpinBoxDegree->value());
    QString operation = buttongroup_->checkedButton()->text();
    ui_->ResultWindow->setText(ui_->ResultWindow->text() + "(" + number_value +
                               "e" + operation + degree_value + ")");
  }
}
