#include <SDL/SDL.h>
#include <gl/GL.h>

SDL_Surface *screen = NULL;


void demarre_opengl()
{
  creer_fenetre_opengl();
  init_opengl();

}



int main(int argc, char *argv[])
{
  demarre_opengl();
  tourne_cube();
  stop_opengl();

}
