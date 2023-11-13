math: math_utils.o math.o
	g++ math_utils.o math.o -o math

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

math.o: math.cpp
	g++ -c math.cpp

clean:
	rm *.o math