#include "std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

ostream& f(ostream& os, int a[], int n)
{
	int la[10];

	for(int i=0; i<10; ++i)
	{
		la[i]=ga[i];
	}

	for(int i=0; i<10; ++i)
	{
		os<<la[i]<<endl;
	}


	cout<<endl;


	int array[n];
	int* p;
	p = array;

	for(int i=0; i<n; ++i)
	{
		p[i]=a[i];
	}

	for(int i=0; i<n; ++i)
	{
		os<<*(p+i)<<endl;
	}


	cout<<endl;


	return os;

	delete p;
}

class My_vector
{
private:
	long unsigned int sz;
	double* elem;
public:
	My_vector(int s): sz(s), elem{new double[s]}
	{
		for(int i=0; i<s; ++i)
		{
			elem[i]=0;
		}
	}

	My_vector(initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}
	{
		copy(lst.begin(), lst.end(), elem);
	}

	My_vector(const My_vector& arg): sz(arg.sz), elem{new double[arg.sz]}
	{
		copy(arg.elem, arg.elem+arg.sz, elem);
	}

	My_vector& operator=(const My_vector& arg)
	{
		double *l = new double[arg.sz];
		copy(arg.elem, arg.elem+arg.sz, l);
		delete[] elem;
		elem=l;
		sz=arg.sz;
		return *this;
	}
	
	~My_vector() {delete[] elem;}

	double get(int n) const {return elem[n];}
	void set(int n, double val) {elem[n]=val;}
	int size() const {return sz;}
};

My_vector gv{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

	ostream& f(ostream& os, My_vector v)
	{
		double n = v.size();

		My_vector lv(n);

		lv=gv;

		My_vector lv2(v);

		for(int i=0; i<lv.size(); ++i)
		{
			os<<lv.get(i)<<endl;
		}

		cout<<endl;

		for(int i=0; i<lv2.size(); ++i)
		{
			os<<lv2.get(i)<<endl;
		}

		cout<<endl;

		return os;
	}

int main()
try{

	cout<<"Prints of the arrays:\n"<<endl;


	f(cout, ga, 10);

	int aa[10] = {1, 1*2, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};

	f(cout, aa, 10);




	cout<<"Prints of the vectors:\n"<<endl;


	f(cout, gv);

	My_vector vv{1, 1*2, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};

	f(cout, vv);


	return 0;

}catch (runtime_error& e) {
	cout<<"Error: "<<e.what()<<endl;
	return 1;
} catch (...){
	cout<<"Some error happened\n";
	return 2;
}