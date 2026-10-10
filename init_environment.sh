# glibc 소스코드 다운로드, 압축 해제 및 정리
apt source glibc
mv glibc-*/ glibc/
rm -rf glibc_*

# 디버깅용 컴파일
gcc -O0 -g -o program/fsread program/fsread.c

# 입력 파일 생성
seq 1 6000 > program/data.txt