# 檢查輸入參數 是否存在
if [ -z "$1" ]; then
	echo "Usage: $0 <project_name>"
	exit 1
fi

# 以輸入的參數進行gcc -o 編譯
gcc -o $1 $1.c

# 執行編譯後的檔案
./$1