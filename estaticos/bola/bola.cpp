#include "bola.h"
#undef main
Bola::Bola(){
	int randomx, randomt;

	randomx = 0;



	randomt = 1;



	if(randomt == 1){
		tipo = "pointer";
	}
	else if(randomt == 2){
		tipo = "murderer";
	}
	else if(randomt == 3){
		tipo = "saver";
	}
	attached = false;
	Rect.x = randomx;
	Rect.y = 0;
	Rect.w = 45;
	Rect.h = 45;
}

Bola::~Bola(){}

void Bola::mover(){
	Rect.x = Rect.x;
	Rect.y = Rect.y;
}

void Bola::colision(){

}

int Bola::get_x(){
	return Rect.x;
}

int Bola::get_y(){
	return Rect.y;
}

int main(){
	Bola bola1;
	std::cout<<bola1.get_x();
	return 0;
}