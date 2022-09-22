start: initFunc out rm

initFunc: firstFunc.c secondFunc.c main2.c
	g++ -c firstFunc.c -o firstFunc.o
	g++ -c secondFunc.c -o secondFunc.o
	g++ -c main2.c -o main2.o
	g++ firstFunc.o secondFunc.o main2.o -o start

out: initFunc
	./start

rm: out initFunc
	rm start
	rm firstFunc.o
	rm secondFunc.o
	rm main2.o
