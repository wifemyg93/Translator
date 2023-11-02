#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;

    cout << "[1]Русский" << endl << endl;
    cout << "[2]Английский" << endl << endl;
    cout << "[3]Выйти" << endl << endl;

    cin >> num;
    system("cls");


    switch (num)
    {
    case 1:
        cout << "Русский:" << endl << endl;

        cout << "[1]Основы" << endl << "[2]Вычисление, счёт, работа на компьютере" << endl << "[3]Измерение" << endl << "[4]Система обработки данных" << endl << "[5]Вводить (информацию)" << endl;
        cout << "[6]Включить" << endl << "[7]Выключить" << endl << "[8]Обрабатывать данные" << endl << "[9]Подавать, вводить, снабжать, обеспечивать" << endl << "[10]Деление" << endl;
        cout << "[11]Пользователь" << endl << "[12]Счёты" << endl << "[13]Единица информации" << endl << "[14]Выполнять, производить (действие)" << endl << "[15]Создание, формирование, выработка" << endl << endl;

        cin >> num;
        system("cls");

        switch (num)
        {
        case 1:
            cout << "Основы -> Basics" << endl << endl;
            break;

        case 2:
            cout << "Вычисление, счёт, работа на компьютере -> Computing" << endl << endl;
            break;

        case 3:
            cout << "Измерение -> Demension" << endl << endl;
            break;

        case 4:
            cout << "Система обработки данных -> Data processing system" << endl << endl;
            break;

        case 5:
            cout << "Вводить (информацию) -> To input/to feed in" << endl << endl;
            break;

        case 6:
            cout << "Включить -> To turn on/to switch on" << endl << endl;
            break;

        case 7:
            cout << "Выключить -> To turn off/to switch off" << endl << endl;
            break;

        case 8:
            cout << "Обрабатывать данные -> To process data" << endl << endl;
            break;

        case 9:
            cout << "Подавать, вводить, снабжать, обеспечивать -> To supply" << endl << endl;
            break;

        case 10:
            cout << "Деление -> Devision" << endl << endl;
            break;

        case 11:
            cout << "Пользователь -> User" << endl << endl;
            break;

        case 12:
            cout << "Счёты -> Abacus" << endl << endl;
            break;

        case 13:
            cout << "Единица информации -> Unit of data" << endl << endl;
            break;

        case 14:
            cout << "Выполнять, производить (действие) -> To perform" << endl << endl;
            break;

        case 15:
            cout << "Создание, формирование, выработка -> Geration" << endl << endl;
            break;

        default:
            cout << "Выберите номер слова из перечня, чтобы перевести" << endl << endl;
            break;
        }
        break;


    case 2:
        cout << "Английский:";

        cout << "[1]Basics" << endl << "[2]Computing" << endl << "[3]Demension" << endl << "[4]Data processing system" << endl << "[5]To input/to feed in" << endl;
        cout << "[6]To turn on/to switch on" << endl << "[7]To turn off/to switch off" << endl << "[8]To process data" << endl << "[9]To supply" << endl << "[10]Devision" << endl;
        cout << "[11]User" << endl << "[12]Abacus" << endl << "[13]Unit of data" << endl << "[14]To perform" << endl << "[15]Geration" << endl << endl;


        cin >> num;
        system("cls");

        switch (num)
        {
        case 1:
            cout << "Basics -> Основы" << endl << endl;
            break;

        case 2:
            cout << "Computing -> Вычисление, счёт, работа на компьютере" << endl << endl;
            break;

        case 3:
            cout << "Demension -> Измерение" << endl << endl;
            break;

        case 4:
            cout << "Data processing system -> Система обработки данных" << endl << endl;
            break;

        case 5:
            cout << "To input/to feed in -> Вводить (информацию)" << endl << endl;
            break;

        case 6:
            cout << "To turn on/to switch on -> Включить" << endl << endl;
            break;

        case 7:
            cout << "To turn off/to switch off -> Выключить" << endl << endl;
            break;

        case 8:
            cout << "To process data -> To process data" << endl << endl;
            break;

        case 9:
            cout << "To supply -> Подавать, вводить, снабжать, обеспечивать" << endl << endl;
            break;

        case 10:
            cout << "Devision -> Деление" << endl << endl;
            break;

        case 11:
            cout << "User -> Пользователь" << endl << endl;
            break;

        case 12:
            cout << "Abacus -> Счёты" << endl << endl;
            break;

        case 13:
            cout << "Unit of data -> Единица информации" << endl << endl;
            break;

        case 14:
            cout << "To perform -> Выполнять, производить (действие)" << endl << endl;
            break;

        case 15:
            cout << "Geration -> Создание, формирование, выработка" << endl << endl;
            break;

        default:
            cout << "Выберите номер слова из перечня, чтобы перевести" << endl << endl;
            break;
        }

        break;

    case 3:
        cout << "Мои поздравления, ты узнал что-то новое. Ты не отстаешь от своего развития (возможно)))"; return 0;
        break;


    default:
        cout << "Выберите номер слова из перечня, чтобы перевести" << endl;
        break;
    }
    return 0;


}