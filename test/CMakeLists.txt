add_executable(hello-xfoil
    source/main.cpp
)

target_link_libraries(hello-xfoil
    xfoil-c
)
