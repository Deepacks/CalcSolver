#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void) {

  double cast ;
  int t ;
  cout << "Operazioni: 1    Equazioni:2" << endl ;
  cin >> t ;

//OPERAZIONI
  if (t == 1) {
    cout << "\nSomma: 1    Differenza: 2    Moltiplicazione: 3    Divisione: 4    Potenza: 5    Radice: 6 \n" << endl ;
    double op ;
    double n1, n2 ;
    int flag = 0 ;
    string equazione [10] ;

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
  }

//EQUAZIONI
  if (t == 2) {

    //Raccolta Dati
    int n, flag, i, io ;

    cout << "\nNumero di Operazioni: " ;
    cin >> n ;
    cout << "\n- Somma: 1    Differenza: 2    Moltiplicazione: 3    Divisione: 4    Potenza: 5    Radice: 6 -" << endl ;
    cout << "\nInserire le operazioni in ordine:" << endl ;

    string operazioni[n] ;
    string equazione[n+1] ;

    for (i=0 ; i < n ; i++) {
      flag = 0;
      do{
        if (flag > 0) cout << "Sono accettati valori da 1 a 6" << endl ;
        cin >> operazioni[i] ;
        flag ++ ;
      }while (stoi(operazioni[i]) > 6) ;
    }

    cout << "\nInserire i numeri in ordine:" << endl ;
    for (i=0 ; i < n+1 ; i++) cin >> equazione[i] ;

    //Risoluzione equazione
      //Risoluzione prima operazione
    int eq ;
    switch (stoi(operazioni[0])){
      case 1 :
        eq = stoi(equazione[0]) + stoi(equazione[1]) ;
      break ;
      case 2 :
        eq = stoi(equazione[0]) - stoi(equazione[1]) ;
      break ;
      case 3 :
        eq = stoi(equazione[0]) * stoi(equazione[1]) ;
      break ;
      case 4 :

      break ;
      case 5 :

      break ;
      case 6 :

      break ;
    }

      //Risoluzione altre operazioni
    for (i=2 ; i < n+1 ; i++) {
      switch (stoi(operazioni[i-1])) {
        case 1 :
          eq = eq + stoi (equazione[i]) ;
        break;
        case 2 :
          eq = eq - stoi (equazione[i]) ;
        break ;
        case 3 :
          eq = eq * stoi (equazione[i]) ;
        break ;
        case 4 :

        break ;
        case 5 :

        break ;
        case 6 :

        break ;
      }
    }

    //Output risultato
    cout << "\n\nRisultato:" << endl << endl;
    for (i=0 ; i < n+1 ; i++){
      cout << stoi(equazione[i]) ;
      if (i < n) {
        if (stoi(operazioni[i]) == 1) cout << " + " ;
        if (stoi(operazioni[i]) == 2) cout << " - " ;
        if (stoi(operazioni[i]) == 3) cout << " * " ;
      }
    }
    cout << " = " << eq ;
  }

  return 0 ;
}
