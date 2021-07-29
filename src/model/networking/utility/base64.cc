#include "base64.h"

#include <openssl/evp.h>

using namespace networking_utility;

secure_string networking_utility::EncodeBase64(secure_string &input_data) {
  unsigned int input_size = input_data.length();
  unsigned int adjustment = ((input_size % 3) ? (3 - (input_size % 3)) : 0);
  unsigned int code_padded_size = ((input_size + adjustment) / 3) * 4;
  unsigned int newline_size = ((code_padded_size) / 72) * 2;
  unsigned int total_size = code_padded_size + newline_size;

  char encoded_data[total_size + 1];
  EVP_EncodeBlock((unsigned char *)encoded_data,
                  (const unsigned char *)input_data.c_str(), input_size);

  encoded_data[total_size] = '\0';

  return encoded_data;
}

secure_string networking_utility::DecodeBase64(secure_string &encoded_data) {
  int encoded_data_len = encoded_data.length();
  secure_string possible_padding = encoded_data.substr(encoded_data_len - 2, 2);
  unsigned int padding_count = 0;
  for (int index = 0; index < encoded_data_len; ++index) {
    if (encoded_data[index] == '=') ++padding_count;
  }

  unsigned int total_size = (3 * (encoded_data_len / 4)) - padding_count;

  char decoded_data[total_size + 1];
  EVP_DecodeBlock((unsigned char *)decoded_data,
                  (const unsigned char *)encoded_data.c_str(),
                  encoded_data_len);

  decoded_data[total_size] = '\0';

  return decoded_data;
}