# Makefile.in generated by automake 1.16.1 from Makefile.am.
# docs/reference/thunarx/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2018 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# -*- mode: makefile -*-
#
# gtk-doc.make - make rules for gtk-doc
# Copyright (C) 2003 James Henstridge
#               2004-2007 Damon Chaplin
#               2007-2017 Stefan Sauer
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

####################################
# Everything below here is generic #
####################################

am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/thunar
pkgincludedir = $(includedir)/thunar
pkglibdir = $(libdir)/thunar
pkglibexecdir = $(libexecdir)/thunar
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = x86_64-pc-linux-gnu
target_triplet = x86_64-pc-linux-gnu
subdir = docs/reference/thunarx
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/acinclude.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES = version.xml
CONFIG_CLEAN_VPATH_FILES =
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
SOURCES =
DIST_SOURCES =
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
am__DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/version.xml.in \
	$(top_srcdir)/gtk-doc.make
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/bodhi/Code/thunar-1.8.14/missing aclocal-1.16
ALL_LINGUAS = am ar ast be bg bn ca cs da de el en_AU en_GB eo es et eu fa_IR fi fr gl he hr hu hy_AM hy id ie is it ja kk ko lt lv ms nb nl nn oc pa pl pt_BR pt ro ru si sk sl sq sr sv te th tr ug uk ur_PK ur vi zh_CN zh_HK zh_TW 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
AUTOCONF = ${SHELL} /home/bodhi/Code/thunar-1.8.14/missing autoconf
AUTOHEADER = ${SHELL} /home/bodhi/Code/thunar-1.8.14/missing autoheader
AUTOMAKE = ${SHELL} /home/bodhi/Code/thunar-1.8.14/missing automake-1.16
AWK = mawk
CATALOGS =  am.gmo ar.gmo ast.gmo be.gmo bg.gmo bn.gmo ca.gmo cs.gmo da.gmo de.gmo el.gmo en_AU.gmo en_GB.gmo eo.gmo es.gmo et.gmo eu.gmo fa_IR.gmo fi.gmo fr.gmo gl.gmo he.gmo hr.gmo hu.gmo hy_AM.gmo hy.gmo id.gmo ie.gmo is.gmo it.gmo ja.gmo kk.gmo ko.gmo lt.gmo lv.gmo ms.gmo nb.gmo nl.gmo nn.gmo oc.gmo pa.gmo pl.gmo pt_BR.gmo pt.gmo ro.gmo ru.gmo si.gmo sk.gmo sl.gmo sq.gmo sr.gmo sv.gmo te.gmo th.gmo tr.gmo ug.gmo uk.gmo ur_PK.gmo ur.gmo vi.gmo zh_CN.gmo zh_HK.gmo zh_TW.gmo
CATOBJEXT = .gmo
CC = gcc
CCDEPMODE = depmode=none
CFLAGS = -g -O2 -fdebug-prefix-map=/home/bodhi/Code/thunar-1.8.14=. -fstack-protector-strong -Wformat -Werror=format-security
CPP = gcc -E
CPPFLAGS = -Wdate-time -D_FORTIFY_SOURCE=2 -DNDEBUG
CYGPATH_W = echo
DATADIRNAME = share
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
EXIF_CFLAGS = -I/usr/include/libexif
EXIF_LIBS = -lexif
EXIF_REQUIRED_VERSION = 0.6.0
EXIF_VERSION = 0.6.21
EXO_CFLAGS = -pthread -I/usr/include/exo-2 -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/xfce4 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
EXO_LIBS = -lexo-2 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lxfce4util -lglib-2.0
EXO_REQUIRED_VERSION = 0.12.0
EXO_VERSION = 0.12.11
FGREP = /usr/bin/grep -F
GDK_PIXBUF_CFLAGS = -pthread -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GDK_PIXBUF_LIBS = -lgdk_pixbuf-2.0 -lgobject-2.0 -lglib-2.0
GDK_PIXBUF_REQUIRED_VERSION = 2.14.0
GDK_PIXBUF_VERSION = 2.40.0
GETTEXT_PACKAGE = thunar
GIO_CFLAGS = -pthread -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GIO_LIBS = -lgio-2.0 -lgobject-2.0 -lglib-2.0
GIO_REQUIRED_VERSION = 2.42.0
GIO_UNIX_CFLAGS = -pthread -I/usr/include/gio-unix-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GIO_UNIX_LIBS = -lgio-2.0 -lgobject-2.0 -lglib-2.0
GIO_UNIX_REQUIRED_VERSION = 2.30.0
GIO_UNIX_VERSION = 2.64.6
GIO_VERSION = 2.64.6
GLIB_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GLIB_LIBS = -lglib-2.0
GLIB_REQUIRED_VERSION = 2.42.0
GLIB_VERSION = 2.64.6
GMODULE_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GMODULE_LIBS = -Wl,--export-dynamic -lgmodule-2.0 -pthread -lglib-2.0
GMODULE_REQUIRED_VERSION = 2.42.0
GMODULE_VERSION = 2.64.6
GMOFILES =  am.gmo ar.gmo ast.gmo be.gmo bg.gmo bn.gmo ca.gmo cs.gmo da.gmo de.gmo el.gmo en_AU.gmo en_GB.gmo eo.gmo es.gmo et.gmo eu.gmo fa_IR.gmo fi.gmo fr.gmo gl.gmo he.gmo hr.gmo hu.gmo hy_AM.gmo hy.gmo id.gmo ie.gmo is.gmo it.gmo ja.gmo kk.gmo ko.gmo lt.gmo lv.gmo ms.gmo nb.gmo nl.gmo nn.gmo oc.gmo pa.gmo pl.gmo pt_BR.gmo pt.gmo ro.gmo ru.gmo si.gmo sk.gmo sl.gmo sq.gmo sr.gmo sv.gmo te.gmo th.gmo tr.gmo ug.gmo uk.gmo ur_PK.gmo ur.gmo vi.gmo zh_CN.gmo zh_HK.gmo zh_TW.gmo
GMSGFMT = /usr/bin/msgfmt
GREP = /usr/bin/grep
GTHREAD_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTHREAD_LIBS = -lgthread-2.0 -pthread -lglib-2.0
GTHREAD_REQUIRED_VERSION = 2.42.0
GTHREAD_VERSION = 2.64.6
GTKDOC_CHECK = gtkdoc-check.test
GTKDOC_CHECK_PATH = /usr/bin/gtkdoc-check
GTKDOC_DEPS_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTKDOC_DEPS_LIBS = -lgobject-2.0 -lglib-2.0
GTKDOC_MKPDF = /usr/bin/gtkdoc-mkpdf
GTKDOC_REBASE = /usr/bin/gtkdoc-rebase
GTK_CFLAGS = -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTK_LIBS = -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0
GTK_REQUIRED_VERSION = 3.22.0
GTK_VERSION = 3.24.20
GUDEV_CFLAGS = -I/usr/include/gudev-1.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GUDEV_LIBS = -lgudev-1.0 -lgobject-2.0 -lglib-2.0
GUDEV_REQUIRED_VERSION = 145
GUDEV_VERSION = 233
HELPER_PATH_PREFIX = ${prefix}/lib/x86_64-linux-gnu
HTML_DIR = ${datadir}/gtk-doc/html
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INSTOBJEXT = .mo
INTLLIBS = 
INTLTOOL_EXTRACT = /usr/bin/intltool-extract
INTLTOOL_MERGE = /usr/bin/intltool-merge
INTLTOOL_PERL = /usr/bin/perl
INTLTOOL_UPDATE = /usr/bin/intltool-update
INTLTOOL_V_MERGE = $(INTLTOOL__v_MERGE_$(V))
INTLTOOL_V_MERGE_OPTIONS = $(intltool__v_merge_options_$(V))
INTLTOOL__v_MERGE_ = $(INTLTOOL__v_MERGE_$(AM_DEFAULT_VERBOSITY))
INTLTOOL__v_MERGE_0 = @echo "  ITMRG " $@;
INTL_MACOSX_LIBS = 
INTROSPECTION_CFLAGS = 
INTROSPECTION_COMPILER = 
INTROSPECTION_GENERATE = 
INTROSPECTION_GIRDIR = 
INTROSPECTION_LIBS = 
INTROSPECTION_MAKEFILE = 
INTROSPECTION_SCANNER = 
INTROSPECTION_TYPELIBDIR = 
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,-z,now -Wl,--as-needed -Wl,-O1 -Wl,-z,defs -Wl,--as-needed -Wl,-O1
LIBNOTIFY_CFLAGS = -pthread -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LIBNOTIFY_LIBS = -lnotify -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0
LIBNOTIFY_REQUIRED_VERSION = 0.4.0
LIBNOTIFY_VERSION = 0.7.9
LIBOBJS = 
LIBS = 
LIBSM_CFLAGS = 
LIBSM_LDFLAGS = 
LIBSM_LIBS =  -lSM -lICE -lX11
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBX11_CFLAGS = 
LIBX11_LDFLAGS = 
LIBX11_LIBS =  -lSM -lICE -lX11
LIBXFCE4KBD_PRIVATE_CFLAGS = -pthread -I/usr/include/xfce4/libxfce4kbd-private-3 -I/usr/include/xfce4/xfconf-0 -I/usr/include/xfce4/libxfce4ui-2 -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/xfce4 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LIBXFCE4KBD_PRIVATE_LIBS = -lxfce4kbd-private-3 -lxfconf-0 -lxfce4ui-2 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lxfce4util -lglib-2.0
LIBXFCE4KBD_PRIVATE_REQUIRED_VERSION = 4.12.0
LIBXFCE4KBD_PRIVATE_VERSION = 4.14.1
LIBXFCE4PANEL_CFLAGS = -pthread -I/usr/include/xfce4/libxfce4panel-2.0 -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/xfce4 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LIBXFCE4PANEL_LIBS = -lxfce4panel-2.0 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -Wl,--export-dynamic -lgmodule-2.0 -pthread -lxfce4util -lglib-2.0
LIBXFCE4PANEL_REQUIRED_VERSION = 4.12.0
LIBXFCE4PANEL_VERSION = 4.14.3
LIBXFCE4UI_CFLAGS = -pthread -I/usr/include/xfce4/libxfce4ui-2 -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/xfce4 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LIBXFCE4UI_LIBS = -lxfce4ui-2 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lxfce4util -lglib-2.0
LIBXFCE4UI_REQUIRED_VERSION = 4.12.0
LIBXFCE4UI_VERSION = 4.14.1
LIBXFCE4UTIL_CFLAGS = -I/usr/include/xfce4 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LIBXFCE4UTIL_LIBS = -lxfce4util -lglib-2.0
LIBXFCE4UTIL_REQUIRED_VERSION = 4.12.0
LIBXFCE4UTIL_VERSION = 4.14.0
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_SYS_LIBRARY_PATH = 
MAINT = #
MAKEINFO = ${SHELL} /home/bodhi/Code/thunar-1.8.14/missing makeinfo
MANIFEST_TOOL = :
MKDIR_P = /usr/bin/mkdir -p
MKINSTALLDIRS = ./mkinstalldirs
MSGFMT = /usr/bin/msgfmt
MSGFMT_OPTS = -c
MSGMERGE = /usr/bin/msgmerge
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = thunar
PACKAGE_BUGREPORT = https://bugzilla.xfce.org/
PACKAGE_NAME = thunar
PACKAGE_STRING = thunar 1.8.14
PACKAGE_TARNAME = thunar
PACKAGE_URL = 
PACKAGE_VERSION = 1.8.14
PANGO_CFLAGS = -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
PANGO_LIBS = -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lharfbuzz
PANGO_REQUIRED_VERSION = 1.38.0
PANGO_VERSION = 1.44.7
PATH_SEPARATOR = :
PCRE_CFLAGS = 
PCRE_LIBS = -lpcre
PCRE_REQUIRED_VERSION = 6.0
PCRE_VERSION = 8.39
PERL = perl
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
PLATFORM_CFLAGS = 
PLATFORM_CPPFLAGS = 
PLATFORM_LDFLAGS = 
POFILES =  am.po ar.po ast.po be.po bg.po bn.po ca.po cs.po da.po de.po el.po en_AU.po en_GB.po eo.po es.po et.po eu.po fa_IR.po fi.po fr.po gl.po he.po hr.po hu.po hy_AM.po hy.po id.po ie.po is.po it.po ja.po kk.po ko.po lt.po lv.po ms.po nb.po nl.po nn.po oc.po pa.po pl.po pt_BR.po pt.po ro.po ru.po si.po sk.po sl.po sq.po sr.po sv.po te.po th.po tr.po ug.po uk.po ur_PK.po ur.po vi.po zh_CN.po zh_HK.po zh_TW.po
POSUB = po
PO_IN_DATADIR_FALSE = 
PO_IN_DATADIR_TRUE = 
RANLIB = ranlib
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/bash
STRIP = strip
THUNARX_VERINFO = 0:0:0
THUNARX_VERSION_API = 3
THUNAR_VERSION_MAJOR = 1
THUNAR_VERSION_MICRO = 14
THUNAR_VERSION_MINOR = 8
USE_NLS = yes
VERSION = 1.8.14
XFCONF_CFLAGS = -pthread -I/usr/include/xfce4/xfconf-0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
XFCONF_LIBS = -lxfconf-0 -lgio-2.0 -lgobject-2.0 -lglib-2.0
XFCONF_REQUIRED_VERSION = 4.12.0
XFCONF_VERSION = 4.14.1
XGETTEXT = /usr/bin/xgettext
XGETTEXT_ARGS = --keyword=Q_ --from-code=UTF-8
XMKMF = 
X_CFLAGS = 
X_EXTRA_LIBS = 
X_LIBS = 
X_PRE_LIBS =  -lSM -lICE
abs_builddir = /home/bodhi/Code/thunar-1.8.14/docs/reference/thunarx
abs_srcdir = /home/bodhi/Code/thunar-1.8.14/docs/reference/thunarx
abs_top_builddir = /home/bodhi/Code/thunar-1.8.14
abs_top_srcdir = /home/bodhi/Code/thunar-1.8.14
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = tar --format=ustar -chf - "$$tardir"
am__untar = tar -xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = x86_64-linux-gnu
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${prefix}/share/doc/thunar-data
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-pc-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${prefix}/share/info
install_sh = ${SHELL} /home/bodhi/Code/thunar-1.8.14/install-sh
intltool__v_merge_options_ = $(intltool__v_merge_options_$(AM_DEFAULT_VERBOSITY))
intltool__v_merge_options_0 = -q
libdir = ${prefix}/lib/x86_64-linux-gnu
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = /var
mandir = ${prefix}/share/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = /run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = /etc
target = x86_64-pc-linux-gnu
target_alias = 
target_cpu = x86_64
target_os = linux-gnu
target_vendor = pc
top_build_prefix = ../../../
top_builddir = ../../..
top_srcdir = ../../..
xfconf_query_found = yes
AUTOMAKE_OPTIONS = 1.8

# The name of the module.
DOC_MODULE = thunarx

# The top-level SGML file.
DOC_MAIN_SGML_FILE = $(DOC_MODULE)-docs.xml

# Extra options to supply to gtkdoc-scan
SCAN_OPTIONS = --deprecated-guards="EXO_DISABLE_DEPRECATED"

# Extra options to pass to gtkdoc-scangobj
SCANGOBJ_OPTIONS = 

# The directory containing the source code. Relative to $(srcdir)
DOC_SOURCE_DIR = ../../../thunarx

# Extra options to supply to gtkdoc-mkdb
MKDB_OPTIONS = --sgml-mode --output-format=xml

# Extra options to supply to gtkdoc-fixref
FIXXREF_OPTIONS = 

# Used for dependencies
HFILE_GLOB = $(top_srcdir)/thunarx/*.h
CFILE_GLOB = $(top_srcdir)/thunarx/*.c

# Header files to ignore when scanning
IGNORE_HFILES = thunarx-alias.h

# Extra files to add when scanning (relative to $srcdir)
EXTRA_HFILES = 

# Images to copy into HTML directory
HTML_IMAGES = \
	$(srcdir)/images/abstraction.png				\
	$(srcdir)/images/bulk-rename.png				\
	$(srcdir)/images/menu-provider.png				\
	$(srcdir)/images/say-hello.png


# Extra SGML files that are included by DOC_MAIN_SGML_FILE
content_files = \
	version.xml


# CFLAGS and LDFLAGS for compiling scan program. Only needed
# if $(DOC_MODULE).types is non-empty.
AM_CPPFLAGS = \
	-I$(top_srcdir) 						\
	-I$(top_builddir) 						\
	$(GTK_CFLAGS)							\
	$(GTK_DOC_EXTRA_CFLAGS)

GTKDOC_LIBS = \
	$(top_builddir)/thunarx/libthunarx-$(THUNARX_VERSION_API).la    \
	$(GTK_LIBS)

#GTKDOC_CC = $(CC) $(INCLUDES) $(GTKDOC_DEPS_CFLAGS) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
GTKDOC_CC = $(LIBTOOL) --tag=CC --mode=compile $(CC) $(INCLUDES) $(GTKDOC_DEPS_CFLAGS) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
#GTKDOC_LD = $(CC) $(GTKDOC_DEPS_LIBS) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS)
GTKDOC_LD = $(LIBTOOL) --tag=CC --mode=link $(CC) $(GTKDOC_DEPS_LIBS) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS)
#GTKDOC_RUN = 
GTKDOC_RUN = $(LIBTOOL) --mode=execute

# We set GPATH here; this gives us semantics for GNU make
# which are more like other make's VPATH, when it comes to
# whether a source that is a target of one rule is then
# searched for in VPATH/GPATH.
#
GPATH = $(srcdir)
TARGET_DIR = $(HTML_DIR)/$(DOC_MODULE)
SETUP_FILES = \
	$(content_files)		\
	$(expand_content_files)		\
	$(DOC_MAIN_SGML_FILE)		\
	$(DOC_MODULE)-sections.txt	\
	$(DOC_MODULE)-overrides.txt


# Other files to distribute
EXTRA_DIST = $(HTML_IMAGES) $(SETUP_FILES) version.xml.in
DOC_STAMPS = setup-build.stamp scan-build.stamp sgml-build.stamp \
	html-build.stamp pdf-build.stamp \
	sgml.stamp html.stamp pdf.stamp

SCANOBJ_FILES = \
	$(DOC_MODULE).args 	 \
	$(DOC_MODULE).hierarchy  \
	$(DOC_MODULE).interfaces \
	$(DOC_MODULE).prerequisites \
	$(DOC_MODULE).signals

REPORT_FILES = \
	$(DOC_MODULE)-undocumented.txt \
	$(DOC_MODULE)-undeclared.txt \
	$(DOC_MODULE)-unused.txt

CLEANFILES = $(SCANOBJ_FILES) $(REPORT_FILES) $(DOC_STAMPS) gtkdoc-check.test
#HTML_BUILD_STAMP = 
HTML_BUILD_STAMP = html-build.stamp
PDF_BUILD_STAMP = 
#PDF_BUILD_STAMP = pdf-build.stamp

#### setup ####
GTK_DOC_V_SETUP = $(GTK_DOC_V_SETUP_$(V))
GTK_DOC_V_SETUP_ = $(GTK_DOC_V_SETUP_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_SETUP_0 = @echo "  DOC   Preparing build";

#### scan ####
GTK_DOC_V_SCAN = $(GTK_DOC_V_SCAN_$(V))
GTK_DOC_V_SCAN_ = $(GTK_DOC_V_SCAN_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_SCAN_0 = @echo "  DOC   Scanning header files";
GTK_DOC_V_INTROSPECT = $(GTK_DOC_V_INTROSPECT_$(V))
GTK_DOC_V_INTROSPECT_ = $(GTK_DOC_V_INTROSPECT_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_INTROSPECT_0 = @echo "  DOC   Introspecting gobjects";

#### xml ####
GTK_DOC_V_XML = $(GTK_DOC_V_XML_$(V))
GTK_DOC_V_XML_ = $(GTK_DOC_V_XML_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_XML_0 = @echo "  DOC   Building XML";

#### html ####
GTK_DOC_V_HTML = $(GTK_DOC_V_HTML_$(V))
GTK_DOC_V_HTML_ = $(GTK_DOC_V_HTML_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_HTML_0 = @echo "  DOC   Building HTML";
GTK_DOC_V_XREF = $(GTK_DOC_V_XREF_$(V))
GTK_DOC_V_XREF_ = $(GTK_DOC_V_XREF_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_XREF_0 = @echo "  DOC   Fixing cross-references";

#### pdf ####
GTK_DOC_V_PDF = $(GTK_DOC_V_PDF_$(V))
GTK_DOC_V_PDF_ = $(GTK_DOC_V_PDF_$(AM_DEFAULT_VERBOSITY))
GTK_DOC_V_PDF_0 = @echo "  DOC   Building PDF";
all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am $(top_srcdir)/gtk-doc.make $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu docs/reference/thunarx/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu docs/reference/thunarx/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles);; \
	esac;
$(top_srcdir)/gtk-doc.make $(am__empty):

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
version.xml: $(top_builddir)/config.status $(srcdir)/version.xml.in
	cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
tags TAGS:

ctags CTAGS:

cscope cscopelist:


distdir: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) distdir-am

distdir-am: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
	$(MAKE) $(AM_MAKEFLAGS) \
	  top_distdir="$(top_distdir)" distdir="$(distdir)" \
	  dist-hook
check-am: all-am
check: check-am
#all-local:
all-am: Makefile all-local
installdirs:
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool clean-local mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic distclean-local

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-data-local

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic \
	maintainer-clean-local

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-local

.MAKE: install-am install-strip

.PHONY: all all-am all-local check check-am clean clean-generic \
	clean-libtool clean-local cscopelist-am ctags-am dist-hook \
	distclean distclean-generic distclean-libtool distclean-local \
	distdir dvi dvi-am html html-am info info-am install \
	install-am install-data install-data-am install-data-local \
	install-dvi install-dvi-am install-exec install-exec-am \
	install-html install-html-am install-info install-info-am \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	maintainer-clean-local mostlyclean mostlyclean-generic \
	mostlyclean-libtool pdf pdf-am ps ps-am tags-am uninstall \
	uninstall-am uninstall-local

.PRECIOUS: Makefile


gtkdoc-check.test: Makefile
	$(AM_V_GEN)echo "#!/bin/sh -e" > $@; \
		echo "$(GTKDOC_CHECK_PATH) || exit 1" >> $@; \
		chmod +x $@

all-gtk-doc: $(HTML_BUILD_STAMP) $(PDF_BUILD_STAMP)
.PHONY: all-gtk-doc

all-local: all-gtk-doc

docs: $(HTML_BUILD_STAMP) $(PDF_BUILD_STAMP)

$(REPORT_FILES): sgml-build.stamp

setup-build.stamp:
	-$(GTK_DOC_V_SETUP)if test "$(abs_srcdir)" != "$(abs_builddir)" ; then \
	  files=`echo $(SETUP_FILES) $(DOC_MODULE).types`; \
	  if test "x$$files" != "x" ; then \
	    for file in $$files ; do \
	      destdir=`dirname $(abs_builddir)/$$file`; \
	      test -d "$$destdir" || mkdir -p "$$destdir"; \
	      test -f $(abs_srcdir)/$$file && \
	        cp -pf $(abs_srcdir)/$$file $(abs_builddir)/$$file || true; \
	    done; \
	  fi; \
	fi
	$(AM_V_at)touch setup-build.stamp

scan-build.stamp: setup-build.stamp $(HFILE_GLOB) $(CFILE_GLOB)
	$(GTK_DOC_V_SCAN)_source_dir='' ; \
	for i in $(DOC_SOURCE_DIR) ; do \
	  _source_dir="$${_source_dir} --source-dir=$$i" ; \
	done ; \
	gtkdoc-scan --module=$(DOC_MODULE) --ignore-headers="$(IGNORE_HFILES)" $${_source_dir} $(SCAN_OPTIONS) $(EXTRA_HFILES)
	$(GTK_DOC_V_INTROSPECT)if grep -l '^..*$$' $(DOC_MODULE).types > /dev/null 2>&1 ; then \
	  scanobj_options=""; \
	  gtkdoc-scangobj 2>&1 --help | grep  >/dev/null "\-\-verbose"; \
	  if test "$$?" = "0"; then \
	    if test "x$(V)" = "x1"; then \
	      scanobj_options="--verbose"; \
	    fi; \
	  fi; \
	  CC="$(GTKDOC_CC)" LD="$(GTKDOC_LD)" RUN="$(GTKDOC_RUN)" CFLAGS="$(GTKDOC_CFLAGS) $(CFLAGS)" LDFLAGS="$(GTKDOC_LIBS) $(LDFLAGS)" \
	  gtkdoc-scangobj $(SCANGOBJ_OPTIONS) $$scanobj_options --module=$(DOC_MODULE); \
	else \
	  for i in $(SCANOBJ_FILES) ; do \
	    test -f $$i || touch $$i ; \
	  done \
	fi
	$(AM_V_at)touch scan-build.stamp

$(DOC_MODULE)-decl.txt $(SCANOBJ_FILES) $(DOC_MODULE)-sections.txt $(DOC_MODULE)-overrides.txt: scan-build.stamp
	@true

sgml-build.stamp: setup-build.stamp $(DOC_MODULE)-decl.txt $(SCANOBJ_FILES) $(HFILE_GLOB) $(CFILE_GLOB) $(DOC_MODULE)-sections.txt $(DOC_MODULE)-overrides.txt $(expand_content_files) xml/gtkdocentities.ent
	$(GTK_DOC_V_XML)_source_dir='' ; \
	for i in $(DOC_SOURCE_DIR) ; do \
	  _source_dir="$${_source_dir} --source-dir=$$i" ; \
	done ; \
	gtkdoc-mkdb --module=$(DOC_MODULE) --output-format=xml --expand-content-files="$(expand_content_files)" --main-sgml-file=$(DOC_MAIN_SGML_FILE) $${_source_dir} $(MKDB_OPTIONS)
	$(AM_V_at)touch sgml-build.stamp

sgml.stamp: sgml-build.stamp
	@true

$(DOC_MAIN_SGML_FILE): sgml-build.stamp
	@true

xml/gtkdocentities.ent: Makefile
	$(GTK_DOC_V_XML)$(MKDIR_P) $(@D) && ( \
		echo "<!ENTITY package \"$(PACKAGE)\">"; \
		echo "<!ENTITY package_bugreport \"$(PACKAGE_BUGREPORT)\">"; \
		echo "<!ENTITY package_name \"$(PACKAGE_NAME)\">"; \
		echo "<!ENTITY package_string \"$(PACKAGE_STRING)\">"; \
		echo "<!ENTITY package_tarname \"$(PACKAGE_TARNAME)\">"; \
		echo "<!ENTITY package_url \"$(PACKAGE_URL)\">"; \
		echo "<!ENTITY package_version \"$(PACKAGE_VERSION)\">"; \
	) > $@

html-build.stamp: sgml.stamp $(DOC_MAIN_SGML_FILE) $(content_files) $(expand_content_files)
	$(GTK_DOC_V_HTML)rm -rf html && mkdir html && \
	mkhtml_options=""; \
	gtkdoc-mkhtml 2>&1 --help | grep  >/dev/null "\-\-verbose"; \
	if test "$$?" = "0"; then \
	  if test "x$(V)" = "x1"; then \
	    mkhtml_options="$$mkhtml_options --verbose"; \
	  fi; \
	fi; \
	gtkdoc-mkhtml 2>&1 --help | grep  >/dev/null "\-\-path"; \
	if test "$$?" = "0"; then \
	  mkhtml_options="$$mkhtml_options --path=\"$(abs_srcdir)\""; \
	fi; \
	cd html && gtkdoc-mkhtml $$mkhtml_options $(MKHTML_OPTIONS) $(DOC_MODULE) ../$(DOC_MAIN_SGML_FILE)
	-@test "x$(HTML_IMAGES)" = "x" || \
	for file in $(HTML_IMAGES) ; do \
	  test -f $(abs_srcdir)/$$file && cp $(abs_srcdir)/$$file $(abs_builddir)/html; \
	  test -f $(abs_builddir)/$$file && cp $(abs_builddir)/$$file $(abs_builddir)/html; \
	  test -f $$file && cp $$file $(abs_builddir)/html; \
	done;
	$(GTK_DOC_V_XREF)gtkdoc-fixxref --module=$(DOC_MODULE) --module-dir=html --html-dir=$(HTML_DIR) $(FIXXREF_OPTIONS)
	$(AM_V_at)touch html-build.stamp

pdf-build.stamp: sgml.stamp $(DOC_MAIN_SGML_FILE) $(content_files) $(expand_content_files)
	$(GTK_DOC_V_PDF)rm -f $(DOC_MODULE).pdf && \
	mkpdf_options=""; \
	gtkdoc-mkpdf 2>&1 --help | grep  >/dev/null "\-\-verbose"; \
	if test "$$?" = "0"; then \
	  if test "x$(V)" = "x1"; then \
	    mkpdf_options="$$mkpdf_options --verbose"; \
	  fi; \
	fi; \
	if test "x$(HTML_IMAGES)" != "x"; then \
	  for img in $(HTML_IMAGES); do \
	    part=`dirname $$img`; \
	    echo $$mkpdf_options | grep >/dev/null "\-\-imgdir=$$part "; \
	    if test $$? != 0; then \
	      mkpdf_options="$$mkpdf_options --imgdir=$$part"; \
	    fi; \
	  done; \
	fi; \
	gtkdoc-mkpdf --path="$(abs_srcdir)" $$mkpdf_options $(DOC_MODULE) $(DOC_MAIN_SGML_FILE) $(MKPDF_OPTIONS)
	$(AM_V_at)touch pdf-build.stamp

##############

clean-local:
	@rm -f *~ *.bak
	@rm -rf .libs
	@if echo $(SCAN_OPTIONS) | grep -q "\-\-rebuild-types" ; then \
	  rm -f $(DOC_MODULE).types; \
	fi
	@if echo $(SCAN_OPTIONS) | grep -q "\-\-rebuild-sections" ; then \
	  rm -f $(DOC_MODULE)-sections.txt; \
	fi

distclean-local:
	@rm -rf xml html $(REPORT_FILES) $(DOC_MODULE).pdf \
	    $(DOC_MODULE)-decl-list.txt $(DOC_MODULE)-decl.txt
	@if test "$(abs_srcdir)" != "$(abs_builddir)" ; then \
	    rm -f $(SETUP_FILES) $(DOC_MODULE).types; \
	fi

maintainer-clean-local:
	@rm -rf xml html

install-data-local:
	@installfiles=`echo $(builddir)/html/*`; \
	if test "$$installfiles" = '$(builddir)/html/*'; \
	then echo 1>&2 'Nothing to install' ; \
	else \
	  if test -n "$(DOC_MODULE_VERSION)"; then \
	    installdir="$(DESTDIR)$(TARGET_DIR)-$(DOC_MODULE_VERSION)"; \
	  else \
	    installdir="$(DESTDIR)$(TARGET_DIR)"; \
	  fi; \
	  $(mkinstalldirs) $${installdir} ; \
	  for i in $$installfiles; do \
	    echo ' $(INSTALL_DATA) '$$i ; \
	    $(INSTALL_DATA) $$i $${installdir}; \
	  done; \
	  if test -n "$(DOC_MODULE_VERSION)"; then \
	    mv -f $${installdir}/$(DOC_MODULE).devhelp2 \
	      $${installdir}/$(DOC_MODULE)-$(DOC_MODULE_VERSION).devhelp2; \
	  fi; \
	  $(GTKDOC_REBASE) --relative --dest-dir=$(DESTDIR) --html-dir=$${installdir}; \
	fi

uninstall-local:
	@if test -n "$(DOC_MODULE_VERSION)"; then \
	  installdir="$(DESTDIR)$(TARGET_DIR)-$(DOC_MODULE_VERSION)"; \
	else \
	  installdir="$(DESTDIR)$(TARGET_DIR)"; \
	fi; \
	rm -rf $${installdir}

#
# Require gtk-doc when making dist
#
dist-check-gtkdoc: docs
#dist-check-gtkdoc:
#	@echo "*** gtk-doc is needed to run 'make dist'.         ***"
#	@echo "*** gtk-doc was not found when 'configure' ran.   ***"
#	@echo "*** please install gtk-doc and rerun 'configure'. ***"
#	@false

dist-hook: dist-check-gtkdoc all-gtk-doc dist-hook-local
	@mkdir $(distdir)/html
	@cp ./html/* $(distdir)/html
	@-cp ./$(DOC_MODULE).pdf $(distdir)/
	@-cp ./$(DOC_MODULE).types $(distdir)/
	@-cp ./$(DOC_MODULE)-sections.txt $(distdir)/
	@cd $(distdir) && rm -f $(DISTCLEANFILES)
	@$(GTKDOC_REBASE) --online --relative --html-dir=$(distdir)/html

.PHONY : dist-hook-local docs

# required for gtk-doc
dist-hook: all

# vi:set ts=8 sw=8 noet ai nocindent syntax=automake:

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
