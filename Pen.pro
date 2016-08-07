TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    lib/pen.cpp \
    lib/cpen.cpp \
    main.cpp \
    frac_exemplos_cpp.cpp \
    frac_exemplos_c.cpp

HEADERS += \
    fractais/frac_gelo.h \
    fractais/frac_quadrados.h \
    fractais/frac_trigo.h \
    fractais/frac_arvore.h \
    fractais/frac_circulos.h \
    fractais/frac_triangulo.h \
	fractais/frac_rotacao.h \
	fractais/frac_tapete.h \
    lib/cpen.h \
    lib/sfLine.h \
    lib/pen.h


CONFIG += c++11
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
