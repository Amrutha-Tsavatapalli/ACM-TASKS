level 0
ssh bandit.labs.overthewire.org -p 2220 -l bandit0 is used to login 
Password is ZjLjTmM6FvvyRnrb2rfNWOZOTa6ip5If
level 1
I tried cat - twice which gave no result. Then I chekced the instructions that said I must use cat < -
Password is 263JGJPfgU6LtdEvgfWU1XP5yac29mFx
level2
Used the Tab key to auto-completes the filename. So this level was not a problem.
Password is MNk8KNH3Usiio41PRUEoDFPqfxLPlSmx
level3
![image](https://github.com/user-attachments/assets/8ebb2978-f1ab-4ae3-a60b-48cefd2179fa)
Password is 2WmrDFRmJIq3IPxneAaMGhap0pFhF3NJ
level 4
After having learnt that the The file * command determines the type of every file, I used it but just like at level 1, the file names here also started with a dash so the command is going to be slightly different 
![image](https://github.com/user-attachments/assets/44e900f1-5a14-45e8-ae14-4421642cd666)
Password is 4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw
level5
![image](https://github.com/user-attachments/assets/555cf1d1-37a6-4436-abf6-32d40d61913c)
password is HWasnPhtq9AVKe0dmk45nxy20cvUa6EG
level 6
Since the task said that the The password is stored somewhere on the server, I changed
find . -type f -size 33c -user bandit7 -group bandit6 to find . -size 33c -user bandit7 -group bandit6 so that the search is not restricted to files only.
After knowing what 'somewhere on the server' actually meant, I tried find / -size 33c -user bandit7 -group bandit6 to start searching from the root directory but this gave me a really long list of permission denied errors (along with the filename). Finally I found the password using find / -user bandit7 -group bandit6 -size 33c 2>/dev/null which redirected the error messages and returned only the output file 
![image](https://github.com/user-attachments/assets/8f5aa7ab-b52b-4cac-a863-48edc4369a09)
password is morbNTDkSW6jIlUc0ymOdMaLnOlFVAaj
level 7
Came across the term 'grep' while working on Level 5 and was confused between find and grep. But now the difference is clear 
![image](https://github.com/user-attachments/assets/a6bee2d2-ac8d-4841-a639-c9b31b22553f)
Password is dfwvzFQi4mU0wfNbFOe9RoWskMLg7eEc
level 8
first sort the data, because uniq only works on consecutive duplicate lines.
Used command sort data.txt | uniq -u Password is 4CKMh1JI91bUIZZPXDqGanal4xvAg0JM
level 9
The strings command extracts printable strings from the files 
![image](https://github.com/user-attachments/assets/15df29b4-0c4e-4086-afb1-1c70b6a03ee8)
The password is FGUW5ilLVJrxX9kMYMmlN4MgbpfMiqey
level 10
![image](https://github.com/user-attachments/assets/b3e67511-70f2-4550-b3c4-06750b3803d9)
Password is dtR173fZKb0RRsDFSGsg2RWnpNVj3qRr
level 11
