all:
	#https://stackoverflow.com/questions/34373356/what-does-the-sdl-config-mean-when-compiling-sdl-c-program
	gcc -c main.c -lGL `sdl-config --cflags --libs` -o main
