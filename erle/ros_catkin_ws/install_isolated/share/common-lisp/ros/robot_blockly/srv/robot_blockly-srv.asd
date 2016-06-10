
(cl:in-package :asdf)

(defsystem "robot_blockly-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "SetCurrentBlockId" :depends-on ("_package_SetCurrentBlockId"))
    (:file "_package_SetCurrentBlockId" :depends-on ("_package"))
  ))