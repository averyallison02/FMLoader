ADD_EXECUTABLE(Loader)

TARGET_SOURCES(Loader
    PRIVATE
        Loader.cxx
)

TARGET_LINK_LIBRARIES(Loader
    PRIVATE
        ArgParser
)
