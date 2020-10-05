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

//Somma
  if (op == 1) {
    cout << "Inserisci i due numeri da Sommare: "<< endl ;
    cout << "Primo numero: " ;
    cin >> n1 ;
    cout << "Secondo numero: " ;
    cin >> n2 ;
    op = n1 + n2 ;
    cout << "\n" << n1 << " + " << n2 << " = " << op ;
  }

//Differenza
  if (op == 2) {
    cout << "Inserisci i due numeri da Sottrarre: "<< endl ;
    cout << "Primo numero: " ;
    cin >> n1 ;
    cout << "Secondo numero: " ;
    cin >> n2 ;
    op = n1 - n2 ;
    cout << "\n" << n1 << " - " << n2 << " = " << op ;
  }

//Moltiplicazione
  if (op == 3) {
    cout << "Inserisci i due numeri da Moltiplicare: "<< endl ;
    cout << "Primo numero: " ;
    cin >> n1 ;
    cout << "Secondo numero: " ;
    cin >> n2 ;
    op = n1 * n2 ;
    cout << "\n" << n1 << " x " << n2 << " = " << op ;
  }

//Divisione
  if (op == 4) {
    float res = 0 ;
    cout << "Inserisci i due numeri da Moltiplicare: "<< endl ;
    cout << "Primo numero: " ;
    cin >> n1 ;
    cout << "Secondo numero: " ;
    cin >> n2 ;
    op = n1 / n2 ;
    res = n1 % n2  ;
    res = res / n2 ;
    res = res + op ;
    cout << "\n" << n1 << " / " << n2 << " = " << res ;
  }

  return 0 ;
}
//op + ((n1 % n2)/n2)
