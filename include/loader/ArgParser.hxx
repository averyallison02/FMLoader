#include <optional>
#include <string_view>
#include <unordered_map>

struct option
{
    const std::string_view short_name;
    const std::string_view long_name;
    const std::optional<std::string_view> opt_arg;
};

class ArgParser
{
    private :
        struct option
        {
            const std::string_view short_name;
            const std::string_view long_name;
            const std::optional<std::string_view> opt_arg;
        };

        std::unordered_map<std::string_view,struct option> optionsAvailable;
};
