# cryptography
A lightweight encryption and decryption tool that uses a custom password to securly transform ASCII characters (32-126). Perfect for basic text protection and secure communication!

## Features

- **Encryption**: Converts ASCII characters into an encrypted format using a user-defined password.
- **Decryption**: Recovers the original text with the same password used for encryption.
- Supports all printable ASCII characters (32-126).

## Installation

1. Clone the repository:
```bash
git clone https://github.com/tixerz/cryptography
```

2. Compile programs:
```bash
gcc encrypt.c -o encrypt
```
```bash
gcc decrypt.c -o decrypt
```
## Usage
```bash
./encrypt <password> "<the text you want to encrypt>"
```
you can decrypt the encrypted message with decrypt program:
```bash
./decrypt <password> "<the text you want to decrypt>"
```

## Contributions 

Contributions are welcome! if you'd like to enhance this project, fork the repository and submit a pull request.

## License

This project is licensed under the MIT License.

