set( NUMBER_SRC
        Number.h
        Number.cpp
)

SET(LIB_TYPE STATIC)

add_library(Number_lib ${LIB_TYPE} ${NUMBER_SRC})