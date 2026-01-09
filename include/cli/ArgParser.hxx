#pragma once

#include <string>
#include <vector>

struct option
{
    std::string short_name;
    std::string long_name;
    bool has_arg;
};

class ArgParser
{
    private :
        std::vector<option> options;
        std::size_t sOptions;

    public :
        /**
         * create the `options` vector from an array at `p_options`,
         * pass array size as `s_options`
         */
        ArgParser(option *p_options, std::size_t s_options);
};
