#ifndef TEMPHEADER_H
#define TEMPHEADER_H

template<typename F, typename S>
class Pair
{
public:
	Pair(const F& a, const S& b);
	F get_first() const;
	S get_second() const;
	//so we have a nice template class but we want to have functions to modify data:
	//let's write functions as non template ones first!
	//...then convert later:
	//non template function which won't work until converted to template:
	/*//first:
	void changeFirst(int newvalue);*/
	//second:
	void changeFirst(F newvalue);
	//this is okay for the third revision...we just need to change the internals


private:
	F first; S second;
};

//first: let's write the function:
/*
inline void Pair<F,S>::changeFirst(F newvalue)
{
	//we assume that first and second WERE integers and write this accordingly:
	first = first + newvalue;
	cout << "first is now " << first << endl;
}*/
//second: but this isn't a template function and note that it is dependent and 
//assumes things are integers (because there is addition!).
//but let's give it a template look:
/*template<typename F, typename S>
inline void Pair<F,S>::changeFirst(F newvalue)
{
	//we assume that first and second WERE integers and write this accordingly:
	first = first + newvalue;
	cout << "first is now " << first << endl;
}*/
//this is still addition and assumes that first is an addable number
//we need this to work for objects, strings, etc....
//third revision:
template<typename F, typename S>
inline void Pair<F, S>::changeFirst(F newvalue)
{
	//first = first + newvalue;
	//we must just change the way it works:
	first = newvalue;
	//cout << "first is now " << first << endl;
	//this cout is okay...unless it isn't defined for that object (nonsensical cout)
	//cout this is actually a side effect and the best thing
	//is not to have a cout here, but define a new function called printFirst
	//or just call get_first() from main()
}

template<typename F, typename S>
inline Pair<F, S>::Pair(const F& a, const S& b)
{
	first = a;
	second = b;
}
template<typename F, typename S>
inline F Pair<F, S>::get_first() const
{
	return first;
}

template<typename F, typename S>
inline S Pair<F, S>::get_second() const
{
	return second;
}

#endif