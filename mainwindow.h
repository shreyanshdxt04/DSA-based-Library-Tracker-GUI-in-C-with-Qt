#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "library.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addBtn_clicked();
    void on_borrowBtn_clicked();
    void on_returnBtn_clicked();
    void on_showAllBtn_clicked();
    void on_showIssuedBtn_clicked();

private:
    Ui::MainWindow *ui;
    Library lib;
};

#endif // MAINWINDOW_H
