OBJS	= main.o Medicine.o
SOURCE	= main.c Medicine.c
HEADER	= Medicine.h
OUT	= final.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

Medicine.o: Medicine.c
	$(CC) $(FLAGS) Medicine.c 


clean:
	rm -f $(OBJS) $(OUT)
