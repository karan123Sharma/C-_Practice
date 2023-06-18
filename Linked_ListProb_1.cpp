#include <iostream>
using namespace std;
class Keyword
{
public:
    Keyword *prev;
    string key_word;
    string meaning;
    Keyword *next;
    Keyword(string keyword, string meaning)
    {
        this->prev = NULL;
        this->key_word = keyword;
        this->meaning = meaning;
        this->next = NULL;
    }
};
// Keyword * Create_Node(string keyword,string meaning){
//     Keyword *new_node = new Keyword(keyword,meaning);
//     Keyword *head = new_node;
//    return head;
// }
void Insert_at_first(Keyword *&head, string keyword, string meaning)
{
    Keyword *new_node = new Keyword(keyword, meaning);
    Keyword *temp = new_node;
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void Insert_at_last(Keyword *head, string keyword, string meaning)
{
    Keyword *new_node = new Keyword(keyword, meaning);
    Keyword *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            break;
        }
    }
    temp->next = new_node;
    new_node->prev = temp;
}
void Insert_at_middle(Keyword *&head, string keyword, string meaning, int pos)
{
    Keyword *new_node = new Keyword(keyword, meaning);
    Keyword *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    new_node->prev = temp;
    new_node->next = temp->next;
    temp = temp->next;
    temp->prev = new_node;
    temp = new_node->prev;
    temp->next = new_node;
    // new_node->next = temp->next;
    // new_node->prev = temp;
    // temp->next = new_node;
}
void Delete_at_first(Keyword *&head)
{
    Keyword *temp = head;
    temp = temp->next;
    temp->prev = NULL;
    head = temp;
}
void Delete_at_last(Keyword *&head)
{
    Keyword *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        // cout<<temp->key_word<<endl;
    }
    temp = temp->prev;
    // cout<<temp->key_word;
    temp->next = NULL;
}
void AscDisplay(Keyword *head)
{
    Keyword *temp = head;
    cout<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    while (temp != NULL)
    {
        cout <<" " << temp->key_word << " | | " << temp->meaning << " "  << endl;
        cout << "-------------------------------------------------------" << endl;
        temp = temp->next;
    }
}
void DescDisplay(Keyword *head)
{
    Keyword *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            break;
        }
    }
    while (temp != NULL)
    {
        cout << temp->key_word << " ";
        temp = temp->prev;
    }
}
void Delete_at_middle(Keyword *head, string keyword)
{
    Keyword *temp = head;
    Keyword *temp2 = head;
    while (temp->key_word != keyword)
    {
        temp = temp->next;
        temp2 = temp2->next;
    }
    temp = temp->prev;
    temp->next = temp2->next;
    temp2 = temp2->next;
    temp2->prev = temp;

    // cout<<temp->key_word<<" "<<temp->meaning;
}
void UpDate(Keyword *&head, string keyword)
{
    Keyword *temp = head;
    while (temp->key_word != keyword)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            cout << "Result Not Found";
            break;
        }
    }
    string str;
    cout << "Enter the New Keyword : ";
    cin >> str;
    temp->key_word = str;
    cout << "Enter the New Meaning : ";
    str.clear();
    cin >> str;
    temp->meaning = str;
}
void Possible_Comparsion(Keyword *&head, string keyword)
{
    Keyword *temp = head;
    int count = 1;
    while (temp->key_word != keyword)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}
Keyword *Create_Node()
{
    string key, mean;
    cout << "Enter the New Keyword : ";
    cin >> key;
    cout << "Enter the New Meaning : ";
    cin >> mean;
    Keyword *newnode = new Keyword(key, mean);
    Keyword *head = newnode;
    return head;
}
int main()
{
    cout << "------------------Welcome to the world of Keywords and Meanings------------------" << endl;
    cout << "Create a Node to Start " << endl;
    string key, mean;
    cout << "Enter the New Keyword : ";
    cin >> key;
    cout << "Enter the New Meaning : ";
    cin >> mean;
    Keyword *newnode = new Keyword(key, mean);
    Keyword *head = newnode;
    int num;
    cout<<endl;
    do
    {
        cout << "------------------Welcome to the world of Keywords and Meanings------------------" << endl;
        cout << "1. Insert the Keyword and Meaning" << endl;
        cout << "2. Delete the Keyword and Meaning" << endl;
        cout << "3. Update the Keyword and Meaning" << endl;
        cout << "4. Display in Ascending Order" << endl;
        cout << "5. Display in Descending Order" << endl;
        cout << "6. Get the Possible Comparisions" << endl;
        cout << "7. End" << endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"Enter your Choice : ";
        cin >> num;
        switch (num)
        {
        case 1:
        {
            cout << "Where you wanna Insert" << endl;
            cout << "1. Insert at First Position" << endl;
            cout << "2. Insert at Last Position" << endl;
            cout << "3. Insert at Middle Position" << endl;
            int pos1;
            cin >> pos1;
            if (pos1 == 1)
            {
                string key, mean;
                cout << "Enter the Keyword : ";
                cin >> key;
                cout << "Enter the Meaning : ";
                cin >> mean;
                Insert_at_first(head, key, mean);
            }
            else if (pos1 == 2)
            {
                string key, mean;
                cout << "Enter the Keyword : ";
                cin >> key;
                cout << "Enter the Meaning : ";
                cin >> mean;
                Insert_at_last(head, key, mean);
            }
            else if (pos1 == 3)
            {
                string key, mean;
                int pos1;
                cout << "Enter the Psotion : ";
                cin >> pos1;
                cout << "Enter the Keyword : ";
                cin >> key;
                cout << "Enter the Meaning : ";
                cin >> mean;
                Insert_at_middle(head, key, mean, pos1);
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        case 2:
        {
            cout << "Where you wanna Delete" << endl;
            cout << "1. Delete at First Position" << endl;
            cout << "2. Delete at Last Position" << endl;
            cout << "3. Delete using Search " << endl;
            int pos1;
            cin >> pos1;
            if (pos1 == 1)
            {
                Delete_at_first(head);
            }
            else if (pos1 == 2)
            {
                Delete_at_last(head);
            }
            else if (pos1 == 3)
            {
                string str;
                cout << "Enter the Keyword : ";
                cin >> str;
                Delete_at_middle(head, str);
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            break;
        }
        case 3:
        {
            string str;
            cout<<"Enter the Keyword : ";
            cin>>str;
            UpDate(head,str);
            break;
        }
        case 4:
        {
            cout << "Display in Ascending Order : ";
            AscDisplay(head);
            /* code */
            break;
        }
        case 5:
        {
            cout << "Display in Descending Order : ";
            DescDisplay(head);
            /* code */
            break;
        }
        case 6:
        {
            string s;
            cout << "Enter the Keyword to be Compared : ";
            cin >> s;
            Possible_Comparsion(head, s);
            /* code */
            break;
        }
        default :{
            break;
        }
        }
    } while (num != 7);
}