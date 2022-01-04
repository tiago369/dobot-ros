# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dobot/SetARCCmdRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetARCCmdRequest(genpy.Message):
  _md5sum = "a21ff454d6d7cacb84b15fe1f9c70626"
  _type = "dobot/SetARCCmdRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 x1
float32 y1
float32 z1
float32 r1
float32 x2
float32 y2
float32 z2
float32 r2
"""
  __slots__ = ['x1','y1','z1','r1','x2','y2','z2','r2']
  _slot_types = ['float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x1,y1,z1,r1,x2,y2,z2,r2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetARCCmdRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.x1 is None:
        self.x1 = 0.
      if self.y1 is None:
        self.y1 = 0.
      if self.z1 is None:
        self.z1 = 0.
      if self.r1 is None:
        self.r1 = 0.
      if self.x2 is None:
        self.x2 = 0.
      if self.y2 is None:
        self.y2 = 0.
      if self.z2 is None:
        self.z2 = 0.
      if self.r2 is None:
        self.r2 = 0.
    else:
      self.x1 = 0.
      self.y1 = 0.
      self.z1 = 0.
      self.r1 = 0.
      self.x2 = 0.
      self.y2 = 0.
      self.z2 = 0.
      self.r2 = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_8f().pack(_x.x1, _x.y1, _x.z1, _x.r1, _x.x2, _x.y2, _x.z2, _x.r2))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.x1, _x.y1, _x.z1, _x.r1, _x.x2, _x.y2, _x.z2, _x.r2,) = _get_struct_8f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_8f().pack(_x.x1, _x.y1, _x.z1, _x.r1, _x.x2, _x.y2, _x.z2, _x.r2))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.x1, _x.y1, _x.z1, _x.r1, _x.x2, _x.y2, _x.z2, _x.r2,) = _get_struct_8f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8f = None
def _get_struct_8f():
    global _struct_8f
    if _struct_8f is None:
        _struct_8f = struct.Struct("<8f")
    return _struct_8f
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dobot/SetARCCmdResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetARCCmdResponse(genpy.Message):
  _md5sum = "cbf7b461449133eb5dd6ebbd8d38dedc"
  _type = "dobot/SetARCCmdResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 result
uint64 queuedCmdIndex

"""
  __slots__ = ['result','queuedCmdIndex']
  _slot_types = ['int32','uint64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result,queuedCmdIndex

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetARCCmdResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = 0
      if self.queuedCmdIndex is None:
        self.queuedCmdIndex = 0
    else:
      self.result = 0
      self.queuedCmdIndex = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_iQ().pack(_x.result, _x.queuedCmdIndex))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.result, _x.queuedCmdIndex,) = _get_struct_iQ().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_iQ().pack(_x.result, _x.queuedCmdIndex))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.result, _x.queuedCmdIndex,) = _get_struct_iQ().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_iQ = None
def _get_struct_iQ():
    global _struct_iQ
    if _struct_iQ is None:
        _struct_iQ = struct.Struct("<iQ")
    return _struct_iQ
class SetARCCmd(object):
  _type          = 'dobot/SetARCCmd'
  _md5sum = '6b277c29ebdf53b160a46c83993b3c02'
  _request_class  = SetARCCmdRequest
  _response_class = SetARCCmdResponse
