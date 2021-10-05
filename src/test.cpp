#include "../header/c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, LongString) {
	char* test_val [2]; test_val[0] = "./c-echo"; test_val[1] = "uewIBwsaEz8opvfunLl81sDhqjyV8NAU5k8ELlDzr28oc9L4sNIkKb7MQSv5i0Xzc79D4VVkf2V80jzmFwbn4Pbq6PipMGeqQJLqojsSVbgzoD9Y2GV0QKt8P9lTlMK1T2YfloOz0agVvnJJBsXC8flKLVgQNSOAn83yx6xdnT7gsBtbBC5syYE0ywLQdMmw3tmcdVS66KaAy7bwnCRmjXgqk0DWxweRSXIRYAohh3N1DzY3JRc1SoXddYERx7xpXjc8yNnQclIWOQGpmtaHJzurcvPwNTGF4PQRzvPtFQF5CeDgQQp8sZ4qXMw34kpXrgheH4npZc03iAo7gHmXnsYekF3DorCLtpZfvnKPXNg8kZCnAgOblMZr2qZZVZjKTqOaojl9sCZHD0NZi8SHp0HDkWmEKrk6D1Lk4ql6jwWglXtF0bVXXOI4HFl3aqhEqF0xR6PM8NtgZIJogzaNzBjI978BfeuK3dyZAvZv1dSKu20vm4hw22T8v17LvGZUu1edUibJW1x81RZYldTI6xFsl3nMbrFgG6loKiGp2nv1w1Eq4YdioTTZmXYlODrYf5khyziFOVS4HcmMx9975OG1bENDn0HkbU7pvIYqFea44gvTyffZURhsSr89Kh0mSAtAefS9V8LxbUMCmEpucIv9USGDCbhlOlI7KPHNucDPYO9rqmHKqLPJJpzUl7Br95gR9l2RuGMMxoCFtWEBKWmGbdeIc0pphyLuauT1OtaZ6jSknllaY8AilCd3iMZ53nimTwabD2eIMDpVvCvDF30z8aa3XfN67GWUqf0BrTkDD8knwj0PKdqCtWhAPBg0Jos8BXphnvn4l6DG7Bf2V9h9J1pOxnhLXuywq85IAQJ3BHdCQJJNFo4kw6Qmbr2nVHhoitvisZoPJl8jcy8LQlsDmeBAj9x9vGW7bISq7tjAVPpNsQUz8bekmQERImKxpO6tlbDNNpeJI0UaEllfl5Y9C8rQadc0wxmNptaE";
	EXPECT_EQ("uewIBwsaEz8opvfunLl81sDhqjyV8NAU5k8ELlDzr28oc9L4sNIkKb7MQSv5i0Xzc79D4VVkf2V80jzmFwbn4Pbq6PipMGeqQJLqojsSVbgzoD9Y2GV0QKt8P9lTlMK1T2YfloOz0agVvnJJBsXC8flKLVgQNSOAn83yx6xdnT7gsBtbBC5syYE0ywLQdMmw3tmcdVS66KaAy7bwnCRmjXgqk0DWxweRSXIRYAohh3N1DzY3JRc1SoXddYERx7xpXjc8yNnQclIWOQGpmtaHJzurcvPwNTGF4PQRzvPtFQF5CeDgQQp8sZ4qXMw34kpXrgheH4npZc03iAo7gHmXnsYekF3DorCLtpZfvnKPXNg8kZCnAgOblMZr2qZZVZjKTqOaojl9sCZHD0NZi8SHp0HDkWmEKrk6D1Lk4ql6jwWglXtF0bVXXOI4HFl3aqhEqF0xR6PM8NtgZIJogzaNzBjI978BfeuK3dyZAvZv1dSKu20vm4hw22T8v17LvGZUu1edUibJW1x81RZYldTI6xFsl3nMbrFgG6loKiGp2nv1w1Eq4YdioTTZmXYlODrYf5khyziFOVS4HcmMx9975OG1bENDn0HkbU7pvIYqFea44gvTyffZURhsSr89Kh0mSAtAefS9V8LxbUMCmEpucIv9USGDCbhlOlI7KPHNucDPYO9rqmHKqLPJJpzUl7Br95gR9l2RuGMMxoCFtWEBKWmGbdeIc0pphyLuauT1OtaZ6jSknllaY8AilCd3iMZ53nimTwabD2eIMDpVvCvDF30z8aa3XfN67GWUqf0BrTkDD8knwj0PKdqCtWhAPBg0Jos8BXphnvn4l6DG7Bf2V9h9J1pOxnhLXuywq85IAQJ3BHdCQJJNFo4kw6Qmbr2nVHhoitvisZoPJl8jcy8LQlsDmeBAj9x9vGW7bISq7tjAVPpNsQUz8bekmQERImKxpO6tlbDNNpeJI0UaEllfl5Y9C8rQadc0wxmNptaE", echo(2,test_val));
}

TEST(EchoTest, SingleChar) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = " ";
	EXPECT_EQ(" ", echo(2,test_val));
}

TEST(EchoTest, NewLines) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "\n"; test_val[2] = "\n";
	EXPECT_EQ("\n \n", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

