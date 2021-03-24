package leetcode

import (
	"fmt"
	"strings"

	"github.com/parnurzeal/gorequest"
	"github.com/spf13/viper"
)

// CSRF get csrf
func (i *Instance) CSRF() (err error) {
	var errs []error
	var response gorequest.Response
	var query = `{"operationName":"globalData","variables":{},"query":"query globalData {\n  feature {\n    questionTranslation\n    subscription\n    signUp\n    discuss\n    mockInterview\n    contest\n    store\n    book\n    chinaProblemDiscuss\n    socialProviders\n    studentFooter\n    cnJobs\n    enableLsp\n    enableWs\n    enableDebugger\n    enableDebuggerAdmin\n    enableDarkMode\n    tasks\n    leetbook\n    __typename\n  }\n  userStatus {\n    isSignedIn\n    isAdmin\n    isStaff\n    isSuperuser\n    isTranslator\n    isPremium\n    isVerified\n    isPhoneVerified\n    isWechatVerified\n    checkedInToday\n    username\n    realName\n    userSlug\n    groups\n    avatar\n    optedIn\n    requestRegion\n    region\n    socketToken\n    activeSessionId\n    permissions\n    notificationStatus {\n      lastModified\n      numUnread\n      __typename\n    }\n    completedFeatureGuides\n    useTranslation\n    accountStatus {\n      isFrozen\n      inactiveAfter\n      __typename\n    }\n    __typename\n  }\n  siteRegion\n  chinaHost\n  websocketUrl\n  userBannedInfo {\n    bannedData {\n      endAt\n      bannedType\n      __typename\n    }\n    __typename\n  }\n}\n"}`
	if response, _, errs = gorequest.New().SetDebug(viper.GetBool("Debug")).
		Post(fmt.Sprintf("%s/graphql/", HostLeetcode)).
		Set("referer", HostLeetcode).
		Set("origin", HostLeetcode).
		Set("authority", "leetcode-cn.com").
		Set("x-timezone", "Asia/Shanghai").
		Set("x-operation-name", "globalData").
		Set("accept-language", "zh-CN").
		Set("x-csrftoken", "undefined").
		Set("x-definition-name", "feature,userStatus,siteRegion,chinaHost,websocketUrl,userBannedInfo").
		Set("user-agent", i.userAgent).
		Set("sec-fetch-site", "same-origin").
		Set("sec-fetch-mode", "cors").
		Set("sec-fetch-dest", "empty").
		Type("json").
		Send(query).EndBytes(); len(errs) != 0 {
		err = errs[len(errs)-1]
		return
	}

	var cookies = strings.Split(response.Header.Get("Set-Cookie"), "; ")
	for _, cookie := range cookies {
		var pairs = strings.Split(cookie, "=")
		if len(pairs) == 2 && pairs[0] == "csrftoken" {
			i.csrftoken = pairs[1]
		}
	}

	return
}
