using namespace std;

void tutorial(string difficulty, string archive, string nama, string option1, string option2){
	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << endl << endl;
	cout << tutorialline[0];
	getline(cin,breaker);
	system("cls");

	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << " <" << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << endl << endl;
	cout << tutorialline[1];
	getline(cin,breaker);
	system("cls");

	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << " <" << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << endl << endl;
	cout << tutorialline[2];
	getline(cin,breaker);
	system("cls");

	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << " <" << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << endl << endl;
	cout << tutorialline[3];
	getline(cin,breaker);
	system("cls");

	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << " <" << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << endl << endl;
	cout << tutorialline[4];
	getline(cin,breaker);
	system("cls");

	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << " <" << endl << endl;
	cout << tutorialline[5];
	getline(cin,breaker);
	system("cls");

	statusbar("Imperfect","Pride","???");
	cout << tutorialline[6];
	y = 0;

	cout << endl << char(201);
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(204) << char(205) << char(205) << char(181) << option1 << char(198) << endl;
	cout << char(186) << endl;
	cout << char(204) << char(205) << char(205) <<char(181) << option2 << char(198) << endl;
	cout << char(186) << endl;
	cout << char(200) << char(205) << char(181);
	getline(cin,breaker);
	system("cls");

	statusbar("Imperfect","Pride","???");
	cout << tutorialline[7];
	y = 0;

	cout << endl << char(201);
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(204) << char(205) << char(205) << char(181) << option1 << char(198) << " <" << endl;
	cout << char(186) << endl;
	cout << char(204) << char(205) << char(205) <<char(181) << option2 << char(198) << " <" << endl;
	cout << char(186) << endl;
	cout << char(200) << char(205) << char(181);
	getline(cin,breaker);
	system("cls");

	statusbar("Imperfect","Pride","???");
	cout << tutorialline[8];
	y = 0;

	cout << endl << char(201);
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(204) << char(205) << char(205) << char(181) << option1 << char(198) << endl;
	cout << char(186) << endl;
	cout << char(204) << char(205) << char(205) <<char(181) << option2 << char(198) << endl;
	cout << char(186) << endl;
	cout << char(200) << char(205) << char(181) << " <";
	getline(cin,breaker);
	system("cls");

	tutorialtest :
	statusbar("Imperfect","Pride","???");
	cout << tutorialline[9];
	y = 0;

	cout << endl << char(201);
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(204) << char(205) << char(205) << char(181) << option1 << char(198) << endl;
	cout << char(186) << endl;
	cout << char(204) << char(205) << char(205) <<char(181) << option2 << char(198) << endl;
	cout << char(186) << endl;
	cout << char(200) << char(205) << char(181);
	
	getline(cin,decision);
	if (decision == option1) {
		system("cls");
		statusbar("Imperfect","Pride","???");
		cout << tutorialline[11];
		getline(cin,breaker);
		goto endtutorial;
	}
	else if (decision == option2) {
		system("cls");
		statusbar("Imperfect","Pride","???");
		cout << tutorialline[10];
		getline(cin,breaker);
		system("cls");
		goto tutorialtest;
	}
	system("cls");
	goto tutorialtest;

	endtutorial :
	system("cls");

	}