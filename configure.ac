# -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_CONFIG_MACRO_DIR(m4)

m4_define([glibapp_major_version], [1])
m4_define([glibapp_minor_version], [0])
m4_define([glibapp_micro_version], [0])
m4_define([glibapp_version], [glibapp_major_version.glibapp_minor_version.glibapp_micro_version])

AC_INIT([glibapp], [glibapp_version], [bug-automake@gnu.org])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_SRCDIR([Makefile.am])
AM_SILENT_RULES([yes])

GLIBAPP_MAJOR_VERSION=glibapp_major_version
GLIBAPP_MINOR_VERSION=glibapp_minor_version
GLIBAPP_MICRO_VERSION=glibapp_micro_version
GLIBAPP_VERSION=glibapp_version
GLIBAPP_LIB_VERSION=glibapp_lib_version

AC_DEFINE(GLIBAPP_MAJOR_VERSION, [glibapp_major_version],
    [Define to the Glib Guide major version])
AC_DEFINE(GLIBAPP_MINOR_VERSION, [glibapp_minor_version],
    [Define to the Glib Guide minor version])
AC_DEFINE(GLIBAPP_MICRO_VERSION, [glibapp_micro_version],
    [Define to the Glib Guide micro version])

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX
AC_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_LN_S
AM_PROG_CC_C_O
AC_PROG_LIBTOOL
AM_PROG_LIBTOOL
CFLAGS="-Wall"

PKG_CHECK_MODULES([GLIB2], [glib-2.0 >= 2.32, gthread-2.0 >= 2.32, gmodule-2.0 >= 2.32, gio-2.0 >= 2.32])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT