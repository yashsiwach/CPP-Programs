#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure for storing medicine details
struct med {
    int id;
    char name[50];
    float price;
    int qty;
};

// function prototypes
void display_meds(struct med[], int);
void add_med(struct med[], int*);
void delete_med(struct med[], int*);
void search_med(struct med[], int);
void update_med(struct med[], int);
void save_meds(struct med[], int);
int load_meds(struct med[]);

int main() {
    struct med db[100];  // maximum 100 medicines can be stored
    int n = load_meds(db);

    int opt;
    do {
        printf("project on c by roll number 70,69,68\n");
        printf("1 for display med details\n");
        printf("2 for add new med\n");
        printf("3 for delete med details\n");
        printf("4 for search a particular med\n");
        printf("5 for update med details\n");
        printf("6 for exit\n");
        printf("enter option: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                display_meds(db, n);
                break;
            case 2:
                add_med(db, &n);
                break;
            case 3:
                delete_med(db, &n);
                break;
            case 4:
                search_med(db, n);
                break;
            case 5:
                update_med(db, n);
                break;
            case 6:
                save_meds(db, n);
                printf("exit done\n");
                break;
            default:
                printf("invalid option. please try again.\n");
        }
    } while (opt != 6);

    return 0;
}

// function to display the details of all medicines in the database
void display_meds(struct med db[], int n) {
    if (n == 0) {
        printf("no meds in the database.\n");
    } else {
        printf("med details:\n");
        printf("id\tname\tprice\tqty\n");
        for (int i = 0; i < n; i++) {
            printf("%d\t%s\t%.2f\t%d\n", db[i].id, db[i].name, db[i].price, db[i].qty);
        }
    }
}

// function to add a new medicine to the database
void add_med(struct med db[], int* n) {
    if (*n == 100) {
        printf("database is full. no more meds can be added.\n");
    } else {
        printf("enter details of new med:\n");
        printf("id: ");
        scanf("%d", &db[*n].id);
        printf("name: ");
        scanf("%s", db[*n].name);
        printf("price: ");
        scanf("%f", &db[*n].price);
        printf("quantity: ");
        scanf("%d", &db[*n].qty);
        (*n)++;
        printf("med added successfully.\n");
    }
}

// function to delete a medicine from the database
void delete_med(struct med db[], int* n) {
    int id;
    printf("enter id of med to be deleted: ");
    scanf("%d", &id);
    int i;
    for (i = 0; i < *n; i++) {
        if (db[i].id == id) {
            break;
        }
    }
    if (i == *n) {
        printf("med not found.\n");
    } else {
        // shift all elements to the left
        for (int j = i; j < *n - 1; j++) {
            db[j] = db[j+1];
        }
        (*n)--;
        printf("med deleted successfully.\n");
    }
}

// function to search for a medicine by name or id
void search_med(struct med db[], int n) {
    int opt;
    printf("search by:\n");
    printf("1. name\n");
    printf("2. id\n");
    printf("enter option: ");
    scanf("%d", &opt);
    if (opt == 1) {
        char name[50];
        printf("enter name of med: ");
        scanf("%s", name);
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(db[i].name, name) == 0) {
                printf("id\tname\tprice\tqty\n");
                printf("%d\t%s\t%.2f\t%d\n", db[i].id, db[i].name, db[i].price, db[i].qty);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("med not found.\n");
        }
    } else if (opt == 2) {
        int id;
        printf("enter id of med: ");
        scanf("%d", &id);
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (db[i].id == id) {
                printf("id\tname\tprice\tqty\n");
                printf("%d\t%s\t%.2f\t%d\n", db[i].id, db[i].name, db[i].price, db[i].qty);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("med not found.\n");
        }
    } else {
        printf("invalid option.\n");
    }
}

// function to update the details of a medicine
void update_med(struct med db[], int n) {
    int id;
    printf("enter id of med to be updated: ");
    scanf("%d", &id);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (db[i].id == id) {
            printf("enter new details of med:\n");
            printf("name: ");
            scanf("%s", db[i].name);
            printf("price: ");
            scanf("%f", &db[i].price);
            printf("quantity: ");
            scanf("%d", &db[i].qty);
            printf("med updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("med not found.\n");
    }
}

// function to save the details of all medicines in a file
void save_meds(struct med db[], int n) {
    FILE* fp = fopen("meds.dat", "wb");
    if (fp == NULL) {
        printf("error opening file.\n");
    } else {
        fwrite(&n, sizeof(int), 1, fp);
        fwrite(db, sizeof(struct med), n, fp);
        fclose(fp);
        printf("med details saved to file successfully.\n");
    }
}

// function to load the details of all medicines from a file
int load_meds(struct med db[]) {
    FILE* fp = fopen("meds.dat", "rb");
    if (fp == NULL) {
        // no file exists yet, so return 0
        return 0;
    } else {
        int n;
        fread(&n, sizeof(int), 1, fp);
        fread(db, sizeof(struct med), n, fp);
        fclose(fp);
        printf("med details loaded from file successfully.\n");
        return n;
    }
}