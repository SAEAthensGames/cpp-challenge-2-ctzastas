#include <iostream>
#include <string>

int Size;
int* PoSize = new int[Size];
int Number;
int* PoNumber = new int[Number];
std::string Name;

int choose;
// test
void IntroMessage();
void PhoneBookSize();
void MainMenu();
int PhoneNumber();
std::string PhoneName();

int main() {

    IntroMessage();
    PhoneBookSize();

    do {
        MainMenu();
    } while (true);

    return 0;
}

void IntroMessage() {
    std::cout << "Welcome to Phonebook!\n";
    std::cout << "\nPlease enter phonebook size\n";
}

void PhoneBookSize() {
    std::cout << "\nSize: ";
    std::cin >> Size;

    std::cout << "\nYour phonebook size is: " << Size << std::endl;
}

void MainMenu() {
    std::cout << "\n==== MAIN MENU ====\n";

    std::cout << "\n1. Catalog\n";
    std::cout << "\n2. Insert/Modify\n";
    std::cout << "\n3. Delete\n";
    std::cout << "\n4. Search\n";
    std::cout << "\n5. Exit\n";

    std::cout << "\nChoose a number from the Menu\n";
    std::cout << "\nNumber: ";
    std::cin >> choose;
    std::cout << "" << std::endl;

    switch (choose) {
    case  1:
        std::cout << "\n1. Catalog\n";
        std::cout << "\nYou have " << Size << " empty entries\n";
        for (int i = 0; i < Size; i++) {
            std::cout << "Phone " << i + 1 << ": " << Number;
            std::cout << " Name " << i + 1 << ": " << Name << std::endl;
            //delete[] PoSize;
        }
        break;
    case 2:
        std::cout << "\n2. Insert/Modify\n";
        PhoneNumber();
        PhoneName();
        break;
    case 3:
        std::cout << "\n3. Delete\n";
        break;
    case 4:
        std::cout << "\n4. Search\n";
        break;
    case 5:
        std::cout << "\n5. Exit\n";
        break;
    default:
        break;
    }
}

int PhoneNumber() {
    std::cout << "\nInsert your phone number: \n";
    std::cin >> Number;
    std::cout << "\nNew phone number: " << Number << std::endl;

    return Number;
}

std::string PhoneName() {
    std::cout << "\nInsert your Name: \n";
    std::cin >> Name;
    std::cout << "\nNew Name: " << Name << std::endl;

    return Name;
}