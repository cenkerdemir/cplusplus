// class template example

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class List {
    private:
        vector<T> datastore;
    public:
        List() {}
        void add(T item){
            datastore.push_back(item);
        }
    void display(){
        for (int i = 0; i < datastore.size(); i++) {
            cout << datastore[i] << endl;
        }
    }
};

int main() {
    system("clear");
    
    List<string> groceries;
    groceries.add("tomatoes");
    groceries.add("potatoes");
    groceries.add("green beans");
    
    groceries.display();
    cout << endl;
    
    List<int> grades;
    grades.add(98);
    grades.add(65);
    grades.add(78);
    grades.add(79);
    
    grades.display();
    
    return 0;
}
