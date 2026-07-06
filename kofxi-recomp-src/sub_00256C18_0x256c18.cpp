#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00256C18
// Address: 0x256c18 - 0x256d30
void sub_00256C18_0x256c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256C18_0x256c18");
#endif

    switch (ctx->pc) {
        case 0x256ca0u: goto label_256ca0;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cc8u: goto label_256cc8;
        case 0x256ce0u: goto label_256ce0;
        case 0x256cf0u: goto label_256cf0;
        case 0x256d08u: goto label_256d08;
        default: break;
    }

    ctx->pc = 0x256c18u;

    // 0x256c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x256c1c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x256c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x256c20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x256c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x256c24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x256c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x256c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x256c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x256c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x256c34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x256c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x256c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256c3c: 0x8a240007  lwl         $a0, 0x7($s1)
    ctx->pc = 0x256c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x256c40: 0x9a240004  lwr         $a0, 0x4($s1)
    ctx->pc = 0x256c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x256c44: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x256c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256c48: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x256c48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x256c4c: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x256c4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x256c50: 0x8c671220  lw          $a3, 0x1220($v1)
    ctx->pc = 0x256c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4640)));
    // 0x256c54: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x256c54u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x256c58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x256c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256c5c: 0x8d031224  lw          $v1, 0x1224($t0)
    ctx->pc = 0x256c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4644)));
    // 0x256c60: 0x872026  xor         $a0, $a0, $a3
    ctx->pc = 0x256c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
    // 0x256c64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256c68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x256c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x256c6c: 0x829018  mult        $s2, $a0, $v0
    ctx->pc = 0x256c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x256c70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x256c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256c74: 0x8c620374  lw          $v0, 0x374($v1)
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
    // 0x256c78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x256c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x256c7c: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x256c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x256c80: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x256c80u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x256c84: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256C84u;
    {
        const bool branch_taken_0x256c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c84) {
            ctx->pc = 0x256C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256C84u;
            // 0x256c88: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x256C8Cu;
            goto label_256c8c;
        }
    }
    ctx->pc = 0x256C8Cu;
label_256c8c:
    // 0x256c8c: 0x8010  mfhi        $s0
    ctx->pc = 0x256c8cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x256c90: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x256c90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x256c94: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x256c98: 0xc08c682  jal         func_231A08
    ctx->pc = 0x256C98u;
    SET_GPR_U32(ctx, 31, 0x256CA0u);
    ctx->pc = 0x256C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256C98u;
            // 0x256c9c: 0xacd00000  sw          $s0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CA0u; }
        if (ctx->pc != 0x256CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CA0u; }
        if (ctx->pc != 0x256CA0u) { return; }
    }
    ctx->pc = 0x256CA0u;
label_256ca0:
    // 0x256ca0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x256ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256ca4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x256CA4u;
    {
        const bool branch_taken_0x256ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256CA4u;
            // 0x256ca8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ca4) {
            ctx->pc = 0x256D00u;
            goto label_256d00;
        }
    }
    ctx->pc = 0x256CACu;
    // 0x256cac: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_256cb0:
    // 0x256cb0: 0x54520011  bnel        $v0, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x256CB0u;
    {
        const bool branch_taken_0x256cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x256cb0) {
            ctx->pc = 0x256CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256CB0u;
            // 0x256cb4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256CF8u;
            goto label_256cf8;
        }
    }
    ctx->pc = 0x256CB8u;
    // 0x256cb8: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x256cb8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256cbc: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x256cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x256cc0: 0xc048c5e  jal         func_123178
    ctx->pc = 0x256CC0u;
    SET_GPR_U32(ctx, 31, 0x256CC8u);
    ctx->pc = 0x256CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256CC0u;
            // 0x256cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CC8u; }
        if (ctx->pc != 0x256CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CC8u; }
        if (ctx->pc != 0x256CC8u) { return; }
    }
    ctx->pc = 0x256CC8u;
label_256cc8:
    // 0x256cc8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x256CC8u;
    {
        const bool branch_taken_0x256cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256cc8) {
            ctx->pc = 0x256CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256CC8u;
            // 0x256ccc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256CF8u;
            goto label_256cf8;
        }
    }
    ctx->pc = 0x256CD0u;
    // 0x256cd0: 0x92860000  lbu         $a2, 0x0($s4)
    ctx->pc = 0x256cd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x256cd4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x256cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x256cd8: 0xc048c5e  jal         func_123178
    ctx->pc = 0x256CD8u;
    SET_GPR_U32(ctx, 31, 0x256CE0u);
    ctx->pc = 0x256CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256CD8u;
            // 0x256cdc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CE0u; }
        if (ctx->pc != 0x256CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CE0u; }
        if (ctx->pc != 0x256CE0u) { return; }
    }
    ctx->pc = 0x256CE0u;
label_256ce0:
    // 0x256ce0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256CE0u;
    {
        const bool branch_taken_0x256ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256ce0) {
            ctx->pc = 0x256CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256CE0u;
            // 0x256ce4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256CF8u;
            goto label_256cf8;
        }
    }
    ctx->pc = 0x256CE8u;
    // 0x256ce8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x256CE8u;
    SET_GPR_U32(ctx, 31, 0x256CF0u);
    ctx->pc = 0x256CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256CE8u;
            // 0x256cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CF0u; }
        if (ctx->pc != 0x256CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CF0u; }
        if (ctx->pc != 0x256CF0u) { return; }
    }
    ctx->pc = 0x256CF0u;
label_256cf0:
    // 0x256cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x256CF0u;
    {
        const bool branch_taken_0x256cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256CF0u;
            // 0x256cf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cf0) {
            ctx->pc = 0x256D0Cu;
            goto label_256d0c;
        }
    }
    ctx->pc = 0x256CF8u;
label_256cf8:
    // 0x256cf8: 0x5600ffed  bnel        $s0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x256CF8u;
    {
        const bool branch_taken_0x256cf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x256cf8) {
            ctx->pc = 0x256CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x256CF8u;
            // 0x256cfc: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x256CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256cb0;
        }
    }
    ctx->pc = 0x256D00u;
label_256d00:
    // 0x256d00: 0xc08c698  jal         func_231A60
    ctx->pc = 0x256D00u;
    SET_GPR_U32(ctx, 31, 0x256D08u);
    ctx->pc = 0x256D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256D00u;
            // 0x256d04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D08u; }
        if (ctx->pc != 0x256D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D08u; }
        if (ctx->pc != 0x256D08u) { return; }
    }
    ctx->pc = 0x256D08u;
label_256d08:
    // 0x256d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256d0c:
    // 0x256d0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256d10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x256d10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256d14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x256d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256d18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x256d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256d1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x256d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256d24: 0x3e00008  jr          $ra
    ctx->pc = 0x256D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D24u;
            // 0x256d28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256D2Cu;
    // 0x256d2c: 0x0  nop
    ctx->pc = 0x256d2cu;
    // NOP
    ctx->pc = 0x256d30u;
}
