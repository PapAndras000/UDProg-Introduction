/*A változókat minden feladatban újradeklaráltam
 egy valamilyen adott számmal kiegészítve, mert így egszerűbb volt*/

 #include "std_lib_facilities.h"

int task(int n)
{
	return n;
}

int main()
try {
	cout<<task(1)<<". task:\n";

	//Cout<<"Success!\n";	Hiba: cout* kis c-vel, nem nagy C-vel

	cout<<"Success!\n";

	
	cout<<task(2)<<". task:\n";

	//cout<<"Success!\n;		Hiba: Második " lemaradt

	cout<<"Success!\n";


	cout<<task(3)<<". task:\n";

	/*cout<<"Success"<<!\n"   
	
	Hiba: A '!\n' hármas előtt nincs idézőjel és jobb lenne, ha
	azon idézőjelek közé kerültek volna, ahol a "Success!" szó is van, 
	emllett még a pontosvessző is lemaradt a végéről*/

	cout<<"Success!\n";


	cout<<task(4)<<". task:\n";

	/*cout<<success<<'\n';	
	
	Hiba: A "Success!" szó nincs idézőjelbe rakva és kisbetűvel van kezdve, míg
	a '!\n' hármas idézőjelek helyett aposztrófok közé lett van rakva és jobb lenne, ha
	azon idézőjelek közé kerültek volna, ahol a "Success" szó is van*/

	cout<<"Success!\n";


	cout<<task(5)<<". task:\n";

	/*string res=7;
	vector<int> v(10);
	v[5]=res;
	cout<<"Success!\n";
	
	Hiba: A "res" változó string típusú, pedig integernek kellene lennie*/

	int res=7;
	vector<int> v(10);
	v[5]=res;
	cout<<"Success!\n";


	cout<<task(6)<<". task:\n";

	/*vector<int> v(10);
	v(5)=7;
	if(v(5)!=7) cout<<"Success!\n";
	
	Hiba: A kerekzárójelek között a vektor méretét tudjuk megadni,
	nem pedig egy adott tagjára utalunk, ezért azokat meg kell cserélni szögletes zárójelekre,
	illetve az 'if'-ben a feltétel nem helyes, hisz ha előtte megadtuk, hogy "v[5]=7", akkor
	pont, hogy a v[5]-nek egyenlőnek kell lennie 7-tel, hogy a program kiírja a 
	"Success!" szöveget*/

	vector<int> v2(10);
	v2[5]=7;
	if(v2[5]==7) cout<<"Success!\n";


	cout<<task(7)<<". task:\n";

	/*if (cond) cout<<"Success!\n";
	else cout<<"Fail!\n";
	
	Hiba: A "cond" változó nincs deklarálva és nincs megadva feltétel a "cond"-hoz az 'if'-ben*/

	int cond=1;
	if(cond==1) cout<<"Success!\n";
	else cout<<"Fail!\n";


	cout<<task(8)<<". task:\n";

	/*bool c = false;
	if(c) cout<<"Success!\n";
	else cout<<"Fail!\n";
	
	Hiba: Nincs megadva feltétel a 'c' bool típusú változóra az 'if'-ben, ezért az 'if' nem
	igazán vizsgál semmit és a program egyből az 'else'-re ugrik, amely a "Fail!" szöveget
	írja ki a "Success!" helyett*/

	bool c = false;
	if(c==false) cout<<"Success!\n";
	else cout<<"Fail!\n";


	cout<<task(9)<<". task:\n";

	/*string s = "ape";
	boo c = "fool"<s;
	if(c) cout<<"Success!\n";
	
	Hiba: A 'c' változó nem lehet bool típusú, mert akkor szöveget nem tudnánk belerakni,
	emellett a '<s' gondolom összefűzés akarna lenni, de a '<' helyett '+' kell, illetve
	nincs megadva feltétel a 'c' változóra az 'if'-ben, ezért az 'if' nem
	igazán vizsgál semmit (a bool helyett boo van írva, nem tudom szándékosan-e)*/

	string s = "ape";
	string c2 = "fool"+s;
	if(c2=="foolape") cout<<"Success!\n";


	cout<<task(10)<<". task:\n";

	/*string s = "ape";
	string c2 = "fool"+s;
	if(c2=="foolape") cout<<"Success!\n";
	
	Hiba: Az 'if'-ben egyenlő(==) helyett nem egyenlő kell(!=), így kifogja írni a program
	a "Success!" szöveget*/

	string s1 = "ape";
	if(s1!="fool") cout<<"Success!\n";
	

	cout<<task(11)<<". task:\n";

	/*string s="ape";
	if(s=="fool") cout<"Success!\n";
	
	Hiba: Az 'if'-ben egyenlő(==) helyett nem egyenlő kell(!=), így kifogja írni a program
	a "Success!" szöveget, ileltve a 'cout' után csak egy darab < van kettő helyett*/

	string s2="ape";
	if(s2!="fool") cout<<"Success!\n";


	cout<<task(12)<<". task:\n";

	/*string s="ape";
	if(s+"fool") cout<"Success!\n";

	Hiba: Nincs megadva 'if' feltételében, hogy mit kezdjen a program ezzel az összefűzés
	után létrejött stringgel és emiatt a program nem fut le, úgyhogy adni kell
	valamilyen feltételt rá, illetve a 'cout' után csak egy darab < van kettő helyett*/

	string s3="ape";
	if(s3+"fool"=="apefool") cout<<"Success!\n";


	cout<<task(13)<<". task:\n";

	/*vector<char> v(5);
	for(int i=0; 0<v.size(); ++i)
	{
		cout<<"Success!\n";
	}

	Hiba: A 'for' ciklus második argumentuma helytelen, hisz nem 0-nak kell kisebbnek lennie
	a vektor méretétől, hanem az 'i'-nek, hisz ha ott 0 van akkor végtelenszer írja ki
	a "Success!" szöveget, illetve a vektor méretének 1-nek kell lennie mert ha 5, akkor
	ötször írja ki a "Success!" szöveget, nekünk pedig csak egyszer kell,
	emiatt amúgy a vektor használata itt nem lenne szükséges, csak ha többször kiakarjuk íratni
	(A vektor típusa ennél a feladatnál ne mbefolyásol semmit, ezért úgy maradhat)*/

	vector<char> v3(1);
	for(int i=0; i<v3.size(); ++i)
	{
		cout<<"Success!\n";
	}


	cout<<task(14)<<". task:\n";

	/*vector<char> v(5);
	for(int i=0; i<=v.size(); ++i)
	{
		cout<<"Success!\n";
	}

	Hiba: A 'for' ciklus második argumentuma helytelen, hisz ha az 'i' addig növekszik míg
	kisebb vagy egyenlő a vektor méretével akkor hatszor kifogja írni a "Success!" szöveget,
	de mivel nekünk csak egyszer kell, ezért le kell venni a vektor méretét 1-re és
	és megváltoztatni a 'for' ciklus második argumentumát "i<v.size()"-ra
	(A vektor típusa ennél a feladatnál ne mbefolyásol semmit, ezért úgy maradhat)*/

	vector<char> v4(1);
	for(int i=0; i<v4.size(); ++i)
	{
		cout<<"Success!\n";
	}


	cout<<task(15)<<". task:\n";

	/*string s = "Success!\n";
	for(int i=0; i<6; ++i)
	{
		cout<<s[i];
	}

	Hiba: A 'for' ciklus második argumentumában lévő végső értéket 6-ról 9-re
	kell átírni, hogy a '!' és a '\n' is beleférjen még*/

	string s4 = "Success!\n";
	for(int i=0; i<9; ++i)
	{
		cout<<s4[i];
	}


	cout<<task(16)<<". task:\n";

	if(true) cout<<"Success!\n";
	else cout<<"Fail!\n";

	//Nincs hiba!


	cout<<task(17)<<". task:\n";

	/*int x=2000;
	char c=x;
	if(c==2000) cout<<"Successs!\n";

	Hiba: A 'c'-nek integer tipusúnak kell lennie, mert character tipusó változó
	nem lehet egy szám*/

	int x=2000;
	int c1=x;
	if(c1==2000) cout<<"Successs!\n";


	cout<<task(18)<<". task:\n";

	string s5 = "Success!\n";
	for(int i=0; i<10; ++i) 
	{		
		cout<<s5[i];
	}

	//Nincs hiba!


	cout<<task(19)<<". task:\n";

	/*vector v(5);
	for(int i=0; i<=v.size(); ++i);
		cout<<"Success!\n";

	Hiba: A vektor típusa nincs megadva, emellett a vektor méretét le kell venni egyre és 
	a 'for' ciklus második argumentumában az 'i' csak kisebb lehet a vektor méreténél, 
	nem pedig kisebb egyenlő, mivel így fogja kiírni csak egyszer a "Success!" szöveget
	(A példában a 'for' ciklus mögött votl egy ; így a ciklus lefutott magának, de nem történt
	semmi benne, ezért azt a pontosvesszőt törölni kell)*/

	vector<char> v5(1);
	for(int i=0; i<v5.size(); ++i)
		cout<<"Success!\n";


	cout<<task(20)<<". task:\n";

	/*int i=0;
	int j=9;
	while(i<10) ++j;
	if(j<i) cout<<"Succes!\n";

	Hiba: A 'while' ciklusban nem '++j'-t hanem '++i'-t kell írni*/

	int i=0;
	int j=9;
	while(i<10) ++i;
	if(j<i) cout<<"Succes!\n";


	cout<<task(21)<<". task:\n";

	/*int x=2;
	double d=5/(x-2);
	if(d==2*x1+0.5) cout<<"Succes!\n";

	Hiba: Az 'x' értéke 2, amiből 2-t levonva 0 lesz, amellyel való osztást nem értelmezzük
	(A 'd' deklarációjából a -2-t átrakhatjuk az 'if'-be, illetve az 'x' típusát változtassuk
	meg double-ra és akkor jó lesz)*/

	double x1=2;
	double d=5/x1;
	if(d==2*x1+0.5-2) cout<<"Succes!\n";


	cout<<task(22)<<". task:\n";

	/*string<char> s="Success!\n";
	for(int=0; i<=10; ++i) cout<<s[i];

	Hiba: "string<char> nem létezik, ha a "<char>" részét letöröljük, akkor működni fog*/

	string s6="Success!\n";
	for(int i=0; i<10; ++i) cout<<s6[i];


	cout<<task(23)<<". task:\n";

	/*int i=0; while(i<10) ++j;
	if(j<i) cout<<"Success!\n";

	Hiba: A 'j' nincs deklarálva és kezdőértéke sincs, ezért létre kell hozni egy 'j' változót,
	aminek 0<=j<10 (például: 0) a kezdőértéke, majd a '++j'-t át kell írni '++i'-ra*/

	int i1=0;
	int j1=0;
	while(i1<10) ++i1;
	if(j1<i1) cout<<"Success!\n";


	cout<<task(24)<<". task:\n";

	/*int x=4;
	double d=5/(x-2);
	if(d==2*x+0.5) cout<<"Success!\n";

	Hiba: Ahelyett hogy az 'if'-ben 2-vel szoroznánk, inkább vonjuk ki a 2-t és akkor jó lesz*/

	double x2=4;
	double d1=5/(x2-2);
	if(d1==x2+0.5-2) cout<<"Success!\n";


	cout<<task(25)<<". task:\n";

	//cin>>"Success!\n";	Hiba: Nem 'cin>>' hanem 'cout<<'

	cout<<"Success!\n";



	return 0;
}

catch(exception& e)
{
	cerr << "error: "<<e.what()<<'\n';
	keep_window_open();
	return 1;
}
catch(...)
{
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}