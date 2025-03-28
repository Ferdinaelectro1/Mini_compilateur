#ifndef __WRITER_H__
#define __WRITER_H__
#include <string>
#include <fstream>
#include <iostream>

void write_binary(std::string bin_str)
{
    std::ofstream outfile("output.bin",std::ios::binary);
    if(!outfile)
    {
        std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
    }
    int byte_size = bin_str.size() / 8;
    char byte[byte_size];
    int i = 0;
    int lot = 0;
    for(char caractere : bin_str)
    {
        if(!(i % 8))
        {
            outfile.write(&byte[lot],sizeof(byte));
            lot += 1;
        }
        if(caractere == '0')
        {
            byte[lot] |= (0<<i);
        }
        else
        {
            byte[lot] |= (1 << i);
        }
        i++;
    }
    outfile.close();
    std::cout << "Écriture avec succès !\n";
}

#endif