; Auto-generated. Do not edit!


(cl:in-package robot_blockly-srv)


;//! \htmlinclude SetCurrentBlockId-request.msg.html

(cl:defclass <SetCurrentBlockId-request> (roslisp-msg-protocol:ros-message)
  ((block_id
    :reader block_id
    :initarg :block_id
    :type cl:string
    :initform ""))
)

(cl:defclass SetCurrentBlockId-request (<SetCurrentBlockId-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetCurrentBlockId-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetCurrentBlockId-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_blockly-srv:<SetCurrentBlockId-request> is deprecated: use robot_blockly-srv:SetCurrentBlockId-request instead.")))

(cl:ensure-generic-function 'block_id-val :lambda-list '(m))
(cl:defmethod block_id-val ((m <SetCurrentBlockId-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_blockly-srv:block_id-val is deprecated.  Use robot_blockly-srv:block_id instead.")
  (block_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetCurrentBlockId-request>) ostream)
  "Serializes a message object of type '<SetCurrentBlockId-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'block_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'block_id))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetCurrentBlockId-request>) istream)
  "Deserializes a message object of type '<SetCurrentBlockId-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'block_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'block_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetCurrentBlockId-request>)))
  "Returns string type for a service object of type '<SetCurrentBlockId-request>"
  "robot_blockly/SetCurrentBlockIdRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetCurrentBlockId-request)))
  "Returns string type for a service object of type 'SetCurrentBlockId-request"
  "robot_blockly/SetCurrentBlockIdRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetCurrentBlockId-request>)))
  "Returns md5sum for a message object of type '<SetCurrentBlockId-request>"
  "4df111d1d4ad61c42177e2b8cae23a38")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetCurrentBlockId-request)))
  "Returns md5sum for a message object of type 'SetCurrentBlockId-request"
  "4df111d1d4ad61c42177e2b8cae23a38")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetCurrentBlockId-request>)))
  "Returns full string definition for message of type '<SetCurrentBlockId-request>"
  (cl:format cl:nil "string block_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetCurrentBlockId-request)))
  "Returns full string definition for message of type 'SetCurrentBlockId-request"
  (cl:format cl:nil "string block_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetCurrentBlockId-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'block_id))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetCurrentBlockId-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetCurrentBlockId-request
    (cl:cons ':block_id (block_id msg))
))
;//! \htmlinclude SetCurrentBlockId-response.msg.html

(cl:defclass <SetCurrentBlockId-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SetCurrentBlockId-response (<SetCurrentBlockId-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetCurrentBlockId-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetCurrentBlockId-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_blockly-srv:<SetCurrentBlockId-response> is deprecated: use robot_blockly-srv:SetCurrentBlockId-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <SetCurrentBlockId-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_blockly-srv:result-val is deprecated.  Use robot_blockly-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetCurrentBlockId-response>) ostream)
  "Serializes a message object of type '<SetCurrentBlockId-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetCurrentBlockId-response>) istream)
  "Deserializes a message object of type '<SetCurrentBlockId-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetCurrentBlockId-response>)))
  "Returns string type for a service object of type '<SetCurrentBlockId-response>"
  "robot_blockly/SetCurrentBlockIdResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetCurrentBlockId-response)))
  "Returns string type for a service object of type 'SetCurrentBlockId-response"
  "robot_blockly/SetCurrentBlockIdResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetCurrentBlockId-response>)))
  "Returns md5sum for a message object of type '<SetCurrentBlockId-response>"
  "4df111d1d4ad61c42177e2b8cae23a38")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetCurrentBlockId-response)))
  "Returns md5sum for a message object of type 'SetCurrentBlockId-response"
  "4df111d1d4ad61c42177e2b8cae23a38")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetCurrentBlockId-response>)))
  "Returns full string definition for message of type '<SetCurrentBlockId-response>"
  (cl:format cl:nil "bool result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetCurrentBlockId-response)))
  "Returns full string definition for message of type 'SetCurrentBlockId-response"
  (cl:format cl:nil "bool result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetCurrentBlockId-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetCurrentBlockId-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetCurrentBlockId-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetCurrentBlockId)))
  'SetCurrentBlockId-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetCurrentBlockId)))
  'SetCurrentBlockId-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetCurrentBlockId)))
  "Returns string type for a service object of type '<SetCurrentBlockId>"
  "robot_blockly/SetCurrentBlockId")