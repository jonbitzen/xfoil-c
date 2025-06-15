cmake_minimum_required(VERSION 3.22)

project(plotlib LANGUAGES Fortran)
enable_language(Fortran)

# needed so that the graphical C functions can link to the fortran code
set(CMAKE_C_FLAGS "-DUNDERSCORE")

add_library(Plt SHARED
    plt_base.f
    plt_font.f
    plt_util.f
    plt_color.f
    set_subs.f
    gw_subs.f
    ps_subs.f
    Xwin2.c
)
