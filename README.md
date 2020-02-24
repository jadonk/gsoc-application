# gsoc-application
----
## 1. Creating the program!

- I followed [this guide](https://beagleboard.org/getting-started) for intalling the OS on my BeagleBoneBlack.
- Used [putty](https://putty.org/) to ssh into the BBB after it booted. One can also use the ssh command directly in the terminal command will be `$ ssh debian@192.168.7.2'`and then putting the password i.e `temppwd`.

	- Opening a new shell:
	![putty config][config]
	- Logging in:
	![putty logging in][login]

[config]: ./assets/putty_config.png
[login]: ./assets/putty_login.png

- Following upon the [example code](./ExampleEntryJasonKridner/helloworld.c) provided by [Jason Kridner](https://github.com/jadonk), I created [my own version](https://github.com/jadonk) of `helloworld.c` using command `$ touch helloworl.c`, edited using `$ nano helloworld.c` and compiled it using `gcc` the command is `$ gcc helloworld.c -o helloworld`. Now we can run it using ./helloworld "Optional Name".
	
	![Demo][demo]
	
[demo]: ./assets/helloworld.gif

- Then i used [File Zilla](https://filezilla-project.org/) to transfer the files from my BBB to my PC using the exact details i used for ssh.

| Field  | Value  |
|---|---|
| Host  | 192.168.7.2  |
| username  | debian  |
|  password |  temppwd |
| Port | 22|


![FileZilla Details][filezilla]

[filezilla]: ./assets/filezilla_details.png

## 2. Creating the pull request

- Fork the [original repo](https://github.com/jadonk/gsoc-application).
- Clone it on your local machine `$ git clone <you repo link>.`
- Create a branch `$ git branch myapp`.
- Checkout the new branch '$ get checkout myapp'.
- Create new files and complete you work then,
	- Add your work`$ git add <filename>` for adding specific file OR `$ git add .` to add everything.
	- commit your changes using `$ git commit -m <message>".`
- Push the files to your repo `$ git push origin myapp`.
- Create the pull request!
