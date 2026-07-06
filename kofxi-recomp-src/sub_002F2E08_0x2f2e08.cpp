#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F2E08
// Address: 0x2f2e08 - 0x2f2fa8
void sub_002F2E08_0x2f2e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2E08_0x2f2e08");
#endif

    switch (ctx->pc) {
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2e84u: goto label_2f2e84;
        case 0x2f2e98u: goto label_2f2e98;
        case 0x2f2ee0u: goto label_2f2ee0;
        case 0x2f2f08u: goto label_2f2f08;
        case 0x2f2f40u: goto label_2f2f40;
        case 0x2f2f50u: goto label_2f2f50;
        case 0x2f2f60u: goto label_2f2f60;
        default: break;
    }

    ctx->pc = 0x2f2e08u;

    // 0x2f2e08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f2e0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f2e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f2e10: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f2e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f2e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f2e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f2e1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f2e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e20: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f2e24: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2f2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e28: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F2E28u;
    {
        const bool branch_taken_0x2f2e28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E28u;
            // 0x2f2e2c: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e28) {
            ctx->pc = 0x2F2ED4u;
            goto label_2f2ed4;
        }
    }
    ctx->pc = 0x2F2E30u;
    // 0x2f2e30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2e34: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F2E34u;
    SET_GPR_U32(ctx, 31, 0x2F2E3Cu);
    ctx->pc = 0x2F2E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E34u;
            // 0x2f2e38: 0x24531d40  addiu       $s3, $v0, 0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 7488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (runtime->hasFunction(0x2F9140u)) {
        auto targetFn = runtime->lookupFunction(0x2F9140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E3Cu; }
        if (ctx->pc != 0x2F2E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9140_0x2f9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E3Cu; }
        if (ctx->pc != 0x2F2E3Cu) { return; }
    }
    ctx->pc = 0x2F2E3Cu;
label_2f2e3c:
    // 0x2f2e3c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f2e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e44: 0x24a51d00  addiu       $a1, $a1, 0x1D00
    ctx->pc = 0x2f2e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7424));
    // 0x2f2e48: 0xc0bd9fe  jal         func_2F67F8
    ctx->pc = 0x2F2E48u;
    SET_GPR_U32(ctx, 31, 0x2F2E50u);
    ctx->pc = 0x2F2E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E48u;
            // 0x2f2e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F8u;
    if (runtime->hasFunction(0x2F67F8u)) {
        auto targetFn = runtime->lookupFunction(0x2F67F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E50u; }
        if (ctx->pc != 0x2F2E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F67F8_0x2f67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E50u; }
        if (ctx->pc != 0x2F2E50u) { return; }
    }
    ctx->pc = 0x2F2E50u;
label_2f2e50:
    // 0x2f2e50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2E50u;
    {
        const bool branch_taken_0x2f2e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E50u;
            // 0x2f2e54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e50) {
            ctx->pc = 0x2F2E64u;
            goto label_2f2e64;
        }
    }
    ctx->pc = 0x2F2E58u;
    // 0x2f2e58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f2e5c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f2e60: 0x24731d58  addiu       $s3, $v1, 0x1D58
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 7512));
label_2f2e64:
    // 0x2f2e64: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2E64u;
    {
        const bool branch_taken_0x2f2e64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E64u;
            // 0x2f2e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e64) {
            ctx->pc = 0x2F2EA0u;
            goto label_2f2ea0;
        }
    }
    ctx->pc = 0x2F2E6Cu;
    // 0x2f2e6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f2e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e74: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x2f2e74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2f2e78: 0x37a80008  ori         $t0, $sp, 0x8
    ctx->pc = 0x2f2e78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2f2e7c: 0xc04a610  jal         func_129840
    ctx->pc = 0x2F2E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F2E84u);
    ctx->pc = 0x2F2E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E7Cu;
            // 0x2f2e80: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129840u;
    if (runtime->hasFunction(0x129840u)) {
        auto targetFn = runtime->lookupFunction(0x129840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E84u; }
        if (ctx->pc != 0x2F2E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129840_0x129840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E84u; }
        if (ctx->pc != 0x2F2E84u) { return; }
    }
    ctx->pc = 0x2F2E84u;
label_2f2e84:
    // 0x2f2e84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f2e88: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2E88u;
    {
        const bool branch_taken_0x2f2e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F2E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E88u;
            // 0x2f2e8c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e88) {
            ctx->pc = 0x2F2EB4u;
            goto label_2f2eb4;
        }
    }
    ctx->pc = 0x2F2E90u;
    // 0x2f2e90: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2E90u;
    SET_GPR_U32(ctx, 31, 0x2F2E98u);
    ctx->pc = 0x2F2E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E90u;
            // 0x2f2e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E98u; }
        if (ctx->pc != 0x2F2E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E98u; }
        if (ctx->pc != 0x2F2E98u) { return; }
    }
    ctx->pc = 0x2F2E98u;
label_2f2e98:
    // 0x2f2e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2E98u;
    {
        const bool branch_taken_0x2f2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E98u;
            // 0x2f2e9c: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e98) {
            ctx->pc = 0x2F2EA8u;
            goto label_2f2ea8;
        }
    }
    ctx->pc = 0x2F2EA0u;
label_2f2ea0:
    // 0x2f2ea0: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f2ea4: 0x0  nop
    ctx->pc = 0x2f2ea4u;
    // NOP
label_2f2ea8:
    // 0x2f2ea8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f2eac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F2EACu;
    {
        const bool branch_taken_0x2f2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EACu;
            // 0x2f2eb0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2eac) {
            ctx->pc = 0x2F2F88u;
            goto label_2f2f88;
        }
    }
    ctx->pc = 0x2F2EB4u;
label_2f2eb4:
    // 0x2f2eb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2eb8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f2ebc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2f2ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f2ec0: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x2f2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x2f2ec4: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x2f2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x2f2ec8: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x2f2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x2f2ecc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F2ECCu;
    {
        const bool branch_taken_0x2f2ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2ECCu;
            // 0x2f2ed0: 0xae0500e8  sw          $a1, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ecc) {
            ctx->pc = 0x2F2F88u;
            goto label_2f2f88;
        }
    }
    ctx->pc = 0x2F2ED4u;
label_2f2ed4:
    // 0x2f2ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ed8: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F2ED8u;
    SET_GPR_U32(ctx, 31, 0x2F2EE0u);
    ctx->pc = 0x2F2EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2ED8u;
            // 0x2f2edc: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2EE0u; }
        if (ctx->pc != 0x2F2EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2EE0u; }
        if (ctx->pc != 0x2F2EE0u) { return; }
    }
    ctx->pc = 0x2F2EE0u;
label_2f2ee0:
    // 0x2f2ee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f2ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ee4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2EE4u;
    {
        const bool branch_taken_0x2f2ee4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ee4) {
            ctx->pc = 0x2F2EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EE4u;
            // 0x2f2ee8: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2EF8u;
            goto label_2f2ef8;
        }
    }
    ctx->pc = 0x2F2EECu;
    // 0x2f2eec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F2EECu;
    {
        const bool branch_taken_0x2f2eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EECu;
            // 0x2f2ef0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2eec) {
            ctx->pc = 0x2F2F70u;
            goto label_2f2f70;
        }
    }
    ctx->pc = 0x2F2EF4u;
    // 0x2f2ef4: 0x0  nop
    ctx->pc = 0x2f2ef4u;
    // NOP
label_2f2ef8:
    // 0x2f2ef8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2f2ef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2efc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2f2efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f2f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2F00u;
    {
        const bool branch_taken_0x2f2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F00u;
            // 0x2f2f04: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f00) {
            ctx->pc = 0x2F2F0Cu;
            goto label_2f2f0c;
        }
    }
    ctx->pc = 0x2F2F08u;
label_2f2f08:
    // 0x2f2f08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f2f0c:
    // 0x2f2f0c: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2f2f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f2f10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2F10u;
    {
        const bool branch_taken_0x2f2f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f10) {
            ctx->pc = 0x2F2F38u;
            goto label_2f2f38;
        }
    }
    ctx->pc = 0x2F2F18u;
    // 0x2f2f18: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2f2f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2f1c: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2F1Cu;
    {
        const bool branch_taken_0x2f2f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2F2F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F1Cu;
            // 0x2f2f20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f1c) {
            ctx->pc = 0x2F2F2Cu;
            goto label_2f2f2c;
        }
    }
    ctx->pc = 0x2F2F24u;
    // 0x2f2f24: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2F24u;
    {
        const bool branch_taken_0x2f2f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f2f24) {
            ctx->pc = 0x2F2F30u;
            goto label_2f2f30;
        }
    }
    ctx->pc = 0x2F2F2Cu;
label_2f2f2c:
    // 0x2f2f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2f30:
    // 0x2f2f30: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F2F30u;
    {
        const bool branch_taken_0x2f2f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f30) {
            ctx->pc = 0x2F2F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F30u;
            // 0x2f2f34: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2f08;
        }
    }
    ctx->pc = 0x2F2F38u;
label_2f2f38:
    // 0x2f2f38: 0xc0bc788  jal         func_2F1E20
    ctx->pc = 0x2F2F38u;
    SET_GPR_U32(ctx, 31, 0x2F2F40u);
    ctx->pc = 0x2F2F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F38u;
            // 0x2f2f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E20u;
    if (runtime->hasFunction(0x2F1E20u)) {
        auto targetFn = runtime->lookupFunction(0x2F1E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F40u; }
        if (ctx->pc != 0x2F2F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1E20_0x2f1e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F40u; }
        if (ctx->pc != 0x2F2F40u) { return; }
    }
    ctx->pc = 0x2F2F40u;
label_2f2f40:
    // 0x2f2f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2F40u;
    {
        const bool branch_taken_0x2f2f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F40u;
            // 0x2f2f44: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f40) {
            ctx->pc = 0x2F2F70u;
            goto label_2f2f70;
        }
    }
    ctx->pc = 0x2F2F48u;
    // 0x2f2f48: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F2F48u;
    SET_GPR_U32(ctx, 31, 0x2F2F50u);
    ctx->pc = 0x2F2F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F48u;
            // 0x2f2f4c: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (runtime->hasFunction(0x2F1EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F50u; }
        if (ctx->pc != 0x2F2F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1EC8_0x2f1ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F50u; }
        if (ctx->pc != 0x2F2F50u) { return; }
    }
    ctx->pc = 0x2F2F50u;
label_2f2f50:
    // 0x2f2f50: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x2f2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2f2f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f58: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F2F58u;
    SET_GPR_U32(ctx, 31, 0x2F2F60u);
    ctx->pc = 0x2F2F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F58u;
            // 0x2f2f5c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F60u; }
        if (ctx->pc != 0x2F2F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F60u; }
        if (ctx->pc != 0x2F2F60u) { return; }
    }
    ctx->pc = 0x2F2F60u;
label_2f2f60:
    // 0x2f2f60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f2f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f64: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2F64u;
    {
        const bool branch_taken_0x2f2f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f64) {
            ctx->pc = 0x2F2F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F64u;
            // 0x2f2f68: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F7Cu;
            goto label_2f2f7c;
        }
    }
    ctx->pc = 0x2F2F6Cu;
    // 0x2f2f6c: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
label_2f2f70:
    // 0x2f2f70: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f2f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2F74u;
    {
        const bool branch_taken_0x2f2f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F74u;
            // 0x2f2f78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f74) {
            ctx->pc = 0x2F2F88u;
            goto label_2f2f88;
        }
    }
    ctx->pc = 0x2F2F7Cu;
label_2f2f7c:
    // 0x2f2f7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2F7Cu;
    {
        const bool branch_taken_0x2f2f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f7c) {
            ctx->pc = 0x2F2F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F7Cu;
            // 0x2f2f80: 0xae0300f4  sw          $v1, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F84u;
            goto label_2f2f84;
        }
    }
    ctx->pc = 0x2F2F84u;
label_2f2f84:
    // 0x2f2f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f88:
    // 0x2f2f88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f2f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2f8c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f2f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2f90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f2f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2f94: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f2f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2f98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f2f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F9Cu;
            // 0x2f2fa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2FA4u;
    // 0x2f2fa4: 0x0  nop
    ctx->pc = 0x2f2fa4u;
    // NOP
    ctx->pc = 0x2f2fa8u;
}
