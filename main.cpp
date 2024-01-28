#include <iostream>

void displayMenu() {
    std::cout << "[1] Dodawanie" << std::endl;
    std::cout << "[2] Odejmowanie" << std::endl;
    std::cout << "[3] Mnozenie" << std::endl;
    std::cout << "[4] Dzielenie" << std::endl;
    std::cout << "[5] Wyjscie" << std::endl;
}

int choice() {
    displayMenu();

    int choice;

    std::cout << std::endl;
    std::cout << "Wybierz opcje [1-5]: ";
    std::cin >> choice;
    std::cout << std::endl;

    return choice;
}

int addition() {
    int x, y;

    std::cout << "Liczba X:";
    std::cin >> x;

    std::cout << "Liczba Y:";
    std::cin >> y;

    std::cout << "Wynik: " << x+y << std::endl << std::endl;

    return x+y;
}

int subtraction() {
    int x, y;

    std::cout << "Liczba X:";
    std::cin >> x;

    std::cout << "Liczba Y:";
    std::cin >> y;

    std::cout << "Wynik: " << x-y << std::endl << std::endl;

    return x-y;
}

int multiplication() {
    int x, y;

    std::cout << "Liczba X:";
    std::cin >> x;

    std::cout << "Liczba Y:";
    std::cin >> y;

    std::cout << "Wynik: " << x*y << std::endl << std::endl;

    return x*y;
}

double division() {
    double x, y;

    while(true) {
        std::cout << "Liczba X:";
        std::cin >> x;

        std::cout << "Liczba Y:";
        std::cin >> y;

        if(x != 0 && y != 0) {
            std::cout << "Wynik: " << x/y << std::endl << std::endl;
            return x/y;
        } else {
            std::cout << "Wartosc liczby X i Y musza byc wyzsze od zera!" << std::endl << std::endl;
        }
    }


}

int main() {
    while(true) {
        int userChoice = choice();

        switch(userChoice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                std::exit(0);
            default:
                std::cout << "Nieprawidlowa wartosc! Wprowadz wartosc [1-5]" << std::endl << std::endl;
                break;
        }
    }

}

// Kalkulator --> użytkownik wybiera rodzaj działania, wpisuje dwie liczby (X i Y) po czym wyświetla się wynik
