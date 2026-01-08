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
        std::size_t soptions;

    public :
        /**
         * create the options vector from an array 'options'
         * 'soptions' should be greater than 0
         */
        ArgParser(option *options, std::size_t soptions);
};
