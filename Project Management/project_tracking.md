# Technovus Project Tracking :dog:
This document introduces project tracking techniques which will be employed in [Technovus](http://technovus.ca) projects

## Prerequisites
- A [Github](https://github.com/join) user account
- Added to the Technovus [slack](https://technovus-sfu.slack.com) group

&nbsp;
## Git
Git is a fast distributed revision control system. It is described as a fast, scalable, distributed revision control system with an unusually rich command set that provides both high-level operations and full access to internals.

It allows tracking of changes applied on any text encoded file. Git can be installed on your local computer and can be used to track local changes on your computer or using a cloud service e.g. [Bitbucket] and [Github]. These sites make it possible for multiple people to collaborate on projects.

&nbsp;
## Github
[Github] is a website which provides all the services of Git with other usefull services. It makes project storage, tracking and collaboration easy and convenient.

Every user has an account and projects are collaborated on through the user account. Organisations also exist on [Github] and can hold together all the projects associated with that organisation.

The [Technovus](https://github.com/technovus-sfu/) github organisation is going to be used to document and track all of our running projects.

&nbsp;
## Markdown
[Markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet) is a text-to-HTML conversion tool for web writers. Markdown allows you to write using an easy-to-read, easy-to-write plain text format, then convert it to structurally valid XHTML (or HTML). It can be compared to LaTeX but not as robust which is why it is ideal for quick markup. For example, this document was prepared in Markdown.

Markdown is identified by files with the extension `.md`. This is how a sample markdown file might look
```markdown
# Words to the esteemed Members
Welcome to [Technovus](http://technovus.ca). Dont forget to do the following:

## TODO
- [x] Attend workshop
- [ ] Sign up for [Mechathon18]
- [ ] Watch Black Panther

[Mechathon18]: http://mechathon.technovus.ca/
```
The above turns into:

# Words to the esteemed Members
Welcome to [Technovus](http://technovus.ca). Dont forget to do the following:

## TODO
- [x] Attend workshop
- [ ] Sign up for [Mechathon18]
- [ ] Watch Black Panther

[Mechathon18]: http://mechathon.technovus.ca/

&nbsp;
## Interlude
We wont be using all the features of git but the tools that github provides.
### Create your Project Repository
You should already be a member of the organisation
1. Sign into your github account
2. Goto [https://github.com/technovus-sfu](https://github.com/technovus-sfu) in your browser
3. Click on the green `new` button to the top right
4. Name the project and ensure `Initialize this repository with a README` is checked
5. As a default use the `MIT` license
5. Click `Create repository`

&nbsp;
### Create template files
In your respective project repository we will create some standard template files.
1. Go into your project repository
2. Click `Create new file`
3. Name file
4. Click `Commit file`

Using this process add the following files
- `CONTRIBUTORS.md` - To give credit to those working on the project
- `CHANGELOG.md` - To track project changes

These files can be updated online

&nbsp;
### Github Projects
Lastly we will use projects to manage plan and keep everyone updated.
1. On the organisation homepage, click on the projects tab.
2. Create a new project with the same name as your repo
3. Ensure for Project template, `Kanban(automated)` is chosen
4. Click `Create project`

With this you can create issues.
The project lead will be updating issues and closing them.
Any issue are added automatically to todo in the projects tab.

### Issues
- Todo tasks which can be assigned to people
- Planning for what comes after.

It falls to the project leads to ensure that they keep their boards up to date. This helps everyone track progress and show off their work.

&nbsp;
## Slack 
- Team leads should make and maintain thier slack groups.

&nbsp;
## References
- https://git-scm.com/docs/git
- https://web.archive.org/web/20040402182332/http://daringfireball.net/projects/markdown/

[Github]: http://github.com
[Bitbucket]: http://bitbucket.org
