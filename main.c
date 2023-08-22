#include <stdio.h>

struct sanpham 
{
    char tenSP[50];
    float giaSP;
    int typeSP;
    int sizeSP;
    float weightSP;
};

enum kieuSP
{
    Clothing, 
    Footwear, 
    Electronics,
};
void nhap(struct sanpham* sp) 
{
    printf("Name: ");   
    scanf("%s",&sp->tenSP);
    printf("Price: ");   
    scanf("%f",&sp->giaSP);

    printf("Type (0: Clothing, 1: Footwear, 2: Electronics): ");
    scanf("%d",&sp->typeSP);
    
    if(sp->typeSP==0||sp->typeSP==1)
    {
        printf("Size: ");   
        scanf("%d",&sp->sizeSP);
    }
    if(sp->typeSP==2)
    {
        printf("Weight: ");   
        scanf("%f",&sp->weightSP);
    }
}
void xuat(struct sanpham* sp) 
{
    printf("Name: %s\n",sp->tenSP);
    printf("Price: %0.2f\n",sp->giaSP);
    printf("Type: %d\n",sp->typeSP);
    if(sp->typeSP==0||sp->typeSP==1)
    {
        printf("Size: %d\n",sp->sizeSP);   
    }
    if(sp->typeSP==2)
    {
        printf("Weight: %0.2f\n",sp->weightSP);
    }     
}

int main() {
    int n;
    struct sanpham SP[100];
    printf("Enter the number of products: "); 
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    {     
        printf("\nEnter information for product: %d\n",i);
        nhap(&SP[i]);  
    }
    printf("-----------------------INFORMATION FOR PRODUCT-----------------------------");
    for(int i=1;i<=n;i++) 
    {
        printf("\nInformation for product: %d\n",i);
        xuat(&SP[i]);
    }        
    return 0;
}
