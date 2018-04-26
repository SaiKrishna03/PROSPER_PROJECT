all: prosper

prosper: MAIN.o insertion_sort.o quick_sort.o quicksort_insertion.o mergesort_insertion.o varintlin.cpp hanoi.o lshape.cpp steps.o linear.o circus.o plot.o
	g++ MAIN.cpp insertion_sort.cpp quick_sort.cpp quicksort_insertion.cpp mergesort_insertion.cpp varintlin.cpp hanoi.cpp lshape.cpp steps.cpp linear.cpp circus.cpp plot.cpp -o prosper

MAIN.o: MAIN.cpp
	g++ -c MAIN.cpp

insertion_sort.o: insertion_sort.cpp
		g++ -c insertion_sort.cpp

quick_sort.o: quick_sort.cpp
		g++ -c quick_sort.cpp

quicksort_insertion.o: quicksort_insertion.cpp
		g++ -c quicksort_insertion.cpp

mergesort_insertion.o: mergesort_insertion.cpp
		g++ -c mergesort_insertion.cpp

variantlin.o: variantlin.cpp
		g++ -c variantlin.cpp

hanoi.o: hanoi.cpp
		g++ -c hanoi.cpp

lshape.o: lshape.cpp
		g++ -c lshape.cpp

steps.o: steps.cpp
		g++ -c steps.cpp

circus.o: circus.cpp
		g++ -c circus.cpp

linear.o: linear.cpp
		g++ -c linear.cpp
plot.o: plot.cpp
		g++ -c plot.cpp

clean:
	rm -rf *o prosper
