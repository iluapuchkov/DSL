//
// Created by Расим Гаджиев on 26.03.2022.
//

#ifndef LASOSPROJECT_UTILS_H
#define LASOSPROJECT_UTILS_H


//
// Created by Расим Гаджиев on 26.03.2022.
//

#include <string>

class Utils {
public:
    static bool is_number(const std::string &s);
};

std::string text_read(std::istream& input) {
    return {std::istreambuf_iterator<char>(input), std::istreambuf_iterator<char>()};
}



#endif //LASOSPROJECT_UTILS_H
