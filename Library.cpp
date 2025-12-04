#include "Library.h"
bool Library::hasBook(const std::string& isbn) const {
    for (const auto& b : books) if (b.getIsbn() == isbn) return true;
    return false;
}
bool Library::isBookAvailable(const std::string& isbn) const {
    for (const auto& l : loans) if (l.getIsbn() == isbn && !l.isReturned()) return false;
    return true;
}
bool Library::loanBook(const std::string& isbn, const std::string& memberId, const std::string& start, const std::string& due) {
    if (!hasBook(isbn) || !isBookAvailable(isbn)) return false;
    loans.emplace_back(isbn, memberId, start, due);
    return true;
}
bool Library::returnBook(const std::string& isbn, const std::string& memberId) {
    for (auto& l : loans) if (l.getIsbn() == isbn && l.getMemberId() == memberId && !l.isReturned()) {
        l.markReturned();
        return true;
    }
    return false;
}
std::vector<Book> Library::findByAuthor(const std::string& authorName) const {
    std::vector<Book> result;
    for (const auto& b : books) if (b.getAuthor().getName().find(authorName) != std::string::npos) result.push_back(b);
    return result;
}
std::string Library::to_string() const {
    return "Books: " + std::to_string(books.size()) + ", Members: " + std::to_string(members.size()) + ", Loans: " + std::to_string(loans.size());
}
