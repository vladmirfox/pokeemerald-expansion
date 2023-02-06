import os

with open('data/battle_anim_scripts.s','r+') as f:
	lines = f.readlines()
	f.seek(0)
	for line in lines:
		words = line.split()
		
		if len(words) > 0 and words[0] == 'launchtemplate':
			newstr = '	createsprite ' + words[1] + ', '
			
			# handle incorrectly assigned prio args
			if 'ANIM_TARGET' in words[2]:
				words[2] = '0x84'
			if 'ANIM_DEF_PARTNER' in words[2]:
				words[2] = '0x3'
			
			prio = words[2].replace(',','')	# remove comma if it exists
			prio = int(prio, 16)	# get hex val
			if (prio & 0x80):
				newstr = newstr + 'ANIM_TARGET, ' + str(prio - 0x80) + ', '
			else:
				newstr = newstr + 'ANIM_ATTACKER, ' + str(prio) + ', '
			
			# get rest of args, skipping over 'nArgs' argument
			for arg in range(4,len(words)):
				if '@' in words[arg]:
					for i in range(arg,len(words)):
						newstr = newstr + words[i] + ' '
				else:
					newstr = newstr + words[arg].replace(',','')
					if arg < len(words) - 1:
						newstr = newstr + ', '
					else:
						newstr = newstr + '\n'			
		else:
			newstr = line

		f.writelines(newstr)
	f.close()
