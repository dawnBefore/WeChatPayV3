# libWeChatSDK

Mirror for Cocoapods

## 1.5

**重要!**

1. 废弃`safeSendReq:`接口，使用`sendReq:`即可。
2. 新增`+(BOOL) sendAuthReq:(SendAuthReq*) req viewController : (UIViewController*) viewController delegate:(id<WXApiDelegate>) delegate;`支持未安装微信情况下 Auth,具体见`WXApi.h`接口描述
3. 微信开放平台新增了微信模块用户统计功能，便于开发者统计微信功能模块的用户使用和活跃情况。开发者需要在工程中链接上:`SystemConfiguration.framework`,`libz.dylib`,`libsqlite3.0.dylib`,`libc++.dylib`。
