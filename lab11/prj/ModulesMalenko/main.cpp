#include "ModulesMalenko.h"

using namespace std;

void DeleteRase(BusStation* &rase)
{
    BusStation* delete_rase = rase;
    BusStation* buffer = nullptr;

    bool isDelete = false;
    short number;
    cout << "������ ����� �����: ";

    while (!(cin >> number))
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "�� ����� �� �����. ��������� �� ���: ";
    }

    do {
        if (number == atoi(delete_rase->num_rase))
        {
            if (delete_rase == rase) {rase = rase->next;}
            else {buffer->next = delete_rase->next;}

            delete(delete_rase);
            isDelete = true;
            break;
        }
        buffer = delete_rase;
        delete_rase = delete_rase->next;
    } while (delete_rase != nullptr);

    if (isDelete == false) {cout << "�� �� ������ ������ ������� ����� ��� ���������!" << endl << endl;}
    else {cout << endl << endl;}

}

void AddNumRase(BusStation* rase, BusStation* new_rase)
{
    BusStation* begin = rase;
    char num_rase1[Size_Num_Rase];

    cout << "������ ����� ����� (�� ����� 999): ";
    cin >> num_rase1;

    while ((!isdigit(int(num_rase1[0])) && !isdigit(int(num_rase1[1])) && !isdigit(int(num_rase1[2])))
           || (atoi(num_rase1) > 999) )
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "�� ����� �� ����� ��� ����� 999. ��������� �� ���: ";
        cin >> num_rase1;
    }
    do
    {
        if (num_rase1[0] == begin->num_rase[0] &&
            num_rase1[1] == begin->num_rase[1] &&
            num_rase1[2] == begin->num_rase[2] &&
            num_rase1[3] == begin->num_rase[3] )
        {
            char answer;
            cout << "ϳ� ��� ������� ����: " << begin->name_rase << endl
                 << "�� ���� ������ ��� ����?(�\\�) ";
            cin >> answer;
            while (answer != '�' && answer != '�' && answer != '�' && answer != '�')
            {
                cin.clear();
                while (cin.get() != '\n')
                    continue;
                cout << "������ \"���\" ��� \"ͳ\": ";
                cin >> answer;
            }
            if (answer == '�' || answer == '�')
            {
                cout << "���� � ����� ������� ��� �," << endl
                     << "������ ����� �����: ";
                cin >> num_rase1;
                while (strstr(begin->num_rase, num_rase1))
                {
                    cin.clear();
                    while (cin.get() != '\n')
                        continue;
                    cout << "����� ����, ������ �� ���: ";
                    cin >> num_rase1;
                }
            }
        }
        begin = begin->next;
    } while (begin->next != nullptr);

    while (cin.get() != '\n')
        continue;
    strcpy(new_rase->num_rase, num_rase1);
}

void AddRase(BusStation* rase)
{
    BusStation* new_rase, * p;
    p = rase->next;
    new_rase = new BusStation;

    AddNumRase(rase, new_rase);

    cout << "������ �������: ";
    cin.getline(new_rase->name_rase, Size_Name_Rase);
    cout << "������ ����������� ��� ���������� (���� �): ";
    cin.getline(new_rase->name_station, Size_Name_Station);
    cout << "������ ������: ";
    cin.getline(new_rase->days_rase, Size_Days_Rase);

    char hours[3], minutes[3];
    for (short i = 0; i < Amount_Time; i++)
    {
        new_rase->time_rase[i] = new char[Time];
        cout << "������ ������ ����������� ��� �������� (��� ���������� ������ �): ";
        cin >> hours;

        if (hours[0] == '�')
        {
            strcpy(new_rase->time_rase[i], "�");
            break;
        }
        while (atoi(hours) > 24 || atoi(hours) < 0)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "�����������. ��������� �� ���: ";
            cin >> hours;
        }

        cout << "������ ������� ����������� ��� �������� (��� ���������� ������ �): ";
        cin >> minutes;
        if (minutes[0] == '�')
        {
            strcpy(new_rase->time_rase[i], "�");
            break;
        }
        while (atoi(minutes) > 59 || atoi(minutes) < 0)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "�����������. ��������� �� ���: ";
            cin >> minutes;
        }

        new_rase->time_rase[i][2] = ':';

        if (hours[0] == '0' && hours[1] == '\0')
        {
            new_rase->time_rase[i][0] = '0';
            new_rase->time_rase[i][1] = '0';
        }
        else if (atoi(hours) <= 9)
        {
            new_rase->time_rase[i][0] = '0';
            new_rase->time_rase[i][1] = hours[0];
        }
        else
        {
            new_rase->time_rase[i][0] = hours[0];
            new_rase->time_rase[i][1] = hours[1];
        }
        if (minutes[0] == '0' && minutes[1] == '\0')
        {
            new_rase->time_rase[i][3] = '0';
            new_rase->time_rase[i][4] = '0';
        }
        else if (atoi(minutes) <= 9)
        {
            new_rase->time_rase[i][3] = '0';
            new_rase->time_rase[i][4] = minutes[0];
        }
        else
        {
            new_rase->time_rase[i][3] = minutes[0];
            new_rase->time_rase[i][4] = minutes[1];
        }
    }

    new_rase->next = p;
    rase->next = new_rase;
    cout << endl;

}
