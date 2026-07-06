#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150CC0
// Address: 0x150cc0 - 0x150e70
void sub_00150CC0_0x150cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150CC0_0x150cc0");
#endif

    switch (ctx->pc) {
        case 0x150cf4u: goto label_150cf4;
        case 0x150cfcu: goto label_150cfc;
        case 0x150d28u: goto label_150d28;
        case 0x150d30u: goto label_150d30;
        case 0x150d50u: goto label_150d50;
        case 0x150d5cu: goto label_150d5c;
        case 0x150d64u: goto label_150d64;
        case 0x150d98u: goto label_150d98;
        case 0x150da8u: goto label_150da8;
        case 0x150ddcu: goto label_150ddc;
        case 0x150df0u: goto label_150df0;
        case 0x150df8u: goto label_150df8;
        case 0x150e40u: goto label_150e40;
        case 0x150e60u: goto label_150e60;
        default: break;
    }

    ctx->pc = 0x150cc0u;

    // 0x150cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150cc4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150cd0: 0xa440f348  sh          $zero, -0xCB8($v0)
    ctx->pc = 0x150cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964040), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cd4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150cd8: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x150cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x150cdc: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x150cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x150ce0: 0x50200040  beql        $at, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x150CE0u;
    {
        const bool branch_taken_0x150ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ce0) {
            ctx->pc = 0x150CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150CE0u;
            // 0x150ce4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150DE4u;
            goto label_150de4;
        }
    }
    ctx->pc = 0x150CE8u;
    // 0x150ce8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x150cec: 0xc054ac4  jal         func_152B10
    ctx->pc = 0x150CECu;
    SET_GPR_U32(ctx, 31, 0x150CF4u);
    ctx->pc = 0x150CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150CECu;
            // 0x150cf0: 0xac40da20  sw          $zero, -0x25E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152B10u;
    if (runtime->hasFunction(0x152B10u)) {
        auto targetFn = runtime->lookupFunction(0x152B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CF4u; }
        if (ctx->pc != 0x150CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152B10_0x152b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CF4u; }
        if (ctx->pc != 0x150CF4u) { return; }
    }
    ctx->pc = 0x150CF4u;
label_150cf4:
    // 0x150cf4: 0xc054b30  jal         func_152CC0
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x152CC0u;
    if (runtime->hasFunction(0x152CC0u)) {
        auto targetFn = runtime->lookupFunction(0x152CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CFCu; }
        if (ctx->pc != 0x150CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152CC0_0x152cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CFCu; }
        if (ctx->pc != 0x150CFCu) { return; }
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150d00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x150d04: 0x9445f108  lhu         $a1, -0xEF8($v0)
    ctx->pc = 0x150d04u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x150d08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150d0c: 0x24a5fec0  addiu       $a1, $a1, -0x140
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
    // 0x150d10: 0x9444f10a  lhu         $a0, -0xEF6($v0)
    ctx->pc = 0x150d10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963466)));
    // 0x150d14: 0xa465db3c  sh          $a1, -0x24C4($v1)
    ctx->pc = 0x150d14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957884), (uint16_t)GPR_U32(ctx, 5));
    // 0x150d18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x150d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x150d1c: 0x2483ff10  addiu       $v1, $a0, -0xF0
    ctx->pc = 0x150d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967056));
    // 0x150d20: 0xc054b18  jal         func_152C60
    ctx->pc = 0x150D20u;
    SET_GPR_U32(ctx, 31, 0x150D28u);
    ctx->pc = 0x150D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D20u;
            // 0x150d24: 0xa443db3e  sh          $v1, -0x24C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957886), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152C60u;
    if (runtime->hasFunction(0x152C60u)) {
        auto targetFn = runtime->lookupFunction(0x152C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D28u; }
        if (ctx->pc != 0x150D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152C60_0x152c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D28u; }
        if (ctx->pc != 0x150D28u) { return; }
    }
    ctx->pc = 0x150D28u;
label_150d28:
    // 0x150d28: 0xc054b80  jal         func_152E00
    ctx->pc = 0x150D28u;
    SET_GPR_U32(ctx, 31, 0x150D30u);
    ctx->pc = 0x152E00u;
    if (runtime->hasFunction(0x152E00u)) {
        auto targetFn = runtime->lookupFunction(0x152E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D30u; }
        if (ctx->pc != 0x150D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152E00_0x152e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D30u; }
        if (ctx->pc != 0x150D30u) { return; }
    }
    ctx->pc = 0x150D30u;
label_150d30:
    // 0x150d30: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x150d34: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x150d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x150d38: 0x24841a70  addiu       $a0, $a0, 0x1A70
    ctx->pc = 0x150d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6768));
    // 0x150d3c: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
    // 0x150d40: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x150d44: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x150d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150d48: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x150D48u;
    SET_GPR_U32(ctx, 31, 0x150D50u);
    ctx->pc = 0x150D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D48u;
            // 0x150d4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D50u; }
        if (ctx->pc != 0x150D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D50u; }
        if (ctx->pc != 0x150D50u) { return; }
    }
    ctx->pc = 0x150D50u;
label_150d50:
    // 0x150d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d54: 0xc054444  jal         func_151110
    ctx->pc = 0x150D54u;
    SET_GPR_U32(ctx, 31, 0x150D5Cu);
    ctx->pc = 0x150D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D54u;
            // 0x150d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151110u;
    if (runtime->hasFunction(0x151110u)) {
        auto targetFn = runtime->lookupFunction(0x151110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D5Cu; }
        if (ctx->pc != 0x150D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151110_0x151110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D5Cu; }
        if (ctx->pc != 0x150D5Cu) { return; }
    }
    ctx->pc = 0x150D5Cu;
label_150d5c:
    // 0x150d5c: 0xc054608  jal         func_151820
    ctx->pc = 0x150D5Cu;
    SET_GPR_U32(ctx, 31, 0x150D64u);
    ctx->pc = 0x150D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D5Cu;
            // 0x150d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151820u;
    if (runtime->hasFunction(0x151820u)) {
        auto targetFn = runtime->lookupFunction(0x151820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D64u; }
        if (ctx->pc != 0x150D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151820_0x151820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D64u; }
        if (ctx->pc != 0x150D64u) { return; }
    }
    ctx->pc = 0x150D64u;
label_150d64:
    // 0x150d64: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150d68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x150d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150d6c: 0x8063f340  lb          $v1, -0xCC0($v1)
    ctx->pc = 0x150d6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964032)));
    // 0x150d70: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x150D70u;
    {
        const bool branch_taken_0x150d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x150d70) {
            ctx->pc = 0x150DA8u;
            goto label_150da8;
        }
    }
    ctx->pc = 0x150D78u;
    // 0x150d78: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x150d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x150d7c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x150d80: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x150d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x150d84: 0x24a5d0b8  addiu       $a1, $a1, -0x2F48
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955192));
    // 0x150d88: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x150d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x150d8c: 0x240707d8  addiu       $a3, $zero, 0x7D8
    ctx->pc = 0x150d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2008));
    // 0x150d90: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x150D90u;
    SET_GPR_U32(ctx, 31, 0x150D98u);
    ctx->pc = 0x150D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D90u;
            // 0x150d94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D98u; }
        if (ctx->pc != 0x150D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D98u; }
        if (ctx->pc != 0x150D98u) { return; }
    }
    ctx->pc = 0x150D98u;
label_150d98:
    // 0x150d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150D98u;
    {
        const bool branch_taken_0x150d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d98) {
            ctx->pc = 0x150DA8u;
            goto label_150da8;
        }
    }
    ctx->pc = 0x150DA0u;
    // 0x150da0: 0xc055070  jal         func_1541C0
    ctx->pc = 0x150DA0u;
    SET_GPR_U32(ctx, 31, 0x150DA8u);
    ctx->pc = 0x150DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DA0u;
            // 0x150da4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541C0u;
    if (runtime->hasFunction(0x1541C0u)) {
        auto targetFn = runtime->lookupFunction(0x1541C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DA8u; }
        if (ctx->pc != 0x150DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001541C0_0x1541c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DA8u; }
        if (ctx->pc != 0x150DA8u) { return; }
    }
    ctx->pc = 0x150DA8u;
label_150da8:
    // 0x150da8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150dac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x150dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150db0: 0x8063f340  lb          $v1, -0xCC0($v1)
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964032)));
    // 0x150db4: 0x5464002b  bnel        $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x150DB4u;
    {
        const bool branch_taken_0x150db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x150db4) {
            ctx->pc = 0x150DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150DB4u;
            // 0x150db8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150E64u;
            goto label_150e64;
        }
    }
    ctx->pc = 0x150DBCu;
    // 0x150dbc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x150dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x150dc0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x150dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x150dc4: 0x24843930  addiu       $a0, $a0, 0x3930
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14640));
    // 0x150dc8: 0x24a5d0c0  addiu       $a1, $a1, -0x2F40
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955200));
    // 0x150dcc: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x150dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x150dd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dd4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x150DD4u;
    SET_GPR_U32(ctx, 31, 0x150DDCu);
    ctx->pc = 0x150DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DD4u;
            // 0x150dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DDCu; }
        if (ctx->pc != 0x150DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DDCu; }
        if (ctx->pc != 0x150DDCu) { return; }
    }
    ctx->pc = 0x150DDCu;
label_150ddc:
    // 0x150ddc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x150DDCu;
    {
        const bool branch_taken_0x150ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ddc) {
            ctx->pc = 0x150E60u;
            goto label_150e60;
        }
    }
    ctx->pc = 0x150DE4u;
label_150de4:
    // 0x150de4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x150de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x150de8: 0xc054ac4  jal         func_152B10
    ctx->pc = 0x150DE8u;
    SET_GPR_U32(ctx, 31, 0x150DF0u);
    ctx->pc = 0x150DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150DE8u;
            // 0x150dec: 0xac43da20  sw          $v1, -0x25E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152B10u;
    if (runtime->hasFunction(0x152B10u)) {
        auto targetFn = runtime->lookupFunction(0x152B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF0u; }
        if (ctx->pc != 0x150DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152B10_0x152b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF0u; }
        if (ctx->pc != 0x150DF0u) { return; }
    }
    ctx->pc = 0x150DF0u;
label_150df0:
    // 0x150df0: 0xc054b30  jal         func_152CC0
    ctx->pc = 0x150DF0u;
    SET_GPR_U32(ctx, 31, 0x150DF8u);
    ctx->pc = 0x152CC0u;
    if (runtime->hasFunction(0x152CC0u)) {
        auto targetFn = runtime->lookupFunction(0x152CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF8u; }
        if (ctx->pc != 0x150DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152CC0_0x152cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150DF8u; }
        if (ctx->pc != 0x150DF8u) { return; }
    }
    ctx->pc = 0x150DF8u;
label_150df8:
    // 0x150df8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150dfc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x150dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x150e00: 0x9446f108  lhu         $a2, -0xEF8($v0)
    ctx->pc = 0x150e00u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x150e04: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x150e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x150e08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x150e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x150e0c: 0x24841a70  addiu       $a0, $a0, 0x1A70
    ctx->pc = 0x150e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6768));
    // 0x150e10: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50
    ctx->pc = 0x150e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
    // 0x150e14: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150e18: 0x24c8fec0  addiu       $t0, $a2, -0x140
    ctx->pc = 0x150e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966976));
    // 0x150e1c: 0x9447f10a  lhu         $a3, -0xEF6($v0)
    ctx->pc = 0x150e1cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963466)));
    // 0x150e20: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x150e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x150e24: 0xa468db3c  sh          $t0, -0x24C4($v1)
    ctx->pc = 0x150e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957884), (uint16_t)GPR_U32(ctx, 8));
    // 0x150e28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x150e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e2c: 0x24e3ff10  addiu       $v1, $a3, -0xF0
    ctx->pc = 0x150e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967056));
    // 0x150e30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x150e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x150e34: 0xa443db3e  sh          $v1, -0x24C2($v0)
    ctx->pc = 0x150e34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957886), (uint16_t)GPR_U32(ctx, 3));
    // 0x150e38: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x150E38u;
    SET_GPR_U32(ctx, 31, 0x150E40u);
    ctx->pc = 0x150E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E38u;
            // 0x150e3c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E40u; }
        if (ctx->pc != 0x150E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E40u; }
        if (ctx->pc != 0x150E40u) { return; }
    }
    ctx->pc = 0x150E40u;
label_150e40:
    // 0x150e40: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x150e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x150e44: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x150e48: 0x24844190  addiu       $a0, $a0, 0x4190
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
    // 0x150e4c: 0x24a5d0d0  addiu       $a1, $a1, -0x2F30
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955216));
    // 0x150e50: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x150e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e58: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x150E58u;
    SET_GPR_U32(ctx, 31, 0x150E60u);
    ctx->pc = 0x150E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E58u;
            // 0x150e5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E60u; }
        if (ctx->pc != 0x150E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E60u; }
        if (ctx->pc != 0x150E60u) { return; }
    }
    ctx->pc = 0x150E60u;
label_150e60:
    // 0x150e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150e64:
    // 0x150e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150e68: 0x3e00008  jr          $ra
    ctx->pc = 0x150E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E68u;
            // 0x150e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150E70u;
    ctx->pc = 0x150e70u;
}
