#include "gtest/gtest.h"
#include "config_parser.h"

TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_config", &out_config);

  EXPECT_TRUE(success);
}

/* 
 * New test for FastCGIConfig
 * The file fastCGI_config is based on examples from
 * http://nginx.org/en/docs/beginners_guide.html#fastcgi
 */
TEST(NginxConfigParserTest, FastCGIConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("fastCGI_config", &out_config);

  EXPECT_TRUE(success);
}
