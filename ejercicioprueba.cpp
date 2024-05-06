 #include <iostream>
using namespace std;
int main(){
    int n=0;
    int i = 1;
    cout << "Ingrese el numero e la tabla que desea saber:";
    cin >> n;
    while (i <=10)
    {
        cout << n << " * " << i << " = " << n*i<<"\n";
      i++;
    }
   return 0; 
}