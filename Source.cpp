#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5/allegro_image.h>

using namespace std;

int main() {
	//baka
	ALLEGRO_DISPLAY *display = NULL;
	al_init();
	al_init_image_addon();
	display = al_create_display(700, 500);
	

	ALLEGRO_BITMAP *a = al_load_bitmap("funny_test.jpg");
	ALLEGRO_BITMAP *b = al_load_bitmap("Cool-Quotes.jpg");
	ALLEGRO_BITMAP *c = al_load_bitmap("Color.jpg");
	ALLEGRO_BITMAP *d = al_load_bitmap("map.png");
	ALLEGRO_BITMAP *e = al_load_bitmap("personality620.jpg");
	ALLEGRO_BITMAP *f = al_load_bitmap("important.png");
	ALLEGRO_BITMAP *g = al_load_bitmap("food.jpg");
	ALLEGRO_BITMAP *h = al_load_bitmap("04-zs-ice-cream_66-ab.jpg");
	ALLEGRO_BITMAP *i = al_load_bitmap("songs.jpg");
	ALLEGRO_BITMAP *j = al_load_bitmap("animal_spirits.jpg");
	ALLEGRO_BITMAP *k = al_load_bitmap("social_media_blog.png");
	ALLEGRO_BITMAP *l = al_load_bitmap("apple.jpg");
	ALLEGRO_BITMAP *m = al_load_bitmap("life.jpg");
	ALLEGRO_BITMAP *n = al_load_bitmap("220px-Matt_Damon_TIFF_2015.jpg");
	ALLEGRO_BITMAP *o = al_load_bitmap("SADNESS_Fullbody_Render.png");



	int Apple = 0;
	int Life = 0;
	int Matt = 0;
	int Sadess = 0;


	cout << "Hello, I am the one that wents to test you. :)" << endl;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(a, 0, 0, 0);
	al_flip_display();

	system("pause");

	// Q.1
	char input1;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(b, 0, 0, 0);
	al_flip_display();
	cout << "What random person you are?" << endl;
	cout << "What is your favorite quote?" << endl;
	cout << "a-Give yourself to the rhythm., b-No hacks required., c-Justice delivered., d-Not on my watch." << endl;
	cin >> input1;
	if (input1 == 'd')
		Apple++;
	else if (input1 == 'b')
		Life++;
	else if (input1 == 'a')
		Matt++;
	else if (input1 == 'c')
		Sadess++;

	//Q.2
	char input2;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(c, 0, 0, 0);
	al_flip_display();
	cout << "What is your favorite color?" << endl;
	cout << "a-green, b-black, c-blue, d-pink" << endl;
	cin >> input2;
	if (input2 == 'c')
		Apple++;
	else if (input2 == 'd')
		Life++;
	else if (input2 == 'a')
		Matt++;
	else if (input2 == 'b')
		Sadess++;

	//Q.3
	char input3;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(d, 0, 0, 0);
	al_flip_display();
	cout << "Where would you like to live?" << endl;
	cout << "a-Egypt, b-South Korea, c-Brazil, d-Where I am at home" << endl;
	cin >> input3;
	if (input3 == 'a')
		Apple++;
	else if (input3 == 'b')
		Life++;
	else if (input3 == 'c')
		Matt++;
	else if (input3 == 'd')
		Sadess++;

	//Q.4
	char input4;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(e, 0, 0, 0);
	al_flip_display();
	cout << "What would you describe yourself?" << endl;
	cout << "a-independent, b-compassionate, c-knowledgeable, d-cheerful" << endl;
	cin >> input4;
	if (input4 == 'c')
		Apple++;
	else if (input4 == 'd')
		Life++;
	else if (input4 == 'b')
		Matt++;
	else if (input4 == 'a')
		Sadess++;

	//Q.5
	char input5;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(f, 0, 0, 0);
	al_flip_display();
	cout << "What's most important to you?" << endl;
	cout << "a-video games, b-children, c-citizens/people, d-music" << endl;
	cin >> input5;
	if (input5 == 'b')
		Apple++;
	else if (input5 == 'a')
		Life++;
	else if (input5 == 'd')
		Matt++;
	else if (input5 == 'c')
		Sadess++;

	//Q.6
	char input6;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(g, 0, 0, 0);
	al_flip_display();
	cout << "What is your favorite food?" << endl;
	cout << "a-hamburger, b-doritos and mountaindew, c-oatmeal, d-pizza" << endl;
	cin >> input6;
	if (input6 == 'c')
		Apple++;
	else if (input6 == 'b')
		Life++;
	else if (input6 == 'd')
		Matt++;
	else if (input6 == 'a')
		Sadess++;

	//Q.7
	char input7;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(h, 0, 0, 0);
	al_flip_display();
	cout << "What kind of ice cream do you like?" << endl;
	cout << "a-chocolate, b-mint, c-strawberry, d-vanilla" << endl;
	cin >> input7;
	if (input7 == 'd')
		Apple++;
	else if (input7 == 'c')
		Life++;
	else if (input7 == 'b')
		Matt++;
	else if (input7 == 'a')
		Sadess++;

	//Q.8
	char input8;
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_bitmap(i, 0, 0, 0);
	al_flip_display();
	cout << "What music do you like to listen?" << endl;
	cout << "a-classical, b-pop, c-rap, d-country" << endl;
	cin >> input8;
	if (input8 == 'a')
		Apple++;
	else if (input8 == 'b')
		Life++;
	else if (input8 == 'c')
		Matt++;
	else if (input8 == 'd')
		Sadess++;

	//Q.9
	char input9;
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_bitmap(j, 0, 0, 0);
	al_flip_display();
	cout << "What's your spirit animal?" << endl;
	cout << "a-rabbit, b-dog, c-bird, d-frog" << endl;
	cin >> input9;
	if (input9 == 'c')
		Apple++;
	else if (input9 == 'a')
		Life++;
	else if (input9 == 'd')
		Matt++;
	else if (input9 == 'b')
		Sadess++;

	//Q.10
	char input10;
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_bitmap(k, 0, 0, 0);
	al_flip_display();
	cout << "What's your favorite social media?" << endl;
	cout << "a-snapchat, b-twitter, c-instagram, d-facebook" << endl;
	cin >> input10;
	if (input10 == 'b')
		Apple++;
	else if (input10 == 'd')
		Life++;
	else if (input10 == 'c')
		Matt++;
	else if (input10 == 'a')
		Sadess++;

	system("pause");

	if (Apple > Life && Apple > Matt && Apple > Sadess) {
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_bitmap(l, 0, 0, 0);
		al_flip_display();
		cout << "You are Apple" << endl;
		system("pause");
	}
	else if (Life > Apple && Life > Matt && Life > Sadess) {
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_bitmap(m, 0, 0, 0);
		al_flip_display();
		cout << "You are Life" << endl;
		system("pause");
	}
	else if (Matt > Apple && Matt > Life && Matt > Sadess) {
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_bitmap(n, 0, 0, 0);
		al_flip_display();
		cout << "You are Matt." << endl;
		system("pause");
	}
	else {
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_draw_bitmap(o, 0, 0, 0);
		al_flip_display();
		cout << "You are Sadness." << endl;
		system("pause");
	}

	al_destroy_display(display);
}