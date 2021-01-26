#include<stdio.h>
int main()
{
char a,b;
printf("-----------------------------------------------THIS IS A DEMO GAME-----------------------------------------------");
printf("PLAYER FIRST NAME :-");
scanf("%s\n",&a);
printf("PLAYER SECOUND NAME :-");
scanf("%s\n",&b);
int z[4][4],v=1;;

            for(int i=0;i<4;i++)
                {
                    for(int j=0;j<4;j++)
                        {
                            z[i][j]=2;
                        }
                }//giving the array initial value
z[1][1]=1;
z[1][2]=1;
z[2][1]=0;
z[2][2]=0;
           for(int i=0;i<4;i++)
                {
                    for(int j=0;j<4;j++)
                        {
                            printf("| %d |",z[i][j]);
                        }
                        printf("\n");
                }

         while(v)
                {
                    int r,c,k,m[4];
                    printf("Row :-");
                    fflush(stdin);
                    scanf("%d",&r);
                    printf("Column :-");
                    scanf("%d",&c);
                    printf("1 OR 0 :-");
                    scanf("%d",&k);

                    z[r][c]=k;
                    int h=0;
                    for(int i=0;i<4;i++)//FOR ROW
                    {
                        if(z[i][c]==k)
                        {
                            int o=r-i;
                            if(o<0)
                                o=0-o;
                            m[i]=o;
                             h++;
                        }
                        else
                            m[i]=0;

                    }
                   if(h>1)
                   {


                     int u=m[0];
                         for(int i=0;i<4;i++)
                         {
                             if(m[i]>u)
                                u=m[i];
                         }
                         int w;
                         for( w=0;w<4;w++)
                         {
                             if(m[w]==u)
                                break;

                         }
                          if(w>r)
                         {
                             for(int i=r;i<=w;i++)
                               z[i][c]=k;
                         }
                         else
                         {
                             for(int i=w;i<=r;i++)
                               z[i][c]=k;
                         }
                   }
                   else
                   {

                         for(int i=0;i<4;i++)//FOR COLUMN
                    {
                        if(z[r][i]==k)
                        {
                            int o=c-i;
                            if(o<0)
                                o=0-o;
                            m[i]=o;

                        }
                        else
                            m[i]=0;

                    }

                      int u=m[0];
                         for(int i=0;i<4;i++)
                         {
                             if(m[i]>u)
                                u=m[i];
                         }
                        int  w;
                         for( w=0;w<4;w++)
                         {
                             if(m[w]==u)
                                break;

                         }
                          if(w>c)
                         {
                             for(int i=c;i<=w;i++)
                               z[r][i]=k;
                         }
                         else
                         {
                             for(int i=w;i<=c;i++)
                               z[r][i]=k;
                         }

                    }
                         int y=0;//COMMOM RESULT
             for(int i=0;i<4;i++)
                {
                    for(int j=0;j<4;j++)
                        {
                            printf("| %d |",z[i][j]);
                            if(z[i][j]==1||z[i][j]==0)
                                y++;
                        }
                        printf("\n");
                }
                     if(y==16)
                        v=0;
                }
return 0;
}
