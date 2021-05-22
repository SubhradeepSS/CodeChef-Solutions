const fs = require('fs')
const ignore_files = ['.git', '.gitignore', '.vscode', 'README.md', 'generateReadme.js', 'DSA Series']
const codechef_url = "https://www.codechef.com"
const repo_url = "https://github.com/SubhradeepSS/CodeChef-Solutions/tree/master"

let readme = "# CodeChef Solutions\n\n | Contest | Problem | Solution |\n| --- | --- | --- |\n"

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