#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }  
        else{
            ly = true;
        } 
    }
    else{
        ly = false;
    }
    return ly;
}

bool next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){ 
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;

    if(d1 == 31){
        d2 = 1;
        m2 = m1 + 1;
        if(m1 == 12){
            m2 = 1;
            y2 = y1 + 1;
        }
    }
    else if(d1 == 30){
        if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
            d2 = 1;
            m2 = m1 + 1;
        }
    }
    else if(d1 == 29 && m1 == 2){
        d2 = 1;
        m2 = 3;
    }
    else if(d1 == 28 && m1 == 2 && leap_year(y1) == false){
        d2 = 1;
        m2 = 3; 
    }

    if(d1 <= 31 && m1 <= 12 && d1 >= 1 && m1 >= 1)
        return true;
    else{
        return false;
    }
}

int main(){
    int d_in, m_in, y_in, d_out, m_out, y_out;

    std::cout << "type in a date, month and year" << std::endl;
    std::cin >> d_in >> m_in >>  y_in;
    if(next_date(d_in, m_in, y_in, d_out, m_out, y_out)){
        std::cout << "Tomorrow would be " << d_out << " / " << m_out << " / " << y_out;
    }
    else{
        std::cout << "Invalid input";
    }
}

//Extra to do: edge case of 31 being invalid for months of 30 days, 29th of february non leap years, 30 not valid for feb. 