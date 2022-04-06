#include "HeadsOfFunctions.h"


void in_put(Details det[]) {


    for (int i = 0; i < amount_of_elements; ++i) {

        cout << i + 1 << ") B������: ��������, ���, ����������, ��� : ";
        cin >> det[i].name >> det[i].type >> det[i].count >> det[i].weight;

    }

}

void random(Details det[]) {


    char letters[] = { '�', '�' ,'�' };
    static string name_rand[] = { "������", "����������", "�������" };
    for (int i = 0; i < amount_of_elements; i++) {
        /* if (i == 0) {
             det[i].name = "������";
         }
         else if (i == 1) {
             det[i].name = "����������";
         }
         else if (i == 2) {
             det[i].name = "�������";
         }*/
        det[i].name = name_rand[rand() % 3];
        det[i].weight = rand() + 10.0;
        det[i].type = letters[rand() % 3];
        det[i].count = rand() + 1;

    }
}

void sort(Details det[]) {


    if (det[0].count > det[1].count) {
        swap(det[0], det[1]);

    }

    if (det[0].count > det[2].count) {
        swap(det[0], det[2]);

    }

    if (det[1].count > det[2].count) {
        swap(det[1], det[2]);

    }

}

void print(Details det[]) {

    /* ����� ������� */
    cout << "---------------------------------------------------\n";
    cout << "|           ��������� �������                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|������������|  ���  |����������  |��� 1 ������ (�)|\n";

    cout << "|------------|-------|------------|----------------|\n";
    /* ����� ����� ����������� ������ */
    for (int i = 0; i < amount_of_elements; i++) {
        cout << "|";
        cout.width(12);
        cout << det[i].name;
        printf("|   %c   |  %-9.1d | %14lg |\n",
            det[i].type, det[i].count, det[i].weight);
    }
    cout << "----------------------------------------------------\n";
    cout << "|����������: ������� ����� ����������� �����:      | \n";
    cout << "|� - ������������, � - ��������, � - ��������������| \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";


}