//
//  main.cpp
//  AreaCalculator CLI
//
//  Created by @programmerhelloworld (Francesco Maresca) on 03/03/22.
//  Copyright 2023, Francesco Maresca

#include <iostream>

using namespace std;

int main() {
    
    string choose;
    cout << "Rectangle area (rectangle), Triangle area (triangle), Square(square): " << endl;
    cin >> choose;
    
    if (choose == "rectangle"){
        
        float base;
        cout << "Insert the base: "  << endl;
        cin >> base;
        
        float height;
        cout << "Insert the height: "  << endl;
        cin >> height;
        
        float area;
        area = base * height;
        
        cout << "Rectangle area is " << area << endl;
        
    
        
    } else if (choose == "triangle"){
       
        cout << "Choose the type of triangle: Square Triangle (squaretriangle), Scalene Triangle (scalenetriangle), Isosceles Triangle (isoscelestriangle): " << endl;
        string choosetr;
        cin >> choosetr;
        
       
        
        if (choosetr == "squaretriangle"){
            
            float cathetus1;
            cout << "Insert the first cathetus: " << endl;
            cin >> cathetus1;
            
            
            float cathetus2;
            cout << "Insert the second cathetus: " << endl;
            cin >> cathetus2;
            float area;
            
            area = (cathetus1 * cathetus2)/2;
            cout << "The square triangle's area is " << area << endl;
            
            
        } else if (choosetr == "scalenetriangle"){
            
            float cathetus1;
            cout << "Insert the first cathetus: " << endl;
            cin >> cathetus1;
            
            
            float cathetus2;
            cout << "Insert the second cathetus: " << endl;
            cin >> cathetus2;
            float area;
            
            area = (cathetus1 * cathetus2)/2;
            cout << "The scalene triangle's area is " << area << endl;
            
            
            
        } else if (choosetr == "isoscelestriangle"){
            
            float base;
            cout << "Insert the base: "  << endl;
            cin >> base;
            
            float height;
            cout << "Insert the height: "  << endl;
            cin >> height;
            
            float area;
            area = base * height;
            
            cout << "The isosceles triangle's area is " << area << endl;
            
            
        }
        
        
    } else if (choose == "square"){
        
        float side;
        float area;
        
        cout << "Insert the square side: " << endl;
        cin >> side;
        
        area = side * side;
        
        cout << "Area is " << area << endl;
        
        
        
    }
    
    
    
    
    
}
