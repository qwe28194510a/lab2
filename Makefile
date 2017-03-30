lab2_output: cls.o lab2.o
	g++ -o lab2_output cls.o lab2.o

cls.o: cls.cpp cls.h
	g++ -c cls.cpp

lab2.o: lab2.cpp cls.h
	g++ -c lab2.cpp

clean:
	rm lab2_output *.o
