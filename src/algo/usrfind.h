
#ifndef _USR_STL_FIND_H
#define _USR_STL_FIND_H

namespace usr
{
template <class InputIterator, class T>

inline InputIterator find(InputIterator first, InputIterator last, const T& value)
{
	while((first != last) && ((*first) != value)) ++first;
	return first;
}

}

#endif /*_USR_STL_FIND_H*/
