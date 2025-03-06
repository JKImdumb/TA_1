#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

//INPUT FOR EVERY DICISION//

int decisionMaking(int count)	//function for every decision made
{
	char input;
	input = '0';

	switch (count)
	{
	case 1:
		while (input != '1')
		{
			cin >> input;
			if (input == '1')
				break;
			cout << "\n\nDieses Runenzeichen ist mir nicht bekannt. Wie entscheidest du dich?\n";
		}
		break;
	case 2:
		while (input != '1' && input != '2')
		{
			cin >> input; 
			if (input == '1' || input == '2')
				break;
			cout << "\n\nDieses Runenzeichen ist mir nicht bekannt. Wie entscheidest du dich?\n";
		}
		break;
	case 3:
		while (input != '1' && input != '2' && input != '3')
		{
			cin >> input;
			if (input == '1' || input == '2' || input == '3')
				break;
			cout << "\n\nDieses Runenzeichen ist mir nicht bekannt. Wie entscheidest du dich?\n";
		}
		break;
	case 4:
		while (input != '1' && input != '2' && input != '3' && input != '4')
		{
			cin >> input;
			if (input == '1' || input == '2' || input == '3' || input == '4')
				break;
			cout << "\n\nDieses Runenzeichen ist mir nicht bekannt. Wie entscheidest du dich?\n";
		}
			break;
	case 5:
		while (input != '1' && input != '2' && input != '3' && input != '4' && input != '5')
		{
			cin >> input;
			if (input == '1' || input == '2' || input == '3' || input == '4' || input == '5')
				break;
			cout << "\n\nDieses Runenzeichen ist mir nicht bekannt. Wie entscheidest du dich?\n";
		}
		break;
	default:
		break;
	}
	cout << endl;

	return input;

}

//ROLLING THE DICE 1-20//

int dice(int difficulty)	//function for dice
{
	int rng;
	rng = 0;

	srand(time(NULL));

	rng = rand() % 20 + 1;	//sets rng to a random number from 1-20

	if (rng < difficulty) {
		cout << "Fehlgeschlagen!\nSchwierigkeit: " << difficulty << ". Du hast eine " << rng << " gewuerfelt!\n\n";
	}
	else {
		cout << "Erfolg!\nSchwierigkeit: " << difficulty << ". Du hast eine " << rng << " gewuerfelt!\n\n";
	}

	return rng;
}

//FIGHT LOOP//

int fight (int difficulty)
{
	char fightWon;
	fightWon = '0';

	while (fightWon != '1')
	{
		cout << "Wuerfle!" << " ("<< difficulty << ")\n\n";
		system("pause");
		cout << endl;
		if (dice(difficulty) >= difficulty)
		{
			fightWon = '1';
		}else{
			difficulty = difficulty + 2;
		}
		if (difficulty > 20)
			break;
	}

	if (fightWon=='1')
	{
		cout << "Du hast den Kampf gewonnen!\n\n";
	}
	else
	{
		cout << "Du hast den Kampf verloren.\n\n";
	}

	return fightWon;
}




//NEW TEXT BLOCK//

int classChoice()
{
	system("cls");

	char characterClass;
	characterClass = 0;

	cout << "Du oeffnest deine Augen... Du stehst auf einer Waldlichtung. Kreisfoermig um dich herum\n" <<
		"stehen riesige Monolithen, die dich bedrohlich anzustarren scheinen.\n" <<
		"Die schwungvollen dir fremden Runen auf ihnen verschwinden, als das kalte blaue Feuer, dass sie zeichnet, erlischt.\n" <<
		"Die ersten waermenden Sonnenstrahlen bahnen sich ihren Weg ueber die Baumkronen der alten Eichen und treffen auf dein\n" <<
		"Gesicht. Es kommt dir ungewoehnlich still vor. Kein Vogel. Kein Wind. Das einzige was du hoerst ist das langsam\n" <<
		"abnehmende, dumpfe Rauschen in deinen Ohren.\n" <<
		"Mit dem langsam abnehmenden Summen kommen auch deine Erinnerung daran zurueck wer du bist...\n\n"
		"1) Barbar (Eine kaempferische Seele, sowohl stark mit Waffen als auch ohne)\n" <<
		"2) Herumtreiber (Ein diebischer Einzelgaenger gut im Umgang mit Bogen & Dolch)\n" <<
		"3) Magier (Gelehrter, und Meister der arkanen Kuenste)\n\n\n" <<
		"Wer bist du?\n";
		
		characterClass = decisionMaking(3);	// character choice
	
	return characterClass;
}

//NEW TEXT BLOCK//READING LETTER//

int decLetter(char characterClass)
{
	system("cls");
	int openLetter;
	openLetter = 0;

		switch (characterClass)
		{
		case '1':
			cout << "Panisch faehrst du mit deiner Hand zu der am Ledergürtel befestigten Halterung.\n" <<
				"Erleichterung kommt in dir auf als du sanft mit deinem Daumen ueber den vertrauten Knauf streichst,\n"
				"der das Griffende deiner Axt ziert.\n";
			break;
		case '2':
			cout << "Herumtreiber\n";
			break;
		case '3':
			cout << "Magier\n";
			break;
		default:
			break;
		}

		cout << "Du fuehlst dich noch steif und frierst. Du fast instinktiv in deine Guerteltasche\n" <<
			"und holst einen versiegelten Brief heraus. Du merkst wie ein Gefuehl von Dringlichkeit in dir aukommt\n\n" <<
			"1) Siegel brechen und lesen\n2) Den Brief ungeoeffnet wieder zurueck legen\n\n" <<
			"Wie entscheidest du dich ?\n";

		openLetter = decisionMaking(2);

		return openLetter;
}

//NEW TEXT BLOCK//LETTER//

void letterOpened()
{
	system("cls");
	cout << "Wir schicken dir einen Kaempfer\n\n" <<
		 "Der Kreis\n\n";
	system("pause");

}

//NEW TEXT BLOCK//CHOOSING DIRECTION//

int decDirection()
{
	system("cls");

	char openingPath;
	openingPath = '0';


	cout << "Du blickst dich um. Rauchsaeule in der Naehe, Weg der in Wald fuehrt.\n\n" << "1) Die Strasse entlang\n2) Zur Rauchsaeule\n\n" ;

	cout << "Wie entscheidest du dich?\n";
	openingPath = decisionMaking(2);	//determines which path you chose

	return openingPath;
}

//NEW TEXT BLOCK//FOLLOWING THE STREET//

int decWounded(char characterClass)
{
	int helpingWounded;
	helpingWounded;

	system("cls");

	cout << "Du folgst der Strasse in den Wald.\nTriffst einen verletzten. Du kannst weiter gehen oder helfen.\n\n" <<
		"1)Weiter gehen.\n" <<
		"2)Teil der Kleidung als Verband geben.\n";
	if (characterClass == '3') {
		cout << "3)Mit Magie heilen. (5)\n\n";
	}
	else {
		cout << endl << endl;
	}
	
	cout << "Wie entscheidest du dich?\n";

		if (characterClass == '3')
		{
			helpingWounded = decisionMaking(3);
		}
		else
		{
			helpingWounded = decisionMaking(2);
		}

		switch (helpingWounded)
		{
		case '1':
			break;
		case '2':
			cout << "Ein Stueck Kleidung ueber Wunde.\n";
			break;
		case '3':
			if (characterClass == '3') {
				if (dice(5) < 5) {
					cout << "Du fuehlst dich noch zu erschhoepft selbst fuer solch einen einfachen Zauber.\n\n";
					system("pause");
					helpingWounded++;
				}
				else {
					cout << "Deine Magie zeigt Wirkung und die Wunde des Verletzten waechst langsam wieder zu.\n\n";
					system("pause");
				}
			}
			else {
				cout << "Dieses Runenzeichen ist mir fremd... ";
			}
			break;
		default:
			cout << "Dieses Runenzeichen ist mir fremd... ";
			break;
		}

return helpingWounded;
}

//NEW TEXT BLOCK//FOLLOWING THE VOICES//

int decActors(char characterClass)
{
	char caravan = '0';

	bool toggle = false;

	system("cls");

		cout << "Du gehst zu der Rauchsaeule. Schaustellergruppe aus 3 Zwergen und einem Elfen mit Waffen.\n\n" <<
			"1) Zurueck auf die Lichtung und dem Weg folgen\n2) Mit erhobenen Haenden naehern\n3) Zum Lauschen naeher heran schleichen ";

		if (characterClass == '2')
		{
			cout << "(6)\n";
		}
		else
		{
			cout << "(16)\n";
		}


	switch (characterClass)
	{
	case '1':
		cout << "4) Frontalangriff (12)\n\n";
		break;
	case '2':
		cout << "4) Die Gruppe heimlich ausschalten\n\n";
		break;
	case '3':
		cout << "4) Einen Tarnzauber wirken (12)\n\n";
		break;
	default:
		break;
	}

		cout << "Wie entscheidest du dich?\n";

		caravan = decisionMaking(4);
		if (caravan == '4')
		{
			switch (characterClass)
			{
			case '1':
				caravan = '5';
				break;
			case '2':
				caravan = '6';
				break;
			case '3':
				if (dice(12) >= 12)
				{
					caravan = '7';
					cout << endl << endl;
					system("pause");
				}
				else
				{
					system("pause");
					system("cls");
					
					cout << "Du hast noch Schwierigkeit den Zauber zu wirken.\n\n" <<
					"1) Zurueck auf die Lichtung und dem Weg folgen\n2) Mit erhobenen Haenden naehern\n" <<
					"3) Zum Lauschen naeher heran schleichen (16)\n4) Einen Tarnzauber wirken (12)\n\n" <<
					"Wie entscheidest du dich?\n";

					caravan = decisionMaking(4);

					if (dice(12) >= 12)
					{
						caravan = '7';
						cout << endl << endl;
						system("pause");
					}
					else
					{
						system("pause");
						system("cls");

						cout << "Selbst mit aller Konzentration die du aufbringen kannst gelingt es dir nicht diesen Zauber zu wirken\n\n" <<
							"1) Zurueck auf die Lichtung und dem Weg folgen\n2) Mit erhobenen Haenden naehern\n" <<
							"3) Zum Lauschen naeher heran schleichen (16)\n\n" <<
							"Wie entscheidest du dich?\n";

						caravan = decisionMaking(3);
					}
				}
				break;
			default:
				break;
			}
		}
		else if (caravan == '3')
		{
			switch (characterClass)
			{
			case '1':
				if (dice(16) >= 16)
				{
					caravan = '4';
					cout << endl << endl;
					system("pause");
				}
				else
				{
					cout << endl << endl;
					system("pause");
				}
				break;
			case '2':
				if (dice(6) >= 6)
				{
					caravan = '4';
					cout << endl << endl;
					system("pause");
				}
				else
				{
					cout << endl << endl;
					system("pause");
				}
				break;
			case '3':
				if (dice(16) >= 16)
				{
					caravan = '4';
					cout << endl << endl;
					system("pause");
				}
				else
				{
					cout << endl << endl;
					system("pause");
				}
				break;
			default:
				break;
			}
		}
		

	return caravan;
}

//NEW TEXT BLOCK//FIGHT VS ACTORS//

int lootCorpses();
int fightActors(char caravan)
{
	int difficulty = 12;
	int counter = 4;
	int decisions = 0;
	char order = '0';
	char fightWon = '0';

	system("cls");
	
	if (caravan == '5')
	{
		cout << "Du stuermst auf die Schausteller los! Ein Kampf bricht aus.\n\n";

		if (fight(21) == '1')
		{
			system("pause"); 
			fightWon = '1';
		}
		else
		{
			system("pause");
			system("cls");
			cout << "Die Schausteller sind zwar nicht kampferfahren, aber durch ihre Ueberzahl nicht zu bezwingen.\n" <<
				"Du fliehst zurueck auf die Lichtung bis sie dich nicht mehr Verfolgen. Du folgst dem Weg der in den Wald fuehrt.\n\n";

			system("pause");
		}
	}
	else
	{
		cout << "Du sondierst die Lage. Einer bei den Pferden, einer im Gebuesch beim pinkeln, und zwei am Lagerfeuer\n\n" <<
			"1) Den Pinkler erledigen (4)\n2) Den bei den Pferden ausschalten (4)\n3) Dich um die am Lagerfeuer kuemmern (10)\n\n" <<
			"Wie entscheidest du dich?\n";
		
		for (int i = 0; i < 3; i++)
		{
			decisions = 3;
			order = decisionMaking(decisions);
			decisions--;
			cout << i << order;
			system("cls");
			switch (order)
			{
			case '1':
				difficulty = 4;
				if (dice(difficulty) >= difficulty)
				{
					if (i == 0)
					{
						cout << "Der Pinkler faellt zuerst. Um wen kümmerst du dich als naechstes?\n\n" <<
							"1) Den bei den Pferden ausschalten (4)\n2) Dich um die am Lagerfeuer kuemmern (10)\n\n";			
					}
					else if (i == 1)
					{
						cout << "Auch der bei den Pferden wird nun nicht mehr wieder aufstehen.\n";
					}
					else
					{

					}
				}
				break;
			case '2':
				difficulty = 4;
				if (dice(difficulty) >= difficulty)
				{
					if (i == 0)
					{
						cout << "Der bei den Pferden faellt zuerst. Um wen kümmerst du dich als naechstes?\n\n" <<
							"1) Den Pinkler erledigen (4)\n2) Dich um die am Lagerfeuer kuemmern (10)\n\n";
					}
					else if (i == 1)
					{
						cout << "Auch der Pinkler wird nun nicht mehr wieder aufstehen.\n";
					}
				}
				break;
			case '3':
				difficulty = 10;

				break;
			default:
				break;
			}
		}
	}

	return fightWon;
}

int lootCorpses()
{
	int ring = 0;

	system("cls");

	cout << "Die Schausteller hatten keine Chance... Du pluenderst die Leichen und findest dabei einen Ring\n\n";
	ring = 1;

	system("pause");

	return ring;
}

//NEW TEXT BLOCK//TALK TO ACTORS//

int talkActors(char caravan)
{
	system("cls");
	cout << "Du redest mit den Schaustellern.\n\n";

	return 1;
}

//NEW TEXT BLOCK//EAVESDROP ACTORS//

int eavesdropActors (char caravan)
{
	system("cls");
	cout << "Du belauschst die Schausteller.";

	return 1;
}

//NEW TEXT BLOCK//CONTINUE AFTER WOUNDED// 

int decStreet(char characterClass)
{
	int enterCave;
	enterCave = 0;

	system("cls");
	cout << "Du gehst weiter...\nDu kommst zu einer grossen Hoehle.\n\n1)Weiter gehen\n2)Hinein gehen\n\n\nWas tust du?\n";

		enterCave = decisionMaking(2);

	return enterCave;
}

//NEW TEXT BLOCK//ENTERING CAVE//

int approachWerewolf(char characterClass)
{
	system("cls");
	int enterCave;
	enterCave = 0;

	cout << "Du wagst dich vorischtig vor. Du siehst einen Werwolf. Hinter ihm ein schmaler Spalt.\n\n" << "1) Wieder raus gehen\n";
	if (characterClass == '3')
	{
		cout << "2) Feuerball aus der Entfernung wirken (8)\n";
	}else{
		cout << "2) Auf den Werwolf zustuermen\n";
	}
		cout << "3) Versuchen zum Spalt zu schleichen";
	if (characterClass == '2')
	{
		cout << "(6)\n\n\n";
	}
	else
	{
		cout << endl << endl << endl;
	}

	cout << "Was wirst du tun?\n";

		enterCave = decisionMaking(3);	

	return enterCave;
}

//NEW TEXT BLOCK//APPROACHING WEREWOLF//

int fightWerewolf(char characterClass, int enterCave)
{
	system("cls");

	char castAgain,fightWon;
	fightWon = '0';
	castAgain = '0';

	int difficulty;
	difficulty = 0;

	switch (characterClass)
	{
	case '1':
		if (enterCave=='2')
		{
			cout << "Du stuerzt dich wagemutig auf den Werwolf.\nNoch bevor er reagieren kannst versetzt du ihm einen sauberen Hieb mit deiner Axt.\n\n";
			difficulty = 6;
			fightWon = fight(difficulty);
		}else{
			cout << "Du trittst auf einen Zweig.\nDer Werwolf schaut dich direkt aus seinen roten Augen heraus an und stürzt auf dich los!\n\n";
			difficulty = 8;
			fightWon = fight(difficulty);
		}
		break;
	case '2':
		if (enterCave=='2')
		{
			cout << "Waghalsig stuermst du auf den Werwolf zu,doch noch bevor du mit deinen Dolchen einen\nTreffer landen kannst, weicht er mit einem schnellen Sprung zur Seite aus\n\n";
			difficulty = 10;
			fightWon = fight(difficulty);
		}else{
			difficulty = 6;
			if (dice(difficulty) > difficulty)
			{
				cout << "Erfolgreich dran vorbei geschlichen\n";
				fightWon = '2';
			}else{
				cout << "Du trittst auf einen Zweig.\nDer Werwolf schaut dich direkt aus seinen roten Augen heraus an und stürzt auf dich los!\n\n";
				difficulty = 14;
				fightWon = fight(difficulty);
			}
		}
		break;
	case '3':
		if (enterCave=='2')
		{
			if (dice(8) > 8)
			{
				cout << "Du schiesst einen Feuerball. Der Werwolf ist stark geschwaecht. Mit seiner letzten Kraft versucht er sich auf dich zu stuerzen.\n\n";
				difficulty = 4;
				fightWon = fight(difficulty);
			}else{
				cout << "Du bist zu schwach. Nochmal probieren?\n\n1) Fliehen\n2) Versuchen einen zweiten Feuerball zu wirken (12)\n" <<
						"3) Versuchen zum Spalt zu schleichen\n\nWie entscheidest du dich?\n";
				castAgain = decisionMaking(3);
				system("cls");
				switch (castAgain)
				{
				case '1':
					fightWon = '0';
					break;
				case '2':
					if (dice(12) > 12)
					{
						cout << "Du schiesst einen Feuerball. Der Werwolf ist stark geschwaecht. Mit seiner letzten Kraft versucht er sich auf dich zu stuerzen.\n\n";
						difficulty = 4;
						fightWon = fight(difficulty);
					}else{
						system("cls");
						cout << "Auch der zweite Versuch bleibt erfolglos.\n";
						cout << "Der Werwolf hat deine Zaubertricks bemerkt und schaut dich direkt aus seinen roten Augen heraus an.\nEr stuerzt auf dich los!\n\n";
						difficulty = 14;
						fightWon = fight(difficulty);
					}
					break;
				case '3':
					cout << "Du trittst auf einen Zweig.\nDer Werwolf schaut dich direkt aus seinen roten Augen heraus an und stürzt auf dich los!\n\n";
					difficulty = 14;
					fightWon = fight(difficulty);
					break;
				default:
					break;
				}
			}
		}else{
			cout << "Du trittst auf einen Zweig.\nDer Werwolf schaut dich direkt aus seinen roten Augen heraus an und stürzt auf dich los!\n\n";
			difficulty = 14;
			fightWon = fight(difficulty);
		}
		break;
	default:
		break;
	}

	if (fightWon=='0')
	{
		cout << "Du fliehst aus der Hoehle...\n\n";
	}

	system("pause");

return fightWon;
}

//NEW TEXT BLOCK//LOOTING IN CAVE//

int caveLoot()
{
	int neckless = 1;

	system("cls");

	cout << "Du findest eine eine Halskette\n\n";

	system("pause");

return neckless;
}

//NEW TEXT BLOCK// CONTINUE AFTER CAVE//

int decTavern(char characterClass, int openingPath, int helpingWounded, int enterCave, int fightWon, int neckless)
{
	system("cls");
	cout << "Du gehst weiter\n";

return 1;
}

int main() {
	
	char characterClass = '0', openingPath = '0', helpingWounded = '0', enterCave = '0',fightWonWerewolf = '0', 
		 openLetter = '0', neckless = '0', caravan = '0', fightWonActors = '0', ring = '0';

	characterClass = classChoice();
	openLetter = decLetter(characterClass);
	if (openLetter == '1'){
		letterOpened();
	}
	openingPath = decDirection();

	if (openingPath=='1')
	{
		helpingWounded = decWounded(characterClass);
		enterCave = decStreet(characterClass);
		if (enterCave != '1')
		{
			enterCave = approachWerewolf(characterClass);
			if (enterCave != '1')
			{
				fightWonWerewolf = fightWerewolf(characterClass, enterCave);
				if (fightWonWerewolf != '0')
				{
					neckless = caveLoot();
				}
			}
		}
		decTavern(characterClass, openingPath, helpingWounded, enterCave,fightWonWerewolf, neckless);
	}
	else
	{
		caravan = decActors(characterClass);

		if (caravan == '4')
		{
			eavesdropActors(caravan);
		}
		else if (caravan == '5' || caravan == '6')
		{
			fightWonActors = fightActors(caravan);
			if (fightWonActors == '1')
			{
				ring = lootCorpses();
			}
		}
		else
		{
			talkActors(caravan);
		}

	}
return 0;
}