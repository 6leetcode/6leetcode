package solutions

import (
	"bufio"
	"os"
	"path/filepath"
	"regexp"
	"strings"

	"6leetcode/common/table"
)

type token struct {
	Language string
	Suffix   string
	Begin    string
	End      string
}

var tokens = []token{
	{
		Language: "C",
		Suffix:   ".c",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "C++",
		Suffix:   ".cc",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "Golang",
		Suffix:   ".go",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "Java",
		Suffix:   ".java",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "JavaScript",
		Suffix:   ".js",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "PHP",
		Suffix:   ".php",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "Python",
		Suffix:   ".py",
		Begin:    "# ------------------------------- solution begin -------------------------------",
		End:      "# ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "Rust",
		Suffix:   ".rs",
		Begin:    "// ------------------------------- solution begin -------------------------------",
		End:      "// ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "SQL",
		Suffix:   ".sql",
		Begin:    "# ------------------------------- solution begin -------------------------------",
		End:      "# ------------------------------- solution end ---------------------------------",
	},
	{
		Language: "Bash",
		Suffix:   ".sh",
		Begin:    "# ------------------------------- solution begin -------------------------------",
		End:      "# ------------------------------- solution end ---------------------------------",
	},
}

var re = regexp.MustCompile(`(?m)(\d{4,10})\.\s[\w\W]*`)

// Initialize ..
func QuestionItem(questionItemDir string, questionID int) (err error) {
	if err = filepath.Walk(questionItemDir, func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if !info.IsDir() {
			var status uint8
			var answer []string
			var language string
			for _, t := range tokens {
				if t.Suffix == filepath.Ext(info.Name()) {
					if file, err := os.Open(path); err != nil {
						return err
					} else {
						language = t.Language
						var scanner = bufio.NewScanner(file)
						scanner.Split(bufio.ScanLines)
						for scanner.Scan() {
							if status == 1 {
								if scanner.Text() == t.End {
									status = 2
								} else {
									answer = append(answer, scanner.Text())
								}
							}
							if scanner.Text() == t.Begin {
								status = 1
							}
						}
						if err = file.Close(); err != nil {
							return err
						}
					}
				}
			}
			if status == 2 {
				var solution = &table.Solution{
					Language:   language,
					Data:       []byte(strings.Join(answer, "\n")),
					QuestionID: questionID,
					Filename:   info.Name(),
				}
				if err = solution.Create(); err != nil {
					return err
				}
			}
		}
		return nil
	}); err != nil {
		return
	}
	return
}
