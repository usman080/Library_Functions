//
// Created by Onkar Ingale on 28-12-2022.
//

#ifndef NEW_LIBRARY_FUNCTION_LIBRARYFUNCTIONEXCEPTION_H
#define NEW_LIBRARY_FUNCTION_LIBRARYFUNCTIONEXCEPTION_H
#include <iostream>
class LibraryFunctionException : public std::exception {
public:
    char *message;
    explicit LibraryFunctionException(std::string msg)
    {
        message = new char[msg.size()+1];
        std::copy(msg.begin(), msg.end(), message);
        message[msg.size()] = '\0';
    }
    [[nodiscard]] char * what ()  noexcept {
        return message;
    }
};
#endif //NEW_LIBRARY_FUNCTION_LIBRARYFUNCTIONEXCEPTION_H
