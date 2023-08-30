#ifndef CLASS_TEMPLATE_H
#define CLASS_TEMPLATE_H

template<typename T>
class Travel
{
private:
	T the_velocity;
public:
	Travel(const T& velocity);
	void change_velocity(T toWhat);
	T get_velocity();
};
template<typename T>
inline Travel<T>::Travel(const T& the_velocity)
{
	this->the_velocity = the_velocity;
}
template<typename T>
void Travel<T>::change_velocity(T toWhat)
{
	the_velocity = toWhat;
}
template<typename T>
inline T Travel<T>::get_velocity()
{
	return the_velocity;
}
#endif
