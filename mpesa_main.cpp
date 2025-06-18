#include <iostream>
#include <cstdlib>

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
    	<<"=================================================== \n";

}
void banner_bottom()
{
		cout<<"	┌───────────────────────────────────┐  \n"
			<<"	│   @ Karoney K. Noah ᴿ             │  \n"
			<<"	│   -----------------------         │  \n"
			<<"	│   @ Collins Kipchumba ᴿ           │  \n"
			<<"	└───────────────────────────────────┘  \n";

}


void admin_home_menu(){
	cout << "\n 	Admin | Home\n 	------------------------------------------\n"<<endl;
    cout << "	1) Account Management System" << endl;
    cout << "	2) Transaction Processing Engine" << endl;
    cout << "	3) Payment Systems" << endl;
    cout << "	4) Loan Management" << endl;
    cout << "	5) Monitoring"<<endl;
    cout << "	\n"<<endl;
}
void admin_acc_magement_banner(){
    cout << "\n 	Admin | Account Management\n-------------------------------------\n" << endl;
    cout << "	1) Account Creation" << endl;
    cout << "	2) User/Info Service" << endl;
    cout << "	3) Account Status Monitor" << endl;
    cout << "	10) Back" << endl;
    cout << "	0) exit\n" << endl;
}
void admin_payment_banner(){
    cout << "\n 	Admin | Payment System \n-------------------------------------\n" << endl;
    cout << "	1) Wire Transfer System" << endl;
    cout << "	2) P2P Payment Service" << endl;
    cout << "	3) Card Payment Processor" << endl;
    cout << "	10) Back" << endl;
    cout << "	0) exit\n" << endl;
}


void clearscreen() {
    system("clear");
}
int main()
{
	banner_top();
	admin_home_menu();
	banner_bottom();
}
