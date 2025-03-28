#ifndef __COMPILER_H__
#define __COMPILER_H__
#include <vector>
#include <string>
#include <iostream>
#include "key_value.h"

std::string compile(std::string codes)
{
    std::vector<std::string> key;
    std::string temp_mot_cle;
    std::string bin;
    Compile::Compile_value compile_values;
    for (char code : codes)
    {
        if(code  != '$')
        {
            if(code == '\n' | code == ' ')
            {
                key.push_back(temp_mot_cle);
                temp_mot_cle = "";
            }
            else
            {
                temp_mot_cle += code; 
            } 
        }
    }
    for (int i = 0; i < key.size() ; i++)
    {
        bin += compile_values.get_bin_value(key[i]);
        //std::cout << key[i] << "\n";
    }
    return bin;
}

#endif