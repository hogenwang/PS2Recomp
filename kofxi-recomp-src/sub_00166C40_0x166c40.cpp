#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166C40
// Address: 0x166c40 - 0x166eb0
void sub_00166C40_0x166c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166C40_0x166c40");
#endif

    switch (ctx->pc) {
        case 0x166c5cu: goto label_166c5c;
        case 0x166cc0u: goto label_166cc0;
        case 0x166cdcu: goto label_166cdc;
        case 0x166cf8u: goto label_166cf8;
        case 0x166d14u: goto label_166d14;
        case 0x166d40u: goto label_166d40;
        case 0x166d60u: goto label_166d60;
        case 0x166d78u: goto label_166d78;
        case 0x166da8u: goto label_166da8;
        case 0x166dc0u: goto label_166dc0;
        case 0x166df0u: goto label_166df0;
        case 0x166e04u: goto label_166e04;
        case 0x166e20u: goto label_166e20;
        case 0x166e40u: goto label_166e40;
        case 0x166e74u: goto label_166e74;
        case 0x166e94u: goto label_166e94;
        default: break;
    }

    ctx->pc = 0x166c40u;

    // 0x166c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166c50: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x166c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x166c54: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x166C54u;
    SET_GPR_U32(ctx, 31, 0x166C5Cu);
    ctx->pc = 0x166C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C54u;
            // 0x166c58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C5Cu; }
        if (ctx->pc != 0x166C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C5Cu; }
        if (ctx->pc != 0x166C5Cu) { return; }
    }
    ctx->pc = 0x166C5Cu;
label_166c5c:
    // 0x166c5c: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x166c5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x166c60: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x166c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x166c64: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x166C64u;
    {
        const bool branch_taken_0x166c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166c64) {
            ctx->pc = 0x166C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166C64u;
            // 0x166c68: 0x9626000c  lhu         $a2, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166C84u;
            goto label_166c84;
        }
    }
    ctx->pc = 0x166C6Cu;
    // 0x166c6c: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x166c6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x166c70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166C70u;
    {
        const bool branch_taken_0x166c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166c70) {
            ctx->pc = 0x166C80u;
            goto label_166c80;
        }
    }
    ctx->pc = 0x166C78u;
    // 0x166c78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x166C78u;
    {
        const bool branch_taken_0x166c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C78u;
            // 0x166c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c78) {
            ctx->pc = 0x166D40u;
            goto label_166d40;
        }
    }
    ctx->pc = 0x166C80u;
label_166c80:
    // 0x166c80: 0x9626000c  lhu         $a2, 0xC($s1)
    ctx->pc = 0x166c80u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_166c84:
    // 0x166c84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x166c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166c88: 0x50c4001f  beql        $a2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x166C88u;
    {
        const bool branch_taken_0x166c88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x166c88) {
            ctx->pc = 0x166C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166C88u;
            // 0x166c8c: 0x92260028  lbu         $a2, 0x28($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166D08u;
            goto label_166d08;
        }
    }
    ctx->pc = 0x166C90u;
    // 0x166c90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x166c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166c94: 0x50c50015  beql        $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x166C94u;
    {
        const bool branch_taken_0x166c94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x166c94) {
            ctx->pc = 0x166C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166C94u;
            // 0x166c98: 0x92260028  lbu         $a2, 0x28($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166CECu;
            goto label_166cec;
        }
    }
    ctx->pc = 0x166C9Cu;
    // 0x166c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ca0: 0x50c3000b  beql        $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x166CA0u;
    {
        const bool branch_taken_0x166ca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x166ca0) {
            ctx->pc = 0x166CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166CA0u;
            // 0x166ca4: 0x92260028  lbu         $a2, 0x28($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166CD0u;
            goto label_166cd0;
        }
    }
    ctx->pc = 0x166CA8u;
    // 0x166ca8: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166CA8u;
    {
        const bool branch_taken_0x166ca8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ca8) {
            ctx->pc = 0x166CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166CA8u;
            // 0x166cac: 0x92260028  lbu         $a2, 0x28($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166CB8u;
            goto label_166cb8;
        }
    }
    ctx->pc = 0x166CB0u;
    // 0x166cb0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x166CB0u;
    {
        const bool branch_taken_0x166cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CB0u;
            // 0x166cb4: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cb0) {
            ctx->pc = 0x166D28u;
            goto label_166d28;
        }
    }
    ctx->pc = 0x166CB8u;
label_166cb8:
    // 0x166cb8: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x166CB8u;
    SET_GPR_U32(ctx, 31, 0x166CC0u);
    ctx->pc = 0x166CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CB8u;
            // 0x166cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CC0u; }
        if (ctx->pc != 0x166CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CC0u; }
        if (ctx->pc != 0x166CC0u) { return; }
    }
    ctx->pc = 0x166CC0u;
label_166cc0:
    // 0x166cc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x166cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x166cc4: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x166cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x166cc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x166CC8u;
    {
        const bool branch_taken_0x166cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CC8u;
            // 0x166ccc: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166cc8) {
            ctx->pc = 0x166D24u;
            goto label_166d24;
        }
    }
    ctx->pc = 0x166CD0u;
label_166cd0:
    // 0x166cd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x166cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cd4: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x166CD4u;
    SET_GPR_U32(ctx, 31, 0x166CDCu);
    ctx->pc = 0x166CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CD4u;
            // 0x166cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CDCu; }
        if (ctx->pc != 0x166CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CDCu; }
        if (ctx->pc != 0x166CDCu) { return; }
    }
    ctx->pc = 0x166CDCu;
label_166cdc:
    // 0x166cdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x166cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x166ce0: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x166ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x166ce4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166CE4u;
    {
        const bool branch_taken_0x166ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CE4u;
            // 0x166ce8: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ce4) {
            ctx->pc = 0x166D24u;
            goto label_166d24;
        }
    }
    ctx->pc = 0x166CECu;
label_166cec:
    // 0x166cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cf0: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x166CF0u;
    SET_GPR_U32(ctx, 31, 0x166CF8u);
    ctx->pc = 0x166CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CF0u;
            // 0x166cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CF8u; }
        if (ctx->pc != 0x166CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CF8u; }
        if (ctx->pc != 0x166CF8u) { return; }
    }
    ctx->pc = 0x166CF8u;
label_166cf8:
    // 0x166cf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x166cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x166cfc: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x166cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x166d00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x166D00u;
    {
        const bool branch_taken_0x166d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D00u;
            // 0x166d04: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d00) {
            ctx->pc = 0x166D24u;
            goto label_166d24;
        }
    }
    ctx->pc = 0x166D08u;
label_166d08:
    // 0x166d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d0c: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x166D0Cu;
    SET_GPR_U32(ctx, 31, 0x166D14u);
    ctx->pc = 0x166D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D0Cu;
            // 0x166d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D14u; }
        if (ctx->pc != 0x166D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D14u; }
        if (ctx->pc != 0x166D14u) { return; }
    }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x166d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x166d18: 0x401027  not         $v0, $v0
    ctx->pc = 0x166d18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x166d1c: 0x30423f00  andi        $v0, $v0, 0x3F00
    ctx->pc = 0x166d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16128);
    // 0x166d20: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x166d20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_166d24:
    // 0x166d24: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x166d24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_166d28:
    // 0x166d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d2c: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x166d2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x166d30: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x166d30u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x166d34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x166d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x166d38: 0xc05cd74  jal         func_1735D0
    ctx->pc = 0x166D38u;
    SET_GPR_U32(ctx, 31, 0x166D40u);
    ctx->pc = 0x166D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D38u;
            // 0x166d3c: 0x3047ffff  andi        $a3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1735D0u;
    if (runtime->hasFunction(0x1735D0u)) {
        auto targetFn = runtime->lookupFunction(0x1735D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D40u; }
        if (ctx->pc != 0x166D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001735D0_0x1735d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D40u; }
        if (ctx->pc != 0x166D40u) { return; }
    }
    ctx->pc = 0x166D40u;
label_166d40:
    // 0x166d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x166D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D4Cu;
            // 0x166d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166D54u;
    // 0x166d54: 0x0  nop
    ctx->pc = 0x166d54u;
    // NOP
    // 0x166d58: 0x0  nop
    ctx->pc = 0x166d58u;
    // NOP
    // 0x166d5c: 0x0  nop
    ctx->pc = 0x166d5cu;
    // NOP
label_166d60:
    // 0x166d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166d6c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x166d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x166d70: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x166D70u;
    SET_GPR_U32(ctx, 31, 0x166D78u);
    ctx->pc = 0x166D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D70u;
            // 0x166d74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D78u; }
        if (ctx->pc != 0x166D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D78u; }
        if (ctx->pc != 0x166D78u) { return; }
    }
    ctx->pc = 0x166D78u;
label_166d78:
    // 0x166d78: 0x92040024  lbu         $a0, 0x24($s0)
    ctx->pc = 0x166d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x166d7c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x166D7Cu;
    {
        const bool branch_taken_0x166d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d7c) {
            ctx->pc = 0x166D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166D7Cu;
            // 0x166d80: 0x96060012  lhu         $a2, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166DC8u;
            goto label_166dc8;
        }
    }
    ctx->pc = 0x166D84u;
    // 0x166d84: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x166d84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x166d88: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x166d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x166d8c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x166D8Cu;
    {
        const bool branch_taken_0x166d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d8c) {
            ctx->pc = 0x166D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166D8Cu;
            // 0x166d90: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166DB0u;
            goto label_166db0;
        }
    }
    ctx->pc = 0x166D94u;
    // 0x166d94: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x166d94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x166d98: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x166d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x166d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166da0: 0xc05a0b8  jal         func_1682E0
    ctx->pc = 0x166DA0u;
    SET_GPR_U32(ctx, 31, 0x166DA8u);
    ctx->pc = 0x166DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DA0u;
            // 0x166da4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1682E0u;
    if (runtime->hasFunction(0x1682E0u)) {
        auto targetFn = runtime->lookupFunction(0x1682E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DA8u; }
        if (ctx->pc != 0x166DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001682E0_0x1682e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DA8u; }
        if (ctx->pc != 0x166DA8u) { return; }
    }
    ctx->pc = 0x166DA8u;
label_166da8:
    // 0x166da8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166DA8u;
    {
        const bool branch_taken_0x166da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166da8) {
            ctx->pc = 0x166DC0u;
            goto label_166dc0;
        }
    }
    ctx->pc = 0x166DB0u;
label_166db0:
    // 0x166db0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x166db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x166db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166db8: 0xc05a0b8  jal         func_1682E0
    ctx->pc = 0x166DB8u;
    SET_GPR_U32(ctx, 31, 0x166DC0u);
    ctx->pc = 0x166DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DB8u;
            // 0x166dbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1682E0u;
    if (runtime->hasFunction(0x1682E0u)) {
        auto targetFn = runtime->lookupFunction(0x1682E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DC0u; }
        if (ctx->pc != 0x166DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001682E0_0x1682e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DC0u; }
        if (ctx->pc != 0x166DC0u) { return; }
    }
    ctx->pc = 0x166DC0u;
label_166dc0:
    // 0x166dc0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x166DC0u;
    {
        const bool branch_taken_0x166dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DC0u;
            // 0x166dc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dc0) {
            ctx->pc = 0x166E08u;
            goto label_166e08;
        }
    }
    ctx->pc = 0x166DC8u;
label_166dc8:
    // 0x166dc8: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x166DC8u;
    {
        const bool branch_taken_0x166dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x166dc8) {
            ctx->pc = 0x166DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166DC8u;
            // 0x166dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166E04u;
            goto label_166e04;
        }
    }
    ctx->pc = 0x166DD0u;
    // 0x166dd0: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x166dd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x166dd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x166dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x166dd8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x166DD8u;
    {
        const bool branch_taken_0x166dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166dd8) {
            ctx->pc = 0x166DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166DD8u;
            // 0x166ddc: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166DF8u;
            goto label_166df8;
        }
    }
    ctx->pc = 0x166DE0u;
    // 0x166de0: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x166de0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x166de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166de8: 0xc05cd94  jal         func_173650
    ctx->pc = 0x166DE8u;
    SET_GPR_U32(ctx, 31, 0x166DF0u);
    ctx->pc = 0x166DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DE8u;
            // 0x166dec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173650u;
    if (runtime->hasFunction(0x173650u)) {
        auto targetFn = runtime->lookupFunction(0x173650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DF0u; }
        if (ctx->pc != 0x166DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173650_0x173650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DF0u; }
        if (ctx->pc != 0x166DF0u) { return; }
    }
    ctx->pc = 0x166DF0u;
label_166df0:
    // 0x166df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166DF0u;
    {
        const bool branch_taken_0x166df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166df0) {
            ctx->pc = 0x166E04u;
            goto label_166e04;
        }
    }
    ctx->pc = 0x166DF8u;
label_166df8:
    // 0x166df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166dfc: 0xc05cd94  jal         func_173650
    ctx->pc = 0x166DFCu;
    SET_GPR_U32(ctx, 31, 0x166E04u);
    ctx->pc = 0x166E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DFCu;
            // 0x166e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173650u;
    if (runtime->hasFunction(0x173650u)) {
        auto targetFn = runtime->lookupFunction(0x173650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E04u; }
        if (ctx->pc != 0x166E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173650_0x173650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E04u; }
        if (ctx->pc != 0x166E04u) { return; }
    }
    ctx->pc = 0x166E04u;
label_166e04:
    // 0x166e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166e08:
    // 0x166e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x166E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E0Cu;
            // 0x166e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166E14u;
    // 0x166e14: 0x0  nop
    ctx->pc = 0x166e14u;
    // NOP
    // 0x166e18: 0x0  nop
    ctx->pc = 0x166e18u;
    // NOP
    // 0x166e1c: 0x0  nop
    ctx->pc = 0x166e1cu;
    // NOP
label_166e20:
    // 0x166e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166e30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x166e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e34: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x166e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x166e38: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x166E38u;
    SET_GPR_U32(ctx, 31, 0x166E40u);
    ctx->pc = 0x166E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E38u;
            // 0x166e3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E40u; }
        if (ctx->pc != 0x166E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E40u; }
        if (ctx->pc != 0x166E40u) { return; }
    }
    ctx->pc = 0x166E40u;
label_166e40:
    // 0x166e40: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x166e40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x166e44: 0x28610023  slti        $at, $v1, 0x23
    ctx->pc = 0x166e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x166e48: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x166E48u;
    {
        const bool branch_taken_0x166e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e48) {
            ctx->pc = 0x166E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166E48u;
            // 0x166e4c: 0x9226000a  lbu         $a2, 0xA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166E84u;
            goto label_166e84;
        }
    }
    ctx->pc = 0x166E50u;
    // 0x166e50: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x166e50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x166e54: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x166e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x166e58: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166E58u;
    {
        const bool branch_taken_0x166e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e58) {
            ctx->pc = 0x166E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166E58u;
            // 0x166e5c: 0x9225000a  lbu         $a1, 0xA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166E68u;
            goto label_166e68;
        }
    }
    ctx->pc = 0x166E60u;
    // 0x166e60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x166e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166e64: 0x9225000a  lbu         $a1, 0xA($s1)
    ctx->pc = 0x166e64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_166e68:
    // 0x166e68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e6c: 0xc059bac  jal         func_166EB0
    ctx->pc = 0x166E6Cu;
    SET_GPR_U32(ctx, 31, 0x166E74u);
    ctx->pc = 0x166E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E6Cu;
            // 0x166e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166EB0u;
    if (runtime->hasFunction(0x166EB0u)) {
        auto targetFn = runtime->lookupFunction(0x166EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E74u; }
        if (ctx->pc != 0x166E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166EB0_0x166eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E74u; }
        if (ctx->pc != 0x166E74u) { return; }
    }
    ctx->pc = 0x166E74u;
label_166e74:
    // 0x166e74: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x166E74u;
    {
        const bool branch_taken_0x166e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e74) {
            ctx->pc = 0x166E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166E74u;
            // 0x166e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166E94u;
            goto label_166e94;
        }
    }
    ctx->pc = 0x166E7Cu;
    // 0x166e7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166E7Cu;
    {
        const bool branch_taken_0x166e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166E7Cu;
            // 0x166e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e7c) {
            ctx->pc = 0x166E94u;
            goto label_166e94;
        }
    }
    ctx->pc = 0x166E84u;
label_166e84:
    // 0x166e84: 0x2463ffdd  addiu       $v1, $v1, -0x23
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
    // 0x166e88: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x166e8c: 0xc059c08  jal         func_167020
    ctx->pc = 0x166E8Cu;
    SET_GPR_U32(ctx, 31, 0x166E94u);
    ctx->pc = 0x166E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E8Cu;
            // 0x166e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167020u;
    if (runtime->hasFunction(0x167020u)) {
        auto targetFn = runtime->lookupFunction(0x167020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E94u; }
        if (ctx->pc != 0x166E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167020_0x167020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E94u; }
        if (ctx->pc != 0x166E94u) { return; }
    }
    ctx->pc = 0x166E94u;
label_166e94:
    // 0x166e94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x166EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166EA0u;
            // 0x166ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166EA8u;
    // 0x166ea8: 0x0  nop
    ctx->pc = 0x166ea8u;
    // NOP
    // 0x166eac: 0x0  nop
    ctx->pc = 0x166eacu;
    // NOP
    ctx->pc = 0x166eb0u;
}
