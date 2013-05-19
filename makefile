CXX	= g++
CFLAGS 	= -Wall -Wextra
Matrix	= matrix
Vector	= vector
QR	= qr




all: main
	main

clean:
	rm -f *.o main *.txt *.png *.svg

main: main.o
	$(CXX) $(CFLAGS) $^ -o $@ 

main.o: main.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(QR).o: $(QR).ipp
	$(CXX) $(CFLAGS) -c $< -o $@
