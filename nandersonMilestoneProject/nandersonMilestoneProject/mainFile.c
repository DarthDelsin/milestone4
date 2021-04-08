//include header files
#include <stdio.h>
#include <stdlib.h>

//define functions
int main();
int nes();
int ps();
int atari();
int fairchild();

//define global variables, structures, and unions
int answerChoice1;
int answerChoice2;
int answerChoice3;
int answerChoice4;
int answerChoice5;
int answerTotal = 0;
int milestones[] = { 1, 2, 3, 4 };
struct programInfo {
	char programName[50];
	char creatorName[50];
	int createdYear;
	int milestoneNumber;
} pinfo;
union classInfo {
	int classCode;
} cinfo;


/*main body of code to decide which category to play*/
int main() {

	//define local variable
	int bankChoice;
	
	//save some important information into structures and unions
	strcpy(pinfo.programName, "Video Game Quiz");
	strcpy(pinfo.creatorName, "Nathan Anderson");
	pinfo.createdYear = 2021;
	pinfo.milestoneNumber = milestones[3];
	cinfo.classCode = 310;

	//ask user which category to play
	printf("Hey! Glad you decided to play my game and get quizzed on retro video game consoles.\n\n");
	printf("What category of questions would you like to be quizzed on:\n");
	printf("** 1 = NES * 2 = PlayStation * 3 = Atari 2600 * 4 = Fairchild Channel F **\nYour choice: ");
	scanf_s("%d", &bankChoice);

	//decide which bank of questions to play based on user input
	if (bankChoice == 1) {
		nes();
	}
	else if (bankChoice == 2) {
		ps();
	}
	else if (bankChoice == 3) {
		atari();
	}
	else if (bankChoice == 4) {
		fairchild();
	}
	else {
		printf("Unknown input.\n");
		return 0;
	}
	return 0;
}

/*nes question bank in nes function*/
int nes() {
	//QUESTION 1
	//show the user question 1 and the corresponding answers
	printf("\nQuestion 1: The choice to add a D-Pad to NES controllers was inspired by which prior console?\n");
	printf("1 : Famicom\n");
	printf("2 : Atari 2600\n");
	printf("3 : Game & Watch\n");
	printf("4 : Mattel Electronic Football\n");
	printf("Your answer: ");
	//take the users answer and either update the correct-answer total, or tell them which was the correct answer
	scanf_s("%d", &answerChoice1);
	if (answerChoice1 == 3){
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 3\n");
	}

	//QUESTION 2
	printf("\nQuestion 2: The North American model of the NES was deliberately designed to resemble a Betamax since they were popular at the time.\n");
	printf("1 : True\n");
	printf("2 : False\n");
	printf("Your answer: ");
	scanf_s("%d", &answerChoice2);
	if (answerChoice2 == 2) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 2\n");
	}

	//QUESTION 3
	printf("\nQuestion 3: Which special controller was not made for the NES?\n");
	printf("1 : R.O.B\n");
	printf("2 : Famicom light gun\n");
	printf("3 : Arkanoid controller\n");
	printf("4 : Twin Tap\n");
	printf("Your answer: ");
	scanf_s("%d", &answerChoice3);
	if (answerChoice3 == 4) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 4\n");
	}

	//QUESTION 4
	printf("\nQuestion 4: The infamous Blinking Screen refers to which scenario?\n");
	printf("1 : When a cartridge is inserted and does not make a proper connection\n");
	printf("2 : When the console is connected to the TV but does not make a proper connection\n");
	printf("3 : When the controller is connected and does not make a proper connection\n");
	printf("4 : When the controller is inserted into the cartridge slot\n");
	printf("Your answer: ");
	scanf_s("%d", &answerChoice4);
	if (answerChoice4 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 5
	printf("\nQuestion 5: What color was the zapper gun before being changed to orange?\n");
	printf("1 : Grey\n");
	printf("2 : Light blue\n");
	printf("3 : Green\n");
	printf("4 : There was no change\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice5);
	//when the correct or incorrect answer is accounted for
	if (answerChoice5 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}
	//give user the amount of questions they got right and end the function
	printf("\nCongrats for finishing the quiz! Your score was %d out of 5\n\n", answerTotal);
	return 0;
}

/*playstation question bank in ps function*/
int ps() {
	//QUESTION 1
	printf("\nQuestion 1: The PlayStation was originally designed to be a CD-ROM add-on for which console?\n");
	printf("1 : SNES\n");
	printf("2 : Sega CD\n");
	printf("3 : Neo-Geo CD\n");
	printf("4 : Stellaview\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice1);
	if (answerChoice1 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 2
	printf("\nQuestion 2: According to the designer of the controller, the circle and cross symbols represent what?\n");
	printf("1 : Yes and No\n");
	printf("2 : Sun and Moon\n");
	printf("3 : Kiss and Hug\n");
	printf("4 : Point Of View and Sheet Of Paper\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice2);
	if (answerChoice2 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 3
	printf("\nQuestion 3: Which is the best-selling PlayStation game?\n");
	printf("1 : Tomb Raider\n");
	printf("2 : Crash Bandicoot\n");
	printf("3 : Final Fantasy VII\n");
	printf("4 : Gran Turismo\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice3);
	if (answerChoice3 == 4) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 4\n");
	}

	//QUESTION 4
	printf("\nQuestion 4: Who sued Sony over the name Play Station when the console started development?\n");
	printf("1 : Atari\n");
	printf("2 : Nintendo\n");
	printf("3 : Sega\n");
	printf("4 : Bandai\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice4);
	if (answerChoice4 == 2) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 2\n");
	}

	//QUESTION 5
	printf("\nQuestion 5: The iconic startup noise was comprised of how many distinct samples?\n");
	printf("1 : 3\n");
	printf("2 : 4\n");
	printf("3 : 5\n");
	printf("4 : 6\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice5);
	if (answerChoice5 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}
	//give user the amount of questions they got right
	printf("\nCongrats for finishing the quiz! Your score was %d out of 5\n\n", answerTotal);
	return 0;
}

/*atari 2600 question bank in atari function*/
int atari() {
	//QUESTION 1
	printf("\nQuestion 1: Which two 2600 games are often cited as the reasons for the crash of the American video game market in 1983?\n");
	printf("1 : Canyon Bomber and Crystal Castles\n");
	printf("2 : Pac-Man and E.T. The Extra Terrestrial\n");
	printf("3 : Breakout and Centipede\n");
	printf("4 : Adventure and Pitfall\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice1);
	if (answerChoice1 == 2) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 2\n");
	}

	//QUESTION 2
	printf("\nQuestion 2: The Atari 2600 version of Missile Command sold how many copies to result in the designer with a free turkey?\n");
	printf("1 : 30 thousand\n");
	printf("2 : 200 thousand\n");
	printf("3 : 2 million\n");
	printf("4 : 3 million\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice2);
	if (answerChoice2 == 3) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 3\n");
	}

	//QUESTION 3
	printf("\nQuestion 3: The Atari 2600 has one of the longest lifespans of any home video game system. How long did production continue before it was discontinued?\n");
	printf("1 : 10 years\n");
	printf("2 : 15 years\n");
	printf("3 : 30 years\n");
	printf("4 : 25 years\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice3);
	if (answerChoice3 == 2) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 2\n");
	}

	//QUESTION 4
	printf("\nQuestion 4: What was the nickname for the first run of the console?\n");
	printf("1 : Heavy Sixers\n");
	printf("2 : Darth Vaders\n");
	printf("3 : Heavy Hitters\n");
	printf("4 : Catridge Eaters\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice4);
	if (answerChoice4 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 5
	printf("\nQuestion 5: The controller from which other console could be plugged in to play games as normal?\n");
	printf("1 : CD-i\n");
	printf("2 : Super Famicom\n");
	printf("3 : Sega Genesis\n");
	printf("4 : Neo Geo AES\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice5);
	if (answerChoice5 == 3) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 3\n");
	}
	//give user the amount of questions they got right
	printf("\nCongrats for finishing the quiz! Your score was %d out of 5\n\n", answerTotal);
	return 0;
}

/*fairchild channel f question bank in fairchild function*/
int fairchild() {
	//QUESTION 1
	printf("\nQuestion 1: What did the F in Channel F stand for?\n");
	printf("1 : Fairchild\n");
	printf("2 : Fun\n");
	printf("3 : Function\n");
	printf("4 : Flair\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice1);
	if (answerChoice1 == 2) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 2\n");
	}

	//QUESTION 2
	printf("\nQuestion 2: The Channel F was the first console to include the ability to pause games.\n");
	printf("1 : True\n");
	printf("2 : False\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice2);
	if (answerChoice2 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 3
	printf("\nQuestion 3: The Channel F was the first console to be released with which technological innovation.\n");
	printf("1 : Microprocessor\n");
	printf("2 : 64 KB RAM\n");
	printf("3 : A 3D joystick\n");
	printf("4 : A good game\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice3);
	if (answerChoice3 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 4
	printf("\nQuestion 4: Which console was Channel F's direct competitor and utilised the innovations of the Channel F?\n");
	printf("1 : Commodore 64\n");
	printf("2 : Arcadia 2001\n");
	printf("3 : Intellivision\n");
	printf("4 : Magnavox Odyssey 2\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice4);
	if (answerChoice4 == 1) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 1\n");
	}

	//QUESTION 5
	printf("\nQuestion 5: Which company bought the rights to the Channel F and released the underwhelming Channel F System II several years later?\n");
	printf("1 : Audiosonic\n");
	printf("2 : Atari\n");
	printf("3 : Sega\n");
	printf("4 : Zircon\n");
	printf("Your answer: ");
	scanf_s("%d", & answerChoice5);
	if (answerChoice5 == 4) {
		++answerTotal;
		printf("Correct!\n");
	}
	else {
		printf("The correct answer was 4\n");
	}
	//give user the amount of questions they got right
	printf("\nCongrats for finishing the quiz! Your score was %d out of 5\n\n", answerTotal);
	return 0;
}