#include <iostream>
#include <thread>
#include <chrono>

using std::string;
using std::cout;
using std::endl;

void jumpSlide(int frameNum);
void Run();
void push();
void gameplay();
string hide_cursor{ "\033[?25l" };
string show_cursor{ "\033[?25h" };

void shutter();

int main() {
	int choice;

	cout << "(1) Jump and slide\n(2)Run\n(3)Push\n(4) Gameplay\n\n";
	std::cin >> choice;
	system("cls");

	if (choice == 1) {
		jumpSlide(0);
	}
	if (choice == 2) {
		Run();
	}
	if (choice == 3) {
		push();
	}
	if (choice == 4) {
		gameplay();
	}
	



	system("pause");
	return 0;
}

void shutter() {
	std::this_thread::sleep_for(std::chrono::milliseconds(250)); // CHRANGED FROM 150 TO 59
	//system("cls");
};
void jumpSlide(int frameNum) {
	while (true){
		frameNum++;
		if (frameNum == 1) {
			cout << "                       " << endl;
			cout << "                       " << endl;
			cout << "      o                " << endl;
			cout << "     /|\\               " << endl;
			cout << "     / \\               " << endl;
			shutter();
		
		};
		if (frameNum == 2) {
			cout << "       o               " << endl;
			cout << "      /|               " << endl;
			cout << "      / >              " << endl;
			cout << "                       " << endl;
			cout << "                       " << endl;
			shutter();
			

		};
		if (frameNum == 3) {
			cout << "                       " << endl;
			cout << "        \\o/            " << endl;
			cout << "         |             " << endl;
			cout << "         > >           " << endl;
			cout << "                       " << endl;
			shutter();
			
		
		};
		if (frameNum == 4) {
			cout << "                        " << endl;
			cout << "                        " << endl;
			cout << "                        " << endl;
			cout << "            \\o/         " << endl;
			cout << "             |          " << endl;
			cout << "             > >        " << endl;
			shutter();

			
			
		};
		if (frameNum == 5) {
			cout << "                            " << endl;
			cout << "                            " << endl;
			cout << "                            " << endl;
			cout << "                \\o/         " << endl;
			cout << "                 |          " << endl;
			cout << "                 > >        " << endl;
			shutter();
		};
		if (frameNum == 5) {
			cout << "                              " << endl;
			cout << "                              " << endl;
			cout << "                              " << endl;
			cout << "                  \\o/         " << endl;
			cout << "                   |          " << endl;
			cout << "                   > >        " << endl;
			shutter();
			frameNum = 0;
		};
	}



}
void Run() {
	int frameNum = 0;
	int distance = 0;
	std::string dust = " "; //empty spaces to push guy forward
	while (true) {
		frameNum++;
	
		if (frameNum == 1) {
			dust.push_back(' ');
			cout << dust << "                       " << endl;
			cout << dust << "          o            " << endl;
			cout << dust << "         (\\            " << endl;
			cout << dust << "         />            " << endl;
			shutter();


		};
		if (frameNum == 2) {
			dust.push_back(' ');
			cout << dust << "                       " << endl;
			cout << dust << "          o            " << endl;
			cout << dust << "         (\\            " << endl;
			cout << dust << "         >\\            " << endl;
			shutter();
			frameNum = 0;
		};



	}
}
void push() {
	int frameNum = 0;
	int distance = 0;
	std::string dust = " "; //empty spaces to push guy forward



	while (true) {
		frameNum++;
		distance++;
		if (distance == 90) { dust = ' '; distance = 0; }
		if (frameNum == 1) {
			dust.push_back(' ');
			cout << distance << endl << endl;
			cout << dust << "          o" << endl;
			cout << dust << "         (\\" << endl;
			cout << dust << "         />" << endl;
			shutter();


		};
		if (frameNum == 2) {
			dust.push_back(' ');
			cout << endl << endl;
			cout << dust << "          o" << endl;
			cout << dust << "         (\\" << endl;
			cout << dust << "         >\\" << endl;
			shutter();
			frameNum = 0;
		};



	}
}
void testRunCopy() {
	int frameNum = 0;
	int distance = 0;
	std::string dust = " "; //empty spaces to push guy forward



	while (true) {
		frameNum++;
		distance++;
		if (distance == 90) { dust = ' '; distance = 0; }
		if (frameNum == 1) {
			dust.push_back(' ');
			cout << distance << endl << endl;
			cout << dust << "          o" << endl;
			cout << dust << "         (\\" << endl;
			cout << dust << "         />" << endl;
			shutter();


		};
		if (frameNum == 2) {
			dust.push_back(' ');
			cout << endl << endl;
			cout << dust << "          o" << endl;
			cout << dust << "         (\\" << endl;
			cout << dust << "         >\\" << endl;
			shutter();
			frameNum = 0;
		};



	}
}






void gameplay() {

	string row_1 { "                                                                                                                                         /   )    \\   /        \\      z" };
	string row_2 { "                                                                                                                                        |   |      \\ /          \\______" };
	string row_3 { "                                                                                                                                        |   |       O            ======" };
	string row_4 { "                                             _0800800_                                                                                  |   |      / \\           ______" };
	string row_5 { "                                             088808080                                                                                   \\   )    /   \\         /      " };
	string row_6 { "                                            _080808800                                                                ________>~~o________\\_/____/_____\\_______/______" };
	string row_7 { "     o>                                     0888080088                                 o00oo                  _____ooo08080888800808808080880808/8088080\\0800080080808" };
	string row_8 { "   {(         ____800oo__ o}             __d8800808088_                               o80880o               _o088080800080008008080880800088080/080808080\\088080080880" };
	string row_9 { "   _/\\_______o0o808o080o0o|_____________o08808000880800__________>--o____o080o______o08088080o_____________oo080800800080008080080808808008008/00808080800\\08080808080" };
	string row_10{ "   8808888800880oo088o0oo08888888808888808080880080808080800880080808008008080000800080008080080800808008088880888808880088888088808808000888/0808008808008\\8008080808" };
	
	int position{ 0 };
	bool end_animation{ false };
	bool cycle{ true };
	char cage_1{ ' ' };
	char cage_2{ ' ' };

	

	while (end_animation == false) {
		cout << hide_cursor;

		for (position = 0; position < 106; position++) { //start is position = 0 or 2
			
			cycle = !cycle; // swaps between true and false wiith each loop


			/*
			if(position <= 10) 
			{ 
				row_7[position + 5] = 'o';
				row_7[position + 6] = '>';
				row_8[position + 4] = '{';
				row_8[position + 5] = '(';
				row_9[position + 5] = '/';
				row_9[position + 6] = '\\';
			
			} 
			*/
		



			cout << "_____________________________________________________________" << "  Frame: " << position << "/146" << endl;
			cout << row_1[position]
				<< row_1[position + 1]
				<< row_1[position + 2]
				<< row_1[position + 3]
				<< row_1[position + 4]
				<< row_1[position + 5]
				<< row_1[position + 6]
				<< row_1[position + 7]
				<< row_1[position + 8]
				<< row_1[position + 9]
				<< row_1[position + 10]
				<< row_1[position + 11]
				<< row_1[position + 12]
				<< row_1[position + 13]
				<< row_1[position + 14]
				<< row_1[position + 15]
				<< row_1[position + 16]
				<< row_1[position + 17]
				<< row_1[position + 18]
				<< row_1[position + 19]
				<< row_1[position + 20]
				<< row_1[position + 21]
				<< row_1[position + 22]
				<< row_1[position + 23]
				<< row_1[position + 24]
				<< row_1[position + 25]
				<< row_1[position + 26]
				<< row_1[position + 27]
				<< row_1[position + 28]
				<< row_1[position + 29]
				<< row_1[position + 30]
				<< row_1[position + 31]
				<< row_1[position + 32]
				<< row_1[position + 33]
				<< row_1[position + 34]
				<< row_1[position + 35]
				<< row_1[position + 36]
				<< row_1[position + 37]
				<< row_1[position + 38]
				<< row_1[position + 39]
				<< row_1[position + 40]
				<< row_1[position + 41]
				<< row_1[position + 42]
				<< row_1[position + 43]
				<< row_1[position + 44]
				<< row_1[position + 45]
				<< row_1[position + 46]
				<< row_1[position + 47]
				<< row_1[position + 48]
				<< row_1[position + 49]
				<< row_1[position + 50]
				<< row_1[position + 51]
				<< row_1[position + 52]
				<< row_1[position + 53]
				<< row_1[position + 54]
				<< row_1[position + 55]
				<< row_1[position + 56]
				<< row_1[position + 57]
				<< row_1[position + 58]
				<< row_1[position + 59]
				<< row_1[position + 60]
				<< endl;

			cout << row_2[position]
				<< row_2[position + 1]
				<< row_2[position + 2]
				<< row_2[position + 3]
				<< row_2[position + 4]
				<< row_2[position + 5]
				<< row_2[position + 6]
				<< row_2[position + 7]
				<< row_2[position + 8]
				<< row_2[position + 9]
				<< row_2[position + 10]
				<< row_2[position + 11]
				<< row_2[position + 12]
				<< row_2[position + 13]
				<< row_2[position + 14]
				<< row_2[position + 15]
				<< row_2[position + 16]
				<< row_2[position + 17]
				<< row_2[position + 18]
				<< row_2[position + 19]
				<< row_2[position + 20]
				<< row_2[position + 21]
				<< row_2[position + 22]
				<< row_2[position + 23]
				<< row_2[position + 24]
				<< row_2[position + 25]
				<< row_2[position + 26]
				<< row_2[position + 27]
				<< row_2[position + 28]
				<< row_2[position + 29]
				<< row_2[position + 30]
				<< row_2[position + 31]
				<< row_2[position + 32]
				<< row_2[position + 33]
				<< row_2[position + 34]
				<< row_2[position + 35]
				<< row_2[position + 36]
				<< row_2[position + 37]
				<< row_2[position + 38]
				<< row_2[position + 39]
				<< row_2[position + 40]
				<< row_2[position + 41]
				<< row_2[position + 42]
				<< row_2[position + 43]
				<< row_2[position + 44]
				<< row_2[position + 45]
				<< row_2[position + 46]
				<< row_2[position + 47]
				<< row_2[position + 48]
				<< row_2[position + 49]
				<< row_2[position + 50]
				<< row_2[position + 51]
				<< row_2[position + 52]
				<< row_2[position + 53]
				<< row_2[position + 54]
				<< row_2[position + 55]
				<< row_2[position + 56]
				<< row_2[position + 57]
				<< row_2[position + 58]
				<< row_2[position + 59]
				<< row_2[position + 60]
				<< endl;

			cout << row_3[position]
				<< row_3[position + 1]
				<< row_3[position + 2]
				<< row_3[position + 3]
				<< row_3[position + 4]
				<< row_3[position + 5]
				<< row_3[position + 6]
				<< row_3[position + 7]
				<< row_3[position + 8]
				<< row_3[position + 9]
				<< row_3[position + 10]
				<< row_3[position + 11]
				<< row_3[position + 12]
				<< row_3[position + 13]
				<< row_3[position + 14]
				<< row_3[position + 15]
				<< row_3[position + 16]
				<< row_3[position + 17]
				<< row_3[position + 18]
				<< row_3[position + 19]
				<< row_3[position + 20]
				<< row_3[position + 21]
				<< row_3[position + 22]
				<< row_3[position + 23]
				<< row_3[position + 24]
				<< row_3[position + 25]
				<< row_3[position + 26]
				<< row_3[position + 27]
				<< row_3[position + 28]
				<< row_3[position + 29]
				<< row_3[position + 30]
				<< row_3[position + 31]
				<< row_3[position + 32]
				<< row_3[position + 33]
				<< row_3[position + 34]
				<< row_3[position + 35]
				<< row_3[position + 36]
				<< row_3[position + 37]
				<< row_3[position + 38]
				<< row_3[position + 39]
				<< row_3[position + 40]
				<< row_3[position + 41]
				<< row_3[position + 42]
				<< row_3[position + 43]
				<< row_3[position + 44]
				<< row_3[position + 45]
				<< row_3[position + 46]
				<< row_3[position + 47]
				<< row_3[position + 48]
				<< row_3[position + 49]
				<< row_3[position + 50]
				<< row_3[position + 51]
				<< row_3[position + 52]
				<< row_3[position + 53]
				<< row_3[position + 54]
				<< row_3[position + 55]
				<< row_3[position + 56]
				<< row_3[position + 57]
				<< row_3[position + 58]
				<< row_3[position + 59]
				<< row_3[position + 60]
				<< endl;

			cout << row_4[position]
				<< row_4[position + 1]
				<< row_4[position + 2]
				<< row_4[position + 3]
				<< row_4[position + 4]
				<< row_4[position + 5]
				<< row_4[position + 6]
				<< row_4[position + 7]
				<< row_4[position + 8]
				<< row_4[position + 9]
				<< row_4[position + 10]
				<< row_4[position + 11]
				<< row_4[position + 12]
				<< row_4[position + 13]
				<< row_4[position + 14]
				<< row_4[position + 15]
				<< row_4[position + 16]
				<< row_4[position + 17]
				<< row_4[position + 18]
				<< row_4[position + 19]
				<< row_4[position + 20]
				<< row_4[position + 21]
				<< row_4[position + 22]
				<< row_4[position + 23]
				<< row_4[position + 24]
				<< row_4[position + 25]
				<< row_4[position + 26]
				<< row_4[position + 27]
				<< row_4[position + 28]
				<< row_4[position + 29]
				<< row_4[position + 30]
				<< row_4[position + 31]
				<< row_4[position + 32]
				<< row_4[position + 33]
				<< row_4[position + 34]
				<< row_4[position + 35]
				<< row_4[position + 36]
				<< row_4[position + 37]
				<< row_4[position + 38]
				<< row_4[position + 39]
				<< row_4[position + 40]
				<< row_4[position + 41]
				<< row_4[position + 42]
				<< row_4[position + 43]
				<< row_4[position + 44]
				<< row_4[position + 45]
				<< row_4[position + 46]
				<< row_4[position + 47]
				<< row_4[position + 48]
				<< row_4[position + 49]
				<< row_4[position + 50]
				<< row_4[position + 51]
				<< row_4[position + 52]
				<< row_4[position + 53]
				<< row_4[position + 54]
				<< row_4[position + 55]
				<< row_4[position + 56]
				<< row_4[position + 57]
				<< row_4[position + 58]
				<< row_4[position + 59]
				<< row_4[position + 60]
				<< endl;

			cout << row_5[position]
				<< row_5[position + 1]
				<< row_5[position + 2]
				<< row_5[position + 3]
				<< row_5[position + 4]
				<< row_5[position + 5]
				<< row_5[position + 6]
				<< row_5[position + 7]
				<< row_5[position + 8]
				<< row_5[position + 9]
				<< row_5[position + 10]
				<< row_5[position + 11]
				<< row_5[position + 12]
				<< row_5[position + 13]
				<< row_5[position + 14]
				<< row_5[position + 15]
				<< row_5[position + 16]
				<< row_5[position + 17]
				<< row_5[position + 18]
				<< row_5[position + 19]
				<< row_5[position + 20]
				<< row_5[position + 21]
				<< row_5[position + 22]
				<< row_5[position + 23]
				<< row_5[position + 24]
				<< row_5[position + 25]
				<< row_5[position + 26]
				<< row_5[position + 27]
				<< row_5[position + 28]
				<< row_5[position + 29]
				<< row_5[position + 30]
				<< row_5[position + 31]
				<< row_5[position + 32]
				<< row_5[position + 33]
				<< row_5[position + 34]
				<< row_5[position + 35]
				<< row_5[position + 36]
				<< row_5[position + 37]
				<< row_5[position + 38]
				<< row_5[position + 39]
				<< row_5[position + 40]
				<< row_5[position + 41]
				<< row_5[position + 42]
				<< row_5[position + 43]
				<< row_5[position + 44]
				<< row_5[position + 45]
				<< row_5[position + 46]
				<< row_5[position + 47]
				<< row_5[position + 48]
				<< row_5[position + 49]
				<< row_5[position + 50]
				<< row_5[position + 51]
				<< row_5[position + 52]
				<< row_5[position + 53]
				<< row_5[position + 54]
				<< row_5[position + 55]
				<< row_5[position + 56]
				<< row_5[position + 57]
				<< row_5[position + 58]
				<< row_5[position + 59]
				<< row_5[position + 60]
				<< endl;

			cout << row_6[position]
				<< row_6[position + 1]
				<< row_6[position + 2]
				<< row_6[position + 3]
				<< row_6[position + 4]
				<< row_6[position + 5]
				<< row_6[position + 6]
				<< row_6[position + 7]
				<< row_6[position + 8]
				<< row_6[position + 9]
				<< row_6[position + 10]
				<< row_6[position + 11]
				<< row_6[position + 12]
				<< row_6[position + 13]
				<< row_6[position + 14]
				<< row_6[position + 15]
				<< row_6[position + 16]
				<< row_6[position + 17]
				<< row_6[position + 18]
				<< row_6[position + 19]
				<< row_6[position + 20]
				<< row_6[position + 21]
				<< row_6[position + 22]
				<< row_6[position + 23]
				<< row_6[position + 24]
				<< row_6[position + 25]
				<< row_6[position + 26]
				<< row_6[position + 27]
				<< row_6[position + 28]
				<< row_6[position + 29]
				<< row_6[position + 30]
				<< row_6[position + 31]
				<< row_6[position + 32]
				<< row_6[position + 33]
				<< row_6[position + 34]
				<< row_6[position + 35]
				<< row_6[position + 36]
				<< row_6[position + 37]
				<< row_6[position + 38]
				<< row_6[position + 39]
				<< row_6[position + 40]
				<< row_6[position + 41]
				<< row_6[position + 42]
				<< row_6[position + 43]
				<< row_6[position + 44]
				<< row_6[position + 45]
				<< row_6[position + 46]
				<< row_6[position + 47]
				<< row_6[position + 48]
				<< row_6[position + 49]
				<< row_6[position + 50]
				<< row_6[position + 51]
				<< row_6[position + 52]
				<< row_6[position + 53]
				<< row_6[position + 54]
				<< row_6[position + 55]
				<< row_6[position + 56]
				<< row_6[position + 57]
				<< row_6[position + 58]
				<< row_6[position + 59]
				<< row_6[position + 60]
				<< endl;

			cout << row_7[position]
				<< row_7[position + 1]
				<< row_7[position + 2]
				<< row_7[position + 3]
				<< row_7[position + 4]
				<< row_7[position + 5]
				<< row_7[position + 6]
				<< row_7[position + 7]
				<< row_7[position + 8]
				<< row_7[position + 9]
				<< row_7[position + 10]
				<< row_7[position + 11]
				<< row_7[position + 12]
				<< row_7[position + 13]
				<< row_7[position + 14]
				<< row_7[position + 15]
				<< row_7[position + 16]
				<< row_7[position + 17]
				<< row_7[position + 18]
				<< row_7[position + 19]
				<< row_7[position + 20]
				<< row_7[position + 21]
				<< row_7[position + 22]
				<< row_7[position + 23]
				<< row_7[position + 24]
				<< row_7[position + 25]
				<< row_7[position + 26]
				<< row_7[position + 27]
				<< row_7[position + 28]
				<< row_7[position + 29]
				<< row_7[position + 30]
				<< row_7[position + 31]
				<< row_7[position + 32]
				<< row_7[position + 33]
				<< row_7[position + 34]
				<< row_7[position + 35]
				<< row_7[position + 36]
				<< row_7[position + 37]
				<< row_7[position + 38]
				<< row_7[position + 39]
				<< row_7[position + 40]
				<< row_7[position + 41]
				<< row_7[position + 42]
				<< row_7[position + 43]
				<< row_7[position + 44]
				<< row_7[position + 45]
				<< row_7[position + 46]
				<< row_7[position + 47]
				<< row_7[position + 48]
				<< row_7[position + 49]
				<< row_7[position + 50]
				<< row_7[position + 51]
				<< row_7[position + 52]
				<< row_7[position + 53]
				<< row_7[position + 54]
				<< row_7[position + 55]
				<< row_7[position + 56]
				<< row_7[position + 57]
				<< row_7[position + 58]
				<< row_7[position + 59]
				<< row_7[position + 60]
				<< endl;

			cout << row_8[position]
				<< row_8[position + 1]
				<< row_8[position + 2]
				<< row_8[position + 3]
				<< row_8[position + 4]
				<< row_8[position + 5]
				<< row_8[position + 6]
				<< row_8[position + 7]
				<< row_8[position + 8]
				<< row_8[position + 9]
				<< row_8[position + 10]
				<< row_8[position + 11]
				<< row_8[position + 12]
				<< row_8[position + 13]
				<< row_8[position + 14]
				<< row_8[position + 15]
				<< row_8[position + 16]
				<< row_8[position + 17]
				<< row_8[position + 18]
				<< row_8[position + 19]
				<< row_8[position + 20]
				<< row_8[position + 21]
				<< row_8[position + 22]
				<< row_8[position + 23]
				<< row_8[position + 24]
				<< row_8[position + 25]
				<< row_8[position + 26]
				<< row_8[position + 27]
				<< row_8[position + 28]
				<< row_8[position + 29]
				<< row_8[position + 30]
				<< row_8[position + 31]
				<< row_8[position + 32]
				<< row_8[position + 33]
				<< row_8[position + 34]
				<< row_8[position + 35]
				<< row_8[position + 36]
				<< row_8[position + 37]
				<< row_8[position + 38]
				<< row_8[position + 39]
				<< row_8[position + 40]
				<< row_8[position + 41]
				<< row_8[position + 42]
				<< row_8[position + 43]
				<< row_8[position + 44]
				<< row_8[position + 45]
				<< row_8[position + 46]
				<< row_8[position + 47]
				<< row_8[position + 48]
				<< row_8[position + 49]
				<< row_8[position + 50]
				<< row_8[position + 51]
				<< row_8[position + 52]
				<< row_8[position + 53]
				<< row_8[position + 54]
				<< row_8[position + 55]
				<< row_8[position + 56]
				<< row_8[position + 57]
				<< row_8[position + 58]
				<< row_8[position + 59]
				<< row_8[position + 60]
				<< endl;
			cout << row_9[position]
				<< row_9[position + 1]
				<< row_9[position + 2]
				<< row_9[position + 3]
				<< row_9[position + 4]
				<< row_9[position + 5]
				<< row_9[position + 6]
				<< row_9[position + 7]
				<< row_9[position + 8]
				<< row_9[position + 9]
				<< row_9[position + 10]
				<< row_9[position + 11]
				<< row_9[position + 12]
				<< row_9[position + 13]
				<< row_9[position + 14]
				<< row_9[position + 15]
				<< row_9[position + 16]
				<< row_9[position + 17]
				<< row_9[position + 18]
				<< row_9[position + 19]
				<< row_9[position + 20]
				<< row_9[position + 21]
				<< row_9[position + 22]
				<< row_9[position + 23]
				<< row_9[position + 24]
				<< row_9[position + 25]
				<< row_9[position + 26]
				<< row_9[position + 27]
				<< row_9[position + 28]
				<< row_9[position + 29]
				<< row_9[position + 30]
				<< row_9[position + 31]
				<< row_9[position + 32]
				<< row_9[position + 33]
				<< row_9[position + 34]
				<< row_9[position + 35]
				<< row_9[position + 36]
				<< row_9[position + 37]
				<< row_9[position + 38]
				<< row_9[position + 39]
				<< row_9[position + 40]
				<< row_9[position + 41]
				<< row_9[position + 42]
				<< row_9[position + 43]
				<< row_9[position + 44]
				<< row_9[position + 45]
				<< row_9[position + 46]
				<< row_9[position + 47]
				<< row_9[position + 48]
				<< row_9[position + 49]
				<< row_9[position + 50]
				<< row_9[position + 51]
				<< row_9[position + 52]
				<< row_9[position + 53]
				<< row_9[position + 54]
				<< row_9[position + 55]
				<< row_9[position + 56]
				<< row_9[position + 57]
				<< row_9[position + 58]
				<< row_9[position + 59]
				<< row_9[position + 60]
				<< endl;
			cout << row_10[position]
				<< row_10[position + 1]
				<< row_10[position + 2]
				<< row_10[position + 3]
				<< row_10[position + 4]
				<< row_10[position + 5]
				<< row_10[position + 6]
				<< row_10[position + 7]
				<< row_10[position + 8]
				<< row_10[position + 9]
				<< row_10[position + 10]
				<< row_10[position + 11]
				<< row_10[position + 12]
				<< row_10[position + 13]
				<< row_10[position + 14]
				<< row_10[position + 15]
				<< row_10[position + 16]
				<< row_10[position + 17]
				<< row_10[position + 18]
				<< row_10[position + 19]
				<< row_10[position + 20]
				<< row_10[position + 21]
				<< row_10[position + 22]
				<< row_10[position + 23]
				<< row_10[position + 24]
				<< row_10[position + 25]
				<< row_10[position + 26]
				<< row_10[position + 27]
				<< row_10[position + 28]
				<< row_10[position + 29]
				<< row_10[position + 30]
				<< row_10[position + 31]
				<< row_10[position + 32]
				<< row_10[position + 33]
				<< row_10[position + 34]
				<< row_10[position + 35]
				<< row_10[position + 36]
				<< row_10[position + 37]
				<< row_10[position + 38]
				<< row_10[position + 39]
				<< row_10[position + 40]
				<< row_10[position + 41]
				<< row_10[position + 42]
				<< row_10[position + 43]
				<< row_10[position + 44]
				<< row_10[position + 45]
				<< row_10[position + 46]
				<< row_10[position + 47]
				<< row_10[position + 48]
				<< row_10[position + 49]
				<< row_10[position + 50]
				<< row_10[position + 51]
				<< row_10[position + 52]
				<< row_10[position + 53]
				<< row_10[position + 54]
				<< row_10[position + 55]
				<< row_10[position + 56]
				<< row_10[position + 57]
				<< row_10[position + 58]
				<< row_10[position + 59]
				<< row_10[position + 60]
				<< endl;
	
			cout << "_____________________________________________________________";
			
			shutter();

			// practice dialogue
			if (position == 70) {
				int choice;

				cout << show_cursor;
				cout << "\n\n\nMake a choice:\n\n(1) Option 1\n(2) Option 2\n\n";

				std::cin >> choice;
				switch (choice) {
				case 1:
					cout << "\n\nYou picked one";
					break;
				case 2:
					cout << "\n\nYou picked two";
					break;
				}
				cout << hide_cursor;
				system("pause");

			}

			if (position < 105) { system("cls"); }

		}
		end_animation = true;
		system("pause");
	}


}





/* frame template
if (frameNum == x) {
			cout << "                       " << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			//wait
			system("cls");
		};

*/