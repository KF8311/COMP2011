SRCS	= $(shell /bin/ls *.cpp)
PROGS	= $(SRCS:.cpp=)

all:	$(PROGS)

.cpp:
	g++ -ansi -Wall -o $@ $<

clean:
	/bin/rm -f $(PROGS) *~
