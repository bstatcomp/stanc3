module type Kill_gen = sig
  type t
  type property

  val diff : property -> property -> property
  val union : property -> property -> property
  val kill : property -> t -> property
  val gen : t -> property
  val all_properties_of : t -> property
  val extremal_value_of : t -> property
end

module type S = sig
  type t
  type property

  val all_properties_of : t -> property
  val extremal_value_of : t -> property
  val apply : property -> t -> property -> property
end

module Make_using_kill_gen (X : Kill_gen) :
  S with type t := X.t and type property := X.property
