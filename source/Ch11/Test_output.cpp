#include "std_lib_facilities.h"

int main()
{
	const int birth_year=2001;
	const int age=19;

	cout<<showbase;
	cout<<"Birth year:\t"<<birth_year<<"\t(decimal)\n"
	<<hex<<"Birth year:\t"<<birth_year<<"\t(hexadecimal)\n"
	<<oct<<"Birth year:\t"<<birth_year<<"\t(octa)\n"<<endl;

	//cout<<age<<endl;   Még octa-ra volt állítva!
	cout<<"Age: "<<dec<<age<<endl<<endl;

	
	int a=0, b=0, c=0, d=0;

	cin>>a>>oct>>b>>hex>>c>>d;

	cout<<endl<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\n';


	cout<<noshowbase<<dec;

	cout<<endl<<1234567.89<<"\t(defaultfloat)\n"<<fixed<<1234567.89<<"\t(fixed)\n"<<scientific<<1234567.89<<"\t(scientific)\n"<<endl;


	cout<<'|'<<setw(11)<<"Pap"<<'|'<<setw(11)<<"András"<<'|'<<setw(17)<<"+36 30 000 0000"<<'|'<<setw(18)<<"Bandi@mail.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Bene"<<'|'<<setw(11)<<"György"<<'|'<<setw(17)<<"+36 30 111 1111"<<'|'<<setw(18)<<"Gyuri@mail.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Fodor"<<'|'<<setw(11)<<"Tamás"<<'|'<<setw(17)<<"+36 30 222 2222"<<'|'<<setw(18)<<"Tomi@mail.com"<<"|\n";
	cout<<'|'<<setw(12)<<"Páll"<<'|'<<setw(11)<<"Donát"<<'|'<<setw(17)<<"+36 30 333 3333"<<'|'<<setw(19)<<"Donát@mail.com"<<"|\n";
	cout<<'|'<<setw(12)<<"Erdős"<<'|'<<setw(11)<<"Gellért"<<'|'<<setw(17)<<"+36 30 444 4444"<<'|'<<setw(19)<<"Gellért@mail.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Bojti"<<'|'<<setw(10)<<"Levente"<<'|'<<setw(17)<<"+36 30 555 5555"<<'|'<<setw(18)<<"Levi@mail.com"<<"|\n";
	cout<<'|'<<setw(12)<<"Karácsony"<<'|'<<setw(10)<<"Bence"<<'|'<<setw(17)<<"+36 30 666 6666"<<'|'<<setw(18)<<"Bence@mail.com"<<"|\n";
}