#include<allegro5\allegro_primitives.h>

using namespace std;

int main()
{
	al_init();

	al_init_primitives_addon();



	ALLEGRO_DISPLAY*gamewindow = NULL;
	//ALLEGRO_DISPLAY*display = al_create_display(500, 500);

	gamewindow = al_create_display(800, 800);
	al_clear_to_color(al_map_rgb(128,0,0));
	al_draw_filled_rectangle(500, 500, 250, 400, al_map_rgb(0, 128, 28));

	al_draw_circle(250, 500, 50, al_map_rgb(50, 50, 50), 5);

	al_draw_circle(500, 500, 50, al_map_rgb(50, 50, 50), 5);

	al_flip_display();
	
		al_rest(100);

		al_destroy_display(gamewindow);









}