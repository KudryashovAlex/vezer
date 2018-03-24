TEMPLATE = subdirs
SUBDIRS = app \
tmod \
tmodm
app.depends = tmod
app.depends = tmodm
