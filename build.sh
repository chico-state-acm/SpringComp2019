#!/bin/bash

function handle() {
    echo $1
    mkdir -p $2/$(dirname $1)

    TITLE=$(head -n1 $1 | python3 -c 'print(input().lstrip("# "))')

    (
        cat <<EOD
<!DOCTYPE html>
<html lang="en">
<head>
<title>$TITLE</title>
<meta charset="utf-8"/>
<style>
main {
    margin: auto;
    max-width: 80ch;
}
</style>
</head>
<body>
<main>
EOD
        markdown $1
        cat <<EOD
</main>
</body>
</html>
EOD
    ) > $2/$(dirname $1)/index.html
}

# doesn't handle Wacky Filenames, not my problem
rm -r _site/*
handle README.md _site
cd problems
find . -name '*.md' | while read X; do
    handle $X ../_site
done
find . -name '*.png' -or -name '*.jpg' | while read X; do
    echo "image: $X"
    cp $X ../_site/$X
done

