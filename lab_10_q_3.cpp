#include<iostream>//including library 
using namespace std;
//creating class
class rectangle
{
  public:
  double length,breadth;
  double area()
    {
       return length*breadth;//returning area
    }
  double perimeter()
    {
       return (2*(length+breadth));//returning perimeter
    }
};
//main function
int main()
{
 double length1,breadth1,length2,breadth2;
    //asking user about length ,breadth
    cout<<"enter the length of the first rectangle"<<endl;
    cin>>length1;
    cout<<"enter the breadth of the first rectangle"<<endl;
    cin>>breadth1;
    cout<<"enter the length of the second rectangle"<<endl;
    cin>>length2;
    cout<<"enter the breadth of the second rectangle"<<endl;
    cin>>breadth2;
    rectangle rectangle1;
    rectangle rectangle2;
    rectangle1.length=length1;
    rectangle1.breadth=breadth1;
    rectangle2.length=length2;
    rectangle2.breadth=breadth2;
    double area1=rectangle1.area();//finding areas and perimeter of rectangle
    double perimeter1=rectangle1.perimeter();
    double area2=rectangle2.area();
    double perimeter2=rectangle2.perimeter(); 
 //output the areas and perimeter of rectangles
    cout<<"area of first rectangle = "<<area1<<endl;
    cout<<"area of second rectangle = "<<area2<<endl;
    cout<<"perimeter of first triangle = "<<perimeter1<<endl;
    cout<<"perimeter of second rectangle = "<<perimeter2<<endl;
    cout<<"have a nice day"<<endl;
 return 0;
}
