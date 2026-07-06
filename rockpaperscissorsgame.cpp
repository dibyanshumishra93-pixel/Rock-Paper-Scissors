#include <iostream>
    #include <ctime>

   
    

    char playerchoice();
    char compchoice();
    void showchoice(char choice);
    void getwinner(char player, char comp);
    

    int main() {
        char player;
        char comp;
        player = playerchoice();
        std::cout << "You choose: ";
        showchoice(player);
        comp = compchoice();
         std::cout << "Computer chooses: ";
        showchoice(comp);
        getwinner(player,comp); 

        return 0;
    }

    char playerchoice() {
        char plchoice;
        do{std::cout << "ROCK-PAPER-SCISSORS GAME\n";
        std::cout << "Please input one of the following choices (only 'r','p' or 's')\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std:: cout << "Your choice: ";
        std::cin >> plchoice;
        std::cin.ignore(10000, '\n');

        if (plchoice != 'r' && plchoice != 'p' && plchoice != 's') {
            std::cout << "Please input a valid character ('r','p' or 's').\n";
        }
     }while(plchoice != 'r' && plchoice != 'p' && plchoice != 's');
        return plchoice;
        }

        char compchoice() {

        srand(time(NULL));
        int num = rand() % 3 + 1;

        switch(num) {
            case 1: return 'r';
            case 2: return 'p';
            case 3: return 's';
            default: return 'r';
        }
        
        }

        void showchoice(char choice) {
            switch(choice) {
                case 'r': std::cout << "Rock.\n";
                break;
                case 'p': std::cout << "Paper.\n";
                break;
                case 's': std::cout << "Scissors.\n";
                break;
            }
        }

        void getwinner(char player, char comp) {

            if (player == 'r' && comp == 's') {
                std::cout << "You Win!";
            }
            else if (player == 'p' && comp == 'r') {
              std::cout << "You Win!";
            }
            else if (player == 's' && comp == 'p') {
              std::cout << "You Win!";
            }
            else if (player == 'r' && comp == 'r') {
                std::cout << "Tie!";
            }
            else if (player == 'p' && comp == 'p') {
                std::cout << "Tie!";
            }
            else if (player == 's' && comp == 's') {
                std::cout << "Tie!";
            }
            else {
                std::cout << "You Lose :(";
            }
            }
            
        

    