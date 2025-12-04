#ifndef LOAN_H
#define LOAN_H
#include <string>
class Loan {
private:
    std::string isbn;
    std::string memberId;
    std::string startDate;
    std::string dueDate;
    bool returned;
public:
    Loan(const std::string& i, const std::string& m, const std::string& s, const std::string& d)
        : isbn(i), memberId(m), startDate(s), dueDate(d), returned(false) {}
    void markReturned() { returned = true; }
    bool isReturned() const { return returned; }
    bool isOverdue(const std::string& today) const { return !returned && dueDate < today; }
    std::string getIsbn() const { return isbn; }
    std::string getMemberId() const { return memberId; }
};
#endif
