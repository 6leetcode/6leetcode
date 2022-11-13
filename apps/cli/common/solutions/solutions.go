package solutions

import (
	"bufio"
	"os"
	"path/filepath"
	"strings"

	"leet/common/table"
)

type token struct {
	Language string
	Suffix   string
}

var tokens = []token{
	{
		Language: "C",
		Suffix:   ".c",
	},
	{
		Language: "CPP",
		Suffix:   ".cc",
	},
	{
		Language: "Go",
		Suffix:   ".go",
	},
	{
		Language: "Java",
		Suffix:   ".java",
	},
	{
		Language: "TypeScript",
		Suffix:   ".ts",
	},
	{
		Language: "PHP",
		Suffix:   ".php",
	},
	{
		Language: "Python",
		Suffix:   ".py",
	},
	{
		Language: "Rust",
		Suffix:   ".rs",
	},
	{
		Language: "SQL",
		Suffix:   ".sql",
	},
	{
		Language: "Bash",
		Suffix:   ".sh",
	},
}

// Initialize ..
func QuestionItem(questionItemDir string, questionID int) (err error) {
	if err = new(table.Solution).DeleteAll(questionID); err != nil {
		return
	}
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
								if strings.Contains(scanner.Text(), "solution end") {
									status = 2
								} else {
									answer = append(answer, scanner.Text())
								}
							}
							if strings.Contains(scanner.Text(), "solution begin") {
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
