package gen

import (
	"fmt"
	"net/url"
	"os"
	"path/filepath"
	"strings"

	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"github.com/unknwon/com"

	"6leetcode/common/leetcode"
	"6leetcode/common/table"
)

var suffixes = []string{".c", ".cc", ".go", ".java", ".js", ".php", ".py", ".rs", ".sql", ".sh"}

const tableTitle = "|Index|Difficulty|C|C++|Go|Java|JS|PHP|Python|Rust|SQL|Bash|\n|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|\n"

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
	questions, err = instance.All(true)

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

	for _, category := range categories(questions) {
		if _, err = file.WriteString(entry(questions, category)); err != nil {
			return
		}
	}

	return
}

const URLPrefix = "https://github.com/6leetcode/6leetcode/blob/main/questions/"

func entry(questions []table.Question, categoryTitle string) (str string) {
	str += fmt.Sprintf("\n### %s\n\n", categoryTitle)

	str += tableTitle
	for _, question := range questions {
		if question.CategoryTitle == categoryTitle {
			var languageMap = make(map[string][]string)
			for _, suffix := range suffixes {
				languageMap[suffix] = []string{}
			}
			var dir = fmt.Sprintf("%s/%s/%s. %s", viper.GetString("QUESTION_DIR"), question.CategoryTitle, leetcode.QuestionID(question.QuestionFrontendID), question.Title)
			if !com.IsDir(dir) {
				logging.Info(dir)
				continue
			}
			str += fmt.Sprintf("|[%s](%s)|%s|", leetcode.QuestionID(question.QuestionFrontendID), leetcode.HostLeetcode+"/problems/"+question.TitleSlug, question.Difficulty)
			filepath.Walk(dir, func(path string, info os.FileInfo, err error) error {
				if info == nil {
					return nil
				}
				if info.Name() == "README.md" || info.Name() == "README_ZH.md" || info.Name() == "Makefile" {
					return nil
				}
				if !info.IsDir() {
					var prefix = URLPrefix + categoryTitle + "/" + url.PathEscape(fmt.Sprintf("%s. %s", leetcode.QuestionID(question.QuestionFrontendID), question.Title))
					if com.IsSliceContainsStr(suffixes, filepath.Ext(path)) {
						if filepath.Ext(path) == ".go" {
							var s = strings.TrimSuffix(info.Name(), ".go")
							languageMap[filepath.Ext(path)] = append(languageMap[filepath.Ext(path)], prefix+"/"+s+"/"+info.Name())
						} else {
							languageMap[filepath.Ext(path)] = append(languageMap[filepath.Ext(path)], prefix+"/"+info.Name())
						}
					}
				}
				return nil
			})

			for _, suffix := range suffixes {
				for index, language := range languageMap[suffix] {
					if index == 0 {
						str += fmt.Sprintf("[%d](%s)", index+1, language)
					} else {
						str += fmt.Sprintf(" [%d](%s)", index+1, language)
					}
				}
				str += "|"
			}
			str += "\n"
		}
	}
	return
}
