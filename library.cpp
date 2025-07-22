#include "library.h"

Book::Book(int id, QString title, QString author) {
    this->id = id;
    this->title = title;
    this->author = author;
    isIssued = false;
    left = right = nullptr;
}

Library::Library() {
    root = nullptr;
}

Book* Library::insert(Book* root, int id, QString title, QString author) {
    if (!root) return new Book(id, title, author);
    if (id < root->id) root->left = insert(root->left, id, title, author);
    else if (id > root->id) root->right = insert(root->right, id, title, author);
    return root;
}

Book* Library::search(Book* root, int id) {
    if (!root || root->id == id) return root;
    if (id < root->id) return search(root->left, id);
    return search(root->right, id);
}

void Library::inorder(Book* root, QString &output) {
    if (!root) return;
    inorder(root->left, output);
    output += "ID: " + QString::number(root->id) + ", Title: " + root->title +
              ", Author: " + root->author + (root->isIssued ? " [Issued]\n" : " [Available]\n");
    inorder(root->right, output);
}

void Library::inorderIssued(Book* root, QString &output) {
    if (!root) return;
    inorderIssued(root->left, output);
    if (root->isIssued)
        output += "ID: " + QString::number(root->id) + ", Title: " + root->title +
                  ", Author: " + root->author + " [Issued]\n";
    inorderIssued(root->right, output);
}

QString Library::addBook(int id, QString title, QString author) {
    if (search(root, id)) return "Book with ID already exists.";
    root = insert(root, id, title, author);
    return "Book added successfully!";
}

QString Library::borrowBook(int id, QString user) {
    Book* book = search(root, id);
    if (!book) return "Book not found.";
    if (!book->isIssued) {
        book->isIssued = true;
        history.push_back("Book ID " + QString::number(id) + " borrowed by " + user);
        return "Book borrowed successfully.";
    } else {
        issueQueue[id].push(user);
        return "Book is already issued. Added " + user + " to waiting list.";
    }
}

QString Library::returnBook(int id, QString user) {
    Book* book = search(root, id);
    if (!book) return "Book not found.";
    if (book->isIssued) {
        returnStack.push({id, user});
        book->isIssued = false;
        QString msg = "Book returned.";
        if (!issueQueue[id].empty()) {
            QString nextUser = issueQueue[id].front();
            issueQueue[id].pop();
            msg += "\n" + borrowBook(id, nextUser);
        }
        return msg;
    } else {
        return "Book was not issued.";
    }
}

QString Library::displayBooks() {
    QString output;
    inorder(root, output);
    return output;
}

QString Library::displayBorrowedBooks() {
    QString output;
    inorderIssued(root, output);
    return output;
}
