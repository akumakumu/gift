#include <iostream>
#include <string>
#include <windows.h>
#include "variables.h"
#include "spirit.h"
#include "gift_animation.h"
#include "yui.h"
#include "story.h"
#include "mainmenu.h"
#include "tutorial.h"
#include "imperfect.h"
#include "ignorance.h"
#include "life.h"

using namespace std;

// Pride Greed Lust Envy Gluttony Wrath Sloth
// Superbia Avaritia Luxuria Invidia Gula Ira Acedia
// Forgiveness Regret Blood Death Time Love Lies

int main(int argc, char const *argv[]){
	
	cntrl = 1;

	cout << "name ";
	getline(cin, playername);

	mainmenu :
	mainmenu(cntrl);
	getline(cin, decision);
	switch (cntrl) {
		case 1:
			if (decision == "Tutorial") {
				system("cls");
				goto tutorial;
			}
			else
				system("cls");
				goto mainmenu;
		break;

		case 2:
			if (decision == "Imperfect"){
				system("cls");
				goto imperfect;
			}
			else
				system("cls");
				goto mainmenu;
		break;

		case 3:
			if (decision == "Ignorance"){
				system("cls");
				goto ignorance;
			}
			else
				system("cls");
				goto mainmenu;
		break;

		case 4:
			if (decision == "Life"){
				system("cls");
				goto life;
			}
			else
				system("cls");
				goto mainmenu;
		break;

		case 5 :
			system("cls");
			goto mainmenu;
		break;
	}
	

	tutorial :
	tutorial("Imperfect","Pride","???",tutorialdecision[1][0],tutorialdecision[0][0]);
	cntrl = 2;
	goto mainmenu;

	imperfect :
	imperfect();
	cntrl = 3;
	goto mainmenu;

	ignorance :
	ignorance();
	cntrl = 4;
	goto mainmenu;

	life :
	life();
	cntrl = 5;
	goto mainmenu;

	getline(cin,breaker);
	return 0;
}