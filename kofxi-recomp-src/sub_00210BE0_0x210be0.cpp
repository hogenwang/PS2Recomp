#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210BE0
// Address: 0x210be0 - 0x210d58
void sub_00210BE0_0x210be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210BE0_0x210be0");
#endif

    switch (ctx->pc) {
        case 0x210c08u: goto label_210c08;
        case 0x210c10u: goto label_210c10;
        case 0x210c1cu: goto label_210c1c;
        case 0x210ce0u: goto label_210ce0;
        case 0x210d10u: goto label_210d10;
        case 0x210d20u: goto label_210d20;
        default: break;
    }

    ctx->pc = 0x210be0u;

    // 0x210be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210be8: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x210BE8u;
    {
        const bool branch_taken_0x210be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210BE8u;
            // 0x210bec: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210be8) {
            ctx->pc = 0x210C1Cu;
            goto label_210c1c;
        }
    }
    ctx->pc = 0x210BF0u;
    // 0x210bf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210bf4: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210bf8: 0x24840188  addiu       $a0, $a0, 0x188
    ctx->pc = 0x210bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x210bfc: 0x252901a0  addiu       $t1, $t1, 0x1A0
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 416));
    // 0x210c00: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x210c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210c08:
    // 0x210c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c0c: 0x2408d8ef  addiu       $t0, $zero, -0x2711
    ctx->pc = 0x210c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_210c10:
    // 0x210c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210c14: 0x8084408  j           func_211020
    ctx->pc = 0x210C14u;
    ctx->pc = 0x210C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210C14u;
            // 0x210c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    {
        auto targetFn = runtime->lookupFunction(0x211020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x210C1Cu;
label_210c1c:
    // 0x210c1c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x210C1Cu;
    {
        const bool branch_taken_0x210c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C1Cu;
            // 0x210c20: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c1c) {
            ctx->pc = 0x210C40u;
            goto label_210c40;
        }
    }
    ctx->pc = 0x210C24u;
    // 0x210c24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210c28: 0x24840188  addiu       $a0, $a0, 0x188
    ctx->pc = 0x210c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x210c2c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x210c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c30: 0x252901b0  addiu       $t1, $t1, 0x1B0
    ctx->pc = 0x210c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 432));
    // 0x210c34: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x210C34u;
    {
        const bool branch_taken_0x210c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C34u;
            // 0x210c38: 0x240503fd  addiu       $a1, $zero, 0x3FD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c34) {
            ctx->pc = 0x210C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210c08;
        }
    }
    ctx->pc = 0x210C3Cu;
    // 0x210c3c: 0x0  nop
    ctx->pc = 0x210c3cu;
    // NOP
label_210c40:
    // 0x210c40: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x210C40u;
    {
        const bool branch_taken_0x210c40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C40u;
            // 0x210c44: 0x2cef0200  sltiu       $t7, $a3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c40) {
            ctx->pc = 0x210C68u;
            goto label_210c68;
        }
    }
    ctx->pc = 0x210C48u;
    // 0x210c48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210c4c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210c50: 0x24840188  addiu       $a0, $a0, 0x188
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x210c54: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x210c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c58: 0x252901c0  addiu       $t1, $t1, 0x1C0
    ctx->pc = 0x210c58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 448));
    // 0x210c5c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x210C5Cu;
    {
        const bool branch_taken_0x210c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C5Cu;
            // 0x210c60: 0x240503fe  addiu       $a1, $zero, 0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c5c) {
            ctx->pc = 0x210C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210c08;
        }
    }
    ctx->pc = 0x210C64u;
    // 0x210c64: 0x0  nop
    ctx->pc = 0x210c64u;
    // NOP
label_210c68:
    // 0x210c68: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x210C68u;
    {
        const bool branch_taken_0x210c68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C68u;
            // 0x210c6c: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c68) {
            ctx->pc = 0x210C88u;
            goto label_210c88;
        }
    }
    ctx->pc = 0x210C70u;
    // 0x210c70: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210c74: 0x24840188  addiu       $a0, $a0, 0x188
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x210c78: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x210c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c7c: 0x252901d0  addiu       $t1, $t1, 0x1D0
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 464));
    // 0x210c80: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x210C80u;
    {
        const bool branch_taken_0x210c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C80u;
            // 0x210c84: 0x240503ff  addiu       $a1, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c80) {
            ctx->pc = 0x210C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210c08;
        }
    }
    ctx->pc = 0x210C88u;
label_210c88:
    // 0x210c88: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x210c88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x210c8c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210c90: 0x11cf0009  beq         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x210C90u;
    {
        const bool branch_taken_0x210c90 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x210C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C90u;
            // 0x210c94: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c90) {
            ctx->pc = 0x210CB8u;
            goto label_210cb8;
        }
    }
    ctx->pc = 0x210C98u;
    // 0x210c98: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210c98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210c9c: 0x24840188  addiu       $a0, $a0, 0x188
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x210ca0: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x210ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ca4: 0x2529fc70  addiu       $t1, $t1, -0x390
    ctx->pc = 0x210ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966384));
    // 0x210ca8: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x210ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x210cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cb0: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x210CB0u;
    {
        const bool branch_taken_0x210cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210CB0u;
            // 0x210cb4: 0x2408d8ee  addiu       $t0, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cb0) {
            ctx->pc = 0x210C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210c10;
        }
    }
    ctx->pc = 0x210CB8u;
label_210cb8:
    // 0x210cb8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x210cb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x210cbc: 0x25eca940  addiu       $t4, $t7, -0x56C0
    ctx->pc = 0x210cbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945088));
    // 0x210cc0: 0x8deea940  lw          $t6, -0x56C0($t7)
    ctx->pc = 0x210cc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945088)));
    // 0x210cc4: 0x258d0008  addiu       $t5, $t4, 0x8
    ctx->pc = 0x210cc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x210cc8: 0x258b0208  addiu       $t3, $t4, 0x208
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 520));
    // 0x210ccc: 0xcd7825  or          $t7, $a2, $t5
    ctx->pc = 0x210cccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x210cd0: 0x31ef0007  andi        $t7, $t7, 0x7
    ctx->pc = 0x210cd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)7);
    // 0x210cd4: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x210CD4u;
    {
        const bool branch_taken_0x210cd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210CD4u;
            // 0x210cd8: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cd4) {
            ctx->pc = 0x210D20u;
            goto label_210d20;
        }
    }
    ctx->pc = 0x210CDCu;
    // 0x210cdc: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x210cdcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_210ce0:
    // 0x210ce0: 0x69aa0007  ldl         $t2, 0x7($t5)
    ctx->pc = 0x210ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x210ce4: 0x6daa0000  ldr         $t2, 0x0($t5)
    ctx->pc = 0x210ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x210ce8: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x210ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x210cec: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x210cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x210cf0: 0xb0ca0007  sdl         $t2, 0x7($a2)
    ctx->pc = 0x210cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210cf4: 0xb4ca0000  sdr         $t2, 0x0($a2)
    ctx->pc = 0x210cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210cf8: 0xb0cb000f  sdl         $t3, 0xF($a2)
    ctx->pc = 0x210cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210cfc: 0xb4cb0008  sdr         $t3, 0x8($a2)
    ctx->pc = 0x210cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x210d00: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x210d00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x210d04: 0x15affff6  bne         $t5, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x210D04u;
    {
        const bool branch_taken_0x210d04 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D04u;
            // 0x210d08: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d04) {
            ctx->pc = 0x210CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210ce0;
        }
    }
    ctx->pc = 0x210D0Cu;
    // 0x210d0c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x210d0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_210d10:
    // 0x210d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210d14: 0x8de2a944  lw          $v0, -0x56BC($t7)
    ctx->pc = 0x210d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945092)));
    // 0x210d18: 0x3e00008  jr          $ra
    ctx->pc = 0x210D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D18u;
            // 0x210d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210D20u;
label_210d20:
    // 0x210d20: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x210d20u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x210d24: 0xddaa0008  ld          $t2, 0x8($t5)
    ctx->pc = 0x210d24u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x210d28: 0xddac0010  ld          $t4, 0x10($t5)
    ctx->pc = 0x210d28u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x210d2c: 0xddae0018  ld          $t6, 0x18($t5)
    ctx->pc = 0x210d2cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x210d30: 0xfccf0000  sd          $t7, 0x0($a2)
    ctx->pc = 0x210d30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 15));
    // 0x210d34: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x210d34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x210d38: 0xfccc0010  sd          $t4, 0x10($a2)
    ctx->pc = 0x210d38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 12));
    // 0x210d3c: 0xfcce0018  sd          $t6, 0x18($a2)
    ctx->pc = 0x210d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 14));
    // 0x210d40: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x210d40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x210d44: 0x15abfff6  bne         $t5, $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x210D44u;
    {
        const bool branch_taken_0x210d44 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 11));
        ctx->pc = 0x210D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D44u;
            // 0x210d48: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d44) {
            ctx->pc = 0x210D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210d20;
        }
    }
    ctx->pc = 0x210D4Cu;
    // 0x210d4c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x210D4Cu;
    {
        const bool branch_taken_0x210d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D4Cu;
            // 0x210d50: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d4c) {
            ctx->pc = 0x210D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210d10;
        }
    }
    ctx->pc = 0x210D54u;
    // 0x210d54: 0x0  nop
    ctx->pc = 0x210d54u;
    // NOP
    ctx->pc = 0x210d58u;
}
