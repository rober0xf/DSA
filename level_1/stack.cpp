#include <iostream>
#include <stdexcept>
#include <vector>

// last in first out
class Stack {
    private:
        int head;  // pointing to the top element. (index not value)
        std::vector<int> stack;

    public:
        // constructor. -1 to represent an empty stack
        Stack(int capacity) : stack(capacity), head(-1) {}

        void push(int value) {
            // if the stack is full
            if (head + 1 >= stack.size()) {
                throw std::overflow_error("stack overflow");
            }
            head++;
            stack[head] = value;
        }

        int pop() {
            if (head == -1) {
                throw std::overflow_error("stack underflow");
            }

            int poped = stack[head];
            head--;

            return poped;
        }

        void top() {
            if (head == -1) {
                std::overflow_error("stack underflow");
            }

            std::cout << stack[head] << std::endl;
        }

        bool is_empty() {
            if (head == -1) return true;
            return false;
        }

        int size() {
            // if the stack its empty, head + 1 will return 0
            return head + 1;
        }

        void print() {
            if (head == -1) {
                std::cout << "stack empty" << std::endl;
                return;
            }

            for (int i = 0; i <= head; i++) {
                std::cout << stack[i] << std::endl;
            }
        }
};

int main() {
    Stack my_stack(10);
    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);
    my_stack.push(4);

    std::cout << "before pop" << std::endl;
    my_stack.print();

    my_stack.pop();
    my_stack.pop();
    std::cout << "after pop" << std::endl;
    my_stack.print();

    my_stack.top();

    std::cout << my_stack.is_empty() << std::endl;
    std::cout << "stack size: " << my_stack.size() << std::endl;

    return 0;
}
