#include<iostream>
using namespace std;
int main () {
string shapetype, calctype;
int length, width, height, perimeter, area;
    cout << "What type of shape of are you trying to calculate the dimensions of?\n";
    cin >> shapetype;

if (shapetype=="square") {
    cout << "Are you trying to find its area or perimeter?\n";
    cin >> calctype;
        if (calctype=="area") {
            cout << "Input the length and height of your square here:\n";
                cin >> length;
                cin >> width;
                    area=length * width;
                    cout << "Here is the area of your square:   " << area << endl;
        }
        else if (calctype=="perimeter") {
            cout << "Please input the length of one side of your square here:\n";
                cin >> length;
                    perimeter=length*4;
                    cout << "The perimeter of your square is:  " << perimeter << endl;


        }  
}
else if (shapetype=="triangle") {
    cout << "Are you trying to find the area or the perimeter?\n";
    cin >> calctype;
        if (calctype=="area") {
            cout << "Please inpout the base and height of your triangle\n";
                cin >> length;
                cin >> height;
                    area=(length*height/2);
                        cout << "The area of your triangle is:  " << area << endl;


        }
        else if (calctype=="perimeter") {
            cout << "Please input the 3 sides lengths to your triangle\n";
                cin >> length;
                cin >> width;
                cin >> height;
                    perimeter = (length + width + height);
                    cout << "The perimeter of your triangle is:  " << perimeter << endl;


        }


}
else if (shapetype=="Circle") {
 cout << "Are you trying to find the area or the perimeter?\n";
    cin >> calctype;
 if (calctype=="area") {
            cout << "Please inpout the radius of your circle\n";
                cin >> length;
                    area=(3.14*length^2);
                        cout << "The area of your circle is:  " << area << endl;


        }
        else if (calctype=="perimeter") {
            cout << "Please input the radius of your circle\n";
                cin >> length;
                    perimeter=(2*3.14*length)

                    cout << "The perimeter of your triangle is:  " << perimeter << endl;



}
}