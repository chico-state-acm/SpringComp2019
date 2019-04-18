#!/bin/bash

rm -r tars
mkdir tars
pushd problems
for folder in *; do
    pushd $folder/tests || continue
    tar cf ../../../tars/$folder.tar *
    popd
done
popd
cd tars
tar cvf TarOfTars.tar *.tar
mv TarOfTars.tar ../

