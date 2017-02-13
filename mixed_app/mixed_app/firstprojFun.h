#pragma once


int fScan() {

	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0.00;
	printf("---------- Scan Berechnung ----------\n");
	
	printf("Bitte geben die die DPI ein: \n");
	scanf("%i", &dpi);

	printf("Bittegeben die die Farbtiefe ein: \n");
	scanf("%i", &farbtiefe);

	printf("Bittegeben die die Breite in cm ein: \n");
	scanf("%f", &breite);

	printf("Bittegeben die die Hoehe in cm ein: \n");
	scanf("%f", &hoehe);
	printf("---------- Ausgabe ----------\n");
	groesse = (((breite * dpi) / 2.54 * (hoehe * dpi) / 2.54) * farbtiefe) / 8 / 1024 / 1024;
	
	printf("Die zu erwartende Dateigr\x94\xE1\e entspricht\n %.4lf MIB\n",groesse);
	
	return 0;
}




int fKinder(void) {

	int kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("Willkommen zum Kindergeburtstag\n");
	printf("Bitte geben die die Anzahl der Kinder ein\n");

	scanf("%i", &kinder);


	printf("Wie viele \x9a\x62\eraschungseier hast du, ich hoffe mehr als kinder\nsonst gibt es Streit\n");

	scanf("%i", &eier);

	erhalten = eier / kinder;

	rest = eier%kinder;

	printf("Es wurden %i Kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier erhalten\n"
		"Es blieben noch %i \x81\x62rig\n", kinder, erhalten, rest);
	return 0;
}
