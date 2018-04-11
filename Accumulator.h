//
// Created by xxvms on 11/04/18.
//

#ifndef ACCUMULATOR_ACCUMULATOR_H
#define ACCUMULATOR_ACCUMULATOR_H

template <class T>
class Accumulator {
private:
    T total;
public:
    explicit Accumulator(T start): total (start){}
    T operator+= (T const& t) { return total = total +t; };
    T GetTotal() const { return total; }

};


#endif //ACCUMULATOR_ACCUMULATOR_H
