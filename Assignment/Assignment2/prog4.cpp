//Create  class rectangle
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    float length,breadth;
    public:
    Rectangle(float l,float b)
    {
      l=1.0;
      b=1.0;
    }
    void setlength(float length)
    {
        if(length>0.0 && length<20.0)
        {
            this->length=length;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
        
    }
    float getlength()
    {
        return length;
    }
    void setbreadth(int breadth)
    {
        if(breadth>0.0 && breadth<20.0)
        this->breadth=breadth;
        else
        {
        cout<<"Invalid input"<<endl;
        }
        
    }
    float getbreadth()
    {
        return breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
    float area()
    {
        return length*breadth;
    }
};
int main()
{
    float length,breadth;
    cout<<"Enter length and breadth of a Recatngle "<<endl;
    cin>>length>>breadth;
    Rectangle r(length,breadth);
    r.setlength(length);
    r.setbreadth(breadth);
    cout<<"Perimeter of the rectangle is :"<<r.perimeter()<<endl;
    cout<<"Area of the rectangle is :"<<r.area()<<endl;

}
