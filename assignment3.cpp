1. Take 2 integers input and print the greatest of them
       Input 1: a = 5 b = 7
	Output 1: second number 7 is the largest.
       Input 2: a = 12 b = 1
	Output 2 : first number 12 is the largest.

#include<iostream>
using namespace std;
int main () {
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;

    if (a>b)        
    {
        cout<<"first number "<<a<<" is largest";
    }
    else
    {
        cout<<"second number "<<b<<" is largest";
    }
    
    
}




// Enter the first number : 5
// Enter the second number : 7
// second number 7 is largest

// Enter the first number : 12
// Enter the second number : 1
// first number 12 is largest



----------------------------------------------------------------------------------
2.) Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.
      Input 1: radius = 4
      Output 1: Area is greater than circumference.



#include<iostream>
using namespace std;
int main () {
    float radius;
    cout<<"Enter the radius : ";
    cin>>radius;
    float pi = 3.1415;
    float area = pi*radius*radius;
    float perimeter = 2*pi*radius;

    if (area>perimeter)        
    {
        cout<<"Area = "<<area<<endl;
        cout<<"Perimeter = "<<perimeter<<endl;
        cout<<"Area is greater than perimeter";
    }
    else
    {
        cout<<"Area = "<<area<<endl;
        cout<<"Perimeter = "<<perimeter<<endl;
        cout<<"Area is not greater than perimeter";
    }
    
    
}



// Enter the radius : 4
// Area = 50.264
// Perimeter = 25.132
// Area is greater than perimeter


--------------------------------------------------------------------------------
3.) Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
      Input 1: 1976
      Output: yes
      Input 2: 2003
      Output: no



#include<iostream>
using namespace std;
int main () {
    
    int n;
    cout<<"Enter the year : ";
    cin>>n;
    
    if (n%4==0 && n%100!=0)        
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    
}


// Enter the year : 1976
// yes

// Enter the year : 2003
// no


-----------------------------------------------------------------------
4.) Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its    perimeter.
      Input 1: length = 5 breadth = 7 
      Output 1: Area is greater than perimeter.



#include<iostream>
using namespace std;
int main () {
    
    float l;
    cout<<"Enter the lenght : ";
    cin>>l;
    float b;
    cout<<"Enter the breadth : ";
    cin>>b;

    float area = l*b;
    float perimeter = (2*(l+b));

    if (area>perimeter)        
    {
        cout<<"area is greater than perimeter";
    }
    else
    {
        cout<<"area is not greater than perimeter";
    }
    
    
}


// Enter the lenght : 5
// Enter the breadth : 7
// area is greater than perimeter


-----------------------------------------------------------------------------------
5.) Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
       Input : side1 = 5 side2 = 4 side3 = 4
       Output: This is an Isosceles triangle. 



#include<iostream>
using namespace std;
int main () {
    
    float side1;
    cout<<"Enter the Side 1 : ";
    cin>>side1;
    float side2;
    cout<<"Enter the Side 2 : ";
    cin>>side2;
    float side3;
    cout<<"Enter the Side 3 : ";
    cin>>side3;

    if (side1==side2 && side1==side3)        
    {
        cout<<"This is an equilateral triangle";
    }
    else if (side1==side2 || side2==side3 || side1==side3)
    {
        cout<<"This is an Isosceles triangle";
    }
    else
    {
        cout<<"This is an scalene triangle";
    }
}


// Enter the Side 1 : 5
// Enter the Side 2 : 4
// Enter the Side 3 : 4
// This is an Isosceles triangle


----------------------------------------------------------------------------------
6.) If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring the least marks.
	Input 1: A = 23 , B = 34 , C = 71
	Output : ‘A’ has the least marks.



#include<iostream>
using namespace std;
int main () {
    
    float A;
    cout<<"Enter the 1st subject marks : ";
    cin>>A;
    float B;
    cout<<"Enter the 2nd subject marks : ";
    cin>>B;
    float C;
    cout<<"Enter the 3rd subject marks : ";
    cin>>C;

    if (A<B) {
        if (A<C)
        {
            cout<<"'A' has the least marks";
        }
        else{
            cout<<"'C' has the least marks";
        }
        
    }

    else
    {
        if (B<C)
        {
            cout<<"'B' has the least marks";
        }
        else{
            cout<<"'C' has the least marks";
        }
    }
}



// Enter the 1st subject marks : 23
// Enter the 2nd subject marks : 34
// Enter the 3rd subject marks : 71
// 'A' has the least marks


---------------------------------------------------------------------------------
7.) Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
	Input 1: 2 0
	Output 1: the point lies on the x - axis.



#include<iostream>
using namespace std;
int main () {
    float x;
    cout<<"Enter the X ordinates : ";
    cin>>x;
    float y;
    cout<<"Enter the Y ordinates : ";
    cin>>y;

    if(x==0 && y!=0){
        cout<<"this point lies on Y-axis";
    }

    else if(x!=0 && y==0){
        cout<<"this point lies on X-axis";
    }

    else
    {
        cout<<"this point is on origin";
    }
    
    
}


// Enter the X ordinates : 2
// Enter the Y ordinates : 0
// this point lies on X-axis



-------------------------------------------------------------------------------
8.) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
	Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
	Output 1: All 3 points lie on the same line.



#include<iostream>
using namespace std;
int main () {
    float x1,x2,x3,y1,y2,y3;

    cout<<"Enter x1 : ";
    cin>>x1;
    cout<<"Enter x2 : ";
    cin>>x2;
    cout<<"Enter x3 : ";
    cin>>x3;
    cout<<"Enter y1 : ";
    cin>>y1;
    cout<<"Enter y2 : ";
    cin>>y2;
    cout<<"Enter y3 : ";
    cin>>y3;
    
    float y21 = (y2-y1);
    float x21 = (x2-x1);
    float y32 = (y3-y2);
    float x32 = (x3-x2);
    float y31 = (y3-y1);
    float x31 = (x3-x1);
    
    float slope_A = (y21/x21);
    cout<<"slope of A : "<<slope_A<<endl;
    float slope_B = (y32/x32);
    cout<<"slope of B : "<<slope_B<<endl;
    float slope_C = (y31/x31);
    cout<<"slope of C : "<<slope_C<<endl;
    
    if((slope_A==slope_B) && (slope_B==slope_C) && (slope_C==slope_A)){
        cout<<"All 3 points lie on the same line.";
    }
    else
    {
        cout<<"All 3 points NOT lie on the same line.";
    }
    
}



// Enter x1 : 1
// Enter x2 : 2
// Enter x3 : 3
// Enter y1 : 1
// Enter y2 : 2
// Enter y3 : 3
// All 3 points lie on the same line.


-------------------------------------------------------------------------------
9.) Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
	Input 1: ch = ‘9’
	Output 1: digit



#include<iostream>
using namespace std;
int main () {
    char ch;
    cout<<"ch = ";
    cin>>ch;
    int ascii = (int)ch;

    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        cout<<"alphabet";
    }
    else if(ascii>=48 && ascii<=57){
        cout<<"digit";
    }
    else{
        cout<<"special character";
    }
    
}



// ch = 9
// digit



-------------------------------------------------------------------------------
10.) Predict the output of the below code:
	#include<iostream>
	using namespace std;
	int main() {
    		int a = 500, b, c;
    		if (a >= 400)
    		  b = 300;
    		  c = 200;
   		    cout << "value of b and c are respectively " << b << " and " << c;
    		return 0;
	}


// value of b and c are respectively 300 and 200
