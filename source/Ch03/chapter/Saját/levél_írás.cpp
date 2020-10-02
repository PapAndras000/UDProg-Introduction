#include "std_lib_facilities.h"

int main()
{
	string first_name, friend_name, own_first_name, own_last_name;
	char friend_sex=0;
	int friend_age=0;
	
	

	
    cout<<"\n1. and 2. tasks:\nEnter the name of the person you want to write to:\n";
	cin>>first_name;
	
	cout<<"\nDear " <<first_name<< ",\nHow are you? I am fine. I miss you. I am eager to meet with you again. I hope you will keep your promise and visit us next month here, in Debrecen.\n";

	

	cout<<"\n3. task:\nEnter the name of an another friend:\n";
    cin>>friend_name;
    
    cout<<"\nDear " <<first_name<< ",\nHow are you? I am fine. I miss you. I am eager to meet with you again. I hope you will keep your promise and visit us next month here, in Debrecen. Have you seen " <<friend_name<< " lately?\n";

	

	cout<<"\n4. task:\nEnter the sex of the second friend: (enter 'f' for female and 'm' for male)\n";
	cin>>friend_sex;
	
	cout<<"\nDear " <<first_name<< ",\nHow are you? I am fine. I miss you. I am eager to meet with you again. I hope you will keep your promise and visit us next month here, in Debrecen. Have you seen " <<friend_name<< " lately? ";
	
	if(friend_sex=='f') 
		cout<<"If you see " <<friend_name<< " please ask her to call me.\n";
	if(friend_sex=='m') 
		cout<<"If you see " <<friend_name<< " please ask him to call me.\n";

	

	cout<<"\n5. and 6. tasks:\nEnter the age of your first friend:\n";
	cin>>friend_age;

	if(friend_age<=0 || friend_age>=110) simple_error("You're kidding!");
	
	cout<<"\nDear " <<first_name<< ",\nHow are you? I am fine. I miss you. I am eager to meet with you again. I hope you will keep your promise and visit us next month here, in Debrecen. Have you seen " <<friend_name<< " lately? ";
	
	if(friend_sex=='f') 
		cout<<"If you see " <<friend_name<< " please ask her to call me. ";
	if(friend_sex=='m') 
		cout<<"If you see " <<friend_name<< " please ask him to call me. ";
	
	cout<<"I hear you you just had a birthday and you are " <<friend_age<< " years old.\n";
	
	if(friend_age<12)
		cout<<"Next year you will be " <<friend_age+1<<".\n";
	if(friend_age==17)
		cout<<"Next year you will be able to vote.\n";
	if(friend_age>70)
		cout<<"I hope you enjoy your retiremenet.\n";


	cout<<"\n7. task\nEnter your full name:\n";
	cin>>own_first_name>>own_last_name;
	
	cout<<"\nDear " <<first_name<< ",\nHow are you? I am fine. I miss you. I am eager to meet with you again. I hope you will keep your promise and visit us next month here, in Debrecen. Have you seen " <<friend_name<< " lately? ";
	
	if(friend_sex=='f') 
		cout<<"If you see " <<friend_name<< " please ask her to call me. ";
	if(friend_sex=='m') 
		cout<<"If you see " <<friend_name<< " please ask him to call me. ";
	
	cout<<"I hear you you just had a birthday and you are " <<friend_age<< " years old.";
	
	if(friend_age<12)
		cout<<"Next year you will be " <<friend_age+1<<".\n";
	if(friend_age==17)
		cout<<"Next year you will be able to vote.\n";
	if(friend_age>70)
		cout<<"I hope you enjoy your retiremenet.\n";

	cout<<"Yours sincerely,"<<endl<<endl<<own_first_name<< " " <<own_last_name<<endl;
	
	return 0;
}
/*Azért irattam ki minden feladatnál az egész szöveget, 
mivel a feladatok úgy szóltak mindig, hogy "fűzzem hozzá" a szöveget és nem tudtam,
hogy most mindig ki kell iratni vagy csak a végén. Remélem így jó lesz!*/