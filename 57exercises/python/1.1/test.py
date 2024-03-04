import unittest
from unittest.mock import patch
import sayhello, sayhello_b

class TestSayHello(unittest.TestCase):
    @patch('builtins.input')
    @patch('builtins.print')
    def test_main(self, mock_print, mock_input):
        # list of test cases
        test_cases = [
            (sayhello,"123$%% 23432 #$#1", "Hello, , nice to meet you!"),
            (sayhello_b, "Tony", "Hello, Tony, nice to meet you!")
        ]
        for module, input_value, expected_output in test_cases:
            with self.subTest(input=input_value, output=expected_output):
                mock_input.return_value = input_value
                module.main()
                mock_print.assert_called_with(expected_output)

if __name__ == "__main__":
    unittest.main()