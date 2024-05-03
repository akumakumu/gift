void ignorance() {
	superbia :
	statusbar("Ignorance", "Superbia", "???");
	narasi(storyline[0]);
	nooptdecbar();
	getline(cin,decision);
	if (decision == storydecision[1][0]){
		system("cls");
		statusbar("Ignorance", "Superbia", "???");
		narasi(branchstory[1][0]);
		getline(cin, breaker);

		system("cls");
		goto avaritia;
	} else if (decision == storydecision[0][0]) {
		system("cls");
		statusbar("Ignorance", "Superbia", "???");
		narasi(branchstory[0][0]);
		getline(cin, breaker);

		system("cls");
		goto ignoinfermata;
	}
	system("cls");
	goto superbia;

	avaritia :
	statusbar("Ignorance", "Avaritia", "Mike");
	narasi(storyline[1]);
	getline(cin, breaker);
	
	system("cls");
	statusbar("Ignorance", "Avaritia", playername);
	narasi(storyline[2]);
	getline(cin, breaker);
	system("cls");

	avaritialoop :
	statusbar("Ignorance", "Avaritia", "Mike");
	narasi(storyline[3]);
	nooptdecbar();
	getline(cin,decision);
	if (decision == storydecision[1][1]){
		system("cls");
		statusbar("Ignorance", "Avaritia", playername);
		narasi(branchstory[1][1]);
		getline(cin, breaker);
		
		system("cls");
		statusbar("Ignorance", "Avaritia", "Mike");
		narasi(branchstory[1][2]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Avaritia", playername);
		narasi(branchstory[1][3]);
		getline(cin, breaker);

		system("cls");
		goto luxuria;
	} else if (decision == storydecision[0][1]) {
		system("cls");
		statusbar("Ignorance", "Avaritia", playername);
		narasi(branchstory[0][1]);
		getline(cin, breaker);
		
		system("cls");
		statusbar("Ignorance", "Avaritia", "???");
		narasi(branchstory[0][2]);
		getline(cin, breaker);

		system("cls");
		goto ignoinfermata;

	}
	system("cls");
	goto avaritialoop;

	// 3
	luxuria :
	statusbar("Ignorance", "Luxuria", playername);
	narasi(storyline[4]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Luxuria", playername);
	narasi(storyline[5]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Luxuria", playername);
	narasi(storyline[6]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Luxuria", playername);
	narasi(storyline[7]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Luxuria", playername);
	narasi(storyline[8]);
	getline(cin, breaker);

	luxurialoop :
	system("cls");
	statusbar("Ignorance", "Luxuria", "Seraphim");
	narasi(storyline[9]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][2]) {
		system("cls");
		statusbar("Ignorance", "Luxuria", playername);
		narasi(branchstory[1][4]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Luxuria", "Seraphim");
		narasi(branchstory[1][5]);
		getline(cin, breaker);

		system("cls");
		goto invidia;
	}
	else if (decision == storydecision[0][2]) {
		system("cls");
		statusbar("Ignorance", "Luxuria", playername);
		narasi(branchstory[0][3]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Luxuria", "Mike");
		narasi(branchstory[0][4]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Luxuria", "Mike");
		narasi(branchstory[0][5]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Luxuria", "Mike");
		narasi(branchstory[0][6]);
		getline(cin, breaker);

		system("cls");
		goto ignoinfermata;
	}
	system("cls");
	goto luxurialoop;

	invidia :
	statusbar("Ignorance", "Invidia", playername);
	narasi(storyline[10]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Invidia", "Seraphim");
	narasi(storyline[11]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Invidia", playername);
	narasi(storyline[12]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Invidia", "Mike");
	narasi(storyline[13]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Invidia", playername);
	narasi(storyline[14]);
	getline(cin, breaker);

	invidialoop :
	system("cls");
	statusbar("Ignorance", "Invidia", "Mike");
	narasi(storyline[15]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][3]) {
		system("cls");
		statusbar("Ignorance", "Invidia", playername);
		narasi(branchstory[1][6]);
		getline(cin, breaker);

		system("cls");
		goto gula;
	}
	else if (decision == storydecision[0][3]) {
		system("cls");
		statusbar("Ignorance", "Invidia", "Mike");
		narasi(branchstory[0][7]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Invidia", playername);
		narasi(branchstory[0][8]);
		getline(cin, breaker);

		system("cls");
		goto ignoinfermata;

	}
	system("cls");
	goto invidialoop;

	gula :
	statusbar("Ignorance", "Gula", "Guru");
	narasi(storyline[16]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", playername);
	narasi(storyline[17]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", playername);
	narasi(storyline[18]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", "Guru");
	narasi(playername);
	narasi(storyline[19]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", playername);
	narasi(storyline[20]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", playername);
	narasi(storyline[21]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", playername);
	narasi(storyline[22]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Gula", playername);
	narasi(storyline[23]);
	getline(cin, breaker);

	gulaloop :
	system("cls");
	statusbar("Ignorance", "Gula", "???");
	narasi(storyline[24]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][4]) {
		system("cls");
		statusbar("Ignorance", "Gula", playername);
		narasi(branchstory[1][7]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Gula", "");
		narasi(branchstory[1][8]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Gula", playername);
		narasi(branchstory[1][9]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Gula", "Amber");
		narasi(branchstory[1][10]);
		narasi(playername);
		narasi(branchstory[1][11]);
		getline(cin, breaker);

		system("cls");
		goto ira;

	}
	else if (decision == storydecision[0][4]) {
		system("cls");
		statusbar("Ignorance", "Gula", playername);
		narasi(branchstory[0][9]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Gula", "???");
		narasi(branchstory[0][10]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Gula", playername);
		narasi(branchstory[0][11]);
		getline(cin, breaker);

		system("cls");
		goto ignoinfermata;
	}
	system("cls");
	goto gulaloop;

	ira :
	statusbar("Ignorance", "Ira", playername);
	narasi(storyline[25]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Ira", "Amber");
	narasi(storyline[26]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Ira", "Amber");
	narasi(storyline[27]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Ira", playername);
	narasi(storyline[28]);
	getline(cin, breaker);

	system("cls");
	statusbar("Ignorance", "Ira", "Amber");
	narasi(storyline[29]);
	getline(cin, breaker);

	iraloop :
	system("cls");
	statusbar("Ignorance", "Ira", "???");
	narasi(storyline[30]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][5]) {
		system("cls");
		statusbar("Ignorance", "Ira", "???");
		narasi(branchstory[1][12]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Ira", playername);
		narasi(branchstory[1][13]);
		getline(cin, breaker);

		system("cls");
		goto acedia;
	}
	else if (decision == storydecision[0][5]) {
		system("cls");
		statusbar("Ignorance", "Ira", "???");
		narasi(branchstory[0][12]);
		getline(cin, breaker);

		system("cls");
		statusbar("Ignorance", "Ira", "???");
		narasi(branchstory[0][13]);
		getline(cin, breaker);

		system("cls");
		goto ignoinfermata;

	}
	system("cls");
	goto iraloop;

	acedia :
	statusbar("Ignorance", "Acedia", "");
	narasi(storyline[31]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][6]) {
		system("cls");
		statusbar("Ignorance", "Acedia", "");
		narasi(branchstory[1][14]);
		getline(cin, breaker);

		goto endignorance;
	}
	else if (decision == storydecision[0][6]) {
		system("cls");
		statusbar("Ignorance", "Acedia", "");
		narasi(branchstory[1][14]);
		getline(cin, breaker);

		system("cls");
		goto acedia;

	}
	system("cls");
	goto acedia;

	ignoinfermata :
	infermata();
	if (decision == "Superbia") {
		system("cls");
		goto superbia;
	}
	else if (decision == "Avaritia") {
		system("cls");
		goto avaritia;
	}
	else if (decision == "Luxuria") {
		system("cls");
		goto luxuria;
	}
	else if (decision == "Invidia") {
		system("cls");
		goto invidia;
	}
	else if (decision == "Gula") {
		system("cls");
		goto gula;
	}
	else if (decision == "Ira") {
		system("cls");
		goto ira;
	}
	else if (decision == "Acedia") {
		system("cls");
		goto acedia;
	}
	system("cls");
	goto ignoinfermata;

	endignorance :
	system("cls");
};