#include <iostream> 

using namespace std; 


void pprint(int list[], int listLength) 
{
    for(int i = 0; i < listLength; i++) 
       cout << list[i] << " "; 
    cout << endl;
}


int findSmallestPosition(int list[], int startPosition, int listLength) 
{ 
    int smallestPosition = startPosition; 
    for(int i = startPosition; i < listLength; i++) 
        { 
        if(list[i] < list[smallestPosition]) 
            smallestPosition = i; 
        } 
    return smallestPosition; 
} 
void tanlash(int list[], int listLength) 
{ 
    for(int i = 0; i < listLength; i++) 
        { 
        int smallestPosition = findSmallestPosition(list, i, 
        listLength); 
        swap(list[i], list[smallestPosition]);
        pprint(list, listLength);
    } 
    return; 
}

 

void puffak(int list[], int listLength) 
{ 
 while(listLength--) 
 { 
  bool swapped = false; 
   
  for(int i = 0; i < listLength; i++) 
  { 
   if(list[i] > list[i + 1]) 
   { 
    swap(list[i], list[i + 1]);
    pprint(list, listLength);
    swapped = true; 
   } 
  } 
   
  if(swapped == false) 
   break; 
 } 
} 
 


int main () 
{
    int list[5] = {12, 5, 48, 0, 4}; 
    cout << "Input array ..." << endl;
    for(int i = 0; i < 5; i++) 
       cout << list[i] << " "; 
    cout << endl;
    int usul;
    cout<<"qaysi usul orqali saralansin?";cin>>usul;
    switch(usul){
        case 1: tanlash(list, 5);break;
        case 2: puffak(list, 5);break;
        case 3: tanlash(list, 5);break;
    } 
    cout << "Sorted array ..." << endl; 
    for(int i = 0; i < 5; i++) 
        cout << list[i] << " "; 
    cout << endl; 
}