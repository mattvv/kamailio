# $Id$
#
# WARNING: do not run this directly, it should be run by the master Makefile

include ../../Makefile.defs
auto_gen=
NAME=cpl-c.so

DEFS +=-I/usr/include/libxml2 -I$(LOCALBASE)/include/libxml2 \
		-I$(LOCALBASE)/include  # iconv.h

LIBS= -L$(LOCALBASE)/lib -lxml2

DEFS+=-DOPENSER_MOD_INTERFACE

SERLIBPATH=../../lib
SER_LIBS+=$(SERLIBPATH)/kmi/kmi
SER_LIBS+=$(SERLIBPATH)/srdb1/srdb1
SER_LIBS+=$(SERLIBPATH)/kcore/kcore
include ../../Makefile.modules
