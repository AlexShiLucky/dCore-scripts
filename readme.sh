#!/bb/ash
. /etc/init.d/tc-functions

PATH="/bb:/bin:/sbin:/usr/bin:/usr/sbin"
export PATH
BUILD=`getBuild`
MIRROR=`cat /opt/tcemirror`
VER=`getMajorVer`

[ -f /tmp/README-"$1".txt ] && rm /tmp/README-"$1".txt
if wget -s "$MIRROR"/"$VER".x/"$BUILD"/README/README-"$1".txt > /dev/null 2>&1; then
   wget -q "$MIRROR"/"$VER".x/"$BUILD"/README/README-"$1".txt -O /tmp/README-"$1".txt 
   more /tmp/README-"$1".txt
   exit 1
else 
   echo ""$1" does not have a README file, exiting..."
fi

