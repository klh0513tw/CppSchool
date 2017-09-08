CC = g++
CFLAGS = -I.
OBJS = test.o person.o student.o teacher.o course.o util.o

school: $(OBJS)
	$(CC) $(CFLAGS) -o school $(OBJS)
	./school

%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c $< -o $@
	
clear:
	rm -rf *.o 
