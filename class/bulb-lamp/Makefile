# Definition of variables
SRCS	= bulb.cpp lamp.cpp lamp-test.cpp
OBJS	= bulb.o lamp.o lamp-test.o

# Rules: 
# target: dependencies
#   command used to create the target
lamp-test: $(OBJS) lamp.h
	g++ -o lamp-test $(OBJS)

lamp.h: bulb.h

bulb.o: bulb.cpp bulb.h
	g++ -c bulb.cpp

lamp.o: lamp.cpp lamp.h bulb.h
	g++ -c lamp.cpp

lamp-test.o: lamp-test.cpp lamp.h bulb.h
	g++ -c lamp-test.cpp

# Utility 'makedepend' finds the .h dependencies automatically
depend:;	makedepend $(SRCS)
# DO NOT DELETE

bulb.o: bulb.h
lamp.o: lamp.h bulb.h
lamp-test.o: lamp.h bulb.h
