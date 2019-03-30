huffencode: huffencode.o
	g++ huffencode.o -o huffencode

huffencode.o: huffencode.cpp
	g++ -c huffencode.cpp

clean:
	rm *.o huffencode
