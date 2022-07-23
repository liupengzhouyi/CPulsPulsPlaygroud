#ifndef TOOLS_RETURN_CODE_TOOLS_RETURN_CODE_TOOLS
#define TOOLS_RETURN_CODE_TOOLS_RETURN_CODE_TOOLS

#include <iostream>
#include <vector>
#include <string>

namespace Tools {
namespace ReturnCodeTools {

class ReturnCodeTools
{
    public:
        ReturnCodeTools();

        ~ReturnCodeTools();

    private:

        int32_t return_code_num;
        std::string return_code_str;
        std::string return_code_info;
};

}; // namespace Tools
}; // namespace ReturnCodeTools

#endif