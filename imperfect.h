void imperfect() {
	// 1
	pride :
	statusbar("Imperfect", "Pride", "???");
	narasi(storyline[0]);
	decisionbar(storydecision[0][0], storydecision[1][0]);
	getline(cin,decision);
	if (decision == storydecision[1][0]){
		system("cls");
		statusbar("Imperfect", "Pride", "???");
		narasi(branchstory[1][0]);
		getline(cin, breaker);

		system("cls");
		goto greed;
	} else if (decision == storydecision[0][0]) {
		system("cls");
		statusbar("Imperfect", "Pride", "???");
		narasi(branchstory[0][0]);
		getline(cin, breaker);

		system("cls");
		goto infermata;
	}
	system("cls");
	goto pride;

	// 2
	greed :
	statusbar("Imperfect", "Greed", "Mike");
	narasi(storyline[1]);
	getline(cin, breaker);
	
	system("cls");
	statusbar("Imperfect", "Greed", playername);
	narasi(storyline[2]);
	getline(cin, breaker);
	system("cls");

	greedloop :
	statusbar("Imperfect", "Greed", "Mike");
	narasi(storyline[3]);
	decisionbar(storydecision[1][1],storydecision[0][1]);
	getline(cin,decision);
	if (decision == storydecision[1][1]){
		system("cls");
		statusbar("Imperfect", "Greed", playername);
		narasi(branchstory[1][1]);
		getline(cin, breaker);
		
		system("cls");
		statusbar("Imperfect", "Greed", "Mike");
		narasi(branchstory[1][2]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Greed", playername);
		narasi(branchstory[1][3]);
		getline(cin, breaker);

		system("cls");
		goto lust;

	} else if (decision == storydecision[0][1]) {
		system("cls");
		statusbar("Imperfect", "Greed", playername);
		narasi(branchstory[0][1]);
		getline(cin, breaker);
		
		system("cls");
		statusbar("Imperfect", "Greed", "???");
		narasi(branchstory[0][2]);
		getline(cin, breaker);

		system("cls");
		goto infermata;

	}
	system("cls");
	goto greedloop;

	// 3
	lust :
	statusbar("Imperfect", "Lust", playername);
	narasi(storyline[4]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Lust", playername);
	narasi(storyline[5]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Lust", playername);
	narasi(storyline[6]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Lust", playername);
	narasi(storyline[7]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Lust", playername);
	narasi(storyline[8]);
	getline(cin, breaker);

	lustloop :
	system("cls");
	statusbar("Imperfect", "Lust", "Seraphim");
	narasi(storyline[9]);
	decisionbar(storydecision[0][2], storydecision[1][2]);
	getline(cin, decision);
	if (decision == storydecision[1][2]) {
		system("cls");
		statusbar("Imperfect", "Lust", playername);
		narasi(branchstory[1][4]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Lust", "Seraphim");
		narasi(branchstory[1][5]);
		getline(cin, breaker);

		system("cls");
		goto envy;
	}
	else if (decision == storydecision[0][2]) {
		system("cls");
		statusbar("Imperfect", "Lust", playername);
		narasi(branchstory[0][3]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Lust", "Mike");
		narasi(branchstory[0][4]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Lust", "Mike");
		narasi(branchstory[0][5]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Lust", "Mike");
		narasi(branchstory[0][6]);
		getline(cin, breaker);

		system("cls");
		goto infermata;
	}
	system("cls");
	goto lustloop;

	// 4
	envy :
	statusbar("Imperfect", "Envy", playername);
	narasi(storyline[10]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Envy", "Seraphim");
	narasi(storyline[11]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Envy", playername);
	narasi(storyline[12]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Envy", "Mike");
	narasi(storyline[13]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Envy", playername);
	narasi(storyline[14]);
	getline(cin, breaker);

	envyloop :
	system("cls");
	statusbar("Imperfect", "Envy", "Mike");
	narasi(storyline[15]);
	decisionbar(storydecision[0][3], storydecision[1][3]);
	getline(cin, decision);
	if (decision == storydecision[1][3]) {
		system("cls");
		statusbar("Imperfect", "Envy", playername);
		narasi(branchstory[1][6]);
		getline(cin, breaker);

		system("cls");
		goto gluttony;
	}
	else if (decision == storydecision[0][3]) {
		system("cls");
		statusbar("Imperfect", "Envy", "Mike");
		narasi(branchstory[0][7]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Envy", playername);
		narasi(branchstory[0][8]);
		getline(cin, breaker);

		system("cls");
		goto infermata;

	}
	system("cls");
	goto envyloop;

	gluttony :
	statusbar("Imperfect", "Gluttony", "Guru");
	narasi(storyline[16]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", playername);
	narasi(storyline[17]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", playername);
	narasi(storyline[18]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", "Guru");
	narasi(playername);
	narasi(storyline[19]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", playername);
	narasi(storyline[20]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", playername);
	narasi(storyline[21]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", playername);
	narasi(storyline[22]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Gluttony", playername);
	narasi(storyline[23]);
	getline(cin, breaker);

	gluttonyloop :
	system("cls");
	statusbar("Imperfect", "Gluttony", "???");
	narasi(storyline[24]);
	decisionbar(storydecision[0][4], storydecision[1][4]);
	getline(cin, decision);
	if (decision == storydecision[1][4]) {
		system("cls");
		statusbar("Imperfect", "Gluttony", playername);
		narasi(branchstory[1][7]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Gluttony", "");
		narasi(branchstory[1][8]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Gluttony", playername);
		narasi(branchstory[1][9]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Gluttony", "Amber");
		narasi(branchstory[1][10]);
		narasi(playername);
		narasi(branchstory[1][11]);
		getline(cin, breaker);

		system("cls");
		goto wrath;

	}
	else if (decision == storydecision[0][4]) {
		system("cls");
		statusbar("Imperfect", "Gluttony", playername);
		narasi(branchstory[0][9]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Gluttony", "???");
		narasi(branchstory[0][10]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Gluttony", playername);
		narasi(branchstory[0][11]);
		getline(cin, breaker);

		system("cls");
		goto infermata;
	}
	system("cls");
	goto gluttonyloop;

	wrath :
	statusbar("Imperfect", "Wrath", playername);
	narasi(storyline[25]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Wrath", "Amber");
	narasi(storyline[26]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Wrath", "Amber");
	narasi(storyline[27]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Wrath", playername);
	narasi(storyline[28]);
	getline(cin, breaker);

	system("cls");
	statusbar("Imperfect", "Wrath", "Amber");
	narasi(storyline[29]);
	getline(cin, breaker);

	wrathloop :
	system("cls");
	statusbar("Imperfect", "Wrath", "???");
	narasi(storyline[30]);
	decisionbar(storydecision[1][5], storydecision[0][5]);
	getline(cin, decision);
	if (decision == storydecision[1][5]) {
		system("cls");
		statusbar("Imperfect", "Wrath", "???");
		narasi(branchstory[1][12]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Wrath", playername);
		narasi(branchstory[1][13]);
		getline(cin, breaker);

		system("cls");
		goto sloth;
	}
	else if (decision == storydecision[0][5]) {
		system("cls");
		statusbar("Imperfect", "Wrath", "???");
		narasi(branchstory[0][12]);
		getline(cin, breaker);

		system("cls");
		statusbar("Imperfect", "Wrath", "???");
		narasi(branchstory[0][13]);
		getline(cin, breaker);

		system("cls");
		goto infermata;

	}
	system("cls");
	goto wrathloop;

	sloth :
	statusbar("Imperfect", "Sloth", "");
	narasi(storyline[31]);
	decisionbar(storydecision[1][6], storydecision[0][6]);
	getline(cin, decision);
	if (decision == storydecision[1][6]) {
		system("cls");
		statusbar("Imperfect", "Sloth", "");
		narasi(branchstory[1][14]);
		getline(cin, breaker);

		goto endimperfect;
	}
	else if (decision == storydecision[0][6]) {
		system("cls");
		statusbar("Imperfect", "Sloth", "");
		narasi(branchstory[1][14]);
		getline(cin, breaker);

		system("cls");
		goto sloth;

	}
	system("cls");
	goto sloth;

	infermata :
	infermata();
	if (decision == "Pride") {
		system("cls");
		goto pride;
	}
	else if (decision == "Greed") {
		system("cls");
		goto greed;
	}
	else if (decision == "Lust") {
		system("cls");
		goto lust;
	}
	else if (decision == "Envy") {
		system("cls");
		goto envy;
	}
	else if (decision == "Gluttony") {
		system("cls");
		goto gluttony;
	}
	else if (decision == "Wrath") {
		system("cls");
		goto wrath;
	}
	else if (decision == "Sloth") {
		system("cls");
		goto sloth;
	}
	system("cls");
	goto infermata;

	endimperfect :
	system("cls");
};