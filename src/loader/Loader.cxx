#include <print>

#include <loader/Loader.hxx>

constexpr std::string_view USAGE_MESSAGE = "Usage: loader filename";

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::println(stderr, USAGE_MESSAGE);
        return EXIT_FAIL_ARGS;
    }

    std::println("Hello {}!", argv[1]);
    return EXIT_SUCCESS;
}
