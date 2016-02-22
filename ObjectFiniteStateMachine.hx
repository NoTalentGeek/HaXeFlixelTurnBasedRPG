package;

class ObjectFiniteStateMachine{

	public var activeStateFunction:Void->Void;

	public function new(?initStateFunction:Void->Void):Void{ activeStateFunction = initStateFunction; }

	public function UpdateVoid():Void{ if(activeStateFunction != null){ activeStateFunction(); } }

}