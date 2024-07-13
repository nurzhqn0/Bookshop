#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
class bookshop{
public:
  void control_panel();
  void add_book();
  void show_book();
  void check_book();
  void update_book();
  void delete_book();
};

void bookshop::control_panel(){
    system("cls");
    cout << "\n\n\t\t\t\tControl panel";
    cout << "\n\n1. Add book";
    cout << "\n2. Display books";
    cout << "\n3. Check book";
    cout << "\n4. Update book";
    cout << "\n5. Delete book";
    cout << "\n6. Exit";
}

void bookshop::add_book(){

}

void bookshop::show_book(){

}

void bookshop::check_book(){

}

void bookshop::update_book(){

}

void bookshop::delete_book(){

}

void bookShopRecord(){
  int choice;
  char x;
  bookshop b;

  while(1){
    b.control_panel();
    cout << "\n\nEnter your choice : ";
    cin >> choice;

    switch(choice){
    case 1:
      do{
        b.add_book();
        cout << "\n\nWant to add another book? (y/n) : ";
        cin >> x;
      } 
      while (x == 'y');
      break;

    case 2:
      b.show_book();
      break;

    case 3:
      b.check_book();
      break;

    case 4:
      b.update_book();
      break;

    case 5:
      b.delete_book();
      break;

    case 6:
      exit(0);
      break;

    default:
      cout << "\n\nInvalid choice\n";
    }
  }
}

int main(){
  bookShopRecord();

  return 0;
  
}