#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>
#include <iomanip>
using namespace std;

void inputAndPrintInteger() {
	int number = 0;
	std::cout << "Skriv inn ett tall: " << std::endl;
	std::cin >> number;
	std::cout << "Du skrev: " << number << std::endl;
}

int inputInteger() {
	int number = 0;
	std::cout << "Skriv inn ett tall: " << std::endl;
	std::cin >> number;
	return number;
}
//opg 1d)
/*Jeg velger å bruke inputInteger for å hente x og y, da denne metoden returnerer integers
noe som forkorter nødvendig kode + at det er mer leselig for bruker*/
int inputIntegersAndPrintSum() {
	int sum = 0;
	int x = inputInteger();
	int y = inputInteger();
	sum += x + y;
	std::cout << "Summen av tallen er: " << sum << ". " << std::endl;
	return sum;
}

bool isOdd(int number) {
	if (number % 2 != 0) {
		return 1;
	}
	else {
		return 0;
	}
}

std::string printHumanReadableTime(int seconds) {
	std::string time;
	int hours = 0;
	int minutes = 0;
	if (seconds >= 3600) {
		hours = seconds/60/60;
	}
	if(seconds >= 60) {
		seconds = seconds - hours * 60 * 60;
		minutes = seconds/60;
	}
	seconds = seconds - (minutes * 60);

	std::string stringminutes = std::to_string(minutes);
	std::string stringhours = std::to_string(hours);
	std::string stringseconds = std::to_string(seconds);

	stringhours = (hours == 1 ? stringhours + " time " : stringhours + " timer ");
	stringminutes = (minutes == 1 ? stringminutes + " minutt " : stringminutes + " minutter ");
	stringseconds = (seconds == 1 ? stringseconds + " sekund." : stringseconds + " sekunder.");

	if (hours > 0) {
		
		time = stringhours + stringminutes + stringseconds;
	}
	else if (minutes > 0) {
		time = stringminutes  + stringseconds;
	}
	else {
		time = stringseconds;
	}
	std::cout << "tiden er: "+ time << std::endl;
	return time;
}

/*Denne måten antar at du er nødt til å skrive par med tall
Dette pga av opg 1c) er hardkodet til nettopp dette.
Derfor kan kun hvert andre tall triggre 0-responsen.
Ønsket ikke å endre 1c) da oppgaven da ville være helt annerledes ifht de foregående.*/
void inputIntegersUsingLoopAndPrintSum() {
	int input = 1;
	int sum = 0;
	std::cout << "Hvert andre tall kan terminere prosessen hvis du skriver 0: " << std::endl;
	while (input != 0) {
		int x = inputIntegersAndPrintSum();
		std::cout << " " << std::endl;
		std::cout << "du kan her skrive 0 for å terminere: " << std::endl;
		std::cin >> input;
		sum += x;
	}
	std::cout << "summen er: " << sum << std::endl;
}

double inputDouble() {
	double input = 0.0;
	std::cout << "skriv inn ett double-tall: " << std::endl;
	std::cin >> input;
	std::cout << "Du skrev inn: " << input << std::endl;
	return input;
}

double nokToEuro() {
	double cash;
	cash = inputDouble();	//2e) Vi bruker inputDouble() fordi dersom vi bruker inputInteger() vil tallet rundes av til nærmeste heltall.
	cash = cash / 9.64;
	std::cout.precision(2);
	std::cout << std::fixed;
	std::cout << " Dette tilsvarer: " << cash << '\n' << " euro" << std::endl;
	return cash;
}


void multiplicationTable(int rowCount, int colCount) {
	int i, j;
	cout << "     " << 1;//5 space chars

	for (i = 2; i <= colCount; ++i)
		cout << "    " << i;//4 space chars

	cout << endl;
	cout << "   ----|";

	for (i = 2; i <= colCount; ++i)
		cout << "----|";

	cout << endl;

	for (i = 1; i <= rowCount; ++i)
	{
		cout << setw(2) << i << "|";

		for (j = 1; j <= colCount; ++j)
			cout << setw(4) << j * i << "|";

		cout << endl;
		cout << " -|----";

		for (j = 2; j <= colCount; ++j)
			cout << "|----";

		cout << "|----|";
		cout << endl;

	}
}

float discriminant(float a, float b, float c) {
	return pow(b, 2) - (4 * a*c);
}

int printRealRoots(float a, float b, float c) {
	if (discriminant(a, b, c) < 0) {
		cout<<"ingen løsninger";
		return 0;
	}
	else if (discriminant(a, b, c) == 0) {
		cout << "en løsning";
		return 1;
	}
	else if (discriminant(a, b, c) > 0) {
		cout << "to løsninger";
		return 2;
	}
	else {
		cout << "Catastrophical error";
		return -1;
	}

	float x1 = (b + sqrt(pow(b, 2)-4*a*c)) / (2*a);
	float x2 = (b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	//float x = a * pow(x, 2) + b * x + c = 0;
	
}
//Velger å bruke floats, da det ikke er reellt å ha behov for doubles, plus det sparer ressurser.
void solveQuadraticEquation() {
	float a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	printRealRoots(a, b, c);
}

void calculateLoanPayments() {
	int loanAmount;
	double interest;
	int remaining = 0;
	for (int i = 1; i <= 10; i++) {

		int payment = () + ()*;
	}
	cout << "Year" << "\t\t" << "" << "Payment" << "\t\t" << "Remaining loan";
}

void menu(int amountOfTasks) {
	int input = -1;
	std::string tasks[] = {"inputAndPrintInteger", "inputInteger", "inputINtegersAndPrintSum", "isOdd", "printHumanReadableTime", 
		"inputIntegersUsingLoopAndPrintSum", "inputDouble", "nokToEuro", "multiplicationTable", "discriminant", "solveQuadraticEquation", "calculateLoanPayments"};
	for (int i = 0; i <= amountOfTasks; i++) {
		std::cout << "" << std::endl;
		if (i != amountOfTasks) {
			std::cout << i <<") " << tasks[i] << std::endl;
		}
		else {
			std::cout << 100 << ") Avslutt" << std::endl;
		}
	}
}

int main() {
	//8 oppgaver før menyvalget ble laget
	int amountOfTasks = 12;
	int input = -1;
	menu(amountOfTasks);
	while (input != amountOfTasks){
		std::cout << "Velg en oppgave eller velg avslutt-alternativet: " << std::endl;
		std::cin >> input;
		if (input == 0) {
			inputAndPrintInteger();
		}
		else if (input == 1) {
			inputInteger();
		}
		else if (input == 2) {
			inputIntegersAndPrintSum();
		}
		else if (input == 3) {
			int num;
			std::cout << "Legg ved ett tall: " << std::endl;
			std::cin >> num;
			isOdd(num);
		}
		else if (input == 4) {
			int num;
			std::cout << "Legg ved ett tall: " << std::endl;
			std::cin >> num;
			printHumanReadableTime(num);
		}
		else if (input == 5) {
			
			inputIntegersUsingLoopAndPrintSum();
		}
		else if (input == 6) {
			inputDouble();
		}
		else if (input == 7) {
			nokToEuro();
		}
		else if (input == 8) {
			int rowCount;
			int colCount;
			cout << "skriv antall rader: ";
			cin >> rowCount;
			cout << "skriv antall kolonner: ";
			cin >> colCount;
			multiplicationTable(rowCount, colCount);
		}
		else if (input == 9) {
			float a, b, c;
			cin >> a;
			cin >> b;
			cin >> c;
			discriminant(a, b, c);
		}
		else if (input == 10) {
			solveQuadraticEquation();
		}
		else if (input == 11) {
			calculateLoanPayments();
		}
		else if(input == 100){
			std::cout << "Farvell" << std::endl;
			break;
		}
		else {
			std::cout << "Ikke gyldig valg " << std::endl;
		}
		menu(amountOfTasks);
	}
	/*
	std::cout << " opg 1a)" << std::endl;
	
	inputAndPrintInteger();
	std::cout << " opg 1b)" << std::endl;
	int number = inputInteger();
	std::cout << "Du skrev: " << number << ". ";
	
	std::cout << "opg 1c) " << std::endl;
	inputIntegersAndPrintSum();
	
	std::cout << "opg 1e) " << std::endl;
	for (int i = 10; i < 15; i++) {
		if (isOdd(i)) {
			std::cout << i << " er et oddetall." << std::endl;
		}
		else {
			std::cout << i << " er et partall." << std::endl;
		}
	}
	std::cout << "opg 1f) " << std::endl;
	
	std::cout << "Skriv inn antall sekunder: " << std::endl;
	int seconds = 0;
	std::cin >> seconds;
	std::cout << printHumanReadableTime(seconds) << std::endl;
	
	std::cout << "opg 2a) " << std::endl;

	inputIntegersUsingLoopAndPrintSum();
	*/
	/*Oppgave 2 b) Ville løst alternativet for bestemt antall med er for-loop, da dette kan bestemme hvor mange iterasjoner som er lov på en bedre måte enn en while-løkke.
	Løste det ubegrensede antallet med en while-løkke. Dette er den beste måten å ha en ubegrenset loop på.*/
	/*std::cout << "opg 2c) " << std::endl;
	inputDouble();
	std::cout << "opg 2d) " << std::endl;
	nokToEuro();
	*/
	
}
