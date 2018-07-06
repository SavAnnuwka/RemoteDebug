

#ifndef REMOTEDEBUG_FACTORIAL_H
#define REMOTEDEBUG_FACTORIAL_H

int factorial(int i) {
    if (i==0) return 1;
    else return i*factorial(i-1);
}



#endif //REMOTEDEBUG_FACTORIAL_H
