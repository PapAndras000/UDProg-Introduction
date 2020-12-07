#include "std_lib_facilities.h"

class My_vector
{
private:
	int sz;
	double* elem;
public:
	My_vector(int s): sz(s), elem{new double[s]}
	{
		for(int i=0; i<s; ++i)
		{
			elem[i]=0;
		}
	}
	~My_vector() {delete[] elem;}

	double get(int n) const {return elem[n];}
	void set(int n, double val) {elem[n]=val;}
	int size() const {return sz;}
};

ostream& print_array10(ostream& os, int* a)
{
	for(int i = 0; i < 10; ++i)
	{
		os << a[i] << endl;
	}

	return os;
}

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; ++i)
	{
		os << a[i] << endl;
	}

	return os;
}

My_vector* print_vector(int n)
{
	My_vector* my_vec = new My_vector(n);

	double temp=100;
	
	for(int i=0; i<n; ++i)
	{
		my_vec->set(i, temp);
		temp++;
	}

	return my_vec;
}

int main()
try{
	
	//1. feladat:

	int* a = new int[10];

	for(int i=0; i<10; ++i)
	{
		cout<<a[i]<<endl;
	}

	delete[] a;
	
	cout<<endl;

	
	//10 elemű tömb:

	int* b = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	
	print_array10(cout, b);

	delete[] b;
	
	cout<<endl;


	//11 elemű tömb:

	int* c = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};

	print_array(cout, c, 11);
	
	delete[] c;
	
	cout<<endl;


	//20 elemű tömb:

	int* d = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	
	print_array(cout, d, 20);

	delete[] d;
	
	cout<<endl;

	
	//10 elemű vektor:

	My_vector* my=print_vector(10);

	for(int i=0; i<my->size(); ++i)
	{
		cout<<my->get(i)<<endl;
	}
	
	delete my;

	cout<<endl;


	//11 elemű vektor:

	My_vector* my2=print_vector(11);

	for(int i=0; i<my2->size(); ++i)
	{
		cout<<my2->get(i)<<endl;
	}
	
	delete my2;

	cout<<endl;


	//20 elemű vektor:

	My_vector* my3=print_vector(20);

	for(int i=0; i<my3->size(); ++i)
	{
		cout<<my3->get(i)<<endl;
	}
	
	delete my3;

	cout<<endl;


	return 0;
	
}catch (runtime_error& e) {
	cout<<"Error: "<<e.what()<<endl;
	return 1;
} catch (...){
	cout<<"Some error happened\n";
	return 2;
}