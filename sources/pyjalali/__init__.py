"""
    pyjalali
    ~~~~~~~~

    Python bindings for libjalali.

    Low level API could be accessed through :mod:`.jstr`, :mod:`.jtime` and
    :mod:`.jalali` modules.  Core libjalali data structures resides in
    :mod:`.types` module.
    
    An implementation of standard :class:`python:datetime.date` and
    :class:`python:datetime.datetime` provided in module :mod:`.datetime`
    using libjalali tools.
"""

import sys
import ctypes.util
from ctypes import cdll

# hardcoded libjalali version, binding revision
__version__ = (0, 5, 0, 2)

if sys.platform.startswith('win'):
    libname = 'libjalali.dll'
else:
    libname = ctypes.util.find_library('jalali')
_libj = cdll.LoadLibrary(libname)
del cdll, ctypes, sys, libname
