class MinStack {
    int stack[10000];
    int min[10000];
    int topPtr;
    int minPtr;
public:
    MinStack() {
        topPtr=-1;
        minPtr=-1;
    }

    void push(int val) {
        if(topPtr>=10000)
            return;

        stack[++topPtr] = val;
        if(minPtr >= 0)
        {
            if(min[minPtr] > val)
                min[++minPtr] = val;
            else
            {
                min[minPtr+1] = min[minPtr];
                minPtr += 1;
            }
        }
        else
            min[++minPtr] = val;

    }

    void pop() {
        if(topPtr < 0)
            return;

        topPtr -= 1;
        minPtr -= 1;
    }

    int top() {
        return stack[topPtr];
    }

    int getMin() {
        return min[minPtr];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
