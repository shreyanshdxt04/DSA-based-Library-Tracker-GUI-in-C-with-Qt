#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addBtn_clicked() {
    int id = ui->idEdit->text().toInt();
    QString title = ui->titleEdit->text();
    QString author = ui->authorEdit->text();

    QString result = lib.addBook(id, title, author);
    ui->outputArea->addItem(result);
}

void MainWindow::on_borrowBtn_clicked() {
    int id = ui->idEdit->text().toInt();
    QString user = ui->userEdit->text();

    QString result = lib.borrowBook(id, user);
    ui->outputArea->addItem(result);
}

void MainWindow::on_returnBtn_clicked() {
    int id = ui->idEdit->text().toInt();
    QString user = ui->userEdit->text();

    QString result = lib.returnBook(id, user);
    ui->outputArea->addItem(result);
}

void MainWindow::on_showAllBtn_clicked() {
    QString books = lib.displayBooks();
    ui->outputArea->addItem("All Books:\n" + books);
}

void MainWindow::on_showIssuedBtn_clicked() {
    QString books = lib.displayBorrowedBooks();
    ui->outputArea->addItem("Borrowed Books:\n" + books);
}
