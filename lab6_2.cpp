#include <iostream>
#include <cmath>
using namespace std;



double deg2rad(double deg){
   double deggorad = deg *(M_PI/180.0);
   return deggorad;
}
double rad2deg(double rad){
    double radgodeg = rad *(180.0/M_PI);
    return radgodeg;
}
double findXComponent(double l1,double l2,double r1,double r2){
  double l1x,l2x;
  l1x = l1 * cos(r1);
  l2x = l2 * cos(r2);
  return l1x+l2x;

}
double findYComponent(double l1,double l2,double r1,double r2){
  double l1y,l2y;
  l1y = l1 * sin(r1);
  l2y = l2 * sin(r2);
  return l1y+l2y;
}
double pythagoras(double X,double Y){
    double Z;
    Z = sqrt(X*X+Y*Y);
    return Z;
} 

void showResult(double L,double V){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << L << "\n";
    cout << "Direction of the resultant vector (deg) = " << V << "\n";
     cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);

    return 0;
}
