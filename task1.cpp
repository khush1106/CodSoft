//Guess a random number
#include <iostream>
using namespace std;
#include <iostream>

int main() {
    cout<<"\n\t\t----------Welcome to theNumber Guessing Game----------\n"<<endl;
	cout<<"\n\t\t-->>You will have to guess a number between 1 to 100.\n"<<endl;
    //pattern to start game
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########" << std::endl;

    std::cout << "#          ";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "#          ";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "#          ";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "###########";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "###########";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "          #";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#      #   ";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "          #";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#       #  ";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "          #";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#        # ";
    std::cout << "    ";
    std::cout << "     #     " << std::endl;

    std::cout << "###########";
    std::cout << "    ";
    std::cout << "     #     ";
    std::cout << "    ";
    std::cout << "#         #";
    std::cout << "    ";
    std::cout << "#         # ";
    std::cout << "    ";
    std::cout << "    #     " << std::endl;
//main code
   int random = ( rand() %100) + 1;
   int i;
    cout<<"\n\t\t-->>You will get a total of 7 chances<<--\t\t\n"<<endl;
     cout<<"\n\t\t-->>ENTER A NUMBER<<--\t\t\n"<<endl;
    for(i=1;i<=7;i++)
    {
        int num;
        cin>>num;
        if(num==random)
        { 
    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "#     #" << std::endl;

    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "##    #" << std::endl;

    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "# #   #" << std::endl;

    std::cout << "#  #  #";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "#  #  #" << std::endl;

    std::cout << "# # # #";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "#   # #" << std::endl;

    std::cout << "##   ##";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "#    ##" << std::endl;

    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#";
    std::cout << "    ";
    std::cout << "#     #" << std::endl;
    return 0;
}
else if(num<random)
cout<<"\n\t\t THE NUMBER YOU HAVE GUESSED IS SMALLER THAN THE NUMBER\t\t\n"<<endl;
else
cout<<"\n\t\t THE NUMBER YOU HAVE GUESSED IS LARGER THAN THE NUMBER\t\t\n"<<endl;  
    }
    if(i>7)
    {
        cout<<"\n\t\t CHANCES OVER\t\t\n";
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "#######";
    std::cout << "    ";
    std::cout << "#######";
    std::cout << "    ";
    std::cout << "#######" << std::endl;

    //2
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "   #   " << std::endl;

    //3
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "   #   " << std::endl;

    //4
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "#######";
    std::cout << "    ";
    std::cout << "   #   " << std::endl;

    //5
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "      #";
    std::cout << "    ";
    std::cout << "   #   " << std::endl;

    //6
    std::cout << "#      ";
    std::cout << "    ";
    std::cout << "#     #";
    std::cout << "    ";
    std::cout << "      #";
    std::cout << "    ";
    std::cout << "   #   " << std::endl;

    //7
    std::cout << "#######";
    std::cout << "    ";
    std::cout << "#######";
    std::cout << "    ";
    std::cout << "#######";
    std::cout << "    ";
    std::cout << "   #   " << std::endl;
    }
    return 0;
}
