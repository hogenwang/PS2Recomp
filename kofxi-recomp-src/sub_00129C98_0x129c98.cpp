#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129C98
// Address: 0x129c98 - 0x129e28
void sub_00129C98_0x129c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129C98_0x129c98");
#endif

    switch (ctx->pc) {
        case 0x129cf4u: goto label_129cf4;
        case 0x129dc0u: goto label_129dc0;
        case 0x129dfcu: goto label_129dfc;
        default: break;
    }

    ctx->pc = 0x129c98u;

    // 0x129c98: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x129c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x129c9c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x129C9Cu;
    {
        const bool branch_taken_0x129c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C9Cu;
            // 0x129ca0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c9c) {
            ctx->pc = 0x129E08u;
            goto label_129e08;
        }
    }
    ctx->pc = 0x129CA4u;
    // 0x129ca4: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x129ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x129ca8: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x129ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x129cac: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x129cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x129cb0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x129cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x129cb4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x129cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x129cb8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x129cbc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x129cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x129cc0: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x129cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x129cc4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x129cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129cc8: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x129cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x129ccc: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x129cccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x129cd0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x129cd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x129cd4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x129cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x129cd8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x129cdc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x129cdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x129ce0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x129ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x129ce4: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x129ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x129ce8: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x129ce8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129cec: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x129CECu;
    {
        const bool branch_taken_0x129cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129CECu;
            // 0x129cf0: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cec) {
            ctx->pc = 0x129D80u;
            goto label_129d80;
        }
    }
    ctx->pc = 0x129CF4u;
label_129cf4:
    // 0x129cf4: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x129cf4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129cf8: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x129cf8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x129cfc: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x129cfcu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x129d00: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x129d00u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x129d04: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x129d04u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x129d08: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x129d08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129d0c: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x129d0cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x129d10: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x129d10u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x129d14: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x129d14u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x129d18: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x129d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129d1c: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x129D1Cu;
    {
        const bool branch_taken_0x129d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129d1c) {
            ctx->pc = 0x129D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129D1Cu;
            // 0x129d20: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129D24u;
    // 0x129d24: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x129d24u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x129d28: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x129d28u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x129d2c: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x129d2cu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x129d30: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x129d30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x129d34: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x129d34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x129d38: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x129d38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x129d3c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x129d3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x129d40: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x129d40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x129d44: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x129d44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x129d48: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x129d48u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x129d4c: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x129d4cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x129d50: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x129d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x129d54: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x129d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x129d58: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x129d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x129d5c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x129d60: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x129d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x129d64: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x129d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x129d68: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x129d68u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x129d6c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x129d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129d70: 0x5060ffe0  beql        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x129D70u;
    {
        const bool branch_taken_0x129d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129d70) {
            ctx->pc = 0x129D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129D70u;
            // 0x129d74: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129cf4;
        }
    }
    ctx->pc = 0x129D78u;
    // 0x129d78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x129D78u;
    {
        const bool branch_taken_0x129d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D78u;
            // 0x129d7c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d78) {
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129D80u;
label_129d80:
    // 0x129d80: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x129d80u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129d84: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x129d84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x129d88: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x129d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x129d8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x129d90: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x129d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x129d94: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x129D94u;
    {
        const bool branch_taken_0x129d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129d94) {
            ctx->pc = 0x129D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129D94u;
            // 0x129d98: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129D9Cu;
    // 0x129d9c: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x129d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x129da0: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x129da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x129da4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x129da4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129da8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x129da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x129dac: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x129dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x129db0: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x129DB0u;
    {
        const bool branch_taken_0x129db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129db0) {
            ctx->pc = 0x129DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129DB0u;
            // 0x129db4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129DB8u;
    // 0x129db8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x129db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129dbc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x129dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_129dc0:
    // 0x129dc0: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x129dc0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129dc4: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x129dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x129dc8: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x129dc8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x129dcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x129dd0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x129dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x129dd4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x129DD4u;
    {
        const bool branch_taken_0x129dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DD4u;
            // 0x129dd8: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dd4) {
            ctx->pc = 0x129E08u;
            goto label_129e08;
        }
    }
    ctx->pc = 0x129DDCu;
    // 0x129ddc: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x129ddcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129de0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x129de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x129de4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x129de8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x129de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x129dec: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x129DECu;
    {
        const bool branch_taken_0x129dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129dec) {
            ctx->pc = 0x129DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129DECu;
            // 0x129df0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129dc0;
        }
    }
    ctx->pc = 0x129DF4u;
    // 0x129df4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x129DF4u;
    {
        const bool branch_taken_0x129df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DF4u;
            // 0x129df8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129df4) {
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129DFCu;
label_129dfc:
    // 0x129dfc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129DFCu;
    {
        const bool branch_taken_0x129dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x129dfc) {
            ctx->pc = 0x129E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129DFCu;
            // 0x129e00: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129E18u;
            goto label_129e18;
        }
    }
    ctx->pc = 0x129E04u;
    // 0x129e04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_129e08:
    // 0x129e08: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x129e08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_129e0c:
    // 0x129e0c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x129E0Cu;
    {
        const bool branch_taken_0x129e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e0c) {
            ctx->pc = 0x129DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129dfc;
        }
    }
    ctx->pc = 0x129E14u;
    // 0x129e14: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x129e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_129e18:
    // 0x129e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x129e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e1c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x129e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x129e20: 0x3e00008  jr          $ra
    ctx->pc = 0x129E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E20u;
            // 0x129e24: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129E28u;
    ctx->pc = 0x129e28u;
}
