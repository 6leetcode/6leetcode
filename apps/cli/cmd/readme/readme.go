package readme

import (
	"fmt"
	"net/url"
	"os"
	"path/filepath"
	"strings"

	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"github.com/unknwon/com"

	"leet/common/leetcode"
	"leet/common/table"
)

var suffixes = []string{".c", ".cc", ".go", ".java", ".js", ".php", ".py", ".rs", ".sql", ".sh"}
var makefiles = map[string]string{
	".sh":   "bash.makefile",
	".c":    "c.makefile",
	".cc":   "cc.makefile",
	".go":   "golang.makefile",
	".java": "java.makefile",
	".js":   "javascript.makefile",
	".php":  "php.makefile",
	".py":   "python.makefile",
	".rs":   "rust.makefile",
	".sql":  "",
}
var targets = map[string]string{
	".sh":   "bash",
	".c":    "c",
	".cc":   "cc",
	".go":   "golang",
	".java": "java",
	".js":   "javascript",
	".php":  "php",
	".py":   "python",
	".rs":   "rust",
	".sql":  "",
}

const makefileDir = "testing"

const tableTitle = "|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|\n|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|\n"
const tableBashTitle = "|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|\n|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|\n"

const EngReadme = "# LeetCode\n\n" +
	"LeetCode Solutions.\n\n" +
	"## Solutions file rules\n\n" +
	"- Each problem is organized according to the title number.\n" +
	"- Each problem folder has a description file which one named `readme.md`.\n" +
	"- There can be multiple solutions for the same language in each folder, ranked according to the degree of algorithm optimization, and the file name prefix is the language name. For example: the performance of `c1.c` is better than the performance of `c2.c`.\n" +
	"- Each problem solution must contain a `main` function that contains all the test cases that can be thought of, making it easy to run offline. The solution function is written separately as a separate function.\n\n" +
	"## How to test problem's solution offline\n\n" +
	"- Entering a language environment requires only `make $language`. For example, the environment that enters Python is `make python`. It may take some time to enter a certain environment for the first time. The `Docker` image will be compiled first.\n" +
	"- All files in this directory will be mapped to the `/app` directory of `Container`.\n" +
	"- The environment of `Container` may be `Debian` or `Alpine`.\n\n" +
	"## Solutions' list\n"

const ZHReadme = "# LeetCode\n\n" +
	"LeetCode 题解\n\n" +
	"## 文件规则\n\n" +
	"- 每个题目按照题目序号编排。\n" +
	"- 每个题目文件夹下有相关的题目说明，文件名为 `readme.md`。\n" +
	"- 每个文件夹中同一种语言可以有多重解决方案，按照算法优化程度排名，文件名前缀为语言名字。例如：`c1.c` 的性能是比 `c2.c` 的性能更优的。\n" +
	"- 每个题目里边都要含有 `main` 函数，含有可以想到的所有测试案例，方便线下运行。题解函数，单独写成一个独立的函数。\n\n" +
	"## 本地测试\n\n" +
	"- 进入某种语言的环境仅需要 `make $language`，例如进入 python 的环境就是 `make python`，第一次进入某一种环境可能会需要一些时间，首先会编译这个 `Docker` 镜像。\n" +
	"- 本目录的所有文件将会映射到 `Container` 的 `/app` 目录下。\n" +
	"- `Container` 的环境可能是 `Debian` 或者 `Alpine`。\n\n" +
	"## Solutions' list\n"

// Initialize initialize the generate readme
func Initialize() (err error) {
	var instance *leetcode.Instance

	if instance, err = leetcode.New(); err != nil {
		return
	}

	var questions []table.Question
	if questions, err = instance.All(true); err != nil {
		return
	}

	if err = generate(questions, "README.md", EngReadme); err != nil {
		return
	}

	if err = generate(questions, "README_ZH.md", ZHReadme); err != nil {
		return
	}

	return
}

func categories(questions []table.Question) (res []string) {
	for _, question := range questions {
		if !com.IsSliceContainsStr(res, question.CategoryTitle) {
			res = append(res, question.CategoryTitle)
		}
	}
	return
}

func generate(questions []table.Question, filename, prefix string) (err error) {
	if com.IsFile(filename) {
		if err = os.Remove(filename); err != nil {
			return
		}
	}

	var file *os.File
	if file, err = os.OpenFile(filename, os.O_WRONLY|os.O_CREATE, 0644); err != nil {
		return
	}
	defer func() {
		if err := file.Close(); err != nil {
			logging.Error(err)
			return
		}
	}()

	if _, err = file.WriteString(prefix); err != nil {
		return
	}

	var makefileMap = make(map[string][]string)
	for _, suffix := range suffixes {
		makefileMap[suffix] = []string{}
	}

	for _, category := range categories(questions) {
		if _, err = file.WriteString(entry(questions, category, makefileMap)); err != nil {
			return
		}
	}

	if filename == "README.md" {
		if !com.IsDir(makefileDir) {
			if err = os.Mkdir(makefileDir, 0755); err != nil {
				return
			}
		}
		for key, value := range makefileMap {
			var filename = makefiles[key]
			if filename == "" {
				continue
			}
			filename = fmt.Sprintf("%s/%s", makefileDir, filename)
			if com.IsFile(filename) {
				if err = os.Remove(filename); err != nil {
					return
				}
			}
			var file *os.File
			if file, err = os.OpenFile(filename, os.O_WRONLY|os.O_CREATE, 0644); err != nil {
				return
			}

			var str = "DIRS = "
			for index, val := range value {
				if index == 0 {
					str += strings.ReplaceAll(fmt.Sprintf("\"%s\"", val), " ", "\\ ")
				} else {
					str += " " + strings.ReplaceAll(fmt.Sprintf("\"%s\"", val), " ", "\\ ")
				}
			}
			if _, err = file.WriteString(str); err != nil {
				return
			}
			if _, err = file.WriteString(fmt.Sprintf("\nrun: ${DIRS}\n${DIRS}:\n\tmake -C $@ %s\n", targets[key])); err != nil {
				return
			}
			if err = file.Close(); err != nil {
				return
			}
		}
	}
	return
}

const URLPrefix = "https://github.com/leet/leet/blob/main/questions/"

func entry(questions []table.Question, categoryTitle string, makefileMap map[string][]string) (str string) {
	str += fmt.Sprintf("\n<details>\n\n  <summary>%s</summary>\n\n", categoryTitle)
	if categoryTitle != "Shell" {
		str += tableTitle
	} else {
		str += tableBashTitle
	}

	for _, question := range questions {
		if question.CategoryTitle == categoryTitle {
			var languageMap = make(map[string][]string)
			for _, suffix := range suffixes {
				languageMap[suffix] = []string{}
			}
			var dir = fmt.Sprintf("%s/%s/%s. %s", viper.GetString("QuestionDir"), question.CategoryTitle, leetcode.QuestionID(question.QuestionFrontendID), question.Title)
			if !com.IsDir(dir) {
				continue
			}
			str += fmt.Sprintf("|[%s](%s)|%s|", leetcode.QuestionID(question.QuestionFrontendID), leetcode.HostLeetcode+"/problems/"+question.TitleSlug, question.Difficulty)
			if err := filepath.Walk(dir, func(path string, info os.FileInfo, err error) error {
				if err != nil {
					return err
				}
				if info == nil {
					return nil
				}
				if info.Name() == "README.md" || info.Name() == "README_ZH.md" || info.Name() == "Makefile" {
					return nil
				}
				if !info.IsDir() {
					var prefix = URLPrefix + categoryTitle + "/" + url.PathEscape(fmt.Sprintf("%s. %s", leetcode.QuestionID(question.QuestionFrontendID), question.Title))
					if com.IsSliceContainsStr(suffixes, filepath.Ext(path)) {
						if !com.IsSliceContainsStr(makefileMap[filepath.Ext(path)], filepath.Dir(path)) {
							makefileMap[filepath.Ext(path)] = append(makefileMap[filepath.Ext(path)], filepath.Dir(path))
						}
						languageMap[filepath.Ext(path)] = append(languageMap[filepath.Ext(path)], prefix+"/"+info.Name())
					}
				}
				return nil
			}); err != nil {
				logging.Error(err)
				return
			}

			for _, suffix := range suffixes {
				if len(languageMap[suffix]) != 0 {
					str += ":white_check_mark:"
				}
				str += "|"
			}
			str += "\n"
		}
	}

	str += "\n</details>\n"

	return
}
