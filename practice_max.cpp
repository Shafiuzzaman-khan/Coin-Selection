#include<iostream>
using namespace std;
int main()
{
    int coins[]={10,20,20,30,30,50,60};
    int n = sizeof(coins)/sizeof(coins[0]);
    int i,j,temp=coins[0];
    int sumtaka=0,finalsumtaka=0,mincount=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(coins[i]>coins[j])
            {
                temp = coins[j];
                coins[j]=coins[i];
                coins[i]=temp;
            }
        }
    }

    cout<<"after sortings:"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<coins[i]<<"  ";
    }
    cout<<endl;

    for(i=0;i<n;i++)
    {
        sumtaka = finalsumtaka + coins[i];
        if(sumtaka>100)
        {
            finalsumtaka = finalsumtaka;
        }
        else
        {
            finalsumtaka = sumtaka;
            mincount++;
        }
    }

    cout<<"sum of taka:"<<finalsumtaka<<endl;
    cout<<"total coins required:"<<mincount;

}
