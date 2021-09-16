# uncompyle6 version 3.7.4
# Python bytecode 3.4 (3310)
# Decompiled from: Python 3.8.5 (default, May 27 2021, 13:30:53) 
# [GCC 9.3.0]
# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-06 01:44:37
# Size of source mod 2**32: 195 bytes
pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
if pwd == ok:
    print('OK')
else:
    print('KO')
# okay decompiling ./crackme4.pyc
