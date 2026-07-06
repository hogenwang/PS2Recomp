#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5B48
// Address: 0x1d5b48 - 0x1d5be8
void sub_001D5B48_0x1d5b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5B48_0x1d5b48");
#endif

    switch (ctx->pc) {
        case 0x1d5b88u: goto label_1d5b88;
        case 0x1d5bc4u: goto label_1d5bc4;
        default: break;
    }

    ctx->pc = 0x1d5b48u;

    // 0x1d5b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5b4c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d5b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b58: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1d5b58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d5b5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5b60: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1d5b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5b68: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1d5b6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1d5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d5b70: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x1d5b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d5b74: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D5B74u;
    {
        const bool branch_taken_0x1d5b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B74u;
            // 0x1d5b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b74) {
            ctx->pc = 0x1D5BA4u;
            goto label_1d5ba4;
        }
    }
    ctx->pc = 0x1D5B7Cu;
    // 0x1d5b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b80: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1d5b80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b84: 0x0  nop
    ctx->pc = 0x1d5b84u;
    // NOP
label_1d5b88:
    // 0x1d5b88: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1d5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1d5b8c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1d5b90: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x1d5b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d5b94: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5b98: 0x0  nop
    ctx->pc = 0x1d5b98u;
    // NOP
    // 0x1d5b9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5B9Cu;
    {
        const bool branch_taken_0x1d5b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B9Cu;
            // 0x1d5ba0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b9c) {
            ctx->pc = 0x1D5B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5b88;
        }
    }
    ctx->pc = 0x1D5BA4u;
label_1d5ba4:
    // 0x1d5ba4: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x1d5ba8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1d5bac: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1d5bacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5bb0: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1d5bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bb8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1d5bbc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1D5BBCu;
    SET_GPR_U32(ctx, 31, 0x1D5BC4u);
    ctx->pc = 0x1D5BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BBCu;
            // 0x1d5bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BC4u; }
        if (ctx->pc != 0x1D5BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BC4u; }
        if (ctx->pc != 0x1D5BC4u) { return; }
    }
    ctx->pc = 0x1D5BC4u;
label_1d5bc4:
    // 0x1d5bc4: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1d5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1d5bc8: 0x24638020  addiu       $v1, $v1, -0x7FE0
    ctx->pc = 0x1d5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934560));
    // 0x1d5bcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5bd0: 0xac710044  sw          $s1, 0x44($v1)
    ctx->pc = 0x1d5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 17));
    // 0x1d5bd4: 0xac700040  sw          $s0, 0x40($v1)
    ctx->pc = 0x1d5bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 16));
    // 0x1d5bd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BE0u;
            // 0x1d5be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5BE8u;
    ctx->pc = 0x1d5be8u;
}
