  #include<stdio.h>

int main()
{
    int i, j;

    for(i=1 ; i<=13 ; i++)
    {
        for(j=1 ; j<=19 ; j++)
        {
            if(i<=3)
            {
                if(((j>=4-i) && (j<=6+i)) || ((j>=14-i) && (j<=16+i)))
                    printf("*");
                else
                    printf(" ");
            }
            if(i==4)
            {
                if((j>=1 && j<=6 ) || (j>=13 && j<=19))
                    printf("*");

                else if(j=8){

                    printf("MySirG");
                    j=j+4;
                }


            }
            if(i>4){
                if(j>=i-3 && j<=23-i)
                    printf("*");
                else
                    printf(" ");
            }


        }
        printf("\n");
    }

    return 0;
}
