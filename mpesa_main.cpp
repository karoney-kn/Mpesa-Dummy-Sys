#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <csignal>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

void banner_top()
{
	cout<<"=================================================== \n"
		<<"\n"
		<<"	┌══════════════════════════════┐ \n"
   		<<"	█                              █ \n"
   		<<"	█    M-PESA™    >>>>           █ \n"
    	<<"	█                              █ \n"
    	<<"	└══════════════════════════════┘ \n"
    	<<"\n"
    	<<"=================================================== \n"

        <<"    @ Karoney K. Noah ᴿ           \n"
        <<"    @ Collins Kipchumba           \n"
        <<"    @ Timothy Ng'ang'a            \n";

}

void clearscreen() {
    system("clear");
}
void sys_menu_exit() {
    pid_t pid = getpid();
    cout << "My PID: " << pid << endl;
    cout << "Sending SIGINT: Exiting program ..." << endl;
    sleep(1);
    clearscreen();
    kill(pid, SIGINT); 
    cout << "Exit Process Failed" << endl;
}
void admin_home_menu(){
    cout << "\n     Admin | Home\n------------------------------------------\n"<<endl;
    cout << "   1) Account Management System" << endl;
    cout << "   2) Payment Systems" << endl;
    cout << "   0) exit\n" << endl;
    cout << "   \n"<<endl;

}

/* 
    
=========== [Admin Accounts] ==============================

*/
void agent_user_common_personal_details()
{
    try {

        std:string first_name,middle_name,last_name; 
        int phone_number,national_id;
        cout << "First Name: ";
        cin >> first_name;
        cout << "Middle Name: ";
        cin >> middle_name;
        cout << "Last Name: ";
        cin >> last_name;
        cout << "Phone Number: ";
        cin >> phone_number;
        cout << "National ID: ";
        cin >> national_id;
        
    }

    catch (...) {
        cout << "\n[X] Invalid Input\n";
}

}
void add_agent()
{   
    banner_top();
    cout << "\n     Admin | Add Agent\n------------------------------------------\n"<<endl;
    agent_user_common_personal_details();
    clearscreen();
}

void add_user()
{
    banner_top();
    cout << "\n     Admin | Add User\n------------------------------------------\n"<<endl;
    agent_user_common_personal_details();
    clearscreen();
}

void admin_acc_creation()
{

    string input;
    int option;

    unordered_map<string, int> inputMap = {
        {"add agent", 1},{"1", 1},
        {"add user", 2},{"2", 2},
        {"exit", 0},{"0", 0}

    };

    while (true) {
        banner_top();
        cout << "\n     Admin | Account Creation\n-------------------------------------\n" << endl;
        cout << "   1) Add Agent" << endl;
        cout << "   2) Add User" << endl;
        cout << "   0) exit\n" << endl;
        cout << "[Accounts Creation Menu] Enter selection >>> ";
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        option = inputMap.count(input) ? inputMap[input] : -1;

        switch (option) {
            case 1:
                clearscreen();
                add_agent();
                break;
            case 2:
                clearscreen();
                add_user();
                break;
            case 0:
                sys_menu_exit();
                break;
                
            default:
                cout << "\n[X] Invalid selection\n"
                     << " Please enter a valid option on menu above\n";
                sleep(3);
                clearscreen();
                break;
        }
    }
}

void admin_acc_magement_banner(){
    string input;
    int option;

    unordered_map<string, int> inputMap = {
        {"account creation", 1},{"1", 1},
        {"accounts deletion", 2},{"2", 2},
        {"accounts list", 3},{"3", 3},
        {"exit", 0},{"0", 0}

    };

    while (true) {
        banner_top();
        cout << "\n     Admin | Account Management\n-------------------------------------\n" << endl;
        cout << "   1) Account Creation" << endl;
        cout << "   2) Account Deletion" << endl;
        cout << "   3) User/Info Service" << endl;
        cout << "   0) exit\n" << endl;
        cout << "[Accounts Menu] Enter selection >>> ";
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        option = inputMap.count(input) ? inputMap[input] : -1;

        switch (option) {
            case 1:
                clearscreen();
                admin_acc_creation();
                break;
            case 2:
                clearscreen();
                cout<<"Acc Deletion"<<endl; // <-- Add Acc Deletion function here
                break;
            case 3:
                clearscreen();
                cout<<"Acc List"<<endl; // <-- Add Acc List function here
                break;

            case 0:
                sys_menu_exit();
                break;
                
            default:
                cout << "\n[X] Invalid selection\n"
                     << " Please enter a valid option on menu above\n";
                sleep(3);
                clearscreen();
                break;
        }
    }
}

/* 
    
=========== [Admin Accounts] ==============================

*/
void admin_payment_banner(){
    cout << "\n 	Admin | Payment System \n-------------------------------------\n" << endl;
    cout << "	1) Wire Transfer System" << endl;
    cout << "	2) P2P Payment Service" << endl;
    cout << "	3) Card Payment Processor" << endl;
    cout << "	0) exit\n" << endl;
}


int main()
{
    

    string input;
    int option;
    unordered_map<string, int> inputMap = {
        {"accounts", 1},{"1", 1},
        {"payments", 2},{"2", 2},
        {"exit", 0},{"0", 0}

    };

    while (true) {
        banner_top();
        admin_home_menu();
        cout << "[Main Menu] Enter selection >>> ";
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        option = inputMap.count(input) ? inputMap[input] : -1;

        switch (option) {
            case 1:
                clearscreen();
                admin_acc_magement_banner();
                break;
            case 2:
                clearscreen();
                admin_payment_banner();
                break;

            case 0:

                sys_menu_exit();
                break;
                
            default:
                cout << "\n[X] Invalid selection\n"
                     << " Please enter a valid option on menu above\n";
                sleep(3);
                clearscreen();
                break;
        }
    }

    return 0;

	
}
