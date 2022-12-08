#!/usr/bin/env bash
while getopts a:d:n: flag
do
    # shellcheck disable=SC2220
    case "${flag}" in
        a) author=${OPTARG};;
        d) description=${OPTARG};;
        n) name=${OPTARG};;
    esac
done

TitleCaseConverter() {
    sed 's/.*/\L&/; s/[a-z]*/\u&/g' <<<"$1"
}

folder="${name,,}"
folder="${folder//-/_}"

title="${folder//_/ }"
title="$(TitleCaseConverter "$title")"

repo="$author/$name"


# Change README.md
cp -f .github/temp/README.md README.md # Override file
sed -i "s/{title}/$title/g" README.md
sed -i "s|{repo}|$repo|g" README.md # Separator is |
