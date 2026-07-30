savedcmd_program49.mod := printf '%s\n'   program49.o | awk '!x[$$0]++ { print("./"$$0) }' > program49.mod
