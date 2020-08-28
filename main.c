#include <SDL/SDL.h>
#include <gl/GL.h>

SDL_Surface *screen = NULL;


void demarre_opengl()
{
  creer_fenetre_opengl();
  init_opengl();

}





void creer_fenetre_opengl()

  SDL_Init(SDLinit(SDL_INIT_VIDEO);
	   SDL_GL_SetAttribute(
			       SDL_GL_RED_SIZE, 5);

	   SDL_GL_SetAttribute(
			       SDL_GL_GREEN_SIZE, 5);

	   SDL_GL_SetAttribute(
			       SDL_GL_BLUE_SIZE, 5);

	   SDL_GL_SetAttribute(
			       SDL_GL_DEPTH_SIZE, 16);


	   SDL_GL_SetAttribute(
			       SDL_GL_DOUBLEBUFFER, 1);
	   screen = SDL_SetVideoMode(
				     800, 600, 16, SDL_OPENGL
				     | SDL_DOUBLEBUF
				     |SDL_HWSURFACE);
	   }
  
  void init_opengl()
{
  /* utilise tout l'ecran */
  glViewport (0, 0, 800, 600);


  /* les couleurs sont*/
  glShadeModel (GL_SMOOTH);
  /* couleur (noir) lorsque l'on
     efface l'ecran */
  glclearColor (0.0, 0.0, 0.0,
		1.0);
  /*profondeur des pixels lorsque
    n efface l'ecran */
  glcearDepth (1.0);

  //------------------

  /* comment choisir si un point
     est devant un autre ou pas */ 
  glDepthFunc (GL_LEQUAL); 
  /* n'affiche pas les points
     caches */
  glEnable (GL_DEPTH_TEST);



  /* initialisation de la base
     (repere en 3 dimension) */
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity ();
  glMatrixMode (GL_MODELVIEW);
  giLoadIdentity ();




  void stop_opengl()
  {
    SDL_Quit();
  }


  //-- fin main.c --

  int main(int argc, char *argv[])
  {
    demarre_opengl();
    tourne_cube();
    stop_opengl();

  }

