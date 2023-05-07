#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for storing medicine details
struct med {
    int id;
    char name[50];
    float price;
    int qty;
};

// Function prototypes
void display_meds(struct med[], int);
void add_med(struct med[], int*);
void delete_med(struct med[], int*);
void search_med(struct med[], int);
void update_med(struct med[], int);
void save_meds(struct med[], int);
int load_meds(struct med[]);

int main() {
    struct med db[100];  // Maximum 100 medicines can be stored
    int n = load_meds(db);

    int opt;
    do {
        printf("========= Med Record Management System =========\n");
        printf("1. Display Med details\n");
        printf("2. Add new med\n");
        printf("3. Delete med details\n");
        printf("4. Search a particular med\n");
        printf("5. Update med details\n");
        printf("6. Exit\n");
        printf("Enter option: ");
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
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (opt != 6);

    return 0;
}

// Function to display the details of all medicines in the database
void display_meds(struct med db[], int n) {
    if (n == 0) {
        printf("No meds in the database.\n");
    } else {
        printf("Med details:\n");
        printf("ID\tName\tPrice\tQty\n");
        for (int i = 0; i < n; i++) {
            printf("%d\t%s\t%.2f\t%d\n", db[i].id, db[i].name, db[i].price, db[i].qty);
        }
    }
}

// Function to add a new medicine to the database
void add_med(struct med db[], int* n) {
    if (*n == 100) {
        printf("Database is full. No more meds can be added.\n");
    } else {
        printf("Enter details of new med:\n");
        printf("ID: ");
        scanf("%d", &db[*n].id);
        printf("Name: ");
        scanf("%s", db[*n].name);
        printf("Price: ");
        scanf("%f", &db[*n].price);
        printf("Qty: ");
        scanf("%d", &db[*n].qty);
        (*n)++;
        printf("Med added successfully.\n");
    }
}

// Function to delete a medicine from the database
void delete_med(struct med db[], int* n) {
    int id;
    printf("Enter ID of med to be deleted: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < *n; i++) {
        if (db[i].id == id) {
            found = 1;
            // Shift all elements after the deleted med one position to the left
            for (int j = i; j < *n - 1; j++) {
                db[j] = db[j+1];
            }
            (*n)--;
            printf("Med deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Med not found.\n");
    }
}

// Function to search for a medicine in the database
void search_med(struct med db[], int n) {
    int id;
    printf("Enter ID of med to search for: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (db[i].id == id) {
            found = 1;
            printf("Med details:\n");
            printf("ID\tName\tPrice\tQty\n");
            printf("%d\t%s\t%.2f\t%d\n", db[i].id, db[i].name, db[i].price, db[i].qty);
            break;
        }
    }

    if (!found) {
        printf("Med not found.\n");
    }
}

// Function to update the details of a medicine in the database
void update_med(struct med db[], int n) {
    int id;
    printf("Enter ID of med to update: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (db[i].id == id) {
            found = 1;
            printf("Enter new details of med:\n");
            printf("Name: ");
            scanf("%s", db[i].name);
            printf("Price: ");
            scanf("%f", &db[i].price);
            printf("Qty: ");
            scanf("%d", &db[i].qty);
            printf("Med details updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Med not found.\n");
    }
}

// Function to save the database to a file
void save_meds(struct med db[], int n) {
    FILE* fp;
    fp = fopen("meds.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fwrite(db, sizeof(struct med), n, fp);
    fclose(fp);
    printf("Database saved successfully.\n");
}

// Function to load the database from a file
int load_meds(struct med db[]) {
    FILE* fp;
    fp = fopen("meds.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }
    int n = 0;
    while (fread(&db[n], sizeof(struct med), 1, fp) == 1) {
        n++;
    }
    fclose(fp);
    printf("Database loaded successfully.\n");
    return n;
}