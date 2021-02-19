all:
	#https://stackoverflow.com/questions/34373356/what-does-the-sdl-config-mean-when-compiling-sdl-c-program
#sudo dpkg -i ~/Downloads/libsdl1.2debian_1.2.15+dfsg2-5_amd64.deb
	gcc -c main.c -lGL `sdl-config --cflags --libs` -o main
