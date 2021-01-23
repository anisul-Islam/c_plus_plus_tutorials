#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    
    int n,x, sum=0;
  
    cout << "How many students : ";
    cin >> n;

    int students[n];

    for(x=0 ; x< n; x++)
    {
        cout << "student " << x+1 << " = ";
        cin >> students[x];
        sum = sum + students[x];
    }
  
    cout << "Total Marks: " << sum << endl;
    cout << "Average Marks: " << (float)sum / n << endl;


    int max = students[0];
    int min = students[0];
    
    for(x=1; x<n; x++)
    {
        if(max < students[x])
        {
            max = students[x];
        }
        if(min > students[x])
        {
            min = students[x];
        }
    }

    cout << "Maximum Marks: " << max << endl;
    cout << "Minimum Marks: " << min << endl;

    getch();
}