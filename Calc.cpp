#include <iostream>
using namespace std;

int main(void) {
  cout << "Somma: 1    Differenza: 2    Moltiplicazione: 3   Divisione: 4\n" << endl ;
  int op, n1, n2 ;
  int flag = 0 ;

  do{
    if (flag > 0) {
      cout <<"\nSono accettati valori da 1 a 4" <<endl ;
    }
    cout << "Inserire il tipo di operazione: " ;
    cin >> op ;
    if (op == 1) cout << "\n-Somma-\n" << endl ;
    if (op == 2) cout << "\n-Differenza-\n" << endl ;
    if (op == 3) cout << "\n-Moltiplicazione-\n" << endl ;
    if (op == 4) cout << "\n-Divisione-\n" << endl ;
    flag++ ;
  }while (op > 4) ;

  return 0 ;
}
