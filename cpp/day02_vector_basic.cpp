#include <iostream>
#include <vector>
using namespace std;

/*int main() {
    vector<int> marks;
    int numStudents;
    
    cout << "Enter number of students: ";
    cin >> numStudents;
    

    for(int i = 0; i < numStudents; i++) {
        int mark;
        cout << "Enter mark for student " << i+1 << ": ";
        cin >> mark;
        marks.push_back(mark);
    }
    
    
    int sum = 0;
    for(int i = 0; i < marks.size(); i++) {
        sum = sum + marks[i];
    }
    
    
    double average = (double)sum / marks.size();
    cout << "Average mark: " << average << endl;
    
    int highest = marks[0];
    for(int mark : marks) {
        if(mark > highest) {
            highest = mark;
        }
    }
    cout << "Highest mark: " << highest << endl;
    
    return 0;
}*/


int main(){
    vector<int> v1;
    vector<int> v2(5);
    vector<int> v3(5, 10) ;
    vector<int> v4 = {1,2,3,4,5};
    vector<int> v5(v4);

    cout << v4[0] << endl;
    cout << v2[0] << endl;

    cout << "Size: " << v4.size() << endl;
    cout << "Capacity: " << v4.capacity() << endl;

    v4.push_back(6);
    v4.insert(v4.begin()+2, 99);
    v4.pop_back();
    v4.erase(v4.begin()+1);
    //range-based for loops (best) 
    for (int num: v4){
        cout << num << " ";
    }
    cout << "\n";
    // indexing
    for(int i=0; i<v4.size(); i++){
        cout << v4[i] <<" ";
    }
    cout << "\n";

    //iterator
    for(auto it = v4.begin(); it != v4.end(); it++){
        cout << *it << " ";
    }
    return 0;
}