// ======= Pattern - 1 =======
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cout << "Enter input value: " << endl;
//     cin >> n;
//     int s = n + 1;
//     int i = 1; // for rows
//     while (i <= n)
//     {
//         int j = 1; // for cols
//         while (j <= (s - i))
//         {
//             cout << i;
//             j = j + 1; // for new col
//         }
//         cout << endl;
//         i = i + 1; // for row printing
//     }
// }

// Output:
// 11111
// 2222
// 333
// 44
// 5

// ======= Pattern - 2 =======
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n = 3;

     for (int i = 1; i <= 3; ++i) {
        for(int k = 1; k < i; ++k ){
            cout << " ";
        }

        for(int j = 1; j <= (4 - i); ++j){
            cout << i;
        }
        cout << '\n';
    }
}

// Output:
// 111
//  22
//   3