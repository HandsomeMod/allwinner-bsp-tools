all:
	make -C create_mbr
	make -C update_boot0
	make -C update_checksum
	make -C update_fes1
	make -C update_signature
	make -C update_simg
	make -C update_uboot
	make -C parser_img
	make -C openssl_signature
	make -C script
	make -C dtb_fast
	make -C update_config_to_img
	make -C update_scp
	make -C add_hash
	make -C img_decode
	make -C sig_bootimg
	make -C update_dtb
	make -C toc_tools
	make -C update_fdt
	make -C merge_package
	make -C parser_mbr
	make -C create_paragremer_img
	make -C merge_uboot
	make -C update_optee
	make -C update_uboot_v2

clean:
	make -C create_mbr clean
	make -C update_boot0 clean
	make -C update_checksum clean
	make -C update_fes1 clean
	make -C update_signature clean
	make -C update_simg clean
	make -C update_uboot clean
	make -C parser_img clean
	make -C openssl_signature clean
	make -C script clean
	make -C dtb_fast clean
	make -C update_config_to_img clean
	make -C update_scp clean
	make -C add_hash clean
	make -C img_decode clean
	make -C sig_bootimg clean
	make -C update_dtb clean
	make -C toc_tools clean
	make -C update_fdt clean
	make -C merge_package clean
	make -C parser_mbr clean
	make -C create_paragremer_img clean
	make -C merge_uboot clean
	make -C update_optee clean
	make -C update_uboot_v2 clean



