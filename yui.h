using namespace std;

void statusbar(string difficulty, string archive, string nama){
	cout << char(201) << char(205) << char(205) << char(181) << difficulty << char(198) << endl;
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(181) << archive << char(198) << endl;
	cout << char(204);
	y = 0;
	while (y<49){
		cout << char(205);
		y++;
	}
	cout << endl << char(200) << char(205) << char(205) << char(181) << nama << char(198) << endl << endl ;

} 

void decisionbar(string option1, string option2){
	y = 0;

	cout << endl << char(201);
	while (y<49){
		cout << char(205);
		Sleep(25);
		y++;
	}
	Sleep(500);
	cout << endl << char(204) << char(205) << char(205) << char(181) << option1 << char(198) << endl;
	cout << char(186) << endl;
	Sleep(500);
	cout << char(204) << char(205) << char(205) <<char(181) << option2 << char(198) << endl;
	cout << char(186) << endl;
	Sleep(500);
	cout << char(200) << char(205) << char(181);
		
}

void nooptdecbar() {
	cout << endl << char(201);
		y = 0;
		while (y < 49) {
			cout << char(205);
			Sleep(25);
			y++;
		}
		Sleep(500);
		cout << endl << char(200) << char(205) << char(181);
}


void infermata() {
	statusbar("ERROR", "ERROR", "ERROR");
	narasi("INFERMATA\n");
	nooptdecbar();
	getline(cin,decision);
}