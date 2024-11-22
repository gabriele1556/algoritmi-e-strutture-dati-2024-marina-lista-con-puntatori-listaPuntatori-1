#include <iostream>
#include "ListaPuntatori.cpp"

int main() 
{
    // Creazione di una lista di interi
    ListaPuntatori<int> listaInt;
    
    // Creazione della lista
    int n;
    std::cout << "Quanti elementi vuoi inserire nella lista? ";
    std::cin >> n;
    
    // Inserimento di elementi
    for (int i = 1; i <= n; i++) {
        int elemento;
        int posizione;
        std::cout << "Inserisci l'elemento " << i << ": ";
        std::cin >> elemento;

       listaInt.inslista(elemento, i);
    }
    
    // stampa elementi
    for (int i = 1; i <= n; i++) {
        for (int i = 1; i <= listaInt.lunghezza(); i++) {
        std::cout << listaInt.leggilista(i) << " ";
    }
    std::cout << std::endl;
    
    // Ricerca e manipolazione
    int ricerca;
    std::cout << "Inserisci un elemento da cercare nella lista: ";
    std::cin >> ricerca;
    
    int occorrenze = listaInt.contaOccorrenze(ricerca);
    if (occorrenze > 0) {
        std::cout << "L'elemento " << ricerca << " è presente " << occorrenze << " volte nella lista." << std::endl;
    } else {
        std::cout << "L'elemento " << ricerca << " non è presente nella lista." << std::endl;
    }
    
    // Calcolo e confronto
    std::cout << "Elemento massimo: " << listaInt.massimo() << std::endl;
    std::cout << "Elemento minimo: " << listaInt.minimo() << std::endl;
    std::cout << "Somma degli elementi: " << listaInt.somma() << std::endl;
    }
  
    // Modifica della lista
    int posizioneDaModificare;
    int nuovoElemento;
    std::cout << "Inserisci la posizione dell'elemento che vuoi aggiornare: ";
    std::cin >> posizioneDaModificare;
    
    std::cout << "Inserisci il nuovo valore per l'elemento alla posizione " << posizioneDaModificare << ": ";
    std::cin >> nuovoElemento;
    
    listaInt.aggiornaElemento(posizioneDaModificare, nuovoElemento);
    
    // Rimuovere un elemento in base alla posizione
    int posizioneDaRimuovere;
    std::cout << "Inserisci la posizione dell'elemento che vuoi rimuovere: ";
    std::cin >> posizioneDaRimuovere;

    listaInt.canclista(posizioneDaRimuovere);
    
    // Rimuovere un elemento in base al valore
    int valoreDaRimuovere;
    std::cout << "Inserisci il valore dell'elemento che vuoi rimuovere: ";
    std::cin >> valoreDaRimuovere;
    listaInt.rimuoviElemento(valoreDaRimuovere); 
    
    
}
