#include <string>
#include <unordered_map>
#include "code_input.h"
#include "key_value.h"
#include "compiler.h"
#include "writer.h"

int main(void)
{
    std::string code_str;
    code_str = get_code_str();
    constexpr int p = 8;
    //std::cout << "Le code est "<< code_str << std::endl; 

 /*   std::unordered_map<std::string,std::string> compile_words; */
/*     Compile_value compile_values;
    std::string code = "jmp";
    std::cout << "La valeur binaire de "<<code << " = "<< compile_values.get_bin_value(code) <<std::endl; */

    //std::string code = "mov rax rdx ";
    std::string bin = compile(code_str);
    std::cout << "bin : "<< bin << "\n";
    write_binary(bin);
    //resultat = 000000110101
    return 0;
}