cmake_minimum_required(VERSION 3.22)

project(plotlib LANGUAGES Fortran)
enable_language(Fortran)

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
