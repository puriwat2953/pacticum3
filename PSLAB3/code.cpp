#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <set>
#include <map>

using namespace std;

void print_vector(vector<int> box);
vector<int> create_vector();

list<int> create_list();
void print_list(list<int> box);

deque<int> create_deque();
void print_deque(deque<int> box);

set<int> create_set();
void print_set(set<int> box);

int main(){

    vector<int> a = create_vector();
    print_vector(a);

}

void print_vector(vector<int> box){
    cout << "-----------------\n| ";
    for (int j : box) cout << j << " | ";
    cout << "\n-----------------\n";
}

vector<int> create_vector(){
    int n, k;
    vector<int> col;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> k;
        col.push_back(k);
    }
    return col;
}

void print_list(list<int> box){
    cout << "-----------------\n| ";
    for (int j : box) cout << j << " | ";
    cout << "\n-----------------\n";
}

list<int> create_list(){
    int n, k;
    list<int> col;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> k;
        col.push_front(k);
    }
    return col;
}

void print_deque(deque<int> box){
    cout << "-----------------\n| ";
    for (int j : box) cout << j << " | ";
    cout << "\n-----------------\n";
}

deque<int> create_deque(){
    int n, k;
    deque<int> col;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> k;
        col.push_front(k);
    }
    return col;
}

void print_set(set<int> box){
    cout << "-----------------\n| ";
    for (int j : box) cout << j << " | ";
    cout << "\n-----------------\n";
}

set<int> create_set(){
    set<int> box;
    int a;
    int x;
    cin >> a;
    for (int i =1; i<=a;i++ ){
        cin >> x;
        box.insert(x);
    }
    return box;    
}

