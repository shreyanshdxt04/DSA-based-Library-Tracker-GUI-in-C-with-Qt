#ifndef LIBRARY_H
#define LIBRARY_H

#include <QString>
#include <unordered_map>
#include <queue>
#include <stack>
#include <vector>

struct Book {
    int id;
    QString title, author;
    bool isIssued;
    Book *left, *right;

    Book(int id, QString title, QString author);
};

class Library {
private:
    Book* root;
    std::unordered_map<int, std::queue<QString>> issueQueue;
    std::stack<std::pair<int, QString>> returnStack;
    std::vector<QString> history;

    Book* insert(Book* root, int id, QString title, QString author);
    Book* search(Book* root, int id);
    void inorder(Book* root, QString &output);
    void inorderIssued(Book* root, QString &output);

public:
    Library();
    QString addBook(int id, QString title, QString author);
    QString borrowBook(int id, QString user);
    QString returnBook(int id, QString user);
    QString displayBooks();
    QString displayBorrowedBooks();
};

#endif // LIBRARY_H
