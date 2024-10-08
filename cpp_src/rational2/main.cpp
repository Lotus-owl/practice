#include<iostream>
#include"rational.h"

int main()
{
	Rational r1(3, 4);		// 3/4
	Rational r2(3);			// 3/1
	Rational r3;				// 0/1
	
	r3 = r1;
	
	if(r1 == r3) {
		std::cout<<"r1 and r3 are equal."<<std::endl;
	} else {
		std::cout<<"r1 and r3 are not equal."<<std::endl;
	}
	
	Rational r4, r5, r6, r7;
	r4 = r1 + r2;
	r5 = r1 - r2;
	r6 = r1 * r2;
	r7 = r1 / r2;
	
	std::cout<<"r1: "<<r1.getNum()<<"/"<<r1.getDen()<<std::endl;
	std::cout<<"r2: "<<r2.getNum()<<"/"<<r2.getDen()<<std::endl;
	std::cout<<"r3: "<<r3.getNum()<<"/"<<r3.getDen()<<std::endl;
	std::cout<<"r4: "<<r4.getNum()<<"/"<<r4.getDen()<<std::endl;
	std::cout<<"r5: "<<r5.getNum()<<"/"<<r5.getDen()<<std::endl;
	std::cout<<"r6: "<<r6.getNum()<<"/"<<r6.getDen()<<std::endl;
	std::cout<<"r7: "<<r7.getNum()<<"/"<<r7.getDen()<<std::endl;
	
	return 0;
}
