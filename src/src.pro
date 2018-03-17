TEMPLATE = subdirs
SUBDIRS = app \
tmod

app.depends = tmod
