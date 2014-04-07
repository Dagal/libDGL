# Définition des cibles particulières
.PHONY: clean, mrprorer, install, uninstall

# Désactivation des règles implicites
.SUFFIXES:

# Définition des variables
EXEC = DGL

LIBS = -lGL -lGLU -lSDL -lpthread
OBJS = Object.o Window.o World.o Scene.o Camera.o Box.o Color.o Light.o \
       Motion.o Position.o Quad.o Robot1.o Rotation.o Scale.o Vector3D.o

ARFLAGS = -q
CFLAGS = -W -Wall -shared -fPIC $(LIBS)
CXXFLAGS = $(CFLAGS)
LDFLAGS = 

AR = ar
CC = gcc $(CFLAGS) 
CXX = g++ $(CXXFLAGS) 
RM = -rm -rf
TEX = latex

installdir = ~
prefix = .
exec_prefix = $(prefix)
bindir = $(exec_prefix)/bin
objdir = $(exec_prefix)/obj
libdir = $(exec_prefix)/lib
datadir = $(exec_prefix)/lib
statedir = $(exec_prefix)/lib
includedir = $(prefix)/include
mandir = $(prefix)/man
manxdir = $(prefix)/manx
infodir = $(prefix)/info
srcdir = $(prefix)/src


# all
all: $(libdir)/lib$(EXEC).so

$(libdir)/lib$(EXEC).so: $(objdir)/$(EXEC).o
	echo "*** MAKE : $@"
	mkdir -p $(libdir)
	$(CXX) $< -o $@

$(objdir)/$(EXEC).o: $(objdir)/main.o $(addprefix $(objdir)/,$(OBJS))
	echo "*** MAKE : $@"
	$(CXX) $^ -o $@

$(objdir)/%.o: $(srcdir)/%.cpp
	echo "*** MAKE : $^ (Compilation de $< en $@)"
	mkdir -p $(objdir)
	$(CXX) -c $< -o $@

# clean
clean:
	echo "Clean"
	$(RM) -r $(objdir)
	$(RM) *~

# mrprorer
mrproper: clean
	$(RM) -r (libdir)

# install
install: uninstall lib$(EXEC).so
	cp lib$(EXEC).so $(libdir)/lib$(EXEC).so
	mkdir -p $(includedir)/$(EXEC)
	cp *.h $(includedir)/$(EXEC)

# uninstall
uninstall:
	$(RM) $(libdir)/lib$(EXEC).so
	$(RM) $(includedir)/$(EXEC) -r

