#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    int sum = 0;
    int average = 0;
    int loop = 0;
    int total = 0;
    int counter = 1;

    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int minimumIndex = 0;
    int maximumIndex = 0;

    cout<<"please enter Loop Limit\n";
    cin>>loop;
    total = loop;

    while (loop > 0)
    {
        cout<<"please enter value "<< counter<<" ";
        cin>>number;
        if (number<minimum) {
            minimum=number;
            minimumIndex = counter;
        }
        if(number > maximum) {
            maximum = number;
            maximumIndex= counter;
        }
     sum = sum + number;
        counter++;
        loop--;
    }

    cout<<"Sum of Entered Values = " << sum<<endl;
    average=sum/total;
    cout<<"Average Values = "<< average<<endl;
    cout<<"Minimum Value = "<<minimum<<endl;
    cout<<"Minimum Value Enter At Index "<<minimumIndex<<endl;
    cout<<"Maximum Value = "<<maximum<<endl;
    cout<<"Maximum Value Enter At Index "<<maximumIndex<<endl;



    return 0;
}