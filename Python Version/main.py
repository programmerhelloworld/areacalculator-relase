# Area Calculator, Python CLI Version
#Copyright (C) 2023 Francesco Maresca (@programmerhelloworld). All rights reserved.

choose = input("Rectangle area (rectangle), Triangle area (triangle), Square(square): ")

if choose == "rectangle":

#rectangle area (done)

    base = float(input("Insert the base: "))
    height = float(input("Insert the height: "))

    area = base * height
    areastr = str(area)

    print("Rectangle area is " + areastr)

elif choose == "triangle":




    trchoose = input("Choose the type of triangle: Square Triangle (squaretriangle), Scalene Triangle (scalenetriangle), Isosceles Triangle (isoscelestriangle): ")

    #square triangle (done)
    if trchoose == "squaretriangle":
           cathetus1 = float(input("Insert the first cathetus: "))
           cathetus2 = float(input("Insert the second cathetus: "))
           area = (cathetus1 * cathetus2)/2
           strarea = str(area)
           print("The square triangle's area is " + strarea)

    #scalene triangle (done)
    elif trchoose == "scalenetriangle":
           base = float(input("Insert the first cathetus: "))
           height = float(input("Insert the second cathetus: "))
           
           area = (base*height)/2
           strarea = str(area)
           print("The scalene triangle's area is " + strarea)

#isoscele triangle (done)
    elif trchoose == "isoscelestriangle":
           base = float(input("Insert the base: "))
           height = float(input("Insert the height: "))
           
           area = (base*height)/2
           strarea = str(area)
           print("The isosceles triangle's area is " + strarea)




elif choose == "square": 
       # square (done)

    side = float(input("Insert the square side: "))

    area = side * side
    areastr = str(area)

    print("Area is " + areastr)
