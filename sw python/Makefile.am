## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

provadocdir = ${prefix}/doc/prova
provadoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS


EXTRA_DIST = $(provadoc_DATA)


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(provadocdir)
