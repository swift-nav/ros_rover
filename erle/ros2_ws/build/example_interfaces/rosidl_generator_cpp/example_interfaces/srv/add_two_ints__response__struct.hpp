// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __example_interfaces__srv__add_two_ints__response__struct__hpp__
#define __example_interfaces__srv__add_two_ints__response__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_example_interfaces_srv_AddTwoInts_Response __attribute__((deprecated))
#else
# define DEPRECATED_example_interfaces_srv_AddTwoInts_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoInts_Response_
{
  using Type = AddTwoInts_Response_<ContainerAllocator>;

  AddTwoInts_Response_()
  {
  }
  AddTwoInts_Response_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _sum_type =
      int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type * set__sum(const int64_t & _arg)
  {
    this->sum = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_example_interfaces_srv_AddTwoInts_Response
    std::shared_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_example_interfaces_srv_AddTwoInts_Response
    std::shared_ptr<example_interfaces::srv::AddTwoInts_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoInts_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoInts_Response_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct AddTwoInts_Response_

// alias to use template instance with default allocator
using AddTwoInts_Response =
    example_interfaces::srv::AddTwoInts_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace example_interfaces

#endif  // __example_interfaces__srv__add_two_ints__response__struct__hpp__
