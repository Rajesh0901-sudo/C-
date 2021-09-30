#include<iostream>
#include<math.h>
#include<string.h> //for strcpy()
using namespace std;

    class figure
    {
    private:
        float radius, side1,side2,side3; //data members
        char shape[10];
    public:
    figure(float r) //constructor for circle
    {
        radius=r;
        strcpy(shape,"circle");
    }

    figure(float s1,float s2) //constructor for rectangle
    {
        strcpy(shape,"rectangle");
        side1=s1;
        side2=s2;
        side3=radius=0.0; //has no significance in rectangle strcpy(shape,”rectangle”);
    }

    figure (float s1, float s2, float s3) //constructor for triangle
    {
        side1=s1;
        side2=s2;
        side3=s3;
        radius=0.0;
        strcpy(shape,"triangle");
    }

    void area() //calculate area
    {
        float ar;
        if(radius==0.0)
        {
            if (side3!=0.0)
                {
                     double s=(side1+side2+side3)/2;
                    ar=sqrt (s*(s-side1)*(s-side2)*(s-side3) );
                    cout<<"\n\nArea of the "<<shape<<" is :"<<ar<<"sq.units\n";

                }
            else
                {
                   ar=side1*side2;
                    cout<<"\n\nArea of the "<<shape<<" is :"<<ar<<"sq.units\n";

                }
        }
        else
        {
            ar=3.14*radius*radius;
            cout<<"\n\nArea of the "<<shape<<" is :"<<ar<<"sq.units\n";
        }
    }
};

    int main()
    {
        figure circle(10.0); //objrct initialized using constructor
        figure rectangle(15.0,20.6);//objrct initialized using onstructor
        figure triangle(3.0, 4.0, 5.0); //objrct initialized using constructor
        circle.area();
        rectangle.area();
        triangle.area();
        return 0;
    }
