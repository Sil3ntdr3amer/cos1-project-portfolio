# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

##  Project and Portfolio I: Computer Science

- **Ryan Boone**
- **August 8**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- clear: Clear the Screen
- pwd: Print the "Working Directory"
- ls: List files and folders
- ls -a: List files and folders, including invisible files
- ls -lh: List all files and folders, in human readable form
- cd: Change directory
- cd /: Change directory, go to root directory
- cd ~: Change directory and go to user home directory
- cd ..: Change directory, go up one folder level
- cd ../..: Change directory, go up two folder levels
- cd ~/Desktop: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

This is what i got... PS C:\Users\ryans\source\repos>

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

- - **Local Systems:** Save file changes in a basic database.

- **Centralized Systems:** Keep all file versions on one main server. Users pull files from that server.

- **Distributed Systems:** Copy the whole project history to every user's computer. Any user can restore the full repository at any time.

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- git clone <url>: Clone a repository
- git config --global user.name "Your Name": Set-up a global user name
- git config --global user.email "your-email@example.com": Set-up a global email address (to match my GitHub account email)
- git status: Shows the current state of your directory and staging area
- git add <file>: Add modified files to the next commit
- git commit -m "Your message here": Make a commit with a new message
- git log: Show my commit history
- `git help` or `git --help`: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

- login to Github
- go to settings on your profile
- click developer settings
- click personal access tokens and choose tokens
- generate a new token
- give your token a note
- select the scopes
- generate the token at the bottom of the page
- copy the token
- open terminal
- run the Git command
- type in your username and personal access token
- run git config --global credential.helper manager

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  tells git to ignore specific files and stops unneeded files from saving.

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  this is a hidden file by apple and it stores folder view settings. we want to ignore it because it is junk data.

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
	-log files because it will track runtime data
	- node modules because they are large folders of code packages that you will be able to rebuild later.
	- environment files because they contain secret keys and passwords that need to stay private on your device

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

geeks for geeks have so many resources available and their resources are easy to understand.

**Terminal Commands**  
[Site Address]([https://www.someaddress.com/full/url/](https://builtin.com/software-engineering-perspectives/terminal-commands))

**Three Types of Version Control**  
[Site Address]([https://www.someaddress.com/full/url/](https://www.geeksforgeeks.org/git/version-control-systems/))

**Git Commands**  
[Site Address]([https://www.someaddress.com/full/url/](https://www.geeksforgeeks.org/git/useful-github-commands/))

**Connecting to GitHub using Terminal**  
[Site Address]([https://www.someaddress.com/full/url/](https://docs.github.com/en/get-started/git-basics/set-up-git))

**Using .gitignore and Why it's Important**  
[Site Address]([https://www.someaddress.com/full/url/](https://stackoverflow.com/questions/1753070/how-do-i-configure-git-to-ignore-some-files-locally)
