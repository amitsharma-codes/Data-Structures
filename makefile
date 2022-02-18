studentRecord.exe: linkedlist.o addLast.o removeLast.o display.o
	gcc linkedlist.o addLast.o removeLast.o display.o -o studentRecord.exe
linkedlist.o: linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o
addLast.o: addLast.c
	gcc -c addLast.c -o addLast.o
removeLast.o: removeLast.c
	gcc -c removeLast.c -o removeLast.o
display.o: display.c
	gcc -c display.c -o display.o
