const fs = require('fs')
const ignore_files = ['.git', '.gitignore', '.vscode', 'README.md', 'generateReadme.js', 'DSA Series', '.github', 'scripts']
const codechef_url = "https://www.codechef.com"
const repo_url = "https://github.com/SubhradeepSS/CodeChef-Solutions/tree/master"

let readme = `# CodeChef Solutions\n![C Compilation Test](https://github.com/SubhradeepSS/CodeChef-Solutions/actions/workflows/c-compile-test.yml/badge.svg) ![C++ Compilation Test](https://github.com/SubhradeepSS/CodeChef-Solutions/actions/workflows/cpp-compile-test.yml/badge.svg) ![Java Compilation Test](https://github.com/SubhradeepSS/CodeChef-Solutions/actions/workflows/java-compile-test.yml/badge.svg) ![Python Syntax Check Test](https://github.com/SubhradeepSS/CodeChef-Solutions/actions/workflows/python-syntax-check.yml/badge.svg)\n
![](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=java&logoColor=white) ![](https://img.shields.io/badge/python-%2314354C.svg?style=for-the-badge&logo=python&logoColor=white)\n\n | Contest | Problem | Solution |\n| --- | --- | --- |\n`

fs.readdir(__dirname, (err, contests) => {
    if (err) {
        throw err
    }
    contests = contests.filter(contest => !ignore_files.includes(contest))
    contests.forEach(contest => {
        fs.readdir(contest, (err, problems) => {
            if (err) {
                throw err
            }

            let contest_link = `${codechef_url}/${contest}`
            readme += `| [${contest}](${contest_link})\n`
            problems.forEach(problem => {
                let problem_link = `${codechef_url}/${contest}/problems/${problem}`
                let solution_link = `${repo_url}/${contest}/${problem}`
                readme += `||[${problem}](${problem_link}) | [Solution](${solution_link})\n`
                fs.writeFile('README.md', readme, err => {
                    if (err) {
                        throw err
                    }
                })
            })

        })
    })
})