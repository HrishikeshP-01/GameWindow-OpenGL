#pragma once
#ifndef _H_APPLICATION_
#define _H_APPLICATION_

class Application {
private:
	Application(const Application&);
	Application& operator=(const Application&);
public:
	inline Application(){}
	inline virtual ~Application(){} /* It's a destructor
									It gets called when you destroy
									an instance of the object
									(at the end of scope
									or calling delete to a pointer) */
	inline virtual void Initialize(){}
	inline virtual void Update(float inDeltaTime){}
	inline virtual void Render(float inAspectRatio){}
	inline virtual void Shutdown(){}
};
#endif