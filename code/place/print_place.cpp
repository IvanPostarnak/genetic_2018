#include "header_place.h"

void Place::print_place()
{
	log << "\tTo print" << endl;
	
	system("chcp 65001");
	system("cls");
		log << "\t\t Clear console + encode Unicode" << endl;
		int i = 0, j = 0;
		for (i = 0; i < height; i++) {
			cout << "\n " << endl;
			for (j = 0; j < lenght; j++) {
				switch (ptr[i][j]) {
					case 'X':
						printf("\033[34m  %c\033[0m", ptr[i][j]);
						break;
					case '_':
						printf("\033[2m  %c\033[0m", ptr[i][j]);
						break;
					case 'O':
						printf("\033[36m  %c\033[0m", ptr[i][j]);
						break;
					case 'f':
						printf("\033[32m  *\033[0m");
						break;
					case 'p':
						printf("\033[31m  *\033[0m");
						break;
				}
			}
		}
		cout << endl;

	log << "\tEnd print" << endl;
}