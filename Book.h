#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "Author.h"
class Book {
private:
    std::string title;
    Author author;
    int year;
    double price;
    std::string isbn;
    static int totalBooks;
public:
    Book();
    Book(const std::string& t, const Author& a, int y, double p, const std::string& i);
    Book(const Book&) = default;
    Book(Book&&) noexcept = default;
    Book& operator=(const Book&) = default;
    Book& operator=(Book&&) noexcept = default;
    ~Book() = default;
    std::string getIsbn() const { return isbn; }
    Author getAuthor() const { return author; }
    int getYear() const { return year; }
    double getPrice() const { return price; }
    void setYear(int y) { if (y >= 1500 && y <= 2025) year = y; }
    void setPrice(double p) { if (p >= 0) price = p; }
    std::string to_string() const;
    static int getTotalBooks() { return totalBooks; }
};
#endif
