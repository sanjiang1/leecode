import cv2

url="http://admin:admin@192.168.0.101:8081/video"#@后面加上局域网的地址
cap = cv2.VideoCapture(url)
while (cap.isOpened()):
    ret, frame = cap.read()
    if ret:
        frame = cv2.flip(frame, 1, dst=None)
        cv2.imshow('img', frame)
    else:
        break
        # 监听键盘，按下q键退出
    if cv2.waitKey(10) & 0xFF == ord('q'):
        print("error")
        break
