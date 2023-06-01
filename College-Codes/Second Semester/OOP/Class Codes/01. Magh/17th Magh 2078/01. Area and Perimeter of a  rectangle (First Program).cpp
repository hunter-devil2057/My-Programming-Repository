// Program to calculate the area and perimeter of a rectangle
// Author: Manish Shiwakoti
#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

    int main()
    {
    	int breadth, length, area, perimeter;		
        cout<<" Enter the length:";
    	cin>>length;
		cout<<" Enter the breadth: ";
    	cin>>breadth;
    	area=(length*breadth);
		perimeter=2*(length+breadth);
        cout<<" The area of the rectangle is: "<< area<< " sq.cm"<<endl;
        cout<<" The perimeter of the rectangle is: "<< perimeter<<" cm"<< endl;		
        cout << endl;
        return 0;
    }

// cin reads input 
// cout displays output