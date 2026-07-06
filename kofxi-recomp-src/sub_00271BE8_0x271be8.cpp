#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271BE8
// Address: 0x271be8 - 0x271cc8
void sub_00271BE8_0x271be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271BE8_0x271be8");
#endif

    switch (ctx->pc) {
        case 0x271c44u: goto label_271c44;
        case 0x271c54u: goto label_271c54;
        case 0x271c58u: goto label_271c58;
        default: break;
    }

    ctx->pc = 0x271be8u;

    // 0x271be8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x271bec: 0x30cf0007  andi        $t7, $a2, 0x7
    ctx->pc = 0x271becu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x271bf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x271bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x271bf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x271bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271bf8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x271bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x271bfc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x271bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x271c00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x271c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x271c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x271c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x271c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c0c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x271c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x271c10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x271c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x271c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x271c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x271c18: 0x15e00022  bnez        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x271C18u;
    {
        const bool branch_taken_0x271c18 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C18u;
            // 0x271c1c: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c18) {
            ctx->pc = 0x271CA4u;
            goto label_271ca4;
        }
    }
    ctx->pc = 0x271C20u;
    // 0x271c20: 0x690c0007  ldl         $t4, 0x7($t0)
    ctx->pc = 0x271c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x271c24: 0x6d0c0000  ldr         $t4, 0x0($t0)
    ctx->pc = 0x271c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x271c28: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x271c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271c2c: 0x6a778  dsll        $s4, $a2, 29
    ctx->pc = 0x271c2cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 29);
    // 0x271c30: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x271c30u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x271c34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x271c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c38: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x271C38u;
    {
        const bool branch_taken_0x271c38 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x271C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C38u;
            // 0x271c3c: 0xb7ac0000  sdr         $t4, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c38) {
            ctx->pc = 0x271CA0u;
            goto label_271ca0;
        }
    }
    ctx->pc = 0x271C40u;
    // 0x271c40: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_271c44:
    // 0x271c44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x271c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c4c: 0xc09c626  jal         func_271898
    ctx->pc = 0x271C4Cu;
    SET_GPR_U32(ctx, 31, 0x271C54u);
    ctx->pc = 0x271C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271C4Cu;
            // 0x271c50: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271898u;
    if (runtime->hasFunction(0x271898u)) {
        auto targetFn = runtime->lookupFunction(0x271898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C54u; }
        if (ctx->pc != 0x271C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271898_0x271898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C54u; }
        if (ctx->pc != 0x271C54u) { return; }
    }
    ctx->pc = 0x271C54u;
label_271c54:
    // 0x271c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271c58:
    // 0x271c58: 0x3a84821  addu        $t1, $sp, $t0
    ctx->pc = 0x271c58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x271c5c: 0x2487821  addu        $t7, $s2, $t0
    ctx->pc = 0x271c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x271c60: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x271c60u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x271c64: 0x2086821  addu        $t5, $s0, $t0
    ctx->pc = 0x271c64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x271c68: 0x912c0000  lbu         $t4, 0x0($t1)
    ctx->pc = 0x271c68u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x271c6c: 0x2285821  addu        $t3, $s1, $t0
    ctx->pc = 0x271c6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x271c70: 0x91aa0000  lbu         $t2, 0x0($t5)
    ctx->pc = 0x271c70u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x271c74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x271c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x271c78: 0x1cc7026  xor         $t6, $t6, $t4
    ctx->pc = 0x271c78u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 12));
    // 0x271c7c: 0x290f0008  slti        $t7, $t0, 0x8
    ctx->pc = 0x271c7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x271c80: 0xa16e0000  sb          $t6, 0x0($t3)
    ctx->pc = 0x271c80u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x271c84: 0x15e0fff4  bnez        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x271C84u;
    {
        const bool branch_taken_0x271c84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C84u;
            // 0x271c88: 0xa12a0000  sb          $t2, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c84) {
            ctx->pc = 0x271C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271c58;
        }
    }
    ctx->pc = 0x271C8Cu;
    // 0x271c8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x271c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x271c90: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x271c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x271c94: 0x274782a  slt         $t7, $s3, $s4
    ctx->pc = 0x271c94u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x271c98: 0x15e0ffea  bnez        $t7, . + 4 + (-0x16 << 2)
    ctx->pc = 0x271C98u;
    {
        const bool branch_taken_0x271c98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C98u;
            // 0x271c9c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c98) {
            ctx->pc = 0x271C44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271c44;
        }
    }
    ctx->pc = 0x271CA0u;
label_271ca0:
    // 0x271ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271ca4:
    // 0x271ca4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x271ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271ca8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x271ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x271cac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x271cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271cb0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x271cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271cb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x271cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271cb8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x271cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x271cbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x271cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x271CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CC0u;
            // 0x271cc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271CC8u;
    ctx->pc = 0x271cc8u;
}
