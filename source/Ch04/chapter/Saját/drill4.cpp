#include "std_lib_facilities.h"

int main()
{
	vector<double> values;

	//int i1=0, i2=0;
	//int smaller=0, larger=0;
	//double d1=0, d2=0;
	//double smaller=0, larger=0;
	
	double d=0, d_change=0;
	double smallest=1000, largest=0, min=0, max=0, temporary=0;
	char stop;
	constexpr double cm_per_m=100, cm_per_inch=2.54, inch_per_feet=12;
	char unit;
	string min_unit, max_unit;
	double sum=0, number=0;

	cout<<"\nEnter a real number and a unit (c, m, i, f):\n";
	while(cin>>d>>unit)
	{
		/*cout<<"Enter two real numbers: (divided by a widespace)\n";
		cin>>d1>>d2;
		
		if(d1>d2)
		{
			larger=d1;
			smaller=d2;
			cout<<"\nThe smaller value is: "<<smaller<<" and the larger value is: "<<larger<<endl;
		}
		else if(d1<d2)
		{
			smaller=d1;
			larger=d2;
			cout<<"\nThe smaller value is: "<<smaller<<" and the larger value is: "<<larger<<endl;
		}
		else if(d1==d2)
		{
			cout<<"The numbers are equal\n";
		}
		if(larger-smaller<0.1 && larger-smaller!=0)
		{
			cout<<"The numbers are almost equal\n";
		}*/

		
		/*if(d<smallest)
		{
			smallest=d;
			cout<<smallest<<" is the smallest number so far\n";
		}
		else if(d>largest)
		{
			largest=d;
			cout<<largest<<" is the largest number so far\n";
		}*/

		switch(unit)
		{
			case 'c':
				d_change=d/cm_per_m;
				values.push_back(d_change);
				sum+=d_change;
				number++;
				if(d_change<smallest)
				{
					smallest=d_change;
					min=d;
					min_unit="cm";
					temporary=smallest;
					if(temporary>largest)
					{
						largest=temporary;
						max=d;
						max_unit="cm";
					}
				}	
				else if(d_change>largest)
				{	
					largest=d_change;
					max=d;
					max_unit="cm";
				}
				break;

			case 'i':
				d_change=d*cm_per_inch/cm_per_m;
				values.push_back(d_change);
				sum+=d_change;
				number++;
				if(d_change<smallest)
				{
					smallest=d_change;
					min=d;
					min_unit="in";
					temporary=smallest;
					if(temporary>largest)
					{
						largest=temporary;
						max=d;
						max_unit="in";
					}
				}	
				else if(d_change>largest)
				{	
					largest=d_change;
					max=d;
					max_unit="in";
				}
				break;

			case 'f':
				d_change=d*inch_per_feet*cm_per_inch/cm_per_m;
				values.push_back(d_change);
				sum+=d_change;
				number++;
				if(d_change<smallest)
				{
					smallest=d_change;
					min=d;
					min_unit="ft";
					temporary=smallest;
					if(temporary>largest)
					{
						largest=temporary;
						max=d;
						max_unit="ft";
					}
				}	
				else if(d_change>largest)
				{	
					largest=d_change;
					max=d;
					max_unit="ft";
				}
				break;

			case 'm':
				d_change=d;
				values.push_back(d_change);
				sum+=d_change;
				number++;
				if(d_change<smallest)
				{
					smallest=d_change;
					min=d;
					min_unit="m";
					temporary=smallest;
					if(temporary>largest)
					{
						largest=temporary;
						max=d;
						max_unit="m";
					}
				}	
				else if(d_change>largest)
				{	
					largest=d_change;
					max=d;
					max_unit="m";
				}
				break;

			default:
				cout<<"ERROR: illegal or no unit!\n";
				break;		
		}

		d=0;

		cout<<"\nEnter the '|' key to exit the program\n";
		cout<<"or enter a real number and a unit again (c, m, i, f):\n";

	}

	cout<<"\nThe smallest value is "<<min<<" "<<min_unit<<endl;
	cout<<"The largest value is "<<max<<" "<<max_unit<<endl;
	cout<<"The number of values is "<<number<<endl;
	cout<<"The sum of values is "<<sum<<" m\n";

	cout<<"\nThe values converted into meter in increasing order:\n";
	sort(values);
	for(auto value : values)
		cout<<value<<" m\n";

	return 0;
}
/*A '//' és '/*' kifejezésekkel megjegyzésbe rakott kódrészleteket
 is bizonyos feladatok megoldásaként csináltam, amelyeket a későbbi feladatokban
 át kellett alakítani. A megjegyzésen kívüli kód a végső megoldás természetesen.*/