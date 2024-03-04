import unittest
from unittest.mock import patch
from io import StringIO
import sayhello

class TestSayHello(unittest.TestCase):
    @patch('builtins.input', return_value='Tony')
    @patch('builtins.print')
    def test_main(self, mock_print, mock_input):
        sayhello.main()
        mock_print.assert_called_with("Hello, Tony, nice to meet you!")

if __name__ == "__main__":
    unittest.main()