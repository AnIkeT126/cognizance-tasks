from github import Github
import json
import os
# Github username
username = input("Enter the organization name:")
# pygithub object
g = Github("YOUR_ACCESS_TOKEN")
# get that org by username
user = g.get_user(username)
for repo in user.get_repos():
    repos=repo.name
    print(repos)
    os.system("perceval git --json-line https://github.com/cognizance-amrita/%s --git-path /home/aniket/commit.json >> commits.json"%repos)
