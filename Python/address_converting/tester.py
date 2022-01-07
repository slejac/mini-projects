from main import hextobin, bintohex

import unittest


class MyTestCase(unittest.TestCase):
    def test_hex2bin(self):
        hextobin("a76BC")
        self.assertEqual(True, True)  # add assertion here

    def test_bin2hex(self):
        bintohex("000101000010110111")
        self.assertEqual(True, True)  # add assertion here

if __name__ == '__main__':
    unittest.main()
