#include <cli/ArgParser.hxx>

ArgParser::ArgParser(option *p_options, std::size_t s_options) :
    options(p_options, p_options + s_options),
    sOptions(s_options)
{}
