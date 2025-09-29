#!/usr/bin/env bash

main() {
  input="$*"
  len=${#input}
  i=$((len-1))
  
  while((i >= 0))
      do
       printf '%s' "${input:i:1}"
       ((--i))
      done
  printf '\n'
}

main "$@"
