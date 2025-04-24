SRCS	= $(shell /bin/ls *.cpp)
OBJS	= $(SRCS:.cpp=.o)
PROGS	= temperature


$(PROGS): $(OBJS)
		g++ -o $@ $(OBJS)

$(SRCS):	temperature.h 



clean:
	/bin/rm -f $(PROGS) $(OBJS) *~
