find . -type d -name '*qtum*' | while read FILE ; do
    newfile="$(echo ${FILE} |sed -e 's/qtum/mchain/')" ;
    mv "${FILE}" "${newfile}" ;
done 



find . -type f -name '*qtum*' | while read FILE ; do
    newfile="$(echo ${FILE} |sed -e 's/qtum/mchain/')" ;
    mv "${FILE}" "${newfile}" ;
done 