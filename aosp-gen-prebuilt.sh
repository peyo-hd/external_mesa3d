mkdir -p prebuilt-intermediates/{glsl,ir3,main,nir,spirv,cle,isl,perf,genxml,compiler,iris,vulkan,xmlpool}

python src/compiler/glsl/ir_expression_operation.py strings > prebuilt-intermediates/glsl/ir_expression_operation_strings.h
python src/compiler/glsl/ir_expression_operation.py constant > prebuilt-intermediates/glsl/ir_expression_operation_constant.h
python src/compiler/glsl/ir_expression_operation.py enum > prebuilt-intermediates/glsl/ir_expression_operation.h

python src/mesa/main/format_pack.py  src/mesa/main/formats.csv  > prebuilt-intermediates/main/format_pack.c
python src/mesa/main/format_unpack.py  src/mesa/main/formats.csv  > prebuilt-intermediates/main/format_unpack.c
python src/mesa/main/format_fallback.py  src/mesa/main/formats.csv /dev/stdout  > prebuilt-intermediates/main/format_fallback.c

python src/compiler/nir/nir_builder_opcodes_h.py src/compiler/nir/nir_opcodes.py > prebuilt-intermediates/nir/nir_builder_opcodes.h
python src/compiler/nir/nir_constant_expressions.py src/compiler/nir/nir_opcodes.py > prebuilt-intermediates/nir/nir_constant_expressions.c
python src/compiler/nir/nir_opcodes_c.py src/compiler/nir/nir_opcodes.py > prebuilt-intermediates/nir/nir_opcodes.c
python src/compiler/nir/nir_opcodes_h.py src/compiler/nir/nir_opcodes.py > prebuilt-intermediates/nir/nir_opcodes.h
python src/compiler/nir/nir_opt_algebraic.py src/compiler/nir/nir_opt_algebraic.py > prebuilt-intermediates/nir/nir_opt_algebraic.c
python src/compiler/nir/nir_intrinsics_c.py --outdir prebuilt-intermediates/nir/ || ( prebuilt-intermediates/nir/nir_intrinsics.c; false)
python src/compiler/nir/nir_intrinsics_h.py --outdir prebuilt-intermediates/nir/ || ( prebuilt-intermediates/nir/nir_intrinsics.h; false)

python src/compiler/spirv/spirv_info_c.py src/compiler/spirv/spirv.core.grammar.json prebuilt-intermediates/spirv/spirv_info.c || ( prebuilt-intermediates/spirv/spirv_info.c; false)
python src/compiler/spirv/vtn_gather_types_c.py src/compiler/spirv/spirv.core.grammar.json prebuilt-intermediates/spirv/vtn_gather_types.c || ( prebuilt-intermediates/spirv/vtn_gather_types.c; false)
python src/compiler/spirv/vtn_generator_ids_h.py src/compiler/spirv/spir-v.xml prebuilt-intermediates/spirv/vtn_generator_ids.h || ( prebuilt-intermediates/spirv/vtn_generator_ids.h; false)

python src/intel/genxml/gen_zipped_file.py src/broadcom/cle/v3d_packet_v21.xml src/broadcom/cle/v3d_packet_v33.xml > prebuilt-intermediates/cle/v3d_xml.h

python src/broadcom/cle/gen_pack_header.py src/broadcom/cle/v3d_packet_v21.xml 21 > prebuilt-intermediates/cle/v3d_packet_v21_pack.h
python src/broadcom/cle/gen_pack_header.py src/broadcom/cle/v3d_packet_v33.xml 33 > prebuilt-intermediates/cle/v3d_packet_v33_pack.h
python src/broadcom/cle/gen_pack_header.py src/broadcom/cle/v3d_packet_v33.xml 41 > prebuilt-intermediates/cle/v3d_packet_v41_pack.h
python src/broadcom/cle/gen_pack_header.py src/broadcom/cle/v3d_packet_v33.xml 42 > prebuilt-intermediates/cle/v3d_packet_v42_pack.h

rm -f prebuilt-intermediates/xmlpool/*.po prebuilt-intermediates/xmlpool/*.gmo prebuilt-intermediates/xmlpool/xmlpool.pot
