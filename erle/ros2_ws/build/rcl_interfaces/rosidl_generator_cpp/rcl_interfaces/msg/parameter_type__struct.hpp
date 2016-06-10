// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rcl_interfaces__msg__parameter_type__struct__hpp__
#define __rcl_interfaces__msg__parameter_type__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_rcl_interfaces_msg_ParameterType __attribute__((deprecated))
#else
# define DEPRECATED_rcl_interfaces_msg_ParameterType __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParameterType_
{
  using Type = ParameterType_<ContainerAllocator>;

  ParameterType_()
  {
  }
  ParameterType_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members

  // setters for named parameter idiom

  // constants
  enum { PARAMETER_NOT_SET = 0u };
  enum { PARAMETER_BOOL = 1u };
  enum { PARAMETER_INTEGER = 2u };
  enum { PARAMETER_DOUBLE = 3u };
  enum { PARAMETER_STRING = 4u };
  enum { PARAMETER_BYTES = 5u };

  // pointer types
  using RawPtr =
    rcl_interfaces::msg::ParameterType_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::msg::ParameterType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rcl_interfaces::msg::ParameterType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rcl_interfaces::msg::ParameterType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rcl_interfaces_msg_ParameterType
    std::shared_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rcl_interfaces_msg_ParameterType
    std::shared_ptr<rcl_interfaces::msg::ParameterType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParameterType_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const ParameterType_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct ParameterType_

// alias to use template instance with default allocator
using ParameterType =
    rcl_interfaces::msg::ParameterType_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace rcl_interfaces

#endif  // __rcl_interfaces__msg__parameter_type__struct__hpp__
