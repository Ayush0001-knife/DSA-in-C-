#include <iostream>
using namespace std;

class User
{
private:
      int id;
      string password;

public:
      string userName;

      User(int id)
      {
            this->id = id;
      }
      void setPassword(string password)
      {
            this->password = password;
      }
      void getPassword()
      {
            cout << "Password of the " << userName << " is : " << password << endl;
      }
};

int main()
{
      User u1(2401789);
      u1.userName = "Ayush";
      u1.setPassword("90193");

      u1.getPassword();

      return 0;
}