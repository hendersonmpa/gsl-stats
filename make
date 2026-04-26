OBJECTS = file1.o file2.o
PROGNAME = run_me
CFLAGS =  -g -Wall -std=gnu99
LINKFLAGS = -lm
#LINKFLAGS = -L/usr/local/lib -lgsl -lgslcblas -lsqlite
COMPILE = gcc $(CFLAGS) -c $< -o $@

executable: $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) $(LINKFLAGS) -o$(PROGNAME)


file1.o: file1.c #my_headers.h
	$(COMPILE)

file2.o: file2.c #my_headers.h
	$(COMPILE)

run: executable
	./$(PROGNAME) $(PARGS)
