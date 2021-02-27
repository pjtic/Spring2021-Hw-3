all:	main.o
	g++ main.o -o HeartRate
	
main.o: main.cpp HeartRate.h Heart_Rate.cpp
	g++ -c main.cpp

clean:
	rm *.o
	rm HeartRate
