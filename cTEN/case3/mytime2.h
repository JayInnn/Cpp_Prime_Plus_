/*
Program:
    The program get Time class after operator overloading.
*/
#ifndef MYTIME2_H_
#define MYTIME2_H

class Time{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h,int m=0);
        void AdddMin(int m);
        void AddHr(int h);
        void Reset(int h=0,int m=0);
        Time operator+(const Time &t) const;
        Time operator-(const Time &t) const;
        Time operator*(double n) const;
        void show() const;
};

#endif