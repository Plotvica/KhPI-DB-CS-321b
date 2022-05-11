#include "HeadsOfFunctions.h"

//Details det;




int countLine(Details det) {

    FILE* data;
    size_t countLine = 0u;

    if ((data = fopen("data.txt", "r")) == NULL)
        return 0u;
    while (!feof(data)) {
        fscanf(data, "%s%s%hd%f", det.name, &det.type, &det.count, &det.weight);
        countLine++;
    }

    fclose(data);

    return countLine;

}



void input_backlist(Details det) {

    FILE* data = fopen("data.txt", "a+");

    if (data == NULL) {
        puts("System ERROR");
        exit(0);
    }
    else {

        for (int i = 0; i < amount_of_elements; ++i) {

            cout << i + 1 << ") Enter: name, type, quantity, weight : ";
            cin >> det.name >> det.type >> det.count >> det.weight;
            fprintf(data, "%s\t%c\t%d\t%lg\n", det.name, det.type, det.count, det.weight);
        }
    }
    
    fclose(data);
}



void input_forvardlist(Details det) {


    FILE* data = fopen("data.txt", "r+");

    if (data == NULL) {
        puts("System ERROR");
        exit(0);
    }
    else {
        for (int i = 0; i < amount_of_elements; ++i) {
            cout << i + 1 << ") Enter: name, type, quantity, weight : ";
            cin >> det.name >> det.type >> det.count >> det.weight;
                fprintf(data, "%s\t%c\t%d\t%lg\n", det.name, det.type, det.count, det.weight);                
        }
    }

    fclose(data);
}

void random(Details det) {

    FILE* data = fopen("data.txt", "a");

    int choose;
    cout << "How many random stes you want to create? ->  ";
    cin >> choose;


    char letters[] = { 'O', 'P' ,'B' };
    static char name_rand[3][20] = {"Flange", "Adapter", "Entablature"};
    for (int i = 0; i < choose; i++) {

        det.name = name_rand[rand() % 3];
        det.type = letters[rand() % 3];
        det.count = rand() + 1;
        det.weight = rand() + 10.0;

        fprintf(data, "%s\t%c\t%d\t%lg\n", det.name, det.type, det.count, det.weight);
      
        
    }
    fclose(data);
}




void print(Details det) {

    FILE* data = fopen("data.txt", "r");

    /* Вывод таблицы */
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    /* вывод строк фактических данных */
    for (int i = 0; i < amount_of_elements; i++) {
        fscanf(data, "%s%s%d%f", det.name,&det.type, &det.count, &det.weight);
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n",
            det.name, det.type, det.count, det.weight);
        
    }
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   О - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";

    fclose(data);
}



void print_all(Details det) {

    FILE* data = fopen("data.txt", "r");

    /* Вывод таблицы */
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    /* вывод строк фактических данных */
    for (size_t i = 0; i < countLine(det) - 1; i++) {
        fscanf(data, "%s%s%d%f", det.name, &det.type, &det.count, &det.weight);
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n",
            det.name, det.type, det.count, det.weight);
    }
    
    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   О - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";

    fclose(data);
}




void listNumberPrint(Details det) {

    FILE* data = fopen("data.txt", "r");

    int choose;

    cout << "What information by number do you whant to see?  ";
    cin >> choose;
    /* Вывод таблицы */
    cout << "---------------------------------------------------\n";
    cout << "|                 Parts sheet                      |\n";
    cout << "|--------------------------------------------------|\n";
    cout << "|Denomination|  Type |  Quantity  |Weight one of(g)|\n";
    cout << "|------------|-------|------------|----------------|\n";
    /* вывод строк фактических данных */
   
    for (size_t i = 0; i < choose; i++) {
        fscanf(data, "%s%s%d%f", det.name, &det.type, &det.count, &det.weight);
    }
        
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n",
            det.name, det.type, det.count, det.weight);
    

    cout << "----------------------------------------------------\n";
    cout << "|Note: the following type encoding is accepted:    | \n";
    cout << "|   О - original, P - purchased, B - borrowed      | \n";
    cout << "---------------------------------------------------\n";
    cout << "\n\n\n\n";

    fclose(data);
}




