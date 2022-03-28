#include<iostream>
#include<string>
#include<list>
#include<bitset>
#include<algorithm>
#include<cmath> 
#include<type_traits>
using namespace std;

// I have made the checker which checkes the winner at the right side of the page to concentarte on the main script
// I used -50 as viewing of blank element because the NULL in c++ means 0 so it will be a problem

int main(){
    int lst[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, number, x, y, w1, w2, w3, w4, q, e,size;
    size = std::size(lst);
    number = 0;
    cout << "Hello, You have entered now a wonderful game which is developed by a wonderful FCAI guy (:\nThis is a two person game so please one of you will be player1 and one of you will be player2\nand this the list of items which each one of you will choose from \n(note:Any -50 element is = Blank element):\n";
    for (int i = 0; i < size; i++)
    {
        cout << lst[i] <<" ";
    }
    while (true)
    {
    cout << "\n" << "Player1 should now Choose one or two tokens to be removed from this list" << "\n" << "please choose either you will choose one or two tokens by typing 1 if one and 2 if two: ";
    cin >> x;
    if (x == 1)
    {
        cout << "Please write the order of the token you want to remove: ";
        cin >> y;
        lst[y-1] = -50;
// Now We will run the checker

                                                                                                for (int i = 0; i < size  ; i++)
                                                                                                {
                                                                                                if (lst[i] == -50)
                                                                                                {
                                                                                                    number += 1;
                                                                                    
                                                                                                }
                                                                                                }
                                                                                                if (number == size)
                                                                                                {
                                                                                                cout << "The winner is player1";
                                                                                                break;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    number = 0;
                                                                                                }
                                                    for (int i = 0; i < size; i++)                                            
                                                    {
                                                        cout << lst[i] <<" ";
                                                    }
    }
    else if (x == 2)
    {
    cout << "Please enter the first order number from the two: ";
    cin >> w1;
    lst[w1-1] = -50;


                                                                                            for (int i = 0; i < size  ; i++)
                                                                                            {
                                                                                            if (lst[i] == -50)
                                                                                            {
                                                                                                number += 1;
                                                                                                
                                                                                            }
                                                                                            }
                                                                                            if (number == size)
                                                                                            {
                                                                                            cout << "The winner is player1";
                                                                                            break;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                number = 0;
                                                                                            }
                                                    for (int i = 0; i < size; i++)                                            
                                                    {
                                                        cout << lst[i] <<" ";
                                                    }

    cout << "\n" << "Please enter the second order number from the two: ";
    cin >> w2;
    lst[w2-1] = -50;

                                                                                                    for (int i = 0; i < size  ; i++)
                                                                                                    {
                                                                                                    if (lst[i] == -50)
                                                                                                    {
                                                                                                        number += 1;
                                                                                                        
                                                                                                    }
                                                                                                    }
                                                                                                    if (number == size)
                                                                                                    {
                                                                                                    cout << "The winner is player1";
                                                                                                    break;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        number = 0;
                                                                                                    }
                                                    for (int i = 0; i < size; i++)                                            
                                                    {
                                                        cout << lst[i] <<" ";
                                                    }

    }
    else
    {
        cout << "Please enter number 1 or 2 only to choose either you will remove one or two tokens";
    }
    cout << "\n" << "Player2 should now Choose one or two tokens to be removed from this list" << "\n" << "please choose either you will choose one or two tokens by typing 1 if one and 2 if two: ";
    cin >> q;
    if (q == 1)
    {
        cout << "Please write the order of the token you want to remove: ";
        cin >> e;
        lst[e-1] = -50;

                                                                                                for (int i = 0; i < size  ; i++)
                                                                                                {
                                                                                                if (lst[i] == -50)
                                                                                                {
                                                                                                    number += 1;
                                                                                                    
                                                                                                }
                                                                                                }
                                                                                                if (number == size)
                                                                                                {
                                                                                                cout << "The winner is player2";
                                                                                                break;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    number = 0;
                                                                                                }
                                                    for (int i = 0; i < size; i++)                                            
                                                    {
                                                        cout << lst[i] <<" ";
                                                    }
        
    }
    else if (q == 2)
    {
    cout << "Please enter the first order number from the two: ";
    cin >> w3;
    lst[w3-1] = -50;

                                                                                                for (int i = 0; i < size  ; i++)
                                                                                                {
                                                                                                if (lst[i] == -50)
                                                                                                {
                                                                                                    number += 1;
                                                                                                    
                                                                                                }
                                                                                                }
                                                                                                if (number == size)
                                                                                                {
                                                                                                cout << "The winner is player2";
                                                                                                break;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    number = 0;
                                                                                                }
                                                    for (int i = 0; i < size; i++)                                            
                                                    {
                                                        cout << lst[i] <<" ";
                                                    }
    cout << "\n" << "Please enter the second order number from the two: ";
    cin >> w4;
    lst[w4-1] = -50;

                                                                                                for (int i = 0; i < size  ; i++)
                                                                                                {
                                                                                                if (lst[i] == -50)
                                                                                                {
                                                                                                    number += 1;
                                                                                                    
                                                                                                }
                                                                                                }
                                                                                                if (number == size)
                                                                                                {
                                                                                                cout << "The winner is player2";
                                                                                                break;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    number = 0;
                                                                                                }
                                                    for (int i = 0; i < size; i++)                                            
                                                    {
                                                        cout << lst[i] <<" ";
                                                    }
    }
    else
    {
    cout << "Please enter number 1 or 2 only to choose either you will remove one or two tokens";
    }
}
    return 0;
}