all:
	#reverse inverse quote : https://stackoverflow.com/questions/34373356/what-does-the-sdl-config-mean-when-compiling-sdl-c-program
	#libsdl1 https://openclassrooms.com/forum/sujet/sdl2-sur-ubuntu-20-04
	#sdl dpkg -i https://ubuntu.pkgs.org/20.10/ubuntu-universe-amd64/libsdl1.2debian_1.2.15+dfsg2-5_amd64.deb.html
	#sudo dpkg -i ~/Downloads/libsdl1.2debian_1.2.15+dfsg2-5_amd64.deb
	#
	#https://stackoverflow.com/questions/10488775/sdl-h-no-such-file-or-directory-found-when-compiling
	#SDL2
	#CFLAGS = -O2 -Wall -pedantic -std=gnu++11 `sdl-config --cflags --libs` -lSDL_mixer

	#-I pr sdl
	gcc -c main.c -lGL `sdl-config --cflags --libs` -o main -I /usr/lib/x86_64-linux-gnu

clean:
	rm -f *~
	rm -f *#*
