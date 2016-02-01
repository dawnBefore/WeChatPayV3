# WeChatPayV3
This is a WeChatPayDemo--V3

1. 请在AppDelegate里注册自己申请好的AppKey

NSString * const WXAppId = @"xxxxxxxx";
[WXApi registerApp:WXAppId];


2. 在UrlSchema添加AppKey ---> 在项目的Info ---> URL Types
   也可以直接在plist文件里直接设置


// 第一次上传项目，不太会用github, 有问题可以issue我~