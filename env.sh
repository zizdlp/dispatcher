docker stop dispatcher
docker rm dispatcher
docker run --name dispatcher -itd   -v $(pwd):/home  -e LOCAL_USER_NAME=$USER -e LOCAL_USER_ID=`id -u $USER` zizdlp/gperf tail -f /etc/hosts
docker exec -it dispatcher bash