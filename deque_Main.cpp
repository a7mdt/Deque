#include "bits/stdc++.h"
using namespace std;

int main()
{
    // Deque (Deck) : U CAN INSERT FROM FRONT AND BACK. (the vectors inserts BACK only)

    deque<int>dSize(5); // Don't forget to use shrink_to_fit to less ur memory usage (after the resize)
    cout<<"Size before : "<<dSize.size()<<endl;
    dSize.resize(10);
    cout<<"Size after : "<<dSize.size()<<endl;
    dSize.shrink_to_fit(); // VIP;

    deque<int>d = {6,8,10,12,14,16,18,20,22,24,26,30};
    d[0] = 4; // Editing the first element.
    d.push_back(32);
    d.push_front(4); // Huge feature in the Deque (it isn't in the vectors.)
    d.emplace_back(34); // adds item from the back.
    d.emplace_front(2); // adds item from the beggining.
    d.pop_back(); // delete item from the back.
    d.pop_front(); // delete item from the front.
    cout<<"d.front() : "<<d.front()<<endl;
    cout<<"d.back() : "<<d.back()<<endl;
    cout<<"Deque Values : ";
    for(auto iD = d.begin(); iD != d.end() ; iD++)
        cout<<*iD<<" ";
    cout<<endl;
    d.erase(d.begin()+2); // The third item will be deleted.
    d.erase(d.begin()+4,d.end()-6); // The items in this range will be Deleted.
    d.insert(d.end()-6,2,16); // Will add 16 two times in this position.
    d.emplace(d.begin(),0); // Will add 0 in the first of the deque
    // NOTE : emplace is QUICKER THAN insert.
    //--------------------------------------
    deque<int>d1 = {1,3,5,7};
    deque<int>d2 = {2,4,6,8};
    cout<<"Deque1 Values (before swap) : ";
    for(auto i : d1)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Deque2 Values (before swap) : ";
    for(auto i : d2)
        cout<<i<<" ";
    cout<<endl;
    d1.swap(d2);
    cout<<"Deque1 Values (after swap) : ";
    for(auto i : d1)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Deque2 Values (after swap) : ";
    for(auto i : d2)
        cout<<i<<" ";
    cout<<endl;
    //----------------------------------------
    deque<int>d4 = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Values Before Reversing : ";
    for(int i : d4)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(d4.begin(),d4.end());
    cout<<"Values After Reversing : ";
    for(int i : d4)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //----------------------------------------
    deque<int>d5= {7,5,1,4,0,6,-1,100};
    cout<<"Values Before Sorting : ";
    for(int i : d5)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(d5.begin(),d5.end());
    cout<<"Values After Sorting (Descending) : ";
    for(int i : d5)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(d5.rbegin(),d5.rend());
    cout<<"Values After Sorting (Ascending) : ";
    for(int i : d5)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
