#include <iostream>
#include <sstream>

using namespace std;

class Student
{
    public:
    string age,standard;
    string first_name,last_name;
    
    public:
    
    void set_age(string a)
    {
        age = a;
    }
    
    void set_first_name(string first)
    {
        first_name = first;   
    }
    
    void set_last_name(string last)
    {
       last_name = last;
    }
    
    void set_standard(string s)
    {
        standard = s;
    }
    
    string get_age()
    {
        return age;
    }
    
    string get_first_name()
    {
        return first_name;
    }
    
    string get_last_name()
    {
        return last_name;
    }
    
    string get_standard()
    {
        return standard;
    }
    
    void to_string()
    {
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
};


int main() 
{
    string age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
