#ifndef __KEY_VALUE_H__
#define __KEY_VALUE_H__

#include <unordered_map>
#include <string>

namespace Compile
{
  class Compile_value
  {
      public:
        Compile_value();
        std::string get_bin_value(std::string instructions);
        void test_namespace(Number *number);

      private:
        std::unordered_map<std::string,std::string> compile_words; 
  };
}


#endif