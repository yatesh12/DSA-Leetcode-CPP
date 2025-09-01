// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int count = 1;
//  for(int i = 1; i <= n; i++){
//     for(int j = 1 ; j <= n; j++){
//         cout << count << " ";
//         count++;
//     }
//     cout<<endl;
//  }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main(){
//   for(int i = 1; i <= 4; i++){
//     for(int j = 1; j <= i; j++){
//         cout << "*";
//     }
// cout << endl;

//   }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int count = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count;
//         }
//         count++;
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 4; i++)
//     {
//     // int value  = i;

//         for (int j = 1; j <= i; j++)
//         {
//            cout << i + j -1 << " ";
//         //    value++;

//         }
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 4; i++)
//     {
//     // int value  = i;

//         for (int j = 1; j <= i; j++)
//         {
//            cout << i - j + 1 << " ";
//         //    value--;

//         }
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i < 4; i++)
//     {
//         char start = 'A' + i;

//         for (int j = 0; j < 4; j++)
//         {
//             cout << (char)(start + j)<< " ";
//         }
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch = 'A';

//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }

// =====================================================

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 0; i < 3; i++) {
//         // Print leading spaces
//         for (int j = 0; j < i * 2; j++) {
//             cout << " ";
//         }
//         // Print characters
//         for (int k = 0; k < 3 - i; k++) {
//             cout << (char)('a' + i + k) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int rows = 5; // You can change the number of rows

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }

        // Print decreasing numbers
        for (int l = i - 1; l >= 1; l--) {
            cout << l << " ";
        }

        cout << endl;
    }
    return 0;
}