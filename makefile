studentRecord.exe: linkedlist.o addLast.o removeLast.o display.o addFirst.o removeFirst.o sorted.o middleNode.o
	gcc linkedlist.o addLast.o removeLast.o display.o addFirst.o removeFirst.o sorted.o middleNode.o -o studentRecord.exe
linkedlist.o: linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o
addLast.o: addLast.c
	gcc -c addLast.c -o addLast.o
removeLast.o: removeLast.c
	gcc -c removeLast.c -o removeLast.o
display.o: display.c
	gcc -c display.c -o display.o
addFirst.o: addFirst.c
	gcc -c addFirst.c -o addFirst.o
removeFirst.o: removeFirst.c
	gcc -c removeFirst.c -o removeFirst.o
sorted.o: sorted.c
	gcc -c sorted.c -o sorted.o
middleNode.o: middleNode.c
	gcc -c middleNode.c -o middleNode.o
