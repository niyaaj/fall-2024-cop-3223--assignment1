#include<stdio.h>
#include<math.h> // for sqrt

#define PI  3.14159

//Helper Function to ask for user input(DRY Principle)
double askForUserInput(){
    double value;
    scanf("%lf", &value); //reading user input as double value
    return value;
}

// Fucntions to calculate ditance bwetween two points
double calculateDistance(){
    double x1, y1, x2, y2, distance;

    printf("Enter x1:"); 
    x1 = askForUserInput();

     printf("Enter y1:"); 
    y1= askForUserInput();
    
     printf("Enter x2:"); 
    x2= askForUserInput();
    
     printf("Enter y2:"); 
    y2= askForUserInput();

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    // Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;   
}

// Function to calculate perimeter
double calculatePerimeter() {
    double distance = calculateDistance();  // Reuse distance function
    double perimeter ;
    perimeter = 2 *  distance * PI;  // Assuming perimeter as 2 times distance

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 3.0; 
}

// Function to calculate area
double calculateArea() {
    double distance = calculateDistance();  // Reuse distance function by calling it with parentheses
    double area=  distance * distance * PI;  // Assuming area as square of distance

    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 3.0;  // Assuming difficulty scale (change as per your experience)
}

// Function to calculate width
double calculateWidth() {
    double distance = calculateDistance();  // Reuse distance function by calling it with parentheses
    double width = distance;  // Assuming width to be same as distance

    printf("The width of the city encompassed by your request is %.2f\n", width);
    return 2.5;  // Assuming difficulty scale (change as per your experience)
}

// Function to calculate height
double calculateHeight() {
    double distance = calculateDistance();  // Reuse distance function by calling it with parentheses
    double height = distance;  // Assuming height to be same as distance

    printf("The height of the city encompassed by your request is %.2f\n", height);
    return 2.0;  // Assuming difficulty scale (change as per your experience)
}

int main(int argc, char **argv){ 

     calculateDistance();   
     calculatePerimeter();
     calculateArea();
     calculateWidth();
     calculateHeight();

    return 0;
}