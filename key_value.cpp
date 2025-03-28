#include "key_value.h"

namespace {
    class Number;
}


Compile::Compile_value::Compile_value()
{
    compile_words["mov"] = "0000";
    compile_words["add"] = "0001";
    compile_words["sub"] = "0010";
    compile_words["rax"] = "0011";
    compile_words["rdi"] = "0100";
    compile_words["rdx"] = "0101";
    compile_words["rci"] = "0110";
    compile_words["jmp"] = "0111";
    compile_words["rcx"] = "1001";
    compile_words["rsi"] = "1010";
    compile_words["syscall"] = "1000"; 
}

std::string Compile::Compile_value::get_bin_value(std::string instruction)
{
    if(compile_words.find(instruction) != compile_words.end())
    {
        return compile_words[instruction];
    }
    else
    {
        return instruction;
    }
}

void Compile::Compile_value::test_namespace(Number *number)
{
}