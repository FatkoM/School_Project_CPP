#include "Book.h"
int Book::totalBooks = 0;
Book::Book() : title(""), author(), year(1900), price(0), isbn("") { totalBooks++; }
Book::Book(const std::string& t, const Author& a, int y, double p, const std::string& i)
    : title(t), author(a), year(y), price(p), isbn(i) { totalBooks++; }
std::string Book::to_string() const {
    return title + ", " + author.to_string() + ", " + std::to_string(year) + ", " + std::to_string(price) + ", " + isbn;
}
