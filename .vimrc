let g:markdown_fenced_languages =['c', 'cpp', 'python', 'html', 'tex', 'zsh', 'bash']

highlight ExtraWhitespace ctermbg=white guibg=white
autocmd BufWinEnter * match ExtraWhitespace /\s\+$\| \+\ze\t\+\|\t\+\zs \+/
