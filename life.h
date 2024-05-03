void life() {
	forgiveness :
	statusbar("Life", "Forgiveness", "???");
	narasi(storyline[0]);
	nooptdecbar();
	getline(cin,decision);
	if (decision == storydecision[1][0]){
		system("cls");
		statusbar("Life", "Forgiveness", "???");
		narasi(branchstory[1][0]);
		getline(cin, breaker);

		system("cls");
		goto regret;
	}
	system("cls");
	goto endlife;

	regret :
	statusbar("Life", "Regret", "Mike");
	narasi(storyline[1]);
	getline(cin, breaker);
	
	system("cls");
	statusbar("Life", "Regret", playername);
	narasi(storyline[2]);
	getline(cin, breaker);
	system("cls");

	statusbar("Life", "Regret", "Mike");
	narasi(storyline[3]);
	nooptdecbar();
	getline(cin,decision);
	if (decision == storydecision[1][1]){
		system("cls");
		statusbar("Life", "Regret", playername);
		narasi(branchstory[1][1]);
		getline(cin, breaker);
		
		system("cls");
		statusbar("Life", "Regret", "Mike");
		narasi(branchstory[1][2]);
		getline(cin, breaker);

		system("cls");
		statusbar("Life", "Regret", playername);
		narasi(branchstory[1][3]);
		getline(cin, breaker);

		system("cls");
		goto blood;

	}
	system("cls");
	goto endlife;

	blood :
	statusbar("Life", "Blood", playername);
	narasi(storyline[4]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Blood", playername);
	narasi(storyline[5]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Blood", playername);
	narasi(storyline[6]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Blood", playername);
	narasi(storyline[7]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Blood", playername);
	narasi(storyline[8]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Blood", "Seraphim");
	narasi(storyline[9]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][2]) {
		system("cls");
		statusbar("Life", "Blood", playername);
		narasi(branchstory[1][4]);
		getline(cin, breaker);

		system("cls");
		statusbar("Life", "Blood", "Seraphim");
		narasi(branchstory[1][5]);
		getline(cin, breaker);

		system("cls");
		goto death;
	}
	system("cls");
	goto endlife;

	death :
	statusbar("Life", "Death", playername);
	narasi(storyline[10]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Death", "Seraphim");
	narasi(storyline[11]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Death", playername);
	narasi(storyline[12]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Death", "Mike");
	narasi(storyline[13]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Death", playername);
	narasi(storyline[14]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Death", "Mike");
	narasi(storyline[15]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][3]) {
		system("cls");
		statusbar("Life", "Death", playername);
		narasi(branchstory[1][6]);
		getline(cin, breaker);

		system("cls");
		goto time;
	}
	system("cls");
	goto endlife;

	time :
	statusbar("Life", "Time", "Guru");
	narasi(storyline[16]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", playername);
	narasi(storyline[17]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", playername);
	narasi(storyline[18]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", "Guru");
	narasi(playername);
	narasi(storyline[19]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", playername);
	narasi(storyline[20]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", playername);
	narasi(storyline[21]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", playername);
	narasi(storyline[22]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", playername);
	narasi(storyline[23]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Time", "???");
	narasi(storyline[24]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][4]) {
		system("cls");
		statusbar("Life", "Time", playername);
		narasi(branchstory[1][7]);
		getline(cin, breaker);

		system("cls");
		statusbar("Life", "Time", "");
		narasi(branchstory[1][8]);
		getline(cin, breaker);

		system("cls");
		statusbar("Life", "Time", playername);
		narasi(branchstory[1][9]);
		getline(cin, breaker);

		system("cls");
		statusbar("Life", "Time", "Amber");
		narasi(branchstory[1][10]);
		narasi(playername);
		narasi(branchstory[1][11]);
		getline(cin, breaker);

		system("cls");
		goto love;
	}
	system("cls");
	goto endlife;

	love :
	statusbar("Life", "Love", playername);
	narasi(storyline[25]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Love", "Amber");
	narasi(storyline[26]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Love", "Amber");
	narasi(storyline[27]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Love", playername);
	narasi(storyline[28]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Love", "Amber");
	narasi(storyline[29]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Love", "???");
	narasi(storyline[30]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][5]) {
		system("cls");
		statusbar("Life", "Love", "???");
		narasi(branchstory[1][12]);
		getline(cin, breaker);

		system("cls");
		statusbar("Life", "Love", playername);
		narasi(branchstory[1][13]);
		getline(cin, breaker);

		system("cls");
		goto lies;

	}
	system("cls");
	goto endlife;

	lies :
	statusbar("Life", "Lies", "");
	narasi(storyline[31]);
	nooptdecbar();
	getline(cin, decision);
	if (decision == storydecision[1][6]) {
		system("cls");
		statusbar("Life", "Lies", "");
		narasi(branchstory[1][14]);
		getline(cin, breaker);

		system("cls");
		goto tru;
	}
	system("cls");
	goto endlife;

	tru :
	statusbar("Life", "Lies", "");
	narasi(trueending[0]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Lies", playername);
	narasi(trueending[1]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Lies", "Seraphim");
	narasi(trueending[2]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Lies", playername);
	narasi(trueending[3]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Lies", "Seraphim");
	narasi(trueending[4]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Lies", playername);
	narasi(trueending[5]);
	getline(cin, breaker);

	system("cls");
	statusbar("Life", "Lies", playername);
	narasi(trueending[6]);
	getline(cin, breaker);

	endlife :
	system("cls");
};