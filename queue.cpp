#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

class queue {

public:
    int size;
    int front;
    int end;
    int *ele;

    queue(){
        this->size = 0;
        this->front = 0;
        this->end = 0;

        this->ele = new int[100];
    };

    queue(int n){
        this->size = n;
        this->front = 0;
        this->end = 0;
        this->ele = new int[this->size];;
    }

    void enqueue(int);

    int deque();
    void peek();
    void display() const;
};

void queue::enqueue(int x){

    ele[end++] = x;
    size++;
}

int queue::deque(){

    if(size == 0){
        return -11; //for overflow
    }
    int tmp = ele[front];

    front++;
    size--;

    return tmp;
}

void queue::display() const{

    if(size == 0){
        std::cout << "underflow\n";
        return;
    }
    
    std::cout << "Elemets in queue are : \n";

    for(int i = front; i < end; i++){
        std::cout << ele[i] << ' ';
    }
    std::cout << '\n';

}

void queue::peek(){

    if(size == 0){
        std::cout << "underflow\n";
        return;
    }

    std::cout << "The top element is : " << ele[end - 1] << '\n';

}

int main(){

    queue q;
    int ch, x;
    int ret;

    while(true){
        std::cout << "1.Insertion\n2.Deletion\n3.Display\n\n";
        std::cout << "Enter your choice : ";
        std::cin >> ch;

        if(ch == 1){
            std::cout << "Enter the number to be inserted:";
            std::cin >> x;  
            std::cout << "\nNumber pushed in the queue:" << x;

            q.enqueue(x);

        }else if (ch == 2){
            ret = q.deque();

            if(ret == -11){
                std::cout << "Underflow no elements in queue!\n";
            } else {
                std::cout << "Popped Element : " << ret << '\n';
            }
            
        }else if (ch == 3){
            q.display();
        
        }else{
            std::cout << "Invalid choice\n";
        
        }
        std::cout << "\n\n";
    }

    return 0;
}


