#pragma once

class SocketListener
{
private:
	bool ServerRunning;
	unsigned short ListenPort;

public:
	SOCKET ClientSocket;
	LPVOID lpParameter;
	DWORD(*ClientCallBack)(LPVOID lpParameter, SOCKET);
	DWORD WINAPI ListenerThread();

	SocketListener(DWORD(*ClientCallBack)(LPVOID lpParameter, SOCKET),LPVOID lpParameter, unsigned short ListenPort);
	~SocketListener();
};