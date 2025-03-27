SRCS	= $(shell /bin/ls *.cpp)
PROGS	= $(SRCS:.cpp=)

all:	$(PROGS)

.cpp:
	g++ -o $@ $<

clean:
	/bin/rm -f $(PROGS) *~
