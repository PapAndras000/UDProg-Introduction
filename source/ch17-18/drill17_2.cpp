#include "std_lib_facilities.h"

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

	/*My_vector(const My_vector& arg): sz(arg.sz), elem{new double[arg.sz]}
	{
		copy(arg.elem, arg.elem+arg.sz, elem);
	}*/

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

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; ++i)
	{
		os<<"The pointer points to: "<<&a[i]<<" and the value is: "<<a[i]<<endl;
	}

	return os;
}

int main()
try{

	int integer=7;
	int* p1=&integer;
	cout<<"1-2. feladat:\np1 points to: "<<p1<<" and p1's value is: "<<*p1<<endl<<endl;

	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
	cout<<"3-4. feladat:"<<endl;
	print_array(cout, p2, 7);
	cout<<endl;

	int* p3=p2;
	p2=p1;
	p2=p3;
	cout<<"5-8. feladat:\n";
	print_array(cout, p2, 7);
	cout<<endl;
	cout<<"8. feladat:\np1 points to: "<<p1<<" and p1's value is: "<<*p1<<endl<<endl;
	delete[] p2;


	int* p4= new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	int* p5= new int[10];
	for(int i=0; i<10; ++i)
	{
		p5[i]=p4[i];
	}
	cout<<"10-12. feladat:\n";
	print_array(cout, p5, 10);
	delete[] p4;
	delete[] p5;


	My_vector p6{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	My_vector p7(10);
	p7=p6;
	cout<<"\n13. feladat:\n";
	cout<<"p7's elements are:\n";
	for(int i=0; i<p7.size(); ++i)
		{
			cout<<p7.get(i)<<' ';
		}
	cout<<endl;


	return 0;

}catch (runtime_error& e) {
	cout<<"Error: "<<e.what()<<endl;
	return 1;
} catch (...){
	cout<<"Some error happened\n";
	return 2;
}