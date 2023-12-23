// 1==>
// #include <iostream>
// // #include <string>
// int main()
// {
//     std::string str = "Hello Mohsin How are you!";
//     int length = str.size(); // Returns the length of the string, which is 13
//     std::cout << "The length of the string is: " << length << std::endl;
//     return 0;
// }

// 2 ==>
// #include <iostream>
// #include <cmath>
// #include <cstring>
// int main()
// {
//     char source[] = "Hello, World!"; // Source string
//     char destination[20];            // Destination character array
//     strcpy(destination, source);     // Copy the source string to the destination
//     std::cout << "Source string: " << source << std::endl;
//     std::cout << "Copied string: " << destination << std::endl;
//     return 0;
// }

// 3==>
#include <iostream>
// #include <string>
#include <cstring>
using namespace std;
int main()
{
    string str1 = "Mohsin";
    string str2 = "Mohsin";
    int result = strncmp(str1, str2, 2);
    // equal = 0;
    // less = -1;
    // greater = 1;
    cout << result << endl;
    if (result == 0)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else if (result < 0)
    {
        std::cout << "The string str1 is less than str2." << std::endl;
    }
    else
    {
        std::cout << "The string str1 is greater than str2." << std::endl;
    }
    return 0;
}

// 4==>
// #include <iostream>
// using namespace std;
// int main() {
//   string str = "123";
//   int num = stoi(str);
//   cout << num << endl;
//   return 0;
// }