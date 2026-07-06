#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED9C0
// Address: 0x2ed9c0 - 0x2eda40
void sub_002ED9C0_0x2ed9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED9C0_0x2ed9c0");
#endif

    switch (ctx->pc) {
        case 0x2ed9e4u: goto label_2ed9e4;
        case 0x2ed9f8u: goto label_2ed9f8;
        case 0x2eda00u: goto label_2eda00;
        case 0x2eda0cu: goto label_2eda0c;
        case 0x2eda20u: goto label_2eda20;
        default: break;
    }

    ctx->pc = 0x2ed9c0u;

    // 0x2ed9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed9c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed9c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed9cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed9d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ed9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9d4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED9D4u;
    {
        const bool branch_taken_0x2ed9d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9D4u;
            // 0x2ed9d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9d4) {
            ctx->pc = 0x2ED9F8u;
            goto label_2ed9f8;
        }
    }
    ctx->pc = 0x2ED9DCu;
    // 0x2ed9dc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed9dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed9e0: 0x8de2ed5c  lw          $v0, -0x12A4($t7)
    ctx->pc = 0x2ed9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962524)));
label_2ed9e4:
    // 0x2ed9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed9e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed9ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9F0u;
            // 0x2ed9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED9F8u;
label_2ed9f8:
    // 0x2ed9f8: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ED9F8u;
    SET_GPR_U32(ctx, 31, 0x2EDA00u);
    ctx->pc = 0x2ED9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9F8u;
            // 0x2ed9fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA00u; }
        if (ctx->pc != 0x2EDA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA00u; }
        if (ctx->pc != 0x2EDA00u) { return; }
    }
    ctx->pc = 0x2EDA00u;
label_2eda00:
    // 0x2eda00: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EDA00u;
    {
        const bool branch_taken_0x2eda00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eda00) {
            ctx->pc = 0x2EDA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA00u;
            // 0x2eda04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed9e4;
        }
    }
    ctx->pc = 0x2EDA08u;
    // 0x2eda08: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x2eda08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2eda0c:
    // 0x2eda0c: 0x260e0001  addiu       $t6, $s0, 0x1
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2eda10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eda10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda14: 0x1f17826  xor         $t7, $t7, $s1
    ctx->pc = 0x2eda14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 17));
    // 0x2eda18: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EDA18u;
    SET_GPR_U32(ctx, 31, 0x2EDA20u);
    ctx->pc = 0x2EDA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA18u;
            // 0x2eda1c: 0x1cf800a  movz        $s0, $t6, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (runtime->hasFunction(0x2ED908u)) {
        auto targetFn = runtime->lookupFunction(0x2ED908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA20u; }
        if (ctx->pc != 0x2EDA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED908_0x2ed908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA20u; }
        if (ctx->pc != 0x2EDA20u) { return; }
    }
    ctx->pc = 0x2EDA20u;
label_2eda20:
    // 0x2eda20: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EDA20u;
    {
        const bool branch_taken_0x2eda20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eda20) {
            ctx->pc = 0x2EDA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA20u;
            // 0x2eda24: 0x8c4f0010  lw          $t7, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eda0c;
        }
    }
    ctx->pc = 0x2EDA28u;
    // 0x2eda28: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EDA28u;
    {
        const bool branch_taken_0x2eda28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA28u;
            // 0x2eda2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda28) {
            ctx->pc = 0x2ED9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed9e4;
        }
    }
    ctx->pc = 0x2EDA30u;
    // 0x2eda30: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eda30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eda34: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA34u;
            // 0x2eda38: 0x95e2ecc4  lhu         $v0, -0x133C($t7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4294962372)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EDA3Cu;
    // 0x2eda3c: 0x0  nop
    ctx->pc = 0x2eda3cu;
    // NOP
    ctx->pc = 0x2eda40u;
}
