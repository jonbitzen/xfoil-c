cmake_minimum_required(VERSION 3.22)

project(
    xfoil
    VERSION 6.99
    LANGUAGES Fortran
)

enable_language(Fortran)

# modern fortran compilers don't like arg rank mismatches that are allowed
# by legacy programs such as this one
set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fallow-argument-mismatch")

# needed for fortran/c compatibility
set(CMAKE_C_FLAGS "-DUNDERSCORE")

add_executable(xfoil
    src/xfoil.f
    src/xpanel.f
    src/xoper.f
    src/xtcam.f
    src/xgdes.f
    src/xqdes.f
    src/xmdes.f
    src/xsolve.f
    src/xbl.f
    src/xblsys.f
    src/xpol.f
    src/xplots.f
    src/pntops.f
    src/xgeom.f
    src/xutils.f
    src/modify.f
    src/blplot.f
    src/polplt.f
    src/aread.f
    src/naca.f
    src/spline.f
    src/plutil.f
    src/iopol.f
    src/gui.f
    src/sort.f
    src/dplot.f
    src/profil.f
    src/userio.f
    src/frplot.f
    src/ntcalc.f
    osrc/osmap.f
    osrc/getosfile.c
)

target_link_libraries(xfoil
    Plt
    X11
)

add_subdirectory(orrs)
add_subdirectory(plotlib)

