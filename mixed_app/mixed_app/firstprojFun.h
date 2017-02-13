#pragma once


int fScan() {
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
		"Es Blieben noch %i \x81\x62rig\n", kinder, erhalten, rest);
	return 0;
}
