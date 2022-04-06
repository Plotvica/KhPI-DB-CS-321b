#include "HeadsOfFunctions.h"


void in_put(Details det[]) {


    for (int i = 0; i < amount_of_elements; ++i) {

        cout << i + 1 << ") Bведите: название, тип, количество, вес : ";
        cin >> det[i].name >> det[i].type >> det[i].count >> det[i].weight;

    }

}

void random(Details det[]) {


    char letters[] = { 'З', 'П' ,'О' };
    static string name_rand[] = { "Фланец", "Переходник", "Станина" };
    for (int i = 0; i < amount_of_elements; i++) {
        /* if (i == 0) {
             det[i].name = "Фланец";
         }
         else if (i == 1) {
             det[i].name = "Переходник";
         }
         else if (i == 2) {
             det[i].name = "Станина";
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

    /* Вывод таблицы */
    cout << "---------------------------------------------------\n";
    cout << "|           Ведомость деталей                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Наименование|  Тип  |Количество  |Вес 1 детали (г)|\n";

    cout << "|------------|-------|------------|----------------|\n";
    /* вывод строк фактических данных */
    for (int i = 0; i < amount_of_elements; i++) {
        cout << "|";
        cout.width(12);
        cout << det[i].name;
        printf("|   %c   |  %-9.1d | %14lg |\n",
            det[i].type, det[i].count, det[i].weight);
    }
    cout << "----------------------------------------------------\n";
    cout << "|Примечание: принято такое кодирование типов:      | \n";
    cout << "|О - оригинальная, П - покупная, З - заимствованная| \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";


}