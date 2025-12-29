CMAKE_MINIMUM_REQUIRED(VERSION 3.28)

INCLUDE(CheckCXXSourceCompiles)

PROJECT(FMLoader
    VERSION 0.1
    LANGUAGES CXX
)

SET(CMAKE_CXX_STANDARD 23)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

# test for print header and functionality
CHECK_CXX_SOURCE_COMPILES("
    #include <print>

    int main()
    {
        std::print(\"test\");
        return 0;
    }
    "
    HAS_PRINT
)
IF(NOT HAS_PRINT)
    MESSAGE(FATAL_ERROR "std::print support not present/n
        please use a compiler that supports this feature")
ENDIF()

INCLUDE_DIRECTORIES(include)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

ADD_SUBDIRECTORY(src)
