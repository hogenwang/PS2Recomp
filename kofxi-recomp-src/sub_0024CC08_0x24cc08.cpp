#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024CC08
// Address: 0x24cc08 - 0x24ce10
void sub_0024CC08_0x24cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CC08_0x24cc08");
#endif

    switch (ctx->pc) {
        case 0x24cc70u: goto label_24cc70;
        case 0x24cc78u: goto label_24cc78;
        case 0x24cce8u: goto label_24cce8;
        case 0x24cd1cu: goto label_24cd1c;
        case 0x24cd30u: goto label_24cd30;
        case 0x24cd60u: goto label_24cd60;
        case 0x24cd74u: goto label_24cd74;
        case 0x24cdb8u: goto label_24cdb8;
        default: break;
    }

    ctx->pc = 0x24cc08u;

    // 0x24cc08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24cc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24cc0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24cc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24cc10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24cc14: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x24cc14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24cc1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24cc1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24cc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24cc24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24cc24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cc2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24cc2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc30: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24cc34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24cc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24cc3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24cc40: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CC40u;
    {
        const bool branch_taken_0x24cc40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC40u;
            // 0x24cc44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc40) {
            ctx->pc = 0x24CCA4u;
            goto label_24cca4;
        }
    }
    ctx->pc = 0x24CC48u;
    // 0x24cc48: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x24cc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24cc4c: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x24cc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24cc50: 0x8a620007  lwl         $v0, 0x7($s3)
    ctx->pc = 0x24cc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24cc54: 0x9a620004  lwr         $v0, 0x4($s3)
    ctx->pc = 0x24cc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24cc58: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CC58u;
    {
        const bool branch_taken_0x24cc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC58u;
            // 0x24cc5c: 0x30d10010  andi        $s1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc58) {
            ctx->pc = 0x24CC80u;
            goto label_24cc80;
        }
    }
    ctx->pc = 0x24CC60u;
    // 0x24cc60: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CC60u;
    {
        const bool branch_taken_0x24cc60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc60) {
            ctx->pc = 0x24CCB0u;
            goto label_24ccb0;
        }
    }
    ctx->pc = 0x24CC68u;
    // 0x24cc68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24CC68u;
    {
        const bool branch_taken_0x24cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC68u;
            // 0x24cc6c: 0x8c830038  lw          $v1, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc68) {
            ctx->pc = 0x24CC88u;
            goto label_24cc88;
        }
    }
    ctx->pc = 0x24CC70u;
label_24cc70:
    // 0x24cc70: 0xc090c4c  jal         func_243130
    ctx->pc = 0x24CC70u;
    SET_GPR_U32(ctx, 31, 0x24CC78u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CC78u; }
        if (ctx->pc != 0x24CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CC78u; }
        if (ctx->pc != 0x24CC78u) { return; }
    }
    ctx->pc = 0x24CC78u;
label_24cc78:
    // 0x24cc78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24CC78u;
    {
        const bool branch_taken_0x24cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC78u;
            // 0x24cc7c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc78) {
            ctx->pc = 0x24CC9Cu;
            goto label_24cc9c;
        }
    }
    ctx->pc = 0x24CC80u;
label_24cc80:
    // 0x24cc80: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x24cc84: 0x0  nop
    ctx->pc = 0x24cc84u;
    // NOP
label_24cc88:
    // 0x24cc88: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x24cc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24cc8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24CC8Cu;
    {
        const bool branch_taken_0x24cc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC8Cu;
            // 0x24cc90: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc8c) {
            ctx->pc = 0x24CC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24cc70;
        }
    }
    ctx->pc = 0x24CC94u;
    // 0x24cc94: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x24cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x24cc98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24cc9c:
    // 0x24cc9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CC9Cu;
    {
        const bool branch_taken_0x24cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC9Cu;
            // 0x24cca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc9c) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CCA4u;
label_24cca4:
    // 0x24cca4: 0x30d10010  andi        $s1, $a2, 0x10
    ctx->pc = 0x24cca4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_24cca8:
    // 0x24cca8: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24CCA8u;
    {
        const bool branch_taken_0x24cca8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cca8) {
            ctx->pc = 0x24CCECu;
            goto label_24ccec;
        }
    }
    ctx->pc = 0x24CCB0u;
label_24ccb0:
    // 0x24ccb0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CCB0u;
    {
        const bool branch_taken_0x24ccb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCB0u;
            // 0x24ccb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccb0) {
            ctx->pc = 0x24CCC4u;
            goto label_24ccc4;
        }
    }
    ctx->pc = 0x24CCB8u;
    // 0x24ccb8: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x24ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24ccbc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24CCBCu;
    {
        const bool branch_taken_0x24ccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCBCu;
            // 0x24ccc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccbc) {
            ctx->pc = 0x24CCECu;
            goto label_24ccec;
        }
    }
    ctx->pc = 0x24CCC4u;
label_24ccc4:
    // 0x24ccc4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24ccc8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x24ccc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cccc: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x24ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x24ccd0: 0x8a620007  lwl         $v0, 0x7($s3)
    ctx->pc = 0x24ccd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24ccd4: 0x9a620004  lwr         $v0, 0x4($s3)
    ctx->pc = 0x24ccd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24ccd8: 0xaa02000b  swl         $v0, 0xB($s0)
    ctx->pc = 0x24ccd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24ccdc: 0xba020008  swr         $v0, 0x8($s0)
    ctx->pc = 0x24ccdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24cce0: 0xc090bda  jal         func_242F68
    ctx->pc = 0x24CCE0u;
    SET_GPR_U32(ctx, 31, 0x24CCE8u);
    ctx->pc = 0x24CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCE0u;
            // 0x24cce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242F68u;
    if (runtime->hasFunction(0x242F68u)) {
        auto targetFn = runtime->lookupFunction(0x242F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCE8u; }
        if (ctx->pc != 0x24CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242F68_0x242f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCE8u; }
        if (ctx->pc != 0x24CCE8u) { return; }
    }
    ctx->pc = 0x24CCE8u;
label_24cce8:
    // 0x24cce8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24ccec:
    // 0x24ccec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CCECu;
    {
        const bool branch_taken_0x24ccec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ccec) {
            ctx->pc = 0x24CD08u;
            goto label_24cd08;
        }
    }
    ctx->pc = 0x24CCF4u;
    // 0x24ccf4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x24ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24ccf8: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24ccf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24ccfc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24cd00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24CD00u;
    {
        const bool branch_taken_0x24cd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd00) {
            ctx->pc = 0x24CD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD00u;
            // 0x24cd04: 0x8cb2004c  lw          $s2, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CD08u;
            goto label_24cd08;
        }
    }
    ctx->pc = 0x24CD08u;
label_24cd08:
    // 0x24cd08: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x24CD08u;
    {
        const bool branch_taken_0x24cd08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD08u;
            // 0x24cd0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd08) {
            ctx->pc = 0x24CD54u;
            goto label_24cd54;
        }
    }
    ctx->pc = 0x24CD10u;
    // 0x24cd10: 0x96700002  lhu         $s0, 0x2($s3)
    ctx->pc = 0x24cd10u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x24cd14: 0xc08d432  jal         func_2350C8
    ctx->pc = 0x24CD14u;
    SET_GPR_U32(ctx, 31, 0x24CD1Cu);
    ctx->pc = 0x24CD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD14u;
            // 0x24cd18: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2350C8u;
    if (runtime->hasFunction(0x2350C8u)) {
        auto targetFn = runtime->lookupFunction(0x2350C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD1Cu; }
        if (ctx->pc != 0x24CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002350C8_0x2350c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD1Cu; }
        if (ctx->pc != 0x24CD1Cu) { return; }
    }
    ctx->pc = 0x24CD1Cu;
label_24cd1c:
    // 0x24cd1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24cd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd20: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x24CD20u;
    {
        const bool branch_taken_0x24cd20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD20u;
            // 0x24cd24: 0xa6700002  sh          $s0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd20) {
            ctx->pc = 0x24CD54u;
            goto label_24cd54;
        }
    }
    ctx->pc = 0x24CD28u;
    // 0x24cd28: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24cd2c: 0x8c5211a0  lw          $s2, 0x11A0($v0)
    ctx->pc = 0x24cd2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
label_24cd30:
    // 0x24cd30: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x24CD30u;
    {
        const bool branch_taken_0x24cd30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD30u;
            // 0x24cd34: 0x2403007d  addiu       $v1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd30) {
            ctx->pc = 0x24CDE0u;
            goto label_24cde0;
        }
    }
    ctx->pc = 0x24CD38u;
    // 0x24cd38: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24cd3c: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24cd3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24cd40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24cd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24cd44: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24CD44u;
    {
        const bool branch_taken_0x24cd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cd44) {
            ctx->pc = 0x24CD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD44u;
            // 0x24cd48: 0x8e520054  lw          $s2, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24cd30;
        }
    }
    ctx->pc = 0x24CD4Cu;
    // 0x24cd4c: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x24CD4Cu;
    {
        const bool branch_taken_0x24cd4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD4Cu;
            // 0x24cd50: 0x2403007d  addiu       $v1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd4c) {
            ctx->pc = 0x24CDE0u;
            goto label_24cde0;
        }
    }
    ctx->pc = 0x24CD54u;
label_24cd54:
    // 0x24cd54: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x24cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x24cd58: 0xc08a254  jal         func_228950
    ctx->pc = 0x24CD58u;
    SET_GPR_U32(ctx, 31, 0x24CD60u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD60u; }
        if (ctx->pc != 0x24CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD60u; }
        if (ctx->pc != 0x24CD60u) { return; }
    }
    ctx->pc = 0x24CD60u;
label_24cd60:
    // 0x24cd60: 0x8a700007  lwl         $s0, 0x7($s3)
    ctx->pc = 0x24cd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x24cd64: 0x9a700004  lwr         $s0, 0x4($s3)
    ctx->pc = 0x24cd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x24cd68: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x24cd6c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24CD6Cu;
    SET_GPR_U32(ctx, 31, 0x24CD74u);
    ctx->pc = 0x24CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD6Cu;
            // 0x24cd70: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD74u; }
        if (ctx->pc != 0x24CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD74u; }
        if (ctx->pc != 0x24CD74u) { return; }
    }
    ctx->pc = 0x24CD74u;
label_24cd74:
    // 0x24cd74: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24CD74u;
    {
        const bool branch_taken_0x24cd74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD74u;
            // 0x24cd78: 0x2642005c  addiu       $v0, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd74) {
            ctx->pc = 0x24CDE8u;
            goto label_24cde8;
        }
    }
    ctx->pc = 0x24CD7Cu;
    // 0x24cd7c: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x24CD7Cu;
    {
        const bool branch_taken_0x24cd7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD7Cu;
            // 0x24cd80: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd7c) {
            ctx->pc = 0x24CDECu;
            goto label_24cdec;
        }
    }
    ctx->pc = 0x24CD84u;
    // 0x24cd84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x24cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24cd88: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CD88u;
    {
        const bool branch_taken_0x24cd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd88) {
            ctx->pc = 0x24CD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD88u;
            // 0x24cd8c: 0x2642005c  addiu       $v0, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CDECu;
            goto label_24cdec;
        }
    }
    ctx->pc = 0x24CD90u;
    // 0x24cd90: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x24cd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24cd94: 0x50e0000f  beql        $a3, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24CD94u;
    {
        const bool branch_taken_0x24cd94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd94) {
            ctx->pc = 0x24CD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD94u;
            // 0x24cd98: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CDD4u;
            goto label_24cdd4;
        }
    }
    ctx->pc = 0x24CD9Cu;
    // 0x24cd9c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24cda0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cda4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24cda4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24cda8: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24CDA8u;
    {
        const bool branch_taken_0x24cda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24cda8) {
            ctx->pc = 0x24CDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDA8u;
            // 0x24cdac: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CDD4u;
            goto label_24cdd4;
        }
    }
    ctx->pc = 0x24CDB0u;
    // 0x24cdb0: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24cdb4: 0x0  nop
    ctx->pc = 0x24cdb4u;
    // NOP
label_24cdb8:
    // 0x24cdb8: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CDB8u;
    {
        const bool branch_taken_0x24cdb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cdb8) {
            ctx->pc = 0x24CDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDB8u;
            // 0x24cdbc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CDD4u;
            goto label_24cdd4;
        }
    }
    ctx->pc = 0x24CDC0u;
    // 0x24cdc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24cdc4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24cdc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24cdc8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24CDC8u;
    {
        const bool branch_taken_0x24cdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24cdc8) {
            ctx->pc = 0x24CDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDC8u;
            // 0x24cdcc: 0x8ce70010  lw          $a3, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24CDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24cdb8;
        }
    }
    ctx->pc = 0x24CDD0u;
    // 0x24cdd0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x24cdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24cdd4:
    // 0x24cdd4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CDD4u;
    {
        const bool branch_taken_0x24cdd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDD4u;
            // 0x24cdd8: 0x2642005c  addiu       $v0, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdd4) {
            ctx->pc = 0x24CDE8u;
            goto label_24cde8;
        }
    }
    ctx->pc = 0x24CDDCu;
    // 0x24cddc: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_24cde0:
    // 0x24cde0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24cde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cde4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x24cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_24cde8:
    // 0x24cde8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24cde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24cdec:
    // 0x24cdec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24cdecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24cdf0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24cdf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cdf4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24cdf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cdf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24cdf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cdfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ce00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ce00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ce04: 0x3e00008  jr          $ra
    ctx->pc = 0x24CE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE04u;
            // 0x24ce08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24CE0Cu;
    // 0x24ce0c: 0x0  nop
    ctx->pc = 0x24ce0cu;
    // NOP
    ctx->pc = 0x24ce10u;
}
