# Use powerline
# USE_POWERLINE="true"
# Source manjaro-zsh-configuration
if [[ -e /usr/share/zsh/manjaro-zsh-config ]]; then
  source /usr/share/zsh/manjaro-zsh-config
fi
# Use manjaro zsh prompt
if [[ -e /usr/share/zsh/manjaro-zsh-prompt ]]; then
  source /usr/share/zsh/manjaro-zsh-prompt
fi


# DISABLE INTERNAL KEYBOARD
# xinput float 16

#LOADING STARSHIP PROMPT
eval "$(starship init zsh)"

# CONFIGURE LSD
alias ls="lsd"
alias ll="ls -la"

echo ""
echo "💕 😍 🇦 🇾 🇺 🇸 🇭  💝 🇱 🇺 🇬 🇪 🇳  😍 💕 "

# ALIAS SETTINGS
alias cls="clear"
