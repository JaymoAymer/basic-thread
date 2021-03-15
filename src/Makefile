COMPILER = gcc

threads: main.o pthreadCreateErrorHandler.o pthreadJoinErrorHandler.o routine.o
	${COMPILER} -pthread main.o pthreadCreateErrorHandler.o pthreadJoinErrorHandler.o routine.o -o threads

main.o: main.c
	${COMPILER} -c main.c

pthreadCreateErrorHandler.o: pthreadCreateErrorHandler.c
	${COMPILER} -c pthreadCreateErrorHandler.c

pthreadJoinErrorHandler.o: pthreadJoinErrorHandler.c
	${COMPILER} -c pthreadJoinErrorHandler.c

routine.o: routine.c
	${COMPILER} -c routine.c

clean:
	rm *.o threads
