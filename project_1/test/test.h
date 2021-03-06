#ifndef __TEST_H__
#define __TEST_H__

char* word_to_binary(word_t ins, int start, int end);
void test_get_byte();
void test_get_word();
void test_init_mem();
void test_sign_extend();
void test_fetch();
void test_decode();
void test_add();
void test_slt();
void test_srl();
void test_sra();
void test_num_overflow();

#endif

