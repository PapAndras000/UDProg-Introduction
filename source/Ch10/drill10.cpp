#include "std_lib_facilities.h"

struct Point
{
	double x;
	double y;
};

int main()
try{
	cout<<"Please enter seven points (x,y pairs)!\n";
	
	vector<Point> original_points;
	double x;
	double y;
	
	while(cin>>x>>y)
	{
		original_points.push_back(Point{x,y});

		if(original_points.size()==7) break;
	}

	//cout<<original_points.size();

	cout<<"original_points vector:\n";
	for(const auto& p : original_points)
	{
		cout<<'('<<p.x<<','<<p.y<<')'<<endl;
	}
	

	cout<<"Enter an output file name: ";
	string oname;
	cin>>oname;

	ofstream ost {oname};

	if(!ost) error ("Can't open output file, ", oname);

	for(const auto& p : original_points)
	{
		ost<<p.x<<' '<<p.y<<endl;
	}

	ost.close();


	cout<<"Enter the name of the input file you would like to open: ";
	string iname;
	cin>>iname;

	ifstream ist {iname};

	if(!ist) error ("Can't open input file, ", iname);

	vector<Point> processed_points;
	Point element;
	while(ist>>x>>y)
	{
		processed_points.push_back(Point{x,y});
	}

	
	cout<<"original_points vector:\n";
	for(const auto& p : original_points)
	{
		cout<<'('<<p.x<<','<<p.y<<')'<<endl;
	}

	cout<<"processed_points vector:\n";
	for(const auto& p : processed_points)
	{
		cout<<'('<<p.x<<','<<p.y<<')'<<endl;
	}


	if(original_points.size()!=processed_points.size()) error("Something's wrong");
	
	else
	{
		int size=original_points.size();
		for (int i=0; i<size; i++)
		{
			if ((original_points[i].x!=processed_points[i].x) || (original_points[i].y!=processed_points[i].y))
			error("Something's wrong");
		}
	}

	return 0;

} catch (runtime_error& e) {
	cout<<"Error: "<<e.what()<<endl;
	return 1;
} catch (...){
	cout<<"Some error happened\n";
	return 2;
}