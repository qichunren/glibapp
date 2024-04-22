bin_PROGRAMS=glibapp

glibapp_CFLAGS=@GLIB2_CFLAGS@ -DPREFIXDIR=\"$(prefix)\" -fPIC
glibapp_DEPENDENCIES=@LIBOBJS@
glibapp_SOURCES=main.c
glibapp_LDFLAGS=-export-dynamic -no-undefined \
    -export-symbols-regex "^[[^_]].*"
glibapp_LDADD=@LIBOBJS@ @GLIB2_LIBS@