// Program to calculate Area
# include<stdio.h>

int main(){
    int l,b,area;
    
    printf("value of l and b \n"); 
     // \n is used for newline
    
    scanf("%d%d",&l,&b);
     // value format , address where value to be stored
    
    area = l*b;
    /* area of rectangle and square */
    
    printf("area is %d",area);
    
    /* format of the value , variable value */ 
    return 0;
}