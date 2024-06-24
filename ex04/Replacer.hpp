#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replacer
{
    private:
        void _replace_pattern_str(std::string& str,
					            std::string old_token,
					            std::string new_token);
    public:
        void  replace(std::string input_file_path,
                     std::string old_token,
                     std::string new_token);
};

#endif