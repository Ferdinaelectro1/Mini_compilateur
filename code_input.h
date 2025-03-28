#ifndef __CODE_INPUT_H__
#define __CODE_INPUT_H__
#include <iostream>
#include <string>

std::string get_code_str(){
    std::string code_str;
    std::cout << "Entrez le code (($) pour marquer la fin) : \n";
    std::string code;
    while (code[code.size() - 1] != '$')
    {
       std::getline(std::cin,code);
       code_str += " "+code;
    }
    return code_str;
}

#endif