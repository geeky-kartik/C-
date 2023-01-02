#include <stdio.h>
#include <stdlib.h>

struct Product {
    int id;
    char name[20];
    int originalPrice;
    int sellingPrice;
    int quantity;
    //struct Product display;

};

struct Order {
    char name[20];
    int id;
    int quantity;
    //struct Order display;
};


struct FlipkartMain {
    int totalProducts;
    int profit;
};

int main() {
    // struct Product p1;
    // struct Product p2;
    // struct Product p3;
    // struct Product p4;
    // struct Product p5;
    // struct Product p6;
    int num , i , who , choice;
    struct Products *products;
    printf("Enter number of products: ");
    scanf("%d" , num);
    products = (struct Product*)malloc(num*sizeof(struct Product));

    printf("Who are you? (1 for merchant / 2 for user)");
    scanf("%d" , &who);

    if(who = 1) {
        system("cls");
        printf("Select a chioice:\t\n");
        printf("1. Add your product:\t");
        printf("2. Display your product:\t");
        printf("3. Exit");
        scanf("%d" , &choice);
        while(choice != 3) {
            if(choice == 1) {
                for(i = 0; i < num; i++ ) {
                    printf("Enter product %d name: " , i+1);
                    scanf("%s" , &(products[i])->name);
                    
                    printf("Enter product %d ID: " , i+1);
                    scanf("%d" , &(products[i])->id);

                    printf("Enter product %d original Price: " , i+1);
                    scanf("%d" , &(products[i])->originalPrice);

                    printf("Enter product %d selling Price: " , i+1);
                    scanf("%d" , &(products[i])->sellingPrice);

                    printf("Enter product %d stock: " , i+1);
                    scanf("%d" , &(products[i])->quantity);
                    
                }
            }
        }
    }

    

}



    
