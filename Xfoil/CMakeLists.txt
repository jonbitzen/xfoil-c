cmake_minimum_required(VERSION 3.22)

project(
    xfoil
    VERSION 6.99
    LANGUAGES Fortran
)

enable_language(Fortran)

add_subdirectory(orrs)
add_subdirectory(plotlib)

