// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rcl_interfaces__srv__list_parameters__request__struct__hpp__
#define __rcl_interfaces__srv__list_parameters__request__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_rcl_interfaces_srv_ListParameters_Request __attribute__((deprecated))
#else
# define DEPRECATED_rcl_interfaces_srv_ListParameters_Request __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListParameters_Request_
{
  using Type = ListParameters_Request_<ContainerAllocator>;

  ListParameters_Request_()
  {
  }
  ListParameters_Request_(const ContainerAllocator & _alloc)
  : prefixes(_alloc)
  {
  }

  // field types and members
  using _prefixes_type =
      std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _prefixes_type prefixes;
  using _depth_type =
      uint64_t;
  _depth_type depth;

  // setters for named parameter idiom
  Type * set__prefixes(const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->prefixes = _arg;
    return this;
  }
  Type * set__depth(const uint64_t & _arg)
  {
    this->depth = _arg;
    return this;
  }

  // constants
  enum { DEPTH_RECURSIVE = 0u };

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rcl_interfaces_srv_ListParameters_Request
    std::shared_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rcl_interfaces_srv_ListParameters_Request
    std::shared_ptr<rcl_interfaces::srv::ListParameters_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListParameters_Request_ & other) const
  {
    if (this->prefixes != other.prefixes) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListParameters_Request_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct ListParameters_Request_

// alias to use template instance with default allocator
using ListParameters_Request =
    rcl_interfaces::srv::ListParameters_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace rcl_interfaces

#endif  // __rcl_interfaces__srv__list_parameters__request__struct__hpp__