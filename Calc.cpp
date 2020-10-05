#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void) {
  cout << "Somma: 1    Differenza: 2    Moltiplicazione: 3    Divisione: 4    Potenza: 5    Radice: 6 \n" << endl ;
  double op ;
  double n1, n2 ;
  int flag = 0 ;

  do{
    if (flag > 0) {
      cout <<"\nSono accettati valori da 1 a 6" <<endl ;
    }
    cout << "Inserire il tipo di operazione: " ;
    cin >> op ;
    if (op == 1) cout << "\n-Somma-\n" << endl ;
    if (op == 2) cout << "\n-Differenza-\n" << endl ;
    if (op == 3) cout << "\n-Moltiplicazione-\n" << endl ;
    if (op == 4) cout << "\n-Divisione-\n" << endl ;
    if (op == 5) cout << "\n-Potenza-\n" << endl ;
    if (op == 6) cout << "\n-Radice-\n" << endl ;
    flag++ ;
  }while (op > 6) ;

//Somma
  if (op == 1) {
    cout << "Inserisci i due numeri da Sommare: " << endl ;
    cout << "Primo numero: " ;
    cin >> n1 ;
    cout << "Secondo numero: " ;
    cin >> n2 ;
    op = n1 + n2 ;
    cout << "\n" << n1 << " + " << n2 << " = " << op ;
  }

//Differenza
  if (op == 2) {
    cout << "Inserisci i due numeri da Sottrarre: " << endl ;
    cout << "Primo numero: " ;
    cin >> n1 ;
    cout << "Secondo numero: " ;
    cin >> n2 ;
    op = n1 - n2 ;
    cout << "\n" << n1 << " - " << n2 << " = " << op ;
  }

//Moltiplicazione
  if (op == 3) {
    cout << "Inserisci i due numeri da Moltiplicare: " << endl ;
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
    int a, b ;
    cout << "Inserisci i due numeri da Moltiplicare: " << endl ;
    cout << "Primo numero: " ;
    cin >> a ;
    cout << "Secondo numero: " ;
    cin >> b ;
    op = a / b ;
    res = a % b ;
    res = res / b ;
    res = res + op ;
    cout << "\n" << a << " / " << b << " = " << res ;
  }

//Potenza
  if (op == 5) {
    cout << "Inserisci la Base e l'Esponente: " << endl ;
    cout << "Base: " ;
    cin >> n1 ;
    cout << "Esponente: " ;
    cin >> n2 ;
    op = pow(n1, n2) ;
    cout << "\n" << n1 << " ^ " << n2 << " = " << op ;
  }

//Radice
  if(op == 6) {
    double rad ;
    cout << "Inserisci il numero: " << endl ;
    cin >> n1 ;
    rad = sqrt(n1) ;
    cout << "\n" << "Radice (" << n1 << ") = " << rad ;
  }

  return 0 ;
}
//op + ((n1 % n2)/n2)
