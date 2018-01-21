#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>

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
	std::cin >> input;
	
	std::cout << "Du skrev inn: " << input << std::endl;
	return input;
}


int main() {
	/*
	std::cout << " opg 1a)" << std::endl;
	
	inputAndPrintInteger();
	std::cout << " opg 1b)" << std::endl;
	int number = inputInteger();
	std::cout << "Du skrev: " << number << ". ";	
	std::cout << "opg 1c) " << std::endl;	inputIntegersAndPrintSum();		std::cout << "opg 1e) " << std::endl;	for (int i = 10; i < 15; i++) {
		if (isOdd(i)) {
			std::cout << i << " er et oddetall." << std::endl;
		}
		else {
			std::cout << i << " er et partall." << std::endl;
		}	}	std::cout << "opg 1f) " << std::endl;
		std::cout << "Skriv inn antall sekunder: " << std::endl;
	int seconds = 0;
	std::cin >> seconds;
	std::cout << printHumanReadableTime(seconds) << std::endl;
	
	std::cout << "opg 2a) " << std::endl;
	inputIntegersUsingLoopAndPrintSum();
	*/
	//Ville løst alternativet for bestemt antall med er for-loop, da dette kan bestemme hvor mange iterasjoner som er lov på en bedre måte enn en while-løkke.
	//Løste det ubegrensede antallet med en while-løkke. Dette er den beste måten å ha en ubegrenset loop på.
	std::cout << "opg 2b) " << std::endl;
	inputDouble();
}