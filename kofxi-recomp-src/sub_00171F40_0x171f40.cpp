#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171F40
// Address: 0x171f40 - 0x171ff0
void sub_00171F40_0x171f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171F40_0x171f40");
#endif

    switch (ctx->pc) {
        case 0x171f54u: goto label_171f54;
        case 0x171f80u: goto label_171f80;
        default: break;
    }

    ctx->pc = 0x171f40u;

    // 0x171f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171f4c: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171F4Cu;
    SET_GPR_U32(ctx, 31, 0x171F54u);
    ctx->pc = 0x171F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F4Cu;
            // 0x171f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (runtime->hasFunction(0x1717C0u)) {
        auto targetFn = runtime->lookupFunction(0x1717C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F54u; }
        if (ctx->pc != 0x171F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717C0_0x1717c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F54u; }
        if (ctx->pc != 0x171F54u) { return; }
    }
    ctx->pc = 0x171F54u;
label_171f54:
    // 0x171f54: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x171f58: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171f5c: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x171f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x171f60: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x171f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x171f64: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x171f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x171f68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171f70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x171f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171f74: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171f78: 0x94a4001a  lhu         $a0, 0x1A($a1)
    ctx->pc = 0x171f78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x171f7c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x171f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_171f80:
    // 0x171f80: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x171f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171f84: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x171f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x171f88: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x171F88u;
    {
        const bool branch_taken_0x171f88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x171F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F88u;
            // 0x171f8c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f88) {
            ctx->pc = 0x171F9Cu;
            goto label_171f9c;
        }
    }
    ctx->pc = 0x171F90u;
    // 0x171f90: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171F90u;
    {
        const bool branch_taken_0x171f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f90) {
            ctx->pc = 0x171F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171F90u;
            // 0x171f94: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171FA0u;
            goto label_171fa0;
        }
    }
    ctx->pc = 0x171F98u;
    // 0x171f98: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_171f9c:
    // 0x171f9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x171f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_171fa0:
    // 0x171fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171fa4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x171fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x171fa8: 0x9043001e  lbu         $v1, 0x1E($v0)
    ctx->pc = 0x171fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x171fac: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171fb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x171fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x171fb4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171FB4u;
    {
        const bool branch_taken_0x171fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171fb4) {
            ctx->pc = 0x171FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171FB4u;
            // 0x171fb8: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171FC4u;
            goto label_171fc4;
        }
    }
    ctx->pc = 0x171FBCu;
    // 0x171fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171FBCu;
    {
        const bool branch_taken_0x171fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171FBCu;
            // 0x171fc0: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fbc) {
            ctx->pc = 0x171FD8u;
            goto label_171fd8;
        }
    }
    ctx->pc = 0x171FC4u;
label_171fc4:
    // 0x171fc4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x171fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171fc8: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x171fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x171fcc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x171FCCu;
    {
        const bool branch_taken_0x171fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171fcc) {
            ctx->pc = 0x171FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171FCCu;
            // 0x171fd0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171f80;
        }
    }
    ctx->pc = 0x171FD4u;
    // 0x171fd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171fd8:
    // 0x171fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x171FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171FE0u;
            // 0x171fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171FE8u;
    // 0x171fe8: 0x0  nop
    ctx->pc = 0x171fe8u;
    // NOP
    // 0x171fec: 0x0  nop
    ctx->pc = 0x171fecu;
    // NOP
    ctx->pc = 0x171ff0u;
}
