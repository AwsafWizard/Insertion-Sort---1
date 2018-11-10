#include <iostream>

using namespace std;

int main()
{
    int n, num;
    cin >> n;

    int arr[n];

    for(int i=0; i<n+1; i++){

        if(i == 0)
            arr[0] = -10001;
        else
            cin >> arr[i];
    }

    num = arr[n];

    for(int i = n-1; i > 0; i--){

        if(arr[i] > num)
            arr[i+1] = arr[i];

        if(i < n){

            for(int i = 1; i < n+1; i++)
                cout << arr[i] << " ";

            cout << endl;
        }

        if (arr[i-1] <= num){
            arr[i] = num;
            break;
        }

    }

    for(int i = 1; i < n+1; i++)
        cout << arr[i] << " ";


    return 0;
}
