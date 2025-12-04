#include "Author.h"
std::string Author::to_string() const {
    return name + " (" + std::to_string(birthYear) + ")";
}
