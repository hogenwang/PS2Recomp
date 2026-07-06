#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292190
// Address: 0x292190 - 0x292b70
void sub_00292190_0x292190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292190_0x292190");
#endif

    switch (ctx->pc) {
        case 0x2921f0u: goto label_2921f0;
        case 0x2921f8u: goto label_2921f8;
        case 0x292318u: goto label_292318;
        case 0x292418u: goto label_292418;
        case 0x29241cu: goto label_29241c;
        case 0x292420u: goto label_292420;
        case 0x292438u: goto label_292438;
        case 0x292440u: goto label_292440;
        case 0x292450u: goto label_292450;
        case 0x292458u: goto label_292458;
        case 0x292558u: goto label_292558;
        case 0x292690u: goto label_292690;
        case 0x292698u: goto label_292698;
        case 0x2927b8u: goto label_2927b8;
        case 0x2928d8u: goto label_2928d8;
        case 0x2929f8u: goto label_2929f8;
        case 0x292ad4u: goto label_292ad4;
        default: break;
    }

    ctx->pc = 0x292190u;

    // 0x292190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292194: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x292194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292198: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x292198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29219c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x29219cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2921a0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2921a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2921a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2921a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2921a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2921a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2921acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2921b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2921b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2921b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2921b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2921b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2921b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2921bc: 0xde900008  ld          $s0, 0x8($s4)
    ctx->pc = 0x2921bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2921c0: 0xde910000  ld          $s1, 0x0($s4)
    ctx->pc = 0x2921c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2921c4: 0x1020f8  dsll        $a0, $s0, 3
    ctx->pc = 0x2921c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 3);
    // 0x2921c8: 0x10177a  dsrl        $v0, $s0, 29
    ctx->pc = 0x2921c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 29);
    // 0x2921cc: 0x1128f8  dsll        $a1, $s1, 3
    ctx->pc = 0x2921ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << 3);
    // 0x2921d0: 0x111f7a  dsrl        $v1, $s1, 29
    ctx->pc = 0x2921d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) >> 29);
    // 0x2921d4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x2921d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2921d8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2921d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2921dc: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x2921dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2921e0: 0x10c00128  beqz        $a2, . + 4 + (0x128 << 2)
    ctx->pc = 0x2921E0u;
    {
        const bool branch_taken_0x2921e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921E0u;
        // 0x2921e4: 0x678824  and         $s1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921e0) {
            ctx->pc = 0x292684u;
            goto label_292684;
        }
    }
    ctx->pc = 0x2921E8u;
    // 0x2921e8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2921e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921ec: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x2921ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2921f0:
    // 0x2921f0: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2921F0u;
    SET_GPR_U32(ctx, 31, 0x2921F8u);
    ctx->pc = 0x2921F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921F0u;
    // 0x2921f4: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2921F0u, 0x2921F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921F8u;
label_2921f8:
    // 0x2921f8: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x2921f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2921fc: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x2921fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x292200: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x292200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x292204: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x292204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x292208: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x292208u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x29220c: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x29220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x292210: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x292210u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x292214: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x292214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x292218: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x292218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x29221c: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x29221cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x292220: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x292220u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x292224: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x292224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x292228: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x292228u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x29222c: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x29222cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x292230: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x292230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x292234: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x292234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x292238: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x292238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x29223c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x29223cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x292240: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x292240u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x292244: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x292244u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x292248: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x292248u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x29224c: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x29224cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x292250: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x292254: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x292254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x292258: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x292258u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29225c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29225cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x292260: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x292260u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x292264: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x292264u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x292268: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x292268u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29226c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29226cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x292270: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x292270u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292274: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292274u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292278: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292278u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29227c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x29227cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x292280: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x292280u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x292284: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x292284u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x292288: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x292288u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x29228c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29228cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x292290: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x292290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x292294: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x292294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x292298: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x292298u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29229c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x29229cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2922a0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2922a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2922a4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2922a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2922a8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2922a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2922ac: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x2922acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2922b0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2922b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2922b4: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2922b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2922b8: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2922b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2922bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2922c0: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x2922c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2922c4: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x2922c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2922c8: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x2922c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2922cc: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x2922ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2922d0: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x2922d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x2922d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2922d8: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x2922d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x2922dc: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x2922dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x2922e0: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x2922e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x2922e4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x2922e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2922e8: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x2922e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x2922ec: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x2922ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x2922f0: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x2922f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x2922f4: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x2922f4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x2922f8: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x2922f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x2922fc: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x2922fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x292300: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x292300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x292304: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x292304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x292308: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x292308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x29230c: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x29230cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x292310: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x292310u;
    SET_GPR_U32(ctx, 31, 0x292318u);
    ctx->pc = 0x292314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292310u;
    // 0x292314: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x292310u, 0x292318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292318u;
label_292318:
    // 0x292318: 0xde430018  ld          $v1, 0x18($s2)
    ctx->pc = 0x292318u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29231c: 0xde450010  ld          $a1, 0x10($s2)
    ctx->pc = 0x29231cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x292320: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x292320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x292324: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x292324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x292328: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x292328u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x29232c: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x29232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x292330: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x292330u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x292334: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x292334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x292338: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x292338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x29233c: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x29233cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x292340: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x292340u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x292344: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x292344u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x292348: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x292348u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x29234c: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x29234cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x292350: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x292350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x292354: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x292354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x292358: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x292358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x29235c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x29235cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x292360: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x292360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x292364: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x292364u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x292368: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x292368u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x29236c: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x29236cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x292370: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x292370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x292374: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x292374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x292378: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x292378u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29237c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29237cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x292380: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x292380u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x292384: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x292384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x292388: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x292388u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29238c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29238cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x292390: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x292390u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292394: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292394u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292398: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292398u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29239c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x29239cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2923a0: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x2923a0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x2923a4: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2923a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2923a8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2923a8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2923ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2923acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2923b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2923b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2923b4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2923b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2923b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2923b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2923bc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2923bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2923c0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2923c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2923c4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2923c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2923c8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2923c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2923cc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x2923ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2923d0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2923d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2923d4: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2923d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2923d8: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2923d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2923dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2923dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2923e0: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x2923e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2923e4: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x2923e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2923e8: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x2923e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2923ec: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x2923ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2923f0: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x2923f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x2923f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2923f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2923f8: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x2923f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x2923fc: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x2923fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x292400: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x292400u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x292404: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x292404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x292408: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x292408u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x29240c: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x29240cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x292410: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x292410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x292414: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x292414u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
label_292418:
    // 0x292418: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x292418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_29241c:
    // 0x29241c: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x29241cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
label_292420:
    // 0x292420: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x292420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x292424: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x292424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x292428: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x292428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x29242c: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x29242cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x292430: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x292430u;
    SET_GPR_U32(ctx, 31, 0x292438u);
    ctx->pc = 0x292434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292430u;
    // 0x292434: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x292430u, 0x292438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292438u;
label_292438:
    // 0x292438: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x292438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x29243c: 0xde450020  ld          $a1, 0x20($s2)
    ctx->pc = 0x29243cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32)));
label_292440:
    // 0x292440: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x292440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x292444: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x292444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x292448: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x292448u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x29244c: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x29244cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
label_292450:
    // 0x292450: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x292450u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x292454: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x292454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_292458:
    // 0x292458: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x292458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x29245c: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x29245cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x292460: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x292460u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x292464: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x292464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x292468: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x292468u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x29246c: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x29246cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x292470: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x292470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x292474: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x292474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x292478: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x292478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x29247c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x29247cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x292480: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x292480u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x292484: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x292484u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x292488: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x292488u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x29248c: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x29248cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x292490: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x292490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x292494: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x292494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x292498: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x292498u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29249c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29249cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2924a0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2924a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2924a4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2924a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2924a8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2924a8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2924ac: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2924acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2924b0: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2924b0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2924b4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2924b8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2924b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2924bc: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x2924bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2924c0: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x2924c0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x2924c4: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2924c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2924c8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2924c8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2924cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2924ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2924d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2924d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2924d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2924d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2924d8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2924d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2924dc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2924dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2924e0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2924e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2924e4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2924e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2924e8: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2924e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2924ec: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x2924ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2924f0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2924f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2924f4: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2924f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2924f8: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x2924f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2924fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2924fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292500: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x292500u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x292504: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x292504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292508: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x292508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x29250c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x29250cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x292510: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x292510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x292514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292518: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x292518u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x29251c: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x29251cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x292520: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x292520u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x292524: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x292524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x292528: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x292528u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x29252c: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x29252cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x292530: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x292530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x292534: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x292534u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x292538: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x292538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x29253c: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x29253cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x292540: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x292540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x292544: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x292544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x292548: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x292548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x29254c: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x29254cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x292550: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x292550u;
    SET_GPR_U32(ctx, 31, 0x292558u);
    ctx->pc = 0x292554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292550u;
    // 0x292554: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x292550u, 0x292558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292558u;
label_292558:
    // 0x292558: 0xde430038  ld          $v1, 0x38($s2)
    ctx->pc = 0x292558u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x29255c: 0xde450030  ld          $a1, 0x30($s2)
    ctx->pc = 0x29255cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x292560: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x292560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x292564: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x292564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x292568: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x292568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x29256c: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x29256cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x292570: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x292570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x292574: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x292574u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x292578: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x292578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x29257c: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x29257cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x292580: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x292580u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x292584: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x292584u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x292588: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x292588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x29258c: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x29258cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x292590: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x292590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x292594: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x292594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x292598: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x292598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x29259c: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x29259cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x2925a0: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x2925a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x2925a4: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x2925a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x2925a8: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x2925a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x2925ac: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x2925acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2925b0: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x2925b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2925b4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2925b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2925b8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2925b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2925bc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2925bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2925c0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2925c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2925c4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2925c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2925c8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2925c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2925cc: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2925ccu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2925d0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2925d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2925d4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2925d4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2925d8: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2925d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2925dc: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2925dcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2925e0: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x2925e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2925e4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x2925e4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x2925e8: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2925e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2925ec: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2925ecu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2925f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2925f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2925f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2925f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2925f8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2925f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2925fc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2925fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x292600: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x292600u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x292604: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x292604u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x292608: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x292608u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x29260c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x29260cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x292610: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x292610u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x292614: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x292614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292618: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x292618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29261c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x29261cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x292620: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x292620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292624: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x292624u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x292628: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x292628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29262c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x29262cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x292630: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x292630u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x292634: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x292634u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x292638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29263c: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x29263cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x292640: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x292640u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x292644: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x292644u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x292648: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x292648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x29264c: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x29264cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x292650: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x292650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x292654: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x292654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x292658: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x292658u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x29265c: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x29265cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x292660: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x292660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x292664: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x292664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x292668: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x292668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x29266c: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x29266cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x292670: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x292670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x292674: 0x661fede  bgez        $s3, . + 4 + (-0x122 << 2)
    ctx->pc = 0x292674u;
    {
        const bool branch_taken_0x292674 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x292678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292674u;
        // 0x292678: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292674) {
            ctx->pc = 0x2921F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2921f0;
        }
    }
    ctx->pc = 0x29267Cu;
    // 0x29267c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x29267Cu;
    {
        const bool branch_taken_0x29267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29267Cu;
        // 0x292680: 0x102778  dsll        $a0, $s0, 29 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29267c) {
            ctx->pc = 0x292B20u;
            goto label_292b20;
        }
    }
    ctx->pc = 0x292684u;
label_292684:
    // 0x292684: 0x251200f0  addiu       $s2, $t0, 0xF0
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 240));
    // 0x292688: 0x2413001e  addiu       $s3, $zero, 0x1E
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29268c: 0x0  nop
    ctx->pc = 0x29268cu;
    // NOP
label_292690:
    // 0x292690: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x292690u;
    SET_GPR_U32(ctx, 31, 0x292698u);
    ctx->pc = 0x292694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292690u;
    // 0x292694: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x292690u, 0x292698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292698u;
label_292698:
    // 0x292698: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x292698u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29269c: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x29269cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2926a0: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x2926a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x2926a4: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x2926a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x2926a8: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x2926a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x2926ac: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x2926acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2926b0: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x2926b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x2926b4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2926b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2926b8: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x2926b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x2926bc: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x2926bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x2926c0: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x2926c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x2926c4: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x2926c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x2926c8: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x2926c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x2926cc: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x2926ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x2926d0: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x2926d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x2926d4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x2926d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x2926d8: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x2926d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x2926dc: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x2926dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x2926e0: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x2926e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x2926e4: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x2926e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x2926e8: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x2926e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2926ec: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x2926ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2926f0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2926f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2926f4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2926f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2926f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2926f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2926fc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2926fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x292700: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x292700u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x292704: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x292704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x292708: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x292708u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29270c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29270cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x292710: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x292710u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292714: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292714u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292718: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292718u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29271c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x29271cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x292720: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x292720u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x292724: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x292724u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x292728: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x292728u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x29272c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29272cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x292730: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x292730u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x292734: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x292738: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x292738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29273c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x29273cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x292740: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x292744: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x292744u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x292748: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x292748u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x29274c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x29274cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x292750: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292754: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x292754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292758: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x292758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29275c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29275cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292760: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x292764: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x292764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292768: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x292768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x29276c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x29276cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x292770: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x292770u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x292774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292778: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x292778u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x29277c: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x29277cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x292780: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x292780u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x292784: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x292784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x292788: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x292788u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x29278c: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x29278cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x292790: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x292790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x292794: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x292794u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x292798: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x292798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x29279c: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x29279cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x2927a0: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x2927a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x2927a4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2927a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2927a8: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x2927a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x2927ac: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2927acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2927b0: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2927B0u;
    SET_GPR_U32(ctx, 31, 0x2927B8u);
    ctx->pc = 0x2927B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927B0u;
    // 0x2927b4: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2927B0u, 0x2927B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927B8u;
label_2927b8:
    // 0x2927b8: 0xde43fff8  ld          $v1, -0x8($s2)
    ctx->pc = 0x2927b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x2927bc: 0xde45fff0  ld          $a1, -0x10($s2)
    ctx->pc = 0x2927bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294967280)));
    // 0x2927c0: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x2927c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x2927c4: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x2927c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x2927c8: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x2927c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x2927cc: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x2927ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2927d0: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x2927d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x2927d4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2927d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2927d8: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x2927d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x2927dc: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x2927dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x2927e0: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x2927e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x2927e4: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x2927e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x2927e8: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x2927e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x2927ec: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x2927ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x2927f0: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x2927f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x2927f4: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x2927f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x2927f8: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x2927f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x2927fc: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x2927fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x292800: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x292800u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x292804: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x292804u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x292808: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x292808u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x29280c: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x29280cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x292810: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x292810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x292814: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x292814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x292818: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x292818u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29281c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29281cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x292820: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x292820u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x292824: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x292824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x292828: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x292828u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29282c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29282cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x292830: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x292830u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292834: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292834u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292838: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292838u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29283c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x29283cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x292840: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x292840u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x292844: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x292844u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x292848: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x292848u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x29284c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29284cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x292850: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x292850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x292854: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x292854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x292858: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29285c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x292860: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x292860u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x292864: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x292864u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x292868: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x29286c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x29286cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x292870: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x292870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292874: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292878: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29287c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29287cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292880: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x292880u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x292884: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292888: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x292888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x29288c: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x29288cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x292890: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x292890u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x292894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292898: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x292898u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x29289c: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x29289cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x2928a0: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x2928a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x2928a4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x2928a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2928a8: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x2928a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x2928ac: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x2928acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x2928b0: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x2928b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x2928b4: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x2928b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x2928b8: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x2928b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x2928bc: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x2928bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x2928c0: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x2928c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x2928c4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2928c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2928c8: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x2928c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x2928cc: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2928ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2928d0: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2928D0u;
    SET_GPR_U32(ctx, 31, 0x2928D8u);
    ctx->pc = 0x2928D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928D0u;
    // 0x2928d4: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2928D0u, 0x2928D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928D8u;
label_2928d8:
    // 0x2928d8: 0xde43ffe8  ld          $v1, -0x18($s2)
    ctx->pc = 0x2928d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4294967272)));
    // 0x2928dc: 0xde45ffe0  ld          $a1, -0x20($s2)
    ctx->pc = 0x2928dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294967264)));
    // 0x2928e0: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x2928e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x2928e4: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x2928e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x2928e8: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x2928e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x2928ec: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x2928ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2928f0: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x2928f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x2928f4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2928f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2928f8: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x2928f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x2928fc: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x2928fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x292900: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x292900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x292904: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x292904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x292908: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x292908u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x29290c: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x29290cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x292910: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x292910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x292914: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x292914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x292918: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x292918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x29291c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x29291cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x292920: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x292920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x292924: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x292924u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x292928: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x292928u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x29292c: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x29292cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x292930: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x292930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x292934: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x292934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x292938: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x292938u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29293c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29293cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x292940: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x292940u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x292944: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x292944u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x292948: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x292948u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29294c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29294cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x292950: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x292950u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292954: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292954u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292958: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292958u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29295c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x29295cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x292960: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x292960u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x292964: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x292964u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x292968: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x292968u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x29296c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x292970: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x292970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x292974: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x292974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x292978: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29297c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x29297cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x292980: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x292980u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x292984: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x292988: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x292988u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x29298c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x29298cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x292990: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x292990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292994: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x292994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292998: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x292998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29299c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29299cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2929a0: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x2929a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2929a4: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x2929a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2929a8: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x2929a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2929ac: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x2929acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2929b0: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x2929b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x2929b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2929b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2929b8: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x2929b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x2929bc: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x2929bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x2929c0: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x2929c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x2929c4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x2929c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2929c8: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x2929c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x2929cc: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x2929ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x2929d0: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x2929d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x2929d4: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x2929d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x2929d8: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x2929d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x2929dc: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x2929dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x2929e0: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x2929e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x2929e4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2929e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2929e8: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x2929e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x2929ec: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2929ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2929f0: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2929F0u;
    SET_GPR_U32(ctx, 31, 0x2929F8u);
    ctx->pc = 0x2929F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929F0u;
    // 0x2929f4: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2929F0u, 0x2929F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929F8u;
label_2929f8:
    // 0x2929f8: 0xde43ffd8  ld          $v1, -0x28($s2)
    ctx->pc = 0x2929f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4294967256)));
    // 0x2929fc: 0xde45ffd0  ld          $a1, -0x30($s2)
    ctx->pc = 0x2929fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294967248)));
    // 0x292a00: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x292a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x292a04: 0x2652ffc0  addiu       $s2, $s2, -0x40
    ctx->pc = 0x292a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x292a08: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x292a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x292a0c: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x292a0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x292a10: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x292a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x292a14: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x292a14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x292a18: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x292a18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x292a1c: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x292a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x292a20: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x292a20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x292a24: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x292a24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x292a28: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x292a28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x292a2c: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x292a2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x292a30: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x292a30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x292a34: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x292a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x292a38: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x292a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x292a3c: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x292a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x292a40: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x292a40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x292a44: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x292a44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x292a48: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x292a48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x292a4c: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x292a4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x292a50: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x292a50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x292a54: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x292a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x292a58: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x292a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x292a5c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x292a5cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x292a60: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x292a60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x292a64: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x292a64u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x292a68: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x292a68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x292a6c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x292a6cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x292a70: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x292a70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x292a74: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x292a74u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292a78: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292a78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292a7c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292a7cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x292a80: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x292a80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x292a84: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x292a84u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x292a88: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x292a88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x292a8c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x292a8cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x292a90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x292a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x292a94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x292a94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x292a98: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x292a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x292a9c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x292a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x292aa0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x292aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x292aa4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x292aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x292aa8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x292aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x292aac: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x292aacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x292ab0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x292ab0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x292ab4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x292ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292ab8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x292ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292abc: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x292abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x292ac0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x292ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292ac4: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x292ac4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x292ac8: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x292ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292acc: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x292accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x292ad0: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x292ad0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_292ad4:
    // 0x292ad4: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x292ad4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x292ad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292adc: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x292adcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x292ae0: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x292ae0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x292ae4: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x292ae4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x292ae8: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x292ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x292aec: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x292aecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x292af0: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x292af0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x292af4: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x292af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x292af8: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x292af8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x292afc: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x292afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x292b00: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x292b00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x292b04: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x292b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x292b08: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x292b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x292b0c: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x292b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x292b10: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x292b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x292b14: 0x1e60fede  bgtz        $s3, . + 4 + (-0x122 << 2)
    ctx->pc = 0x292B14u;
    {
        const bool branch_taken_0x292b14 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x292B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B14u;
        // 0x292b18: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b14) {
            ctx->pc = 0x292690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292690;
        }
    }
    ctx->pc = 0x292B1Cu;
    // 0x292b1c: 0x102778  dsll        $a0, $s0, 29
    ctx->pc = 0x292b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 29);
label_292b20:
    // 0x292b20: 0x1018fa  dsrl        $v1, $s0, 3
    ctx->pc = 0x292b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> 3);
    // 0x292b24: 0x112f78  dsll        $a1, $s1, 29
    ctx->pc = 0x292b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << 29);
    // 0x292b28: 0x1110fa  dsrl        $v0, $s1, 3
    ctx->pc = 0x292b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 3);
    // 0x292b2c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x292b2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x292b30: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x292b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x292b34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x292b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x292b38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x292b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x292b3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x292b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292b40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x292b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x292b44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x292b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x292b48: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x292b48u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x292b4c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x292b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x292b50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x292b50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292b54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x292b54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292b58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x292b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x292b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x292b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292b64: 0x3e00008  jr          $ra
    ctx->pc = 0x292B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B64u;
        // 0x292b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292B6Cu;
    // 0x292b6c: 0x0  nop
    ctx->pc = 0x292b6cu;
    // NOP
}
