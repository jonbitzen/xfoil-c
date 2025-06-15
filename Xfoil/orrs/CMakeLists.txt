cmake_minimum_required(VERSION 3.22)

project(orrs LANGUAGES Fortran)
enable_language(Fortran)

add_executable(osgen
    src/osgen.f
    src/io.f
    src/spline.f
    src/getarg0.f
)

add_library(osmap SHARED
    src/osmap.f
)

