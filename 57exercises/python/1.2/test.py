import unittest
from unittest.mock import patch
import countnumchar

class TestCountNumChar(unittest.TestCase):
    @patch('builtins.input')
    @patch('builtins.print')
    def test_main(self, mock_print, mock_input):
        test_cases = [
            ("Homer", "Homer has 5 characters."),
            ("123$%% 23432 #$#1", "123$%% 23432 #$#1 has 17 characters."),
            ("Tony", "Tony has 4 characters.")
        ]
        for input_value, expected_output in test_cases:
            with self.subTest(input=input_value, output=expected_output):
                mock_input.return_value = input_value
                countnumchar.main()
                mock_print.assert_called_with(expected_output)

if __name__ == "__main__":
    unittest.main()