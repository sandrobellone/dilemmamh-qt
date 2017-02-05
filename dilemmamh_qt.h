#ifndef DILEMMAMH_QT_H
#define DILEMMAMH_QT_H

#include <QMainWindow>

namespace Ui {
class Dilemmamh_qt;
}

class Dilemmamh_qt : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dilemmamh_qt(QWidget *parent = 0);
    ~Dilemmamh_qt();

private slots:
    void on_pb_reset_clicked();

private:
    Ui::Dilemmamh_qt *ui;
};

#endif // DILEMMAMH_QT_H
