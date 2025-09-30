#!/usr/bin/env bash
reverse() {
    local input="$*"
    local len=${#input}
    local i=$((len - 1))

    while (( i >= 0 )); do
        printf '%s' "${input:i:1}"
        ((i--))
    done
    printf '\n'
}

main() {
    reverse "$@"
}

main "$@"