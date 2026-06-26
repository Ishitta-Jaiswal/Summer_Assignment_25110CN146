// Program to create inventory management system:


/* Method:
1) Give options for user to choose which is used for managing inventory.
2) Add differnt cases using switch, arrays and loops.
3) Take choice from user each time and give optput accordingly.
4) Keep showing options till user choses Exit.
*/



#include<stdio.h>
#include<string.h>

struct product
{
    int id;
    char name[50];
    float price;
    int quantity;
};

int main()
{
    struct product pro[100];
    int choice, i, j, count=0, found, search, update, delete;
    int stock, increase, add, decrease, reduce;

    while(1)
    {
        printf("*** Inventory Management System ***\n\n");
        printf("1) Add Product\n");
        printf("2) Display Products\n");
        printf("3) Search Product\n");
        printf("4) Update Product\n");
        printf("5) Delete Product\n");
        printf("6) Stock Management\n");
        printf("7) Check Low Stock\n");
        printf("8) Exit\n\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:
                
                if( count == 100)
                {
                    printf("Storage is full\n\n");
                    break;
                }
                
                printf("Enter Product ID = ");
                scanf("%d", &pro[count].id);

                printf("Enter Product Name = ");
                getchar();
                fgets(pro[count].name, sizeof(pro[count].name), stdin);
                pro[count].name[strcspn(pro[count].name, "\n")] = '\0';

                printf("Enter Price = ");
                scanf("%f", &pro[count].price);

                printf("Enter Quantity = ");
                scanf("%d", &pro[count].quantity);
                count++;
                printf("Product Added Successfully!\n\n");
                break;

            case 2:

                if( count == 0 )
                {
                    printf("No Record Found\n\n");
                }
                else{
                    printf(" Product Records \n");
                    
                    for( i=0; i< count; i++)
                    {
                        printf("Product ID = %d\n",pro[i].id);
                        printf("Product Name = %s\n",pro[i].name);
                        printf("Price = %.2f\n",pro[i].price);
                        printf("Quantity = %d\n\n",pro[i].quantity);
                    }
                }
                printf("\n");
                break;

            case 3:

                printf(" Enter product ID to search = ");
                scanf("%d", &search);

                found = 0;

                for( i=0; i< count; i++)
                {
                    if( pro[i].id == search)
                    {
                        found = 1;
                        printf("Product ID = %d\n",pro[i].id);
                        printf("Product Name = %s\n",pro[i].name);
                        printf("Price = %.2f\n",pro[i].price);
                        printf("Quantity = %d\n\n",pro[i].quantity);
                        break;
                    }
                }
                if( found == 0 )
                {
                    printf("Product Not Found\n\n");
                }
                break;

            case 4:

                printf("Enter product Id to update = ");
                scanf("%d", &update);

                found = 0;

                for( i=0; i< count; i++)
                {
                    if( pro[i].id == update )
                    {
                        found = 1;
                        printf("Enter New Product Name = ");
                        getchar();
                        fgets(pro[i].name, sizeof(pro[i].name), stdin);
                        pro[i].name[strcspn(pro[i].name, "\n")] = '\0';

                        printf("Enter New Price = ");
                        scanf("%f", &pro[i].price);

                        printf("Enter New Quantity = ");
                        scanf("%d", &pro[i].quantity);

                        printf("Product Updated Successfully\n\n");
                        break;
                    }
                }

                if( found == 0 )
                {
                    printf("Product Not Found\n\n");
                }
                break;

            case 5:

                printf("Enter Product ID to delete = ");
                scanf("%d", &delete);

                found = 0;

                for( i=0; i< count; i++)
                {
                    if( pro[i].id == delete)
                    {
                        found = 1;
                        for( j=i; j < count - 1; j++)
                        {
                            pro[j] = pro[j+1];
                        }
                        count--;
                        break;
                    }
                }
                printf("Product Deleted Successfully\n\n");

                if( found == 0)
                {
                    printf("Product Not Found\n\n");
                }
                break;

            case 6:

                printf("1) Increase Stock Quantity\n");
                printf("2) Decrease Stock Quantity\n");

                printf("Enter Stock Choice = ");
                scanf("%d", &stock);

                if( stock == 1)
                {
                    printf("Enter Product ID = ");
                    scanf("%d", &increase);

                    found = 0;

                    for( i=0; i < count; i++)
                    {
                        if( pro[i].id == increase)
                        {
                            found = 1;

                            printf("Product Name = %s\n",pro[i].name);
                            printf("Price = %.2f\n",pro[i].price);
                            printf("Enter quantity to add = ");
                            scanf("%d", &add);

                            pro[i].quantity = pro[i].quantity + add;
                            printf("Quantity Added Successfully\n");
                            printf("New Quantity = %d\n\n",pro[i].quantity);
                            break;
                        }
                    }
                    if( found == 0)
                    {
                        printf("Product Not Found\n\n");
                    }
                    break;
                }
                else if( stock == 2)
                {
                    printf("Enter Product ID = ");
                    scanf("%d", &decrease);

                    found = 0;

                    for( i=0; i < count; i++)
                    {
                        if( pro[i].id == decrease)
                        {
                            found = 1;

                            printf("Product Name = %s\n",pro[i].name);
                            printf("Price = %.2f\n",pro[i].price);
                            printf("Enter quantity to reduce = ");
                            scanf("%d", &reduce);

                            if( pro[i].quantity >= reduce)
                            {
                                pro[i].quantity = pro[i].quantity - reduce;
                                printf("Quantity Reduced Successfully\n");
                                printf("New Quantity = %d\n\n",pro[i].quantity);
                                break;
                            }
                            else{
                                printf("Quantity Not Available\n\n");
                                break;
                            }
                        }
                    }
                    if( found == 0)
                    {
                        printf("Product Not Found\n\n");
                    }
                    break;
                }
                else{
                    printf("Invalid Choice\n\n");
                    break;
                }

            case 7:

                printf(" Products With Low Stock \n");

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( pro[i].quantity < 10)
                    {
                        found = 1;

                        printf("Product ID = %d\n",pro[i].id);
                        printf("Product Name = %s\n",pro[i].name);
                        printf("Price = %.2f\n",pro[i].price);
                        printf("Quantity = %d\n\n",pro[i].quantity);
                    }
                }
                printf("\n");

                if( found == 0)
                {
                    printf("No Product With Low Stock\n\n");
                }
                break;

            case 8:

                printf("Thank You!\n\n");
                return 0;

            default:

                printf("Invalid Choice\n\n");
                break;

        }
    }
    return 0;
}