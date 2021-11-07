#include <iostream>
#include <array>
int main() {
  std::array<int, (10)>System_Array_Asset;
  /*for(int deklarasi : array) {
  statemen
  }*/
  System_Array_Asset[0] = (0);
  System_Array_Asset[1] = (1);
  System_Array_Asset[2] = (2);
  System_Array_Asset[3] = (3);
  System_Array_Asset[4] = (4);
  System_Array_Asset[5] = (5);
  System_Array_Asset[6] = (6);
  System_Array_Asset[7] = (7);
  System_Array_Asset[8] = (8);
  System_Array_Asset[9] = (9);
  std::cout << "(1) - Loop array biasa___ " << std::endl;
  for(int System_Looping_Array_Value : System_Array_Asset) {
    std::cout << "-Value : " << System_Looping_Array_Value << " Address : " << &System_Looping_Array_Value << std::endl;
  }
  std::cout << std::endl;
  std::cout << "(2) - Reference___" << std::endl;
  for(int &Array_Looping_Reference : System_Array_Asset) {
    std::cout << "-value : " << Array_Looping_Reference << " Address : " << & Array_Looping_Reference << std::endl;
  }
  std::cout << std::endl;
  std::cout << "(3) - Manipulate value___" << std::endl;
   for(int &Array_Looping_Reference : System_Array_Asset) {
     Array_Looping_Reference = ((Array_Looping_Reference) * (2));
    std::cout << "-value : " << Array_Looping_Reference << " Address : " << & Array_Looping_Reference << std::endl;
  }
  std::cin.get();
  return 0;
}