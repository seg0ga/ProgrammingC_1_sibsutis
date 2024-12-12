main:
	gcc app/main.c background/background.c pipes/read_pipe.c pipes/write_pipe.c -Ibackground -Ipipes -o  main:
background.o:
	gcc -c -Ipipes -Ibackground background/background.c -o background.o
app.o:
	gcc -c -Ipipes -Ibackground app/main.c -o app.o
pipes.o:
	gcc -c -Ipipes -Ibackground pipes/read_pipe.c pipes/write_pipe.c -o pipes.o
clear:
	rm -rf *.o main
