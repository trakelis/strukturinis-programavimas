#include <iostream>
#include <string>

std::string vigenereEncrypt(const std::string& text, const std::string& key) {
    std::string encryptedText;
    int keyLength = key.length();
    int asciiStart = 32;
    int asciiEnd = 126;
    int asciiRange = asciiEnd - asciiStart + 1;

    for (size_t i = 0; i < text.length(); ++i) {
        char textChar = text[i];
        char keyChar = key[i % keyLength];

        // Ensure textChar is within the ASCII range 32-126
        if (textChar < asciiStart || textChar > asciiEnd) {
            encryptedText += textChar; // Leave characters out of range unchanged
        } else {
            // Shift within the printable ASCII range
            int shiftedChar = ((textChar - asciiStart) + (keyChar - asciiStart)) % asciiRange + asciiStart;
            encryptedText += static_cast<char>(shiftedChar);
        }
    }
    return encryptedText;
}

std::string vigenereDecrypt(const std::string& encryptedText, const std::string& key) {
    std::string decryptedText;
    int keyLength = key.length();
    int asciiStart = 32;
    int asciiEnd = 126;
    int asciiRange = asciiEnd - asciiStart + 1;

    for (size_t i = 0; i < encryptedText.length(); ++i) {
        char encChar = encryptedText[i];
        char keyChar = key[i % keyLength];

        // Ensure encChar is within the ASCII range 32-126
        if (encChar < asciiStart || encChar > asciiEnd) {
            decryptedText += encChar; // Leave characters out of range unchanged
        } else {
            // Reverse shift within the printable ASCII range
            int shiftedChar = ((encChar - asciiStart) + (keyChar - asciiStart) + asciiRange) % asciiRange + asciiStart;
            decryptedText += static_cast<char>(shiftedChar);
        }
    }
    return decryptedText;
}

int main() {
    std::string text, key;

    std::cout << "Enter text to encrypt: ";
    std::getline(std::cin, text);

    std::cout << "Enter key: ";
    std::getline(std::cin, key);

    std::string encryptedText = vigenereEncrypt(text, key);
    std::cout << "Encrypted text: " << encryptedText << std::endl;

    std::string decryptedText = vigenereDecrypt(encryptedText, key);
    std::cout << "Decrypted text: " << decryptedText << std::endl;

    return 0;
}
