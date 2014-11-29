## Process this file with automake to produce Makefile.in
## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = prova.ui


## The main script
bin_SCRIPTS = prova.py

## Directory where .class files will be installed
provadir = $(pythondir)/prova


prova_PYTHON = \
	prova.py


EXTRA_DIST = $(ui_DATA)


# Remove ui directory on uninstall
uninstall-local:

	-rm -r $(uidir)

	-rm -r $(pkgdatadir)
