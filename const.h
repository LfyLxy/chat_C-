#pragma once
#include<boost/beast/http.hpp>
#include<boost/beast.hpp>
#include<boost/asio.hpp>
#include<memory>
#include<iostream>
#include"Singleton.h"
#include<functional>
#include<map>
#include<unordered_map>
#include<json/json.h>
#include<json/value.h>
#include<json/reader.h>
#include<boost/filesystem.hpp>
#include<boost/property_tree/ptree.hpp>
#include<boost/property_tree/ini_parser.hpp>
#include<atomic>
#include<queue>
#include<mutex>
#include<condition_variable>
#include"hiredis.h"
#include<cassert>

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = boost::asio::ip::tcp;

enum ErrorCodes {
	SUCCESS = 0,
	Error_Json = 1001, //JSON��������
	RPCFailed = 1002,  //RPC�������
	VarifyExpired = 1003,  //��֤�����
	VarifyCodeErr = 1004,  //��֤�����
	UserExist = 1005,	//�û��Ѿ�����
	PasswdErr = 1006,	//�������
	EmailNotMatch = 1007, //���䲻ƥ��
	PasswdUpFailed = 1008, //��������ʧ��
	PasswdInvalid = 1009, //������Ч

};

#define CODEPREFIX "code_"
