#include<stdio.h>
#include<string.h>
#define max 50

struct ingredientnames
{
    char names[max][max];
};
struct ingredientprices
{
    float price[max];
};
struct customerInfo
{
    char names[max];
    char tel[max];
}customer[max];
struct ingredientscounter
{
    int qty;
};
float fnbunprice(int x);
float fnmeatprice(int x);
float fnveggiesprice(int x);
float fnsideprice(int x);
float fndrinkprice(int x);
int fnrepeat(int *x);
int main()
{
    struct ingredientnames bunsname={"Ginger Bun","Toast Bun","Honey Bun","No Bun"};
    struct ingredientprices bunsprice={1,1.5,1,0};
    struct ingredientnames meatsname={"Beef","Chicken","Fish","Egg",};
    struct ingredientprices meatsprice={2.5,2.3,2,1.5};
    struct ingredientnames veggiesname={"Lettuces","Onions","Broccoli","No Vegetables"};
    struct ingredientprices veggiesprice={0.5,0.5,0.5,0};
    struct ingredientnames sidedishesname={"Fries","Coleslaw","Mashed Potatoes","No Side Dish"};
    struct ingredientprices sidedishesprice={1.5,1.0,1.0,0};
    struct ingredientnames drinksname={"Coke","Milo","Mineral Water","No Drink"};
    struct ingredientprices drinksprice={1.5,1.7,1,0};
    int bunchoice[max],meatchoice[max],veggieschoice[max],sidechoice[max],drinkchoice[max],i,count=0,choice[max],qty[max],qty_counter=0;
    float bun_price,meat_price,veggies_price,sidedish_price,drink_price,fprice[max],sum=0;
    char repeat,edit;
    do
    {
        printf("\t\t\t\t-----------------------------------------------------\n");
        printf("\t\t\t\t|          WELCOME TO MC'G RESTAURANT                |\n");
        printf("\t\t\t\t| We provide you freedom to make your own meals      |\n");
        printf("\t\t\t\t|----------------------------------------------------|\n\n");
        do
        {
        fflush(stdin);
        printf("\t\t\t\t-----------------------------------------------------\n");
        printf("\t\t\t\t| Please enter your name : ");gets(customer[count].names);
        printf("\t\t\t\t| Please enter your telephone number : ");gets(customer[count].tel);
        printf("\t\t\t\t-----------------------------------------------------\n");
        printf("\t\t\t\t| Let's start with Bun                               |\n");
        printf("\t\t\t\t| Choose your bun                                    |\n");
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<4;i++)
        {
            printf("\t\t\t\t| %d. %-15s         (RM %.2f)               |\n",i+1,bunsname.names[i],bunsprice.price[i]);
        }
        struct ingredientscounter bun_counter;
        printf("\t\t\t\t| How many bun you want to choose? : ");scanf("%d",&bun_counter.qty);
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<bun_counter.qty;i++)
        {
            printf("\t\t\t\t| your choice = ");scanf("%d",&choice[i]);
            while(choice[i]!=1 && choice[i]!=2 && choice[i]!=3 && choice[i]!=4)
            {
                fnrepeat(&choice[i]);
            }
            bunchoice[i]=choice[i];
        }
        printf("\t\t\t\t-----------------------------------------------------\n");
        printf("\t\t\t\t| Choose your meat                                   |\n");
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<4;i++)
        {
            printf("\t\t\t\t| %d. %-15s         (RM %.2f)               |\n",i+1,meatsname.names[i],meatsprice.price[i]);
        }
        struct ingredientscounter meat_counter;
        printf("\t\t\t\t| How many meat you want to choose? : ");scanf("%d",&meat_counter.qty);
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<meat_counter.qty;i++)
        {
            printf("\t\t\t\t| your choice = ");scanf("%d",&choice[i]);
            while(choice[i]!=1 && choice[i]!=2 && choice[i]!=3 && choice[i]!=4)
            {
                fnrepeat(&choice[i]);
            }
            meatchoice[i]=choice[i];
        }
        printf("\t\t\t\t-----------------------------------------------------\n");
        printf("\t\t\t\t| Choose your veggies                                |\n");
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<4;i++)
        {
            printf("\t\t\t\t| %d. %-15s         (RM %.2f)               |\n",i+1,veggiesname.names[i],veggiesprice.price[i]);
        }
        struct ingredientscounter veggies_counter;
        printf("\t\t\t\t| How many vegetable you want to choose? : ");scanf("%d",&veggies_counter.qty);
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<veggies_counter.qty;i++)
        {
            printf("\t\t\t\t| your choice = ");scanf("%d",&choice[i]);
            while(choice[i]!=1 && choice[i]!=2 && choice[i]!=3 && choice[i]!=4)
            {
                fnrepeat(&choice[i]);
            }
            veggieschoice[i]=choice[i];
        }
        printf("\t\t\t\t|----------------------------------------------------\n");
        printf("\t\t\t\t| Choose your side dish                              |\n");
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<4;i++)
        {
            printf("\t\t\t\t| %d. %-15s         (RM %.2f)               |\n",i+1,sidedishesname.names[i],sidedishesprice.price[i]);
        }
        struct ingredientscounter sidedish_counter;
        printf("\t\t\t\t| How many side dish you want to choose? : ");scanf("%d",&sidedish_counter.qty);
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<sidedish_counter.qty;i++)
        {
            printf("\t\t\t\t| your choice = ");scanf("%d",&choice[i]);
            while(choice[i]!=1 && choice[i]!=2 && choice[i]!=3 && choice[i]!=4)
            {
                fnrepeat(&choice[i]);
            }
            sidechoice[i]=choice[i];
        }
        printf("\t\t\t\t|----------------------------------------------------\n");
        printf("\t\t\t\t| Choose your drink                                  |\n");
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<4;i++)
        {
            printf("\t\t\t\t| %d. %-15s         (RM %.2f)               |\n",i+1,drinksname.names[i],drinksprice.price[i]);
        }
        struct ingredientscounter drink_counter;
        printf("\t\t\t\t| How many drink you want to choose? : ");scanf("%d",&drink_counter.qty);
        printf("\t\t\t\t|----------------------------------------------------|\n");
        for(i=0;i<drink_counter.qty;i++)
        {
            printf("\t\t\t\t| your choice = ");scanf("%d",&choice[i]);
            while(choice[i]!=1 && choice[i]!=2 && choice[i]!=3 && choice[i]!=4)
            {
                fnrepeat(&choice[i]);
            }
            drinkchoice[i]=choice[i];
        }
        printf("\t\t\t\t|-----------------------------------------------------\n");
        printf("\t\t\t\t| Order for %s  // tel no: %s              \n",customer[count].names,customer[count].tel);
        fprice[count]=0;
        for(i=0;i<bun_counter.qty;i++)
        {
            printf("\t\t\t\t| %-15s price        : RM %.2f             |\n",bunsname.names[bunchoice[i]-1],bunsprice.price[bunchoice[i]-1]);
            bun_price=fnbunprice(bunchoice[i]);
            fprice[count]+=bun_price;
        }
        for(i=0;i<meat_counter.qty;i++)
        {
            printf("\t\t\t\t| %-15s price        : RM %.2f             |\n",meatsname.names[meatchoice[i]-1],meatsprice.price[meatchoice[i]-1]);
            meat_price=fnmeatprice(meatchoice[i]);
            fprice[count]+=meat_price;
        }

        for(i=0;i<veggies_counter.qty;i++)
        {
            printf("\t\t\t\t| %-15s price        : RM %.2f             |\n",veggiesname.names[veggieschoice[i]-1],veggiesprice.price[veggieschoice[i]-1]);
            veggies_price=fnveggiesprice(veggieschoice[i]);
            fprice[count]+=veggies_price;
        }
        for(i=0;i<sidedish_counter.qty;i++)
        {
            printf("\t\t\t\t| %-15s price        : RM %.2f             |\n",sidedishesname.names[sidechoice[i]-1],sidedishesprice.price[sidechoice[i]-1]);
            sidedish_price=fnsideprice(sidechoice[i]);
            fprice[count]+=sidedish_price;
        }
        for(i=0;i<drink_counter.qty;i++)
        {
            printf("\t\t\t\t| %-15s price        : RM %.2f             |\n",drinksname.names[drinkchoice[i]-1],drinksprice.price[drinkchoice[i]-1]);
            drink_price=fndrinkprice(drinkchoice[i]);
            fprice[count]+=drink_price;
        }
        printf("\t\t\t\t|-----------------------------------------------------\n");
        printf("\t\t\t\t| Your meal price  : RM %.2f                         \n",fprice[count]);
        printf("\t\t\t\t|----------------------------------------------------\n\n");
        printf("\t\t\t\t|----------------------------------------------------\n");
        printf("\t\t\t\t| Do you want to edit your order?                   |\n");
        printf("\t\t\t\t| Press (N/n) if no                                 |\n");
        printf("\t\t\t\t| Press other keys if yes    : ");scanf(" %c",&edit);
        }
        while(edit!='N' && edit!='n');
        sum+=fprice[count];
        printf("\t\t\t\t|----------------------------------------------------\n");
        printf("\t\t\t\t| Do you want to repeat another order?              |\n");
        printf("\t\t\t\t| Press (N/n) if no                                 |\n");
        printf("\t\t\t\t| Press other keys if yes    : ");scanf(" %c",&repeat);
        printf("\t\t\t\t|---------------------------------------------------|\n");
        printf("\t\t\t\t|---------------------------------------------------\n");
        count++;
    }
    while(repeat!='n' && repeat!='N');
    for(i=0;i<count;i++)
    printf("\t\t\t\t| Order for %s  : RM %.2f                           \n",customer[i].names,fprice[i]);
    printf("\t\t\t\t| TOTAL PRICE   : RM %.2f                           \n",sum);
    printf("\t\t\t\t|---------------------------------------------------\n");
    printf("\t\t\t\t|---------------------------------------------------\n");
    printf("\t\t\t\t| WE APPRECIATE YOU FOR CHOOSING OUR RESTAURANT     |\n");
    printf("\t\t\t\t| SEE YOU AGAIN!!                                   |\n");
    printf("\t\t\t\t|---------------------------------------------------\n");
return 0;
}
int fnrepeat(int *choice)
{
    printf("\t\t\t\t| Sorry, your choice was not given in the menu.\n\t\t\t\t| Please choose correctly.\n");
    printf("\t\t\t\t| your choice = ");scanf("%d",&*choice);
}
float fnbunprice(int bunchoice)
{
    float price;
    struct ingredientprices bunsprice={1,1.5,1,0};
    switch(bunchoice)
    {
        case 1 : price=bunsprice.price[0];break;
        case 2 : price=bunsprice.price[1];break;
        case 3 : price=bunsprice.price[2];break;
        default: price=0;break;
    }
return price;
}
float fnmeatprice(int meatchoice)
{
    float price;
    struct ingredientprices meatsprice={2.5,2.3,2,1.5,0};
    switch(meatchoice)
    {
        case 1 : price=meatsprice.price[0];break;
        case 2 : price=meatsprice.price[1];break;
        case 3 : price=meatsprice.price[2];break;
        case 4 : price=meatsprice.price[3];break;
        default: price=0;break;
    }
return price;
}
float fnveggiesprice(int veggieschoice)
{
    float price;
    struct ingredientprices veggiesprice={0.5,0.5,0.5,0};
    switch(veggieschoice)
    {
        case 1 : price=veggiesprice.price[0];break;
        case 2 : price=veggiesprice.price[1];break;
        case 3 : price=veggiesprice.price[2];break;
        default: price=0;break;
    }
return price;
}
float fnsideprice(int sidechoice)
{
    float price;
    struct ingredientprices sidedishesprice={1.5,1.0,1.0,0};
    switch(sidechoice)
    {
        case 1 : price=sidedishesprice.price[0];break;
        case 2 : price=sidedishesprice.price[1];break;
        case 3 : price=sidedishesprice.price[2];break;
        default: price=0;break;
    }
return price;
}
float fndrinkprice(int drinkchoice)
{
    float price;
    struct ingredientprices drinksprice={1.5,1.7,1,0};
    switch(drinkchoice)
    {
        case 1 : price=drinksprice.price[0];break;
        case 2 : price=drinksprice.price[1];break;
        case 3 : price=drinksprice.price[2];break;
        default: price=0;break;
    }
return price;
}



