#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct login {
    char name[30];
    int uid;
    int password;
    char surname[30];
}login;



int getUid(int uid) {
    int exist = 0;
    FILE *fp = fopen("login.txt" , "r");
    login m1;
    while(fread(&m1 , sizeof(login) , 1 , fp)) {
        if(m1.uid == uid) {
            exist = 1;
        }
    }
    if(exist == 0) {
        return uid;
    }
    else {
        return getUid(10 + (rand() % 999));
    }
    fclose(fp);

}

int getPwd(int password) {
    int exist = 0;
    FILE *fp = fopen("login.txt" , "r");
    login m1;
    while(fread(&m1 , sizeof(login) , 1 , fp)) {
        if(m1.password == password) {
            exist = 1;
        }
    }
    if(exist == 0) {
        return password;
    }
    else {
        return getPwd(999 + (rand() % 99999999));
    }
    fclose(fp);

}

void create() {
   
    login m;
    FILE *fp = fopen("login.txt" , "a+");

    printf("Enter name: ");
    scanf("%s" , m.name);

    printf("Enter Surname: ");
    scanf("%s" , m.surname);

    m.uid = getUid(10 + (rand() % 999));
    m.password = getPwd(999 + (rand() % 99999999));

    printf("Your UserID: %d\n" , m.uid);
    printf("Your Password: %d\n" , m.password);


    fwrite(&m , sizeof(login) , 1 , fp);
    fclose(fp);
    
}

void displayCredentials() {
    login m1;
    
    FILE *fp = fopen("login.txt" , "r");
    printf("\n-----------------------------------------------\n");
    printf("%-5s%-5s%-5s\n" , "UserId" , "Name" , "Password");
    printf("\n-----------------------------------------------\n");
    while(fread(&m1 , sizeof(login) , 1 , fp)) {
        printf("%-5d%-5s%-5d\n" , m1.uid , m1.name , m1.password);
    }
}



typedef struct Product { //merchant
    int id;
    char name[20];
    int originalPrice;
    int sellingPrice;
    int quantity;
    
}Product;


typedef struct Order {
    char name[20];
    int id;
    int quantity;
    ;
}Order;

void AddProduct() {
    Product p;
    FILE *fp = fopen("AddProduct.txt" , "a+");

    printf("Enter Product id: \n");
    scanf("%d" , &p.id);

    printf("Enter name of the product: \n");
    scanf("%s" , p.name);

    printf("Enter Original price of the product: \n");
    scanf("%d" , &p.originalPrice);

    printf("Enter Selling price of the product: \n");
    scanf("%d" , &p.sellingPrice);

    fwrite(&p , sizeof(Product) , 1 , fp);
    fclose(fp);

}

void DisplayProducts() {
    Product p1;
    FILE *fp = fopen("AddProduct.txt" , "r");

    printf("\n------------------------------------\n");
    printf("%-5s%-5s%-5s" , "ID" , "Name" , "Price");
    printf("\n------------------------------------\n");

    while(fread(&p1 , sizeof(Product) , 1 , fp)) {
        printf("%-5d%-5s%-5d" , p1.id , p1.name , p1.sellingPrice);
    }
    
}

void AddToCart() {
    Order o;
    FILE *fp = fopen("cart.txt" , "a+");
    
    printf("Enter name of the product to purchase: ");
    scanf("%s" , o.name);

    printf("Enter the product id: ");
    scanf("%s" , o.id);

    printf("Enter the quantity: ");
    scanf("%s" , o.quantity);

    fwrite(&o , sizeof(Order) , 1 , fp);
    fclose(fp);

}

int main() {
    system("cls");
    struct Product *products;
    
    //products = (struct Product*)malloc(num*sizeof(struct Product));

    int ch1 , ch2 , uid , pwd;
    do{
        printf("Enter your choice.\n");
        printf("1.Merchant/Seller \n");
        printf("2.User/Consumer \n");
        printf("3.Exit\n");
        scanf("%d" , &ch1);

        switch(ch1) {
            case 1:
                do {
                    //system("cls");
                    printf("Enter your choice. \n");
                    printf("1.Create an account. \n");
                    printf("2.Login in already existing account.\n");
                    printf("3.Display your Credentials.\n");
                    printf("4.Exit\n");
                    scanf("%d" , &ch2);

                    switch(ch2) {
                        case 1:
                            create();
                            break;
                        case 2:
                            printf("Enter your userid: ");
                            scanf("%d" , &uid);
                            printf("Enter your pwd: ");
                            scanf("%d" , &pwd);
                            FILE *fp = fopen("login.txt" , "r");
                            
                            int exist = 0;
                            login m1;
                            while(fread(&m1 , sizeof(login) , 1 , fp)) {
                                if(m1.uid == uid && m1.password ==  pwd) {
                                    exist = 1;                                    
                                }    
                                else {
                                    exist = 0;
                                }                            
                            }
                            if(exist == 1) {
                                //system("cls");
                                AddProduct();
                            }
                            else {
                                    printf("Wrong credentials");
                                }

                            break;
                        case 3:
                            displayCredentials();
                            break;
                        case 4:
                            printf("\nThank you!\n");
                            break;
                    } 
            case 2:
                do {
                    //system("cls");
                    printf("Enter your choice. \n");
                    printf("1.Create an account. \n");
                    printf("2.Login in already existing account.\n");
                    printf("3.Display your Credentials.\n");
                    printf("4.Exit\n");
                    scanf("%d" , &ch2);

                    switch(ch2) {
                        case 1:
                            create();
                            break;
                        case 2:
                            printf("Enter your userid: ");
                            scanf("%d" , &uid);
                            printf("Enter your pwd: ");
                            scanf("%d" , &pwd);
                            FILE *fp = fopen("login.txt" , "r");
                            int exist = 0;
                            login m1;
                            while(fread(&m1 , sizeof(login) , 1 , fp)) {
                                if(m1.password == pwd) {
                                    exist = 1;
                                }
                                else {
                                    printf("Wrong Credentials.");
                                }

                            }

                            if(exist = 1) {
                                int choice;
                                printf("Sucessfully logged in.Choose what you want to do\n");
                                printf("1.Display all the products available.");
                                printf("2.Add the products to your cart.");
                                scanf("%d" , &choice);

                                if(choice == 1) {
                                    DisplayProducts();
                                }
                                else if(choice == 2) {
                                    AddToCart();
                                }
                                else {
                                    printf("Wrong choice.");
                                }


                            }

                            
                            break;
                        case 3:
                            displayCredentials();
                            break;
                        case 4:
                            printf("\nThank you!\n");
                            break;
                    } 

            case 3:
                printf("Thank you\n");
                break;
                //system("cls");
    
                }while(ch2 != 4);
     }while(ch2 != 4);
  }
 }while(ch1!= 3);
}