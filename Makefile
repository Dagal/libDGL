# Définition des cibles particulières
.PHONY: clean, mrprorer, install, uninstall

# Désactivation des règles implicites
.SUFFIXES:

# Définition des variables
EXEC = DGL

LIBS = -lGL -lGLU -lSDL -lpthread
objlist = Object.o Window.o World.o Scene.o Camera.o Box.o Color.o Light.o Motion.o Position.o Quad.o Robot1.o Rotation.o Scale.o Vector3D.o

ARFLAGS = -q
CFLAGS = -W -Wall -shared -fPIC $(LIBS)
CXXFLAGS = $(CFLAGS)
LDFLAGS = 

AR = ar
CC = gcc $(CFLAGS) 
CXX = g++ $(CXXFLAGS) 
RM = rm -rf
TEX = latex

prefix = ~
exec_prefix = $(prefix)
bindir = $(exec_prefix)/bin
libdir = $(exec_prefix)/lib
datadir = $(exec_prefix)/lib
statedir = $(exec_prefix)/lib
includedir = $(prefix)/include
mandir = $(prefix)/man
manxdir = $(prefix)/manx
infodir = $(prefix)/info
srcdir = $(prefix)/src


# all
all: $(EXEC).o
	echo "*** MAKE : $@"
	echo "Création de lib$(EXEC).so"
	$(CXX) $(EXEC).o -o lib$(EXEC).so

$(EXEC).o: main.o $(objlist)
	echo "*** MAKE : $@"
	$(CXX) $^ -o $(EXEC).o

main.o: main.cpp
	echo "*** MAKE : $^ (Compilation de $< en $@)"
	$(CXX) -c $< -o $@

%.o: %.cpp
	echo "*** MAKE : $^ (Compilation de $< en $@)"
	$(CXX) -c $< -o $@

# clean
clean:
	echo "Clean"
	$(RM) *.o
	$(RM) *~

# mrprorer
mrproper: clean
	$(RM) lib$(EXEC).a

# install
install: uninstall lib$(EXEC).so
	cp lib$(EXEC).so $(libdir)/lib$(EXEC).so
	mkdir -p $(includedir)/$(EXEC)
	cp *.h $(includedir)/$(EXEC)

# uninstall
uninstall:
	$(RM) $(libdir)/lib$(EXEC).so
	$(RM) $(includedir)/$(EXEC) -r

