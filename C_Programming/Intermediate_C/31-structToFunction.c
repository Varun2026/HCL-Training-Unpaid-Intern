#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int id;
    float price;
    int discount;
}Product;

void addPrice(Product *p, int *count, int size){
    if(*count >= size){
        printf("Cannot add details of the product\n");
        return;
    }
    while(*count<size){
        printf("Enter the ID of the product %d\n", (*count)+1);
        scanf("%d", &p[*count].id);

        printf("Enter the price of the product %d\n", (*count)+1);
        scanf("%f", &p[*count].price);

        printf("Enter the discount of the product %d\n", (*count)+1);
        scanf("%d", &p[*count].discount);

        (*count)++;
    }
}

float discountedPrice(float price, int discount){
    float d = 0;
    d = price*(discount/100.0);
    return d;
}

void updateStruct(Product *p, int id, int *count){
    int index = -1;
    float price_;
    int discount_;
    for(int i=0; i<*count; i++){
        if(p[i].id == id){
            price_ = p[i].price;
            discount_ = p[i].discount;
            index = i;
            break;
        }
    }
    if(index == -1){
        printf("Product not found.\n");
        return;
    }

    float dis = discountedPrice(price_, discount_);
    p[index].price = p[index].price - dis;
}

void display(Product *p, int *count){
    if(*count == 0){
        printf("No elements to display. \n");
        return;
    }
    for(int i=0; i<*count; i++){
        printf("Product id: %d\n", p[i].id);
        printf("Product price: %.2f\n", p[i].price);
        printf("Product discount: %d\n", p[i].discount);
    }
}

int main(){
    int size;
    int discount;
    float price;
    int count = 0;
    int id= 0;
    printf("Enter the size of the product: \n");
    scanf("%d", &size);
    Product *p = (Product*)malloc(size * sizeof(Product));

    // printf("Enter the Price amount\n");
    // scanf("%f", &price);

    // printf("Enter the discount percentage: \n");
    // scanf("%d", &discount);

    addPrice(p, &count, size);

    display(p, &count);

    printf("Enter the product id to update:\n");
    scanf("%d", &id);
    updateStruct(p, id, &count);

    display(p, &count);
    return 0;
}