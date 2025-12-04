#ifndef MEMBER_H
#define MEMBER_H
#include <string>
class Member {
private:
    std::string name;
    std::string memberId;
    int yearJoined;
public:
    Member() : name(""), memberId(""), yearJoined(0) {}
    Member(const std::string& n, const std::string& m, int y) : name(n), memberId(m), yearJoined(y) {}
    std::string getMemberId() const { return memberId; }
    std::string to_string() const { return name + ", " + memberId + ", " + std::to_string(yearJoined); }
};
#endif
