set(VECTORED_SRC
        Vectored.h Vectored.cpp
        )

SET(LIB_TYPE SHARED)

add_library(Vectored_lib ${LIB_TYPE} ${VECTORED_SRC})