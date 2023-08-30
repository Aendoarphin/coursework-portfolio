#ifndef CARTEMP_H 
#define CARTEMP_H 

template<typename T>
class Car
{
private:
	T speed;
public:
	Car(const T& thespeed);
	void changeSpeed(T toWhat);
	T getSpeed();
	T operator+(Car carObj) const;
};

template<typename T>
inline Car<T>::Car(const T& thespeed)
{
	speed = thespeed;
}
template<typename T>
void Car<T>::changeSpeed(T toWhat)
{
	speed = toWhat;
}
template<typename T>
inline T Car<T>::getSpeed()
{
	return speed;
}



template<typename T>
inline T Car<T>::operator+(Car carObj) const
{
	Car self = *this;
	T total = self.getSpeed() + carObj.getSpeed();
	return total;
}
#endif 