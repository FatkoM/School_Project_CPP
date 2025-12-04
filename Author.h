#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
class Author {
private:
    std::string name;
    int birthYear;
public:
    Author() : name("Unknown"), birthYear(1900) {}
    Author(const std::string& n, int y) : name(n), birthYear(y) {}
    std::string getName() const { return name; }
    int getBirthYear() const { return birthYear; }
    void setBirthYear(int y) { if (y >= 1850 && y <= 2025) birthYear = y; }
    std::string to_string() const;
};
#endif
