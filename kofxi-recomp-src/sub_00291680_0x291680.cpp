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

// Function: sub_00291680
// Address: 0x291680 - 0x292190
void sub_00291680_0x291680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291680_0x291680");
#endif

    switch (ctx->pc) {
        case 0x291778u: goto label_291778;
        case 0x291780u: goto label_291780;
        case 0x2917e8u: goto label_2917e8;
        case 0x2917f0u: goto label_2917f0;
        case 0x2918a0u: goto label_2918a0;
        case 0x2919c0u: goto label_2919c0;
        case 0x291ae0u: goto label_291ae0;
        case 0x291c18u: goto label_291c18;
        case 0x291c20u: goto label_291c20;
        case 0x291d40u: goto label_291d40;
        case 0x291e60u: goto label_291e60;
        case 0x291f80u: goto label_291f80;
        case 0x29200cu: goto label_29200c;
        case 0x292100u: goto label_292100;
        default: break;
    }

    ctx->pc = 0x291680u;

    // 0x291680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291684: 0x3c030f0f  lui         $v1, 0xF0F
    ctx->pc = 0x291684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3855 << 16));
    // 0x291688: 0x34630f0f  ori         $v1, $v1, 0xF0F
    ctx->pc = 0x291688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3855);
    // 0x29168c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x291690: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x291694: 0x34e700ff  ori         $a3, $a3, 0xFF
    ctx->pc = 0x291694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    // 0x291698: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x291698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29169c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29169cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2916a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2916a4: 0x3c043333  lui         $a0, 0x3333
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13107 << 16));
    // 0x2916a8: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x2916a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2916ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2916acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2916b0: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x2916b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x2916b4: 0x35295555  ori         $t1, $t1, 0x5555
    ctx->pc = 0x2916b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21845);
    // 0x2916b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2916b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2916bc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2916bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2916c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2916c4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2916c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2916c8: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2916c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2916cc: 0xde910008  ld          $s1, 0x8($s4)
    ctx->pc = 0x2916ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2916d0: 0xde900000  ld          $s0, 0x0($s4)
    ctx->pc = 0x2916d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2916d4: 0x11113a  dsrl        $v0, $s1, 4
    ctx->pc = 0x2916d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 4);
    // 0x2916d8: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2916d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2916dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2916dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2916e0: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x2916e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x2916e4: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x2916e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2916e8: 0x2238826  xor         $s1, $s1, $v1
    ctx->pc = 0x2916e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x2916ec: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x2916ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x2916f0: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x2916f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x2916f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2916f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2916f8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2916f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2916fc: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x2916fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x291700: 0x2038026  xor         $s0, $s0, $v1
    ctx->pc = 0x291700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x291704: 0x1110ba  dsrl        $v0, $s1, 2
    ctx->pc = 0x291704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 2);
    // 0x291708: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x291708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x29170c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x291710: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x291710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x291714: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x291714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x291718: 0x2238826  xor         $s1, $s1, $v1
    ctx->pc = 0x291718u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x29171c: 0x10123a  dsrl        $v0, $s0, 8
    ctx->pc = 0x29171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 8);
    // 0x291720: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x291720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x291724: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x291724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x291728: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x291728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x29172c: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x29172cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x291730: 0x2038026  xor         $s0, $s0, $v1
    ctx->pc = 0x291730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x291734: 0x11107a  dsrl        $v0, $s1, 1
    ctx->pc = 0x291734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 1);
    // 0x291738: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x291738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x29173c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x29173cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x291740: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x291740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
    // 0x291744: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x291744u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x291748: 0x2238826  xor         $s1, $s1, $v1
    ctx->pc = 0x291748u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x29174c: 0x1020f8  dsll        $a0, $s0, 3
    ctx->pc = 0x29174cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 3);
    // 0x291750: 0x1128f8  dsll        $a1, $s1, 3
    ctx->pc = 0x291750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << 3);
    // 0x291754: 0x10177a  dsrl        $v0, $s0, 29
    ctx->pc = 0x291754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 29);
    // 0x291758: 0x111f7a  dsrl        $v1, $s1, 29
    ctx->pc = 0x291758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) >> 29);
    // 0x29175c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x29175cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x291760: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x291760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x291764: 0x488024  and         $s0, $v0, $t0
    ctx->pc = 0x291764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x291768: 0x10c00128  beqz        $a2, . + 4 + (0x128 << 2)
    ctx->pc = 0x291768u;
    {
        const bool branch_taken_0x291768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291768u;
        // 0x29176c: 0x688824  and         $s1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291768) {
            ctx->pc = 0x291C0Cu;
            goto label_291c0c;
        }
    }
    ctx->pc = 0x291770u;
    // 0x291770: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x291770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291774: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x291774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_291778:
    // 0x291778: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291778u;
    SET_GPR_U32(ctx, 31, 0x291780u);
    ctx->pc = 0x29177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291778u;
    // 0x29177c: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291778u, 0x291780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291780u;
label_291780:
    // 0x291780: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x291780u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x291784: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x291784u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x291788: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x291788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x29178c: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x29178cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x291790: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x291790u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x291794: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x291794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x291798: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x291798u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x29179c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x29179cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2917a0: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x2917a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x2917a4: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x2917a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x2917a8: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x2917a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x2917ac: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x2917acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x2917b0: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x2917b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x2917b4: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x2917b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x2917b8: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x2917b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x2917bc: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x2917bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x2917c0: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x2917c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x2917c4: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x2917c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x2917c8: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x2917c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x2917cc: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x2917ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x2917d0: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x2917d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2917d4: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x2917d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2917d8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2917d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2917dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2917dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2917e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2917e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2917e4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2917e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_2917e8:
    // 0x2917e8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2917e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2917ec: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2917ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_2917f0:
    // 0x2917f0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2917f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2917f4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2917f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2917f8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2917f8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2917fc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2917fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291800: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291800u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291804: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291804u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291808: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291808u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x29180c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x29180cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291810: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291810u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291814: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291818: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291818u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29181c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x29181cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291820: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291820u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291824: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291824u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291828: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291828u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29182c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x29182cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291830: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291830u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291834: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291834u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291838: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29183c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x29183cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291840: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291844: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291848: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x29184c: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x29184cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291850: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291854: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291858: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291858u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x29185c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291860: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291860u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291864: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291868: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291868u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x29186c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x29186cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291870: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291870u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291874: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291874u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291878: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x29187c: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x29187cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x291880: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x291880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x291884: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x291884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x291888: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x291888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x29188c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x29188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x291890: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x291890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x291894: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x291894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x291898: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291898u;
    SET_GPR_U32(ctx, 31, 0x2918A0u);
    ctx->pc = 0x29189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291898u;
    // 0x29189c: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291898u, 0x2918A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918A0u;
label_2918a0:
    // 0x2918a0: 0xde430018  ld          $v1, 0x18($s2)
    ctx->pc = 0x2918a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2918a4: 0xde450010  ld          $a1, 0x10($s2)
    ctx->pc = 0x2918a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2918a8: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x2918a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x2918ac: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x2918acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x2918b0: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x2918b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x2918b4: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x2918b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2918b8: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x2918b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x2918bc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2918bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2918c0: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x2918c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x2918c4: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x2918c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x2918c8: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x2918c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x2918cc: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x2918ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x2918d0: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x2918d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x2918d4: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x2918d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x2918d8: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x2918d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x2918dc: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x2918dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x2918e0: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x2918e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x2918e4: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x2918e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x2918e8: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x2918e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x2918ec: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x2918ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x2918f0: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x2918f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x2918f4: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x2918f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2918f8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2918f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2918fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2918fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291900: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291900u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291904: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291908: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291908u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x29190c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29190cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291910: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291910u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291914: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291914u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291918: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291918u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x29191c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x29191cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291920: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291920u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291924: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291924u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291928: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291928u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x29192c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x29192cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291930: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291930u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291934: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291938: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291938u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29193c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x29193cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291940: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291940u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291944: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291944u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291948: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291948u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29194c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291950: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291950u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291954: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291954u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291958: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29195c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x29195cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291960: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291964: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291968: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x29196c: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x29196cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291970: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291974: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291974u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291978: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291978u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x29197c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291980: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291980u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291984: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291984u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291988: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291988u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x29198c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x29198cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291990: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291990u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291994: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291994u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291998: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x29199c: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x29199cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x2919a0: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x2919a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x2919a4: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x2919a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x2919a8: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x2919a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x2919ac: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2919acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2919b0: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x2919b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x2919b4: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2919b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2919b8: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2919B8u;
    SET_GPR_U32(ctx, 31, 0x2919C0u);
    ctx->pc = 0x2919BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919B8u;
    // 0x2919bc: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2919B8u, 0x2919C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919C0u;
label_2919c0:
    // 0x2919c0: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x2919c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2919c4: 0xde450020  ld          $a1, 0x20($s2)
    ctx->pc = 0x2919c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2919c8: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x2919c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x2919cc: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x2919ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x2919d0: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x2919d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x2919d4: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x2919d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2919d8: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x2919d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x2919dc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2919dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2919e0: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x2919e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x2919e4: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x2919e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x2919e8: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x2919e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x2919ec: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x2919ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x2919f0: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x2919f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x2919f4: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x2919f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x2919f8: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x2919f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x2919fc: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x2919fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x291a00: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x291a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x291a04: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x291a04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x291a08: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x291a08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x291a0c: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x291a0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x291a10: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x291a10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x291a14: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x291a14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x291a18: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x291a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x291a1c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x291a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291a20: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291a20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291a24: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291a24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291a28: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291a28u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x291a2c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x291a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291a30: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291a30u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291a34: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291a34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291a38: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291a38u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x291a3c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x291a3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291a40: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291a40u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291a44: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291a44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291a48: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291a48u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x291a4c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x291a4cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291a50: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291a50u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291a54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291a58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291a58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291a5c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x291a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291a60: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291a60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291a64: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291a64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291a68: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291a68u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x291a6c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x291a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291a70: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291a70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291a74: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291a74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291a78: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x291a7c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x291a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291a80: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291a84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291a88: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291a88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x291a8c: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x291a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291a90: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291a94: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291a94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291a98: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291a98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x291a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291aa0: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291aa0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291aa4: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291aa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291aa8: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291aa8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x291aac: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x291aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291ab0: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291ab0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291ab4: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291ab4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291ab8: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x291abc: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x291abcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x291ac0: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x291ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x291ac4: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x291ac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x291ac8: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x291acc: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x291accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x291ad0: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x291ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x291ad4: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x291ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x291ad8: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291AD8u;
    SET_GPR_U32(ctx, 31, 0x291AE0u);
    ctx->pc = 0x291ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AD8u;
    // 0x291adc: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291AD8u, 0x291AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AE0u;
label_291ae0:
    // 0x291ae0: 0xde430038  ld          $v1, 0x38($s2)
    ctx->pc = 0x291ae0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x291ae4: 0xde450030  ld          $a1, 0x30($s2)
    ctx->pc = 0x291ae4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x291ae8: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x291ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x291aec: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x291af0: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x291af4: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x291af8: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x291af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x291afc: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x291afcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x291b00: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x291b00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x291b04: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x291b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x291b08: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x291b08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x291b0c: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x291b0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x291b10: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x291b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x291b14: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x291b14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x291b18: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x291b18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x291b1c: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x291b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x291b20: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x291b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x291b24: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x291b24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x291b28: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x291b28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x291b2c: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x291b2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x291b30: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x291b30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x291b34: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x291b34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x291b38: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x291b38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x291b3c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x291b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x291b40: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x291b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291b44: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291b44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291b48: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291b4c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291b4cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x291b50: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x291b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291b54: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291b54u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291b58: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291b58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291b5c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291b5cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x291b60: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x291b60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291b64: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291b64u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291b68: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291b68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291b6c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291b6cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x291b70: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291b74: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291b74u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291b78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291b7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291b7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291b80: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291b84: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291b84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291b88: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291b8c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x291b90: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291b94: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291b98: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291b98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291b9c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x291ba0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x291ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291ba4: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291ba8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291bac: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291bacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x291bb0: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x291bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291bb4: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291bb8: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291bb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291bbc: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291bbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x291bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291bc4: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291bc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291bc8: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291bc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291bcc: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291bccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x291bd0: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x291bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291bd4: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291bd4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291bd8: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291bd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291bdc: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x291be0: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x291be0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x291be4: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x291be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x291be8: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x291be8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x291bec: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x291becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x291bf0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x291bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x291bf4: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x291bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x291bf8: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x291bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x291bfc: 0x661fede  bgez        $s3, . + 4 + (-0x122 << 2)
    ctx->pc = 0x291BFCu;
    {
        const bool branch_taken_0x291bfc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x291C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BFCu;
        // 0x291c00: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bfc) {
            ctx->pc = 0x291778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291778;
        }
    }
    ctx->pc = 0x291C04u;
    // 0x291c04: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x291C04u;
    {
        const bool branch_taken_0x291c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C04u;
        // 0x291c08: 0x101f78  dsll        $v1, $s0, 29 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << 29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c04) {
            ctx->pc = 0x2920A8u;
            goto label_2920a8;
        }
    }
    ctx->pc = 0x291C0Cu;
label_291c0c:
    // 0x291c0c: 0x255200f0  addiu       $s2, $t2, 0xF0
    ctx->pc = 0x291c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), 240));
    // 0x291c10: 0x2413001e  addiu       $s3, $zero, 0x1E
    ctx->pc = 0x291c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x291c14: 0x0  nop
    ctx->pc = 0x291c14u;
    // NOP
label_291c18:
    // 0x291c18: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291C18u;
    SET_GPR_U32(ctx, 31, 0x291C20u);
    ctx->pc = 0x291C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C18u;
    // 0x291c1c: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291C18u, 0x291C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C20u;
label_291c20:
    // 0x291c20: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x291c20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x291c24: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x291c24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x291c28: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x291c2c: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x291c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x291c30: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x291c30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x291c34: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x291c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x291c38: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x291c38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x291c3c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x291c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x291c40: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x291c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x291c44: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x291c44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x291c48: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x291c48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x291c4c: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x291c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x291c50: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x291c50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x291c54: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x291c54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x291c58: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x291c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x291c5c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x291c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x291c60: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x291c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x291c64: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x291c64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x291c68: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x291c68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x291c6c: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x291c6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x291c70: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x291c70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x291c74: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x291c78: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x291c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x291c7c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x291c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291c80: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291c80u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291c84: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291c88: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291c88u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x291c8c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x291c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291c90: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291c90u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291c94: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291c94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291c98: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291c98u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x291c9c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x291c9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291ca0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291ca0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291ca4: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291ca4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291ca8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291ca8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x291cac: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x291cacu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291cb0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291cb0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291cb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291cb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291cb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291cbc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x291cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291cc0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291cc4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291cc8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x291ccc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x291cccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291cd0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291cd0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291cd4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291cd4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291cd8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x291cdc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x291cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291ce0: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291ce4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291ce8: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291ce8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x291cec: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x291cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291cf0: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291cf4: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291cf8: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291cf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x291cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291d00: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291d00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291d04: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291d04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291d08: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291d08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x291d0c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x291d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291d10: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291d10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291d14: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291d14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291d18: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x291d1c: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x291d1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x291d20: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x291d24: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x291d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x291d28: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x291d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x291d2c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x291d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x291d30: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x291d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x291d34: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x291d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x291d38: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291D38u;
    SET_GPR_U32(ctx, 31, 0x291D40u);
    ctx->pc = 0x291D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D38u;
    // 0x291d3c: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291D38u, 0x291D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D40u;
label_291d40:
    // 0x291d40: 0xde43fff8  ld          $v1, -0x8($s2)
    ctx->pc = 0x291d40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x291d44: 0xde45fff0  ld          $a1, -0x10($s2)
    ctx->pc = 0x291d44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294967280)));
    // 0x291d48: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x291d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x291d4c: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x291d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x291d50: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x291d50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x291d54: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x291d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x291d58: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x291d58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x291d5c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x291d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x291d60: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x291d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x291d64: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x291d64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x291d68: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x291d68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x291d6c: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x291d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x291d70: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x291d74: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x291d74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x291d78: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x291d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x291d7c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x291d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x291d80: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x291d80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x291d84: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x291d84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x291d88: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x291d88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x291d8c: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x291d8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x291d90: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x291d90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x291d94: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x291d94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x291d98: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x291d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x291d9c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x291d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291da0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291da0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291da4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291da8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291da8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x291dac: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x291dacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291db0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291db0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291db4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291db4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291db8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291db8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x291dbc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x291dbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291dc0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291dc0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291dc4: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291dc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291dc8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291dc8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x291dcc: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x291dccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291dd0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291dd0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291dd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291dd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291dd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291ddc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x291ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291de0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291de0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291de4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291de4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291de8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291de8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x291dec: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x291decu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291df0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291df0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291df4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291df8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x291dfc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x291dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291e00: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291e04: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291e08: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291e08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x291e0c: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x291e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291e10: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291e14: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291e14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291e18: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291e18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x291e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291e20: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291e20u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291e24: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291e24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291e28: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291e28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x291e2c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x291e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291e30: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291e30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291e34: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291e34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291e38: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x291e3c: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x291e3cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x291e40: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x291e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x291e44: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x291e44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x291e48: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x291e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x291e4c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x291e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x291e50: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x291e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x291e54: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x291e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x291e58: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291E58u;
    SET_GPR_U32(ctx, 31, 0x291E60u);
    ctx->pc = 0x291E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E58u;
    // 0x291e5c: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291E58u, 0x291E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E60u;
label_291e60:
    // 0x291e60: 0xde43ffe8  ld          $v1, -0x18($s2)
    ctx->pc = 0x291e60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4294967272)));
    // 0x291e64: 0xde45ffe0  ld          $a1, -0x20($s2)
    ctx->pc = 0x291e64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294967264)));
    // 0x291e68: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x291e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x291e6c: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x291e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x291e70: 0x2055026  xor         $t2, $s0, $a1
    ctx->pc = 0x291e70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x291e74: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x291e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x291e78: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x291e7c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x291e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x291e80: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x291e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x291e84: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x291e84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x291e88: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x291e88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x291e8c: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x291e8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x291e90: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x291e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x291e94: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x291e94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x291e98: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x291e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x291e9c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x291e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x291ea0: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x291ea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x291ea4: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x291ea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x291ea8: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x291ea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x291eac: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x291eacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x291eb0: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x291eb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x291eb4: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x291eb4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x291eb8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x291eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x291ebc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x291ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291ec0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291ec0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291ec4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291ec8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291ec8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x291ecc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x291eccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291ed0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291ed0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291ed4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291ed8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291ed8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x291edc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x291edcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x291ee0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291ee0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x291ee4: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x291ee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x291ee8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x291ee8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x291eec: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x291eecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x291ef0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x291ef0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x291ef4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x291ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291ef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291efc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x291efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x291f00: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x291f04: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x291f04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x291f08: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x291f0c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x291f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x291f10: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x291f14: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x291f14u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x291f18: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x291f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x291f1c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x291f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291f20: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x291f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291f24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x291f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x291f28: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x291f2c: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x291f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x291f30: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x291f34: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x291f34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x291f38: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x291f38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x291f3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291f40: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x291f40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x291f44: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x291f44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x291f48: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x291f48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x291f4c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x291f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x291f50: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x291f50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x291f54: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x291f54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x291f58: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x291f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x291f5c: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x291f5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x291f60: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x291f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x291f64: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x291f68: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x291f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x291f6c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x291f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x291f70: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x291f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x291f74: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x291f78: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x291F78u;
    SET_GPR_U32(ctx, 31, 0x291F80u);
    ctx->pc = 0x291F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F78u;
    // 0x291f7c: 0x2248826  xor         $s1, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x291F78u, 0x291F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F80u;
label_291f80:
    // 0x291f80: 0xde43ffd8  ld          $v1, -0x28($s2)
    ctx->pc = 0x291f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4294967256)));
    // 0x291f84: 0xde45ffd0  ld          $a1, -0x30($s2)
    ctx->pc = 0x291f84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294967248)));
    // 0x291f88: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x291f8c: 0x2652ffc0  addiu       $s2, $s2, -0x40
    ctx->pc = 0x291f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x291f90: 0x32738  dsll        $a0, $v1, 28
    ctx->pc = 0x291f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 28);
    // 0x291f94: 0x2255026  xor         $t2, $s1, $a1
    ctx->pc = 0x291f94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
    // 0x291f98: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x291f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x291f9c: 0xa5cba  dsrl        $t3, $t2, 18
    ctx->pc = 0x291f9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) >> 18);
    // 0x291fa0: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x291fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x291fa4: 0xa28ba  dsrl        $a1, $t2, 2
    ctx->pc = 0x291fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) >> 2);
    // 0x291fa8: 0xa46ba  dsrl        $t0, $t2, 26
    ctx->pc = 0x291fa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 26);
    // 0x291fac: 0x364ba  dsrl        $t4, $v1, 18
    ctx->pc = 0x291facu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) >> 18);
    // 0x291fb0: 0x33eba  dsrl        $a3, $v1, 26
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 26);
    // 0x291fb4: 0x34aba  dsrl        $t1, $v1, 10
    ctx->pc = 0x291fb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 10);
    // 0x291fb8: 0xa52ba  dsrl        $t2, $t2, 10
    ctx->pc = 0x291fb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 10);
    // 0x291fbc: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x291fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x291fc0: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x291fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x291fc4: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x291fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x291fc8: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x291fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x291fcc: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x291fccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x291fd0: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x291fd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x291fd4: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x291fd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x291fd8: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x291fd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x291fdc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x291fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x291fe0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x291fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291fe4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x291fe4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x291fe8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x291fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x291fec: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x291fecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x291ff0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x291ff0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291ff4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291ff4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291ff8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x291ff8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x291ffc: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x291ffcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x292000: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x292000u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x292004: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x292004u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x292008: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x292008u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_29200c:
    // 0x29200c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x29200cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x292010: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x292010u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x292014: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x292014u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x292018: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x292018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29201c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29201cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x292020: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x292020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x292024: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x292024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x292028: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x292028u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x29202c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x29202cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x292030: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x292030u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x292034: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x292034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x292038: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x292038u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x29203c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x29203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292040: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x292040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292044: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x292044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x292048: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x292048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29204c: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x29204cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x292050: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x292050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292054: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x292054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x292058: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x29205c: 0xdca40240  ld          $a0, 0x240($a1)
    ctx->pc = 0x29205cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x292060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292064: 0xdd060e40  ld          $a2, 0xE40($t0)
    ctx->pc = 0x292064u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 3648)));
    // 0x292068: 0xdce31040  ld          $v1, 0x1040($a3)
    ctx->pc = 0x292068u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4160)));
    // 0x29206c: 0xdd270840  ld          $a3, 0x840($t1)
    ctx->pc = 0x29206cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 2112)));
    // 0x292070: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x292070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x292074: 0xdd450640  ld          $a1, 0x640($t2)
    ctx->pc = 0x292074u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1600)));
    // 0x292078: 0xdc430440  ld          $v1, 0x440($v0)
    ctx->pc = 0x292078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x29207c: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x29207cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x292080: 0xdd680a40  ld          $t0, 0xA40($t3)
    ctx->pc = 0x292080u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 2624)));
    // 0x292084: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x292084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x292088: 0xdd820c40  ld          $v0, 0xC40($t4)
    ctx->pc = 0x292088u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 3136)));
    // 0x29208c: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x29208cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
    // 0x292090: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x292090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x292094: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x292094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x292098: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x292098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x29209c: 0x1e60fede  bgtz        $s3, . + 4 + (-0x122 << 2)
    ctx->pc = 0x29209Cu;
    {
        const bool branch_taken_0x29209c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2920A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29209Cu;
        // 0x2920a0: 0x2048026  xor         $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29209c) {
            ctx->pc = 0x291C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291c18;
        }
    }
    ctx->pc = 0x2920A4u;
    // 0x2920a4: 0x101f78  dsll        $v1, $s0, 29
    ctx->pc = 0x2920a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << 29);
label_2920a8:
    // 0x2920a8: 0x1010fa  dsrl        $v0, $s0, 3
    ctx->pc = 0x2920a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 3);
    // 0x2920ac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2920acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2920b0: 0x112f78  dsll        $a1, $s1, 29
    ctx->pc = 0x2920b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << 29);
    // 0x2920b4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2920b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2920b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2920b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2920bc: 0x1118fa  dsrl        $v1, $s1, 3
    ctx->pc = 0x2920bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) >> 3);
    // 0x2920c0: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x2920c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2920c4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x2920c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2920c8: 0x648824  and         $s1, $v1, $a0
    ctx->pc = 0x2920c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2920cc: 0x10107a  dsrl        $v0, $s0, 1
    ctx->pc = 0x2920ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 1);
    // 0x2920d0: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x2920d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x2920d4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x2920d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x2920d8: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x2920d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x2920dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2920dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2920e0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x2920e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x2920e4: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x2920e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x2920e8: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x2920e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
    // 0x2920ec: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x2920ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x2920f0: 0x2038026  xor         $s0, $s0, $v1
    ctx->pc = 0x2920f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x2920f4: 0x11123a  dsrl        $v0, $s1, 8
    ctx->pc = 0x2920f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 8);
    // 0x2920f8: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2920f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2920fc: 0x3c053333  lui         $a1, 0x3333
    ctx->pc = 0x2920fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13107 << 16));
label_292100:
    // 0x292100: 0x34a53333  ori         $a1, $a1, 0x3333
    ctx->pc = 0x292100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
    // 0x292104: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x292104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x292108: 0x3c060f0f  lui         $a2, 0xF0F
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3855 << 16));
    // 0x29210c: 0x34c60f0f  ori         $a2, $a2, 0xF0F
    ctx->pc = 0x29210cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3855);
    // 0x292110: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x292110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x292114: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x292114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x292118: 0x2238826  xor         $s1, $s1, $v1
    ctx->pc = 0x292118u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x29211c: 0x1010ba  dsrl        $v0, $s0, 2
    ctx->pc = 0x29211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 2);
    // 0x292120: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x292120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x292124: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x292124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292128: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x292128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29212c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29212cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292130: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x292130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x292134: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x292134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x292138: 0x2038026  xor         $s0, $s0, $v1
    ctx->pc = 0x292138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x29213c: 0x11143a  dsrl        $v0, $s1, 16
    ctx->pc = 0x29213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 16);
    // 0x292140: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x292140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x292144: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x292144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292148: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29214c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x29214cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x292150: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x292150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x292154: 0x2238826  xor         $s1, $s1, $v1
    ctx->pc = 0x292154u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x292158: 0x10113a  dsrl        $v0, $s0, 4
    ctx->pc = 0x292158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 4);
    // 0x29215c: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x29215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x292160: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x292160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x292164: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x292164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x292168: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x292168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x29216c: 0x2038026  xor         $s0, $s0, $v1
    ctx->pc = 0x29216cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x292170: 0xfe910000  sd          $s1, 0x0($s4)
    ctx->pc = 0x292170u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 17));
    // 0x292174: 0xfe900008  sd          $s0, 0x8($s4)
    ctx->pc = 0x292174u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 16));
    // 0x292178: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x292178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29217c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29217cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x292180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292184: 0x3e00008  jr          $ra
    ctx->pc = 0x292184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292184u;
        // 0x292188: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29218Cu;
    // 0x29218c: 0x0  nop
    ctx->pc = 0x29218cu;
    // NOP
}
